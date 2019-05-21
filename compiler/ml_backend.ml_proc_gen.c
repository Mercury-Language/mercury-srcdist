/*
** Automatically generated from `ml_proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_VA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_proc_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_import_0;

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__773__2_2_p_0(
  MR_Word ml_backend__ml_proc_gen__GC_Method_10,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_14);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__773__1_2_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_15,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_21);

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__644__1_8_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_12,
  MR_Word ml_backend__ml_proc_gen__Context_24,
  MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_28,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__1_44,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__2_45,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__3_46,
  MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__4_47,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__5_48);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__327__1_2_f_0(
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
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_0_57,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_58);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(
  MR_Word ml_backend__ml_proc_gen__ProcLabel_7,
  MR_Word ml_backend__ml_proc_gen__Id_8,
  MR_Word ml_backend__ml_proc_gen__Context_9,
  MR_Word ml_backend__ml_proc_gen__Constness_10,
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
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_116_121_112_101_95_114_101_113_117_105_114_101_100_95_105_109_112_111_114_116_115_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

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
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_4(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0(
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_16,
  MR_Word ml_backend__ml_proc_gen__Target_9,
  MR_Word * ml_backend__ml_proc_gen__TypeDefns_10,
  MR_Word * ml_backend__ml_proc_gen__TableStructDefns_11,
  MR_Word * ml_backend__ml_proc_gen__PredDefns_12,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_17);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_9_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_1,
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_2,
  MR_Word ml_backend__ml_proc_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_5,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_7,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_procs_9_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_1,
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_2,
  MR_Word ml_backend__ml_proc_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_5,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_7,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_10,
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_11,
  MR_Word ml_backend__ml_proc_gen__PredProcId_12,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FuncDefns_0_62,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FuncDefns_63,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_64,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_65,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67);

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_4,
  MR_Word ml_backend__ml_proc_gen__Attrs_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_12,
  MR_Word ml_backend__ml_proc_gen__HeadVars_13,
  MR_Word ml_backend__ml_proc_gen__ArgTypes_14,
  MR_Word ml_backend__ml_proc_gen__TopFunctorModes_15,
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_16,
  MR_Word ml_backend__ml_proc_gen__Goal_17,
  MR_Word * ml_backend__ml_proc_gen__LocalVarDefns_18,
  MR_Word * ml_backend__ml_proc_gen__FuncDefns_19,
  MR_Word * ml_backend__ml_proc_gen__Statements_20,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);

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


static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_2[5][3];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_3[7][6];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[1][10];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[2][11];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[3][5];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[4][4];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_8[1][7];

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_9[3][1];




static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_1[14][2] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[2])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 13 */
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
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[2])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen____vpti_pred_1__plain_libs__globals__type_ctor_info_gc_method_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_proc_gen_scalar_common_7[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_1)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[6])),
    ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[2])))
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
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0
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
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__773__2_2_p_0(
  MR_Word ml_backend__ml_proc_gen__GC_Method_10,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_14)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;

    ml_backend__ml_proc_gen__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_gc_method_0, ml_backend__ml_proc_gen__HeadVar__2_14, ((MR_Box) (ml_backend__ml_proc_gen__GC_Method_10)));
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__773__1_2_p_0(
  MR_Word ml_backend__ml_proc_gen__HeadVar__1_15,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_21)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__HeadVar__1_15 == ml_backend__ml_proc_gen__HeadVar__2_21);

    return ml_backend__ml_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__644__1_8_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_12,
  MR_Word ml_backend__ml_proc_gen__Context_24,
  MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_28,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__1_44,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__2_45,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__3_46,
  MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__4_47,
  MR_Word * ml_backend__ml_proc_gen__LambdaHeadVar__5_48)
{
  {
    MR_Word ml_backend__ml_proc_gen__SuccStatements_36;

    ml_backend__ml_code_util__ml_gen_success_5_p_0(ml_backend__ml_proc_gen__CodeModel_12, ml_backend__ml_proc_gen__Context_24, &ml_backend__ml_proc_gen__SuccStatements_36, ml_backend__ml_proc_gen__LambdaHeadVar__4_47, ml_backend__ml_proc_gen__LambdaHeadVar__5_48);
    *ml_backend__ml_proc_gen__LambdaHeadVar__1_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_proc_gen__LambdaHeadVar__2_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *ml_backend__ml_proc_gen__LambdaHeadVar__3_46 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__ConvOutputStatements_28, ml_backend__ml_proc_gen__SuccStatements_36);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__327__1_2_f_0(
  MR_Word ml_backend__ml_proc_gen__PredId_10,
  MR_Integer ml_backend__ml_proc_gen__LambdaHeadVar__1_25)
{
  {
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
    MR_Word ml_backend__ml_proc_gen__LambdaHeadVar__2_16;
    MR_Word ml_backend__ml_proc_gen__Var_18;

    ml_backend__ml_proc_gen__Var_18 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__LambdaHeadVar__1_15);
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
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__Type_5 = (MR_Word) ml_backend__ml_proc_gen__HeadVar__2_2;
    MR_Word ml_backend__ml_proc_gen__Var_6;

    ml_backend__ml_proc_gen__Var_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__Type_5);
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
    MR_Word ml_backend__ml_proc_gen__Const_74;
    MR_Word ml_backend__ml_proc_gen__Var_77;
    MR_String ml_backend__ml_proc_gen___VarName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StepDesc_5, (MR_Integer) 0)));

    ml_backend__ml_proc_gen__KindStr_9 = hlds__hlds_pred__table_step_stats_kind_1_f_0(ml_backend__ml_proc_gen__Step_8);
    {
      ml_backend__ml_proc_gen__Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_10, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StepId_4));
    }
    ml_backend__ml_proc_gen__Var_12 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_15 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    {
      ml_backend__ml_proc_gen__Const_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_74, 1) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[6]));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_74, 2) = ((MR_Box) (ml_backend__ml_proc_gen__KindStr_9));
    }
    {
      ml_backend__ml_proc_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_77, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Const_74));
    }
    {
      ml_backend__ml_proc_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_18, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_77));
    }
    ml_backend__ml_proc_gen__Var_20 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_23 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_26 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_29 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_38 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_41 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_44 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_47 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_50 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_53 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_56 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_59 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_62 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_65 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_68 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
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
    MR_Word ml_backend__ml_proc_gen__Const_23;
    MR_Word ml_backend__ml_proc_gen__Var_26;

    backend_libs__rtti__table_trie_step_to_c_3_p_0(ml_backend__ml_proc_gen__Step_9, &ml_backend__ml_proc_gen__StepStr_10, &ml_backend__ml_proc_gen__MaybeEnumRange_11);
    ml_backend__ml_proc_gen__VarNameInit_12 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__ml_proc_gen__VarName_8);
    {
      ml_backend__ml_proc_gen__Const_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_23, 1) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[6]));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_23, 2) = ((MR_Box) (ml_backend__ml_proc_gen__StepStr_10));
    }
    {
      ml_backend__ml_proc_gen__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Const_23));
    }
    {
      ml_backend__ml_proc_gen__StepInit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__StepInit_13, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_26));
    }
    if ((ml_backend__ml_proc_gen__MaybeEnumRange_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_proc_gen__MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
    }
    else
    {
      MR_Integer ml_backend__ml_proc_gen__EnumRange_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeEnumRange_11, (MR_Integer) 0)));

      ml_backend__ml_proc_gen__MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__EnumRange_15);
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

    ml_backend__ml_proc_gen__conv1_HeadVar__3_3 = ml_backend__ml_proc_gen__init_step_desc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
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

    ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__init_step_desc_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(
  MR_Word ml_backend__ml_proc_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_0_57,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_58)
{
  {
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_160_160;
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
    MR_Word ml_backend__ml_proc_gen__InputStepsRefInit_29;
    MR_Word ml_backend__ml_proc_gen__InputStepsDefns_30;
    MR_Word ml_backend__ml_proc_gen__CallStatsInit_35;
    MR_Word ml_backend__ml_proc_gen__CallStatsDefns_36;
    MR_Word ml_backend__ml_proc_gen__PrevCallStatsInit_37;
    MR_Word ml_backend__ml_proc_gen__PrevCallStatsDefns_38;
    MR_Word ml_backend__ml_proc_gen__CallDefns_39;
    MR_Integer ml_backend__ml_proc_gen__HasAnswerTable_40;
    MR_Word ml_backend__ml_proc_gen__OutputStepsRefInit_41;
    MR_Word ml_backend__ml_proc_gen__OutputStepsDefns_42;
    MR_Word ml_backend__ml_proc_gen__AnswerStatsInit_46;
    MR_Word ml_backend__ml_proc_gen__AnswerStatsDefns_47;
    MR_Word ml_backend__ml_proc_gen__PrevAnswerStatsInit_48;
    MR_Word ml_backend__ml_proc_gen__PrevAnswerStatsDefns_49;
    MR_Word ml_backend__ml_proc_gen__AnswerDefns_50;
    MR_Word ml_backend__ml_proc_gen__PTIsRefInit_51;
    MR_Word ml_backend__ml_proc_gen__TypeParamLocnsRefInit_52;
    MR_Word ml_backend__ml_proc_gen__RootNodeInit_53;
    MR_Word ml_backend__ml_proc_gen__TipsRefInit_54;
    MR_Word ml_backend__ml_proc_gen__ProcTableInfoInit_55;
    MR_Word ml_backend__ml_proc_gen__ProcTableInfoDefn_56;
    MR_Word ml_backend__ml_proc_gen__Var_78;
    MR_Word ml_backend__ml_proc_gen__Var_96;
    MR_Word ml_backend__ml_proc_gen__Var_103;
    MR_Word ml_backend__ml_proc_gen__Var_104;
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
    MR_Word ml_backend__ml_proc_gen__Var_123;
    MR_Word ml_backend__ml_proc_gen__Var_124;
    MR_Word ml_backend__ml_proc_gen__Var_125;
    MR_Word ml_backend__ml_proc_gen__Var_127;
    MR_Word ml_backend__ml_proc_gen__Var_128;
    MR_Word ml_backend__ml_proc_gen__Var_129;
    MR_Word ml_backend__ml_proc_gen__Var_130;
    MR_Word ml_backend__ml_proc_gen__Var_131;
    MR_Word ml_backend__ml_proc_gen__Var_132;
    MR_Word ml_backend__ml_proc_gen__Var_134;
    MR_Word ml_backend__ml_proc_gen__Var_135;
    MR_Word ml_backend__ml_proc_gen__Var_136;
    MR_Word ml_backend__ml_proc_gen__Var_137;
    MR_Word ml_backend__ml_proc_gen__Var_140;
    MR_Word ml_backend__ml_proc_gen__Var_141;
    MR_Word ml_backend__ml_proc_gen__Var_143;
    MR_Word ml_backend__ml_proc_gen__Var_144;
    MR_Word ml_backend__ml_proc_gen__Var_145;
    MR_Word ml_backend__ml_proc_gen__Var_147;
    MR_Word ml_backend__ml_proc_gen__Var_148;
    MR_Word ml_backend__ml_proc_gen__Var_154;
    MR_Word ml_backend__ml_proc_gen__Var_155;
    MR_Word ml_backend__ml_proc_gen___PredId_11;
    MR_Word ml_backend__ml_proc_gen___Attributes_14;
    MR_Word ml_backend__ml_proc_gen___TVarSet_16;
    MR_Word ml_backend__ml_proc_gen___ArgInfos_22;
    MR_Word ml_backend__ml_proc_gen___PredModule_25;

    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__ModuleName_9);
    ml_backend__ml_proc_gen__MLDS_ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_proc_gen__ModuleName_9);
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
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__RttiProcLabel_15, &ml_backend__ml_proc_gen__PredLabel_24, &ml_backend__ml_proc_gen___PredModule_25);
    {
      ml_backend__ml_proc_gen__MLDS_ProcLabel_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ProcLabel_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredLabel_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ProcLabel_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcId_12));
    }
    ml_backend__ml_proc_gen__TableTypeStr_27 = parse_tree__prog_data_pragma__eval_method_to_table_type_1_f_0(ml_backend__ml_proc_gen__EvalMethod_23);
    if ((ml_backend__ml_proc_gen__InputSteps_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_proc_gen__InputStepsRefInit_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[7]));
      ml_backend__ml_proc_gen__InputStepsDefns_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word ml_backend__ml_proc_gen__InputStepsInit_33;
      MR_Word ml_backend__ml_proc_gen__InputStepsDefn_34;
      MR_Word ml_backend__ml_proc_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[1]);
      MR_Word ml_backend__ml_proc_gen__Var_63;

      ml_backend__ml_proc_gen__InputStepsRefInit_29 = ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Var_61);
      ml_backend__ml_proc_gen__Var_63 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_7[2], ml_backend__ml_proc_gen__InputSteps_20);
      {
        ml_backend__ml_proc_gen__InputStepsInit_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__InputStepsInit_33, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_63));
      }
      ml_backend__ml_proc_gen__InputStepsDefn_34 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Var_61, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, ml_backend__ml_proc_gen__InputStepsInit_33);
      {
        ml_backend__ml_proc_gen__InputStepsDefns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__InputStepsDefns_30, 0) = ((MR_Box) (ml_backend__ml_proc_gen__InputStepsDefn_34));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__InputStepsDefns_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 0, (MR_Integer) 0, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__CallStatsInit_35, &ml_backend__ml_proc_gen__CallStatsDefns_36);
    ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 0, (MR_Integer) 1, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__PrevCallStatsInit_37, &ml_backend__ml_proc_gen__PrevCallStatsDefns_38);
    ml_backend__ml_proc_gen__TypeCtorInfo_160_160 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;
    ml_backend__ml_proc_gen__Var_78 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_160_160, ml_backend__ml_proc_gen__CallStatsDefns_36, ml_backend__ml_proc_gen__PrevCallStatsDefns_38);
    ml_backend__ml_proc_gen__CallDefns_39 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_160_160, ml_backend__ml_proc_gen__InputStepsDefns_30, ml_backend__ml_proc_gen__Var_78);
    if ((ml_backend__ml_proc_gen__MaybeOutputSteps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_proc_gen__HasAnswerTable_40 = (MR_Integer) 0;
      ml_backend__ml_proc_gen__OutputStepsRefInit_41 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[8]));
      ml_backend__ml_proc_gen__OutputStepsDefns_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word ml_backend__ml_proc_gen__OutputSteps_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybeOutputSteps_21, (MR_Integer) 0)));
      MR_Word ml_backend__ml_proc_gen__OutputStepsInit_44;
      MR_Word ml_backend__ml_proc_gen__OutputStepsDefn_45;
      MR_Word ml_backend__ml_proc_gen__Var_79;
      MR_Word ml_backend__ml_proc_gen__Var_81;

      ml_backend__ml_proc_gen__HasAnswerTable_40 = (MR_Integer) 1;
      ml_backend__ml_proc_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[2]);
      ml_backend__ml_proc_gen__OutputStepsRefInit_41 = ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Var_79);
      ml_backend__ml_proc_gen__Var_81 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_7[3], ml_backend__ml_proc_gen__OutputSteps_43);
      {
        ml_backend__ml_proc_gen__OutputStepsInit_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__OutputStepsInit_44, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_81));
      }
      ml_backend__ml_proc_gen__OutputStepsDefn_45 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Var_79, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, ml_backend__ml_proc_gen__OutputStepsInit_44);
      {
        ml_backend__ml_proc_gen__OutputStepsDefns_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__OutputStepsDefns_42, 0) = ((MR_Box) (ml_backend__ml_proc_gen__OutputStepsDefn_45));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__OutputStepsDefns_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, (MR_Integer) 0, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__AnswerStatsInit_46, &ml_backend__ml_proc_gen__AnswerStatsDefns_47);
    ml_backend__ml_proc_gen__init_stats_8_p_0(ml_backend__ml_proc_gen__MLDS_ModuleName_10, ml_backend__ml_proc_gen__MLDS_ProcLabel_26, ml_backend__ml_proc_gen__Context_17, (MR_Integer) 1, (MR_Integer) 1, ml_backend__ml_proc_gen__InputSteps_20, &ml_backend__ml_proc_gen__PrevAnswerStatsInit_48, &ml_backend__ml_proc_gen__PrevAnswerStatsDefns_49);
    ml_backend__ml_proc_gen__Var_96 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_160_160, ml_backend__ml_proc_gen__AnswerStatsDefns_47, ml_backend__ml_proc_gen__PrevAnswerStatsDefns_49);
    ml_backend__ml_proc_gen__AnswerDefns_50 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_160_160, ml_backend__ml_proc_gen__OutputStepsDefns_42, ml_backend__ml_proc_gen__Var_96);
    ml_backend__ml_proc_gen__PTIsRefInit_51 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[9]));
    ml_backend__ml_proc_gen__TypeParamLocnsRefInit_52 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[10]));
    ml_backend__ml_proc_gen__Var_104 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    {
      ml_backend__ml_proc_gen__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_103, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_104));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__RootNodeInit_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__RootNodeInit_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[11])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__RootNodeInit_53, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_103));
    }
    ml_backend__ml_proc_gen__TipsRefInit_54 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[12]));
    ml_backend__ml_proc_gen__Var_112 = ml_backend__ml_util__gen_init_builtin_const_2_f_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[6], ml_backend__ml_proc_gen__TableTypeStr_27);
    ml_backend__ml_proc_gen__Var_114 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__NumInputs_18);
    ml_backend__ml_proc_gen__Var_116 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__NumOutputs_19);
    ml_backend__ml_proc_gen__Var_118 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__ml_proc_gen__HasAnswerTable_40);
    {
      ml_backend__ml_proc_gen__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_125, 0) = ((MR_Box) (ml_backend__ml_proc_gen__OutputStepsRefInit_41));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_124, 0) = ((MR_Box) (ml_backend__ml_proc_gen__InputStepsRefInit_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_124, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_125));
    }
    {
      ml_backend__ml_proc_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_123, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_124));
    }
    {
      ml_backend__ml_proc_gen__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_132, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PrevCallStatsInit_37));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_131, 0) = ((MR_Box) (ml_backend__ml_proc_gen__CallStatsInit_35));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_131, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_132));
    }
    {
      ml_backend__ml_proc_gen__Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_130, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_131));
    }
    {
      ml_backend__ml_proc_gen__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_137, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PrevAnswerStatsInit_48));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_136, 0) = ((MR_Box) (ml_backend__ml_proc_gen__AnswerStatsInit_46));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_136, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_137));
    }
    {
      ml_backend__ml_proc_gen__Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_135, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_136));
    }
    {
      ml_backend__ml_proc_gen__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_134, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_135));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_129, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_130));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_129, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_134));
    }
    {
      ml_backend__ml_proc_gen__Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_128, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_129));
    }
    ml_backend__ml_proc_gen__Var_141 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_145 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_148 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    {
      ml_backend__ml_proc_gen__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_147, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_148));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_proc_gen__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_144, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_145));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_144, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_147));
    }
    {
      ml_backend__ml_proc_gen__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_143, 0) = ((MR_Box) (ml_backend__ml_proc_gen__TipsRefInit_54));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_143, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_144));
    }
    {
      ml_backend__ml_proc_gen__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_140, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_141));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_140, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_143));
    }
    {
      ml_backend__ml_proc_gen__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_127, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_128));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_127, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_140));
    }
    {
      ml_backend__ml_proc_gen__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_122, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_123));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_122, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_127));
    }
    {
      ml_backend__ml_proc_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_121, 0) = ((MR_Box) (ml_backend__ml_proc_gen__RootNodeInit_53));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_121, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_122));
    }
    {
      ml_backend__ml_proc_gen__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_120, 0) = ((MR_Box) (ml_backend__ml_proc_gen__TypeParamLocnsRefInit_52));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_120, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_121));
    }
    {
      ml_backend__ml_proc_gen__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_119, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PTIsRefInit_51));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_119, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_120));
    }
    {
      ml_backend__ml_proc_gen__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_117, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_118));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_117, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_119));
    }
    {
      ml_backend__ml_proc_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_115, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_116));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_115, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_117));
    }
    {
      ml_backend__ml_proc_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_113, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_114));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_113, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_115));
    }
    {
      ml_backend__ml_proc_gen__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_111, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_112));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_111, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_113));
    }
    {
      ml_backend__ml_proc_gen__ProcTableInfoInit_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__ProcTableInfoInit_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_proc_gen_scalar_common_1[13])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_proc_gen__ProcTableInfoInit_55, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_111));
    }
    ml_backend__ml_proc_gen__ProcTableInfoDefn_56 = ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(ml_backend__ml_proc_gen__MLDS_ProcLabel_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__Context_17, (MR_Integer) 0, ml_backend__ml_proc_gen__ProcTableInfoInit_55);
    {
      ml_backend__ml_proc_gen__Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_155, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ProcTableInfoDefn_56));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_155, 1) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_0_57));
    }
    ml_backend__ml_proc_gen__Var_154 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_160_160, ml_backend__ml_proc_gen__AnswerDefns_50, ml_backend__ml_proc_gen__Var_155);
    *ml_backend__ml_proc_gen__STATE_VARIABLE_DataDefns_58 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_160_160, ml_backend__ml_proc_gen__CallDefns_39, ml_backend__ml_proc_gen__Var_154);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__tabling_name_and_init_to_defn_5_f_0(
  MR_Word ml_backend__ml_proc_gen__ProcLabel_7,
  MR_Word ml_backend__ml_proc_gen__Id_8,
  MR_Word ml_backend__ml_proc_gen__Context_9,
  MR_Word ml_backend__ml_proc_gen__Constness_10,
  MR_Word ml_backend__ml_proc_gen__Initializer_11)
{
  {
    MR_Word ml_backend__ml_proc_gen__GlobalVarDefn_12;
    MR_Word ml_backend__ml_proc_gen__MLDS_Type_14;
    MR_Word ml_backend__ml_proc_gen__Flags_15;
    MR_Word ml_backend__ml_proc_gen__Name_16;

    {
      ml_backend__ml_proc_gen__MLDS_Type_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__MLDS_Type_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__MLDS_Type_14, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Id_8));
    }
    {
      ml_backend__ml_proc_gen__Flags_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Flags_15, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Flags_15, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Constness_10));
    }
    {
      ml_backend__ml_proc_gen__Name_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Name_16, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ProcLabel_7));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Name_16, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Id_8));
    }
    {
      ml_backend__ml_proc_gen__GlobalVarDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__GlobalVarDefn_12, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__GlobalVarDefn_12, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Context_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__GlobalVarDefn_12, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Flags_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__GlobalVarDefn_12, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Type_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__GlobalVarDefn_12, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Initializer_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__GlobalVarDefn_12, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return ml_backend__ml_proc_gen__GlobalVarDefn_12;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__gen_init_tabling_name_3_f_0(
  MR_Word ml_backend__ml_proc_gen__ModuleName_5,
  MR_Word ml_backend__ml_proc_gen__ProcLabel_6,
  MR_Word ml_backend__ml_proc_gen__TablingId_7)
{
  {
    MR_Word ml_backend__ml_proc_gen__Rval_8;
    MR_Word ml_backend__ml_proc_gen__QualProcLabel_9;
    MR_Word ml_backend__ml_proc_gen__Const_10;
    MR_Word ml_backend__ml_proc_gen__Var_11;

    {
      ml_backend__ml_proc_gen__QualProcLabel_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__QualProcLabel_9, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__QualProcLabel_9, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcLabel_6));
    }
    {
      ml_backend__ml_proc_gen__Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_10, 1) = ((MR_Box) (ml_backend__ml_proc_gen__QualProcLabel_9));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_10, 2) = ((MR_Box) (ml_backend__ml_proc_gen__TablingId_7));
    }
    {
      ml_backend__ml_proc_gen__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_11, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Const_10));
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

    ml_backend__ml_proc_gen__init_stats_step_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), &ml_backend__ml_proc_gen__conv0_Init_6);
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
      ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__ml_proc_gen__StatsStepsType_20);
    }
    else
    {
      MR_Word ml_backend__ml_proc_gen__StatsStepsInits_24;
      MR_Word ml_backend__ml_proc_gen__StatsStepsArrayInit_25;
      MR_Word ml_backend__ml_proc_gen__StatsStepDefn_26;
      MR_Word ml_backend__ml_proc_gen__Var_27;
      MR_Word ml_backend__ml_proc_gen__Name_52;
      MR_Word ml_backend__ml_proc_gen__QualProcLabel_58;
      MR_Word ml_backend__ml_proc_gen__Const_59;
      MR_Word ml_backend__ml_proc_gen__Var_60;

      {
        ml_backend__ml_proc_gen__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[6]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 1) = ((MR_Box) (ml_backend__ml_proc_gen__init_stats_8_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_27, 3) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
      }
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_proc_gen__Var_27, ml_backend__ml_proc_gen__StepDescs_14, &ml_backend__ml_proc_gen__StatsStepsInits_24);
      {
        ml_backend__ml_proc_gen__StatsStepsArrayInit_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__StatsStepsArrayInit_25, 0) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsInits_24));
      }
      {
        ml_backend__ml_proc_gen__Name_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Name_52, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ProcLabel_10));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Name_52, 1) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
      }
      {
        ml_backend__ml_proc_gen__StatsStepDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Name_52));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Context_11));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__StatsStepDefn_26, 2) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_1[5]));
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
        ml_backend__ml_proc_gen__QualProcLabel_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__QualProcLabel_58, 0) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ModuleName_9));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__QualProcLabel_58, 1) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ProcLabel_10));
      }
      {
        ml_backend__ml_proc_gen__Const_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_59, 1) = ((MR_Box) (ml_backend__ml_proc_gen__QualProcLabel_58));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Const_59, 2) = ((MR_Box) (ml_backend__ml_proc_gen__StatsStepsId_18));
      }
      {
        ml_backend__ml_proc_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__ml_proc_gen__Var_60, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Const_59));
      }
      {
        ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__StatsStepsArrayRefInit_21, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_60));
      }
    }
    ml_backend__ml_proc_gen__Var_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
    ml_backend__ml_proc_gen__Var_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
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

    ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__has_ptr_type_1_p_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
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
    MR_Word ml_backend__ml_proc_gen__Var_18;
    MR_Word ml_backend__ml_proc_gen__Globals_23;
    MR_Word ml_backend__ml_proc_gen__Target_24;
    MR_Word ml_backend__ml_proc_gen__FuncParamsByRef_27;
    MR_Word ml_backend__ml_proc_gen__GlobalsByRef_25;
    MR_Word ml_backend__ml_proc_gen__ModuleInfoByRef_26;
    MR_Word ml_backend__ml_proc_gen__Args_28;
    MR_Word ml_backend__ml_proc_gen__ReturnTypes_29;
    MR_Word ml_backend__ml_proc_gen__Var_33;
    MR_Word ml_backend__ml_proc_gen__Var_34;
    MR_Word ml_backend__ml_proc_gen__Var_35;

    ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9, &ml_backend__ml_proc_gen__ModuleName_12, &ml_backend__ml_proc_gen__PlainName_13);
    ml_backend__ml_proc_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_proc_gen__PlainName_13);
    {
      ml_backend__ml_proc_gen__MLDS_Name_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_Name_14, 1) = ((MR_Box) (ml_backend__ml_proc_gen__Var_18));
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, &ml_backend__ml_proc_gen__Globals_23);
    libs__globals__get_target_2_p_0(ml_backend__ml_proc_gen__Globals_23, &ml_backend__ml_proc_gen__Target_24);
    switch (ml_backend__ml_proc_gen__Target_24) {
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
      ml_backend__ml_proc_gen__Var_33 = (MR_Integer) 267;
      ml_backend__ml_proc_gen__Var_35 = (MR_Integer) 0;
      ml_backend__ml_proc_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_proc_gen_scalar_common_9[0]);
      libs__globals__set_option_4_p_0(ml_backend__ml_proc_gen__Var_33, ml_backend__ml_proc_gen__Var_34, ml_backend__ml_proc_gen__Globals_23, &ml_backend__ml_proc_gen__GlobalsByRef_25);
      hlds__hlds_module__module_info_set_globals_3_p_0(ml_backend__ml_proc_gen__GlobalsByRef_25, ml_backend__ml_proc_gen__ModuleInfo_4, &ml_backend__ml_proc_gen__ModuleInfoByRef_26);
      ml_backend__ml_proc_gen__FuncParamsByRef_27 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_proc_gen__ModuleInfoByRef_26, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9);
      ml_backend__ml_proc_gen__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncParamsByRef_27, (MR_Integer) 0)));
      ml_backend__ml_proc_gen__ReturnTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncParamsByRef_27, (MR_Integer) 1)));
      if ((ml_backend__ml_proc_gen__ReturnTypes_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_26_40 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0;
        MR_Word ml_backend__ml_proc_gen__OutArgs_30;
        MR_Integer ml_backend__ml_proc_gen__Var_37;

        mercury__list__filter_3_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_26_40, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[4], ml_backend__ml_proc_gen__Args_28, &ml_backend__ml_proc_gen__OutArgs_30);
        ml_backend__ml_proc_gen__Var_37 = mercury__list__length_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_26_40, ml_backend__ml_proc_gen__OutArgs_30);
        ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__Var_37 > (MR_Integer) 1);
      }
      else
        ml_backend__ml_proc_gen__succeeded = MR_TRUE;
    }
    if (ml_backend__ml_proc_gen__succeeded)
      ml_backend__ml_proc_gen__FuncParams_15 = ml_backend__ml_proc_gen__FuncParamsByRef_27;
    else
      ml_backend__ml_proc_gen__FuncParams_15 = ml_backend__ml_code_util__ml_gen_proc_params_3_f_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, ml_backend__ml_proc_gen__ProcId_9);
    hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_proc_gen__ModuleInfo_4, ml_backend__ml_proc_gen__PredId_8, &ml_backend__ml_proc_gen__PredInfo_16);
    hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(ml_backend__ml_proc_gen__PredInfo_16, &ml_backend__ml_proc_gen__UnivQTVars_17);
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
    MR_Word ml_backend__ml_proc_gen__Imports_7;

    ml_backend__ml_proc_gen__Imports_7 = ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_116_121_112_101_95_114_101_113_117_105_114_101_100_95_105_109_112_111_114_116_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
    return ml_backend__ml_proc_gen__Imports_7;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_116_121_112_101_95_114_101_113_117_105_114_101_100_95_105_109_112_111_114_116_115_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

    ml_backend__ml_proc_gen__ml_gen_pragma_export_proc_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), &ml_backend__ml_proc_gen__conv0_Defn_6);
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
    MR_Word ml_backend__ml_proc_gen__WantedForeignDeclCodes_16;
    MR_Word ml_backend__ml_proc_gen__WantedForeignBodyCodes_18;
    MR_Word ml_backend__ml_proc_gen__WantedForeignExports_20;
    MR_Word ml_backend__ml_proc_gen__MLDSWantedForeignExports_22;
    MR_Word ml_backend__ml_proc_gen__MLDS_ForeignCode_23;
    MR_Word ml_backend__ml_proc_gen__Var_26;
    MR_Word ml_backend__ml_proc_gen___OtherForeignDeclCodes_17;
    MR_Word ml_backend__ml_proc_gen___OtherForeignBodyCodes_19;
    MR_Word ml_backend__ml_proc_gen___OtherForeignExports_21;

    backend_libs__foreign__filter_decls_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignDeclCodes_10, &ml_backend__ml_proc_gen__WantedForeignDeclCodes_16, &ml_backend__ml_proc_gen___OtherForeignDeclCodes_17);
    backend_libs__foreign__filter_bodys_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignBodyCodes_11, &ml_backend__ml_proc_gen__WantedForeignBodyCodes_18, &ml_backend__ml_proc_gen___OtherForeignBodyCodes_19);
    backend_libs__foreign__filter_exports_4_p_0(ml_backend__ml_proc_gen__Lang_14, ml_backend__ml_proc_gen__ForeignExports_13, &ml_backend__ml_proc_gen__WantedForeignExports_20, &ml_backend__ml_proc_gen___OtherForeignExports_21);
    {
      ml_backend__ml_proc_gen__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_26, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_9));
    }
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0, ml_backend__ml_proc_gen__Var_26, ml_backend__ml_proc_gen__WantedForeignExports_20, &ml_backend__ml_proc_gen__MLDSWantedForeignExports_22);
    {
      ml_backend__ml_proc_gen__MLDS_ForeignCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 0) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignDeclCodes_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 1) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignBodyCodes_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 2) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignImports_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__MLDS_ForeignCode_23, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MLDSWantedForeignExports_22));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0, ((MR_Box) (ml_backend__ml_proc_gen__Lang_14)), ((MR_Box) (ml_backend__ml_proc_gen__MLDS_ForeignCode_23)), ml_backend__ml_proc_gen__STATE_VARIABLE_Map_0_24, ml_backend__ml_proc_gen__STATE_VARIABLE_Map_25);
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_4(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv4_Imports_7;

    ml_backend__ml_proc_gen__conv4_Imports_7 = ml_backend__ml_proc_gen__foreign_type_required_imports_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv4_Imports_7));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv3_LambdaHeadVar__2_16;

    ml_backend__ml_proc_gen__conv3_LambdaHeadVar__2_16 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_gen_imports__150__1_1_f_0(((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv3_LambdaHeadVar__2_16));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25;

    ml_backend__ml_proc_gen__ml_gen_foreign_code_lang_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 7))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_2), &ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25);
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_STATE_VARIABLE_Map_25));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_proc_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__3_3;

    ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__3_3));
    return ml_backend__ml_proc_gen__wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_proc_gen__ml_code_gen_4_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_5,
  MR_Word * ml_backend__ml_proc_gen__MLDS_6,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_19)
{
  {
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_23_41;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_24_42;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_24_71;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_25_72;
    MR_Word ml_backend__ml_proc_gen__ModuleName_8;
    MR_Word ml_backend__ml_proc_gen__ForeignCode_9;
    MR_Word ml_backend__ml_proc_gen__Imports_10;
    MR_Word ml_backend__ml_proc_gen__TypeDefns_11;
    MR_Word ml_backend__ml_proc_gen__TableStructDefns_12;
    MR_Word ml_backend__ml_proc_gen__PredDefns_13;
    MR_Word ml_backend__ml_proc_gen__GlobalData_14;
    MR_Word ml_backend__ml_proc_gen__ExportedEnums_15;
    MR_Word ml_backend__ml_proc_gen__InitPreds_16;
    MR_Word ml_backend__ml_proc_gen__FinalPreds_17;
    MR_Word ml_backend__ml_proc_gen__ForeignDeclCodeCord_23;
    MR_Word ml_backend__ml_proc_gen__ForeignBodyCodeCord_24;
    MR_Word ml_backend__ml_proc_gen__ForeignImportModules_25;
    MR_Word ml_backend__ml_proc_gen__ForeignExportsCord_26;
    MR_Word ml_backend__ml_proc_gen__ForeignDeclCodes_27;
    MR_Word ml_backend__ml_proc_gen__ForeignBodyCodes_28;
    MR_Word ml_backend__ml_proc_gen__ForeignExports_29;
    MR_Word ml_backend__ml_proc_gen__Globals_30;
    MR_Word ml_backend__ml_proc_gen__BackendForeignLanguages_31;
    MR_Word ml_backend__ml_proc_gen__WantedForeignImports_32;
    MR_Word ml_backend__ml_proc_gen__Var_33;
    MR_Word ml_backend__ml_proc_gen__Var_34;
    MR_Word ml_backend__ml_proc_gen__Var_35;
    MR_Word ml_backend__ml_proc_gen__Var_36;
    MR_Word ml_backend__ml_proc_gen__Var_37;
    MR_Word ml_backend__ml_proc_gen__AllImports0_54;
    MR_Word ml_backend__ml_proc_gen__ThisModule_55;
    MR_Word ml_backend__ml_proc_gen__AllImports_56;
    MR_Word ml_backend__ml_proc_gen__TypeTable_59;
    MR_Word ml_backend__ml_proc_gen__TypeCtorsDefns_60;
    MR_Word ml_backend__ml_proc_gen__ForeignTypeImports_61;
    MR_Word ml_backend__ml_proc_gen__Var_66;
    MR_Word ml_backend__ml_proc_gen__Var_67;
    MR_Word ml_backend__ml_proc_gen__Var_68;
    MR_Word ml_backend__ml_proc_gen__Var_69;
    MR_Box ml_backend__ml_proc_gen__conv2_ForeignCode_9;

    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__ModuleName_8);
    hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__ForeignDeclCodeCord_23);
    hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__ForeignBodyCodeCord_24);
    hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__ForeignImportModules_25);
    hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__ForeignExportsCord_26);
    ml_backend__ml_proc_gen__ForeignDeclCodes_27 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, ml_backend__ml_proc_gen__ForeignDeclCodeCord_23);
    ml_backend__ml_proc_gen__ForeignBodyCodes_28 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, ml_backend__ml_proc_gen__ForeignBodyCodeCord_24);
    ml_backend__ml_proc_gen__ForeignExports_29 = mercury__cord__list_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0, ml_backend__ml_proc_gen__ForeignExportsCord_26);
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__Globals_30);
    libs__globals__get_backend_foreign_languages_2_p_0(ml_backend__ml_proc_gen__Globals_30, &ml_backend__ml_proc_gen__BackendForeignLanguages_31);
    ml_backend__ml_proc_gen__TypeCtorInfo_23_41 = (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;
    ml_backend__ml_proc_gen__TypeCtorInfo_24_42 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
    {
      ml_backend__ml_proc_gen__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_4_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignImportModules_25));
    }
    ml_backend__ml_proc_gen__Var_34 = mercury__list__map_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_42, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[0], ml_backend__ml_proc_gen__Var_35, ml_backend__ml_proc_gen__BackendForeignLanguages_31);
    ml_backend__ml_proc_gen__Var_33 = mercury__set__union_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_23_41, ml_backend__ml_proc_gen__Var_34);
    ml_backend__ml_proc_gen__WantedForeignImports_32 = mercury__set__to_sorted_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_23_41, ml_backend__ml_proc_gen__Var_33);
    {
      ml_backend__ml_proc_gen__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_4_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 3) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 4) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignDeclCodes_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 5) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignBodyCodes_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 6) = ((MR_Box) (ml_backend__ml_proc_gen__WantedForeignImports_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_36, 7) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignExports_29));
    }
    ml_backend__ml_proc_gen__Var_37 = mercury__map__init_0_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_42, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0);
    mercury__list__foldl_4_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_42, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[0], ml_backend__ml_proc_gen__Var_36, ml_backend__ml_proc_gen__BackendForeignLanguages_31, ((MR_Box) (ml_backend__ml_proc_gen__Var_37)), &ml_backend__ml_proc_gen__conv2_ForeignCode_9);
    ml_backend__ml_proc_gen__ForeignCode_9 = ((MR_Word) ml_backend__ml_proc_gen__conv2_ForeignCode_9);
    hlds__hlds_module__module_info_get_all_deps_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__AllImports0_54);
    hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__ThisModule_55);
    ml_backend__ml_proc_gen__TypeCtorInfo_24_71 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    ml_backend__ml_proc_gen__AllImports_56 = mercury__set__delete_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_71, ml_backend__ml_proc_gen__AllImports0_54, ((MR_Box) (ml_backend__ml_proc_gen__ThisModule_55)));
    hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, &ml_backend__ml_proc_gen__TypeTable_59);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(ml_backend__ml_proc_gen__TypeTable_59, &ml_backend__ml_proc_gen__TypeCtorsDefns_60);
    ml_backend__ml_proc_gen__TypeCtorInfo_25_72 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0;
    {
      ml_backend__ml_proc_gen__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_67, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_67, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_code_gen_4_p_0_4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_67, 3) = ((MR_Box) (ml_backend__ml_proc_gen__Target_5));
    }
    ml_backend__ml_proc_gen__Var_66 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[1], ml_backend__ml_proc_gen__Var_67, ml_backend__ml_proc_gen__TypeCtorsDefns_60);
    ml_backend__ml_proc_gen__ForeignTypeImports_61 = mercury__list__condense_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_25_72, ml_backend__ml_proc_gen__Var_66);
    ml_backend__ml_proc_gen__Var_69 = mercury__set__to_sorted_list_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_71, ml_backend__ml_proc_gen__AllImports_56);
    ml_backend__ml_proc_gen__Var_68 = mercury__list__map_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_24_71, ml_backend__ml_proc_gen__TypeCtorInfo_25_72, (MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[3], ml_backend__ml_proc_gen__Var_69);
    ml_backend__ml_proc_gen__Imports_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_25_72, ml_backend__ml_proc_gen__ForeignTypeImports_61, ml_backend__ml_proc_gen__Var_68);
    ml_backend__ml_proc_gen__ml_gen_defns_7_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_18, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_19, ml_backend__ml_proc_gen__Target_5, &ml_backend__ml_proc_gen__TypeDefns_11, &ml_backend__ml_proc_gen__TableStructDefns_12, &ml_backend__ml_proc_gen__PredDefns_13, &ml_backend__ml_proc_gen__GlobalData_14);
    ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_19, &ml_backend__ml_proc_gen__ExportedEnums_15);
    hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_19, &ml_backend__ml_proc_gen__InitPreds_16);
    hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_19, &ml_backend__ml_proc_gen__FinalPreds_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_proc_gen__MLDS_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleName_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ForeignCode_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_proc_gen__Imports_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_proc_gen__GlobalData_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_proc_gen__TypeDefns_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_proc_gen__TableStructDefns_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_proc_gen__PredDefns_13));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_proc_gen__InitPreds_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_proc_gen__FinalPreds_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_proc_gen__ExportedEnums_15));
    }
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_3(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_DataDefns_58;

    ml_backend__ml_proc_gen__ml_gen_add_table_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_2), &ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_DataDefns_58);
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_STATE_VARIABLE_DataDefns_58));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

    ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__773__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))));
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_1)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;

    ml_backend__ml_proc_gen__succeeded = ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_table_structs__773__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
    return ml_backend__ml_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_defns_7_p_0(
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_16,
  MR_Word ml_backend__ml_proc_gen__Target_9,
  MR_Word * ml_backend__ml_proc_gen__TypeDefns_10,
  MR_Word * ml_backend__ml_proc_gen__TableStructDefns_11,
  MR_Word * ml_backend__ml_proc_gen__PredDefns_12,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_17)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_31_78;
    MR_Word ml_backend__ml_proc_gen__ConstStructMap_14;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_18_18;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_19_19;
    MR_Word ml_backend__ml_proc_gen__TableStructMap_24;
    MR_Word ml_backend__ml_proc_gen__TableStructs_25;
    MR_Word ml_backend__ml_proc_gen__Globals_51;
    MR_Word ml_backend__ml_proc_gen__UnboxedFloats_52;
    MR_Word ml_backend__ml_proc_gen__HaveUnboxedFloats_53;
    MR_Word ml_backend__ml_proc_gen__PredTable_64;
    MR_Word ml_backend__ml_proc_gen__PredIdInfos_65;
    MR_Word ml_backend__ml_proc_gen__PredProcIds_66;
    MR_Word ml_backend__ml_proc_gen__SortedPredProcIds_67;
    MR_Word ml_backend__ml_proc_gen__CodeGenPredProcIds_68;
    MR_Word ml_backend__ml_proc_gen__DepInfo_69;
    MR_Word ml_backend__ml_proc_gen__BottomUpSCCs_70;

    ml_backend__ml_type_gen__ml_gen_types_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ml_backend__ml_proc_gen__Target_9, ml_backend__ml_proc_gen__TypeDefns_10);
    hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, &ml_backend__ml_proc_gen__TableStructMap_24);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0, ml_backend__ml_proc_gen__TableStructMap_24, &ml_backend__ml_proc_gen__TableStructs_25);
    if ((ml_backend__ml_proc_gen__TableStructs_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_proc_gen__TableStructDefns_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_proc_gen__Globals_28;
      MR_Word ml_backend__ml_proc_gen__GC_Method_29;
      MR_Word ml_backend__ml_proc_gen__Var_30;
      MR_Word ml_backend__ml_proc_gen__Var_35;
      MR_Box ml_backend__ml_proc_gen__conv1_TableStructDefns_11;

      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, &ml_backend__ml_proc_gen__Globals_28);
      libs__globals__get_gc_method_2_p_0(ml_backend__ml_proc_gen__Globals_28, &ml_backend__ml_proc_gen__GC_Method_29);
      {
        ml_backend__ml_proc_gen__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_30, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_30, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_30, 3) = ((MR_Box) (ml_backend__ml_proc_gen__GC_Method_29));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_30, 4) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_7[0]));
      }
      mercury__require__expect_3_p_0(ml_backend__ml_proc_gen__Var_30, (MR_String) "predicate \140ml_backend.ml_proc_gen.ml_gen_table_structs\'/2", (MR_String) "tabling and \140--gc accurate\'");
      {
        ml_backend__ml_proc_gen__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_defns_7_p_0_3));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_35, 3) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_2[2], (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[4], ml_backend__ml_proc_gen__Var_35, ml_backend__ml_proc_gen__TableStructs_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_proc_gen__conv1_TableStructDefns_11);
      *ml_backend__ml_proc_gen__TableStructDefns_11 = ((MR_Word) ml_backend__ml_proc_gen__conv1_TableStructDefns_11);
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, &ml_backend__ml_proc_gen__Globals_51);
    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_51, (MR_Integer) 254, &ml_backend__ml_proc_gen__UnboxedFloats_52);
    switch (ml_backend__ml_proc_gen__UnboxedFloats_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_proc_gen__HaveUnboxedFloats_53 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_proc_gen__HaveUnboxedFloats_53 = (MR_Integer) 0;
        break;
    }
    ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_18_18 = ml_backend__ml_global_data__ml_global_data_init_2_f_0((MR_Integer) 1, ml_backend__ml_proc_gen__HaveUnboxedFloats_53);
    ml_backend__ml_unify_gen__ml_gen_const_structs_5_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ml_backend__ml_proc_gen__Target_9, &ml_backend__ml_proc_gen__ConstStructMap_14, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_18_18, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_19_19);
    hlds__hlds_module__module_info_get_preds_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, &ml_backend__ml_proc_gen__PredTable_64);
    mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ml_backend__ml_proc_gen__PredTable_64, &ml_backend__ml_proc_gen__PredIdInfos_65);
    ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0(ml_backend__ml_proc_gen__PredIdInfos_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ml_backend__ml_proc_gen__PredProcIds_66);
    ml_backend__ml_proc_gen__TypeCtorInfo_31_78 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__list__sort_2_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_31_78, ml_backend__ml_proc_gen__PredProcIds_66, &ml_backend__ml_proc_gen__SortedPredProcIds_67);
    mercury__set__sorted_list_to_set_2_p_0(ml_backend__ml_proc_gen__TypeCtorInfo_31_78, ml_backend__ml_proc_gen__SortedPredProcIds_67, &ml_backend__ml_proc_gen__CodeGenPredProcIds_68);
    ml_backend__ml_proc_gen__DepInfo_69 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ml_backend__ml_proc_gen__CodeGenPredProcIds_68, (MR_Integer) 1);
    ml_backend__ml_proc_gen__BottomUpSCCs_70 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_31_78, ml_backend__ml_proc_gen__DepInfo_69);
    ml_backend__ml_proc_gen__ml_gen_sccs_9_p_0(ml_backend__ml_proc_gen__Target_9, ml_backend__ml_proc_gen__ConstStructMap_14, ml_backend__ml_proc_gen__BottomUpSCCs_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__PredDefns_12, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_19_19, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_17, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_15, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_16);
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_sccs_9_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_1,
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_2,
  MR_Word ml_backend__ml_proc_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_5,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_7,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ml_backend__ml_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_9 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8;
      *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_7 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6;
      *ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_5 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4;
    }
    else
    {
      MR_Word ml_backend__ml_proc_gen__SCC_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_proc_gen__SCCs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_34_34;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_35_35;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_36_36;
      MR_Word ml_backend__ml_proc_gen__PredProcIds_52;

      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ml_backend__ml_proc_gen__SCC_23, &ml_backend__ml_proc_gen__PredProcIds_52);
      ml_backend__ml_proc_gen__ml_gen_procs_9_p_0(ml_backend__ml_proc_gen__Target_1, ml_backend__ml_proc_gen__ConstStructMap_2, ml_backend__ml_proc_gen__PredProcIds_52, ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4, &ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_34_34, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_35_35, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_36_36);
      /* direct tailcall eliminated */
      {
        MR_Word ml_backend__ml_proc_gen__next_value_of_HeadVar__3_3 = ml_backend__ml_proc_gen__SCCs_24;
        MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_4 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_34_34;
        MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_6 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_35_35;
        MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_36_36;

        ml_backend__ml_proc_gen__HeadVar__3_3 = ml_backend__ml_proc_gen__next_value_of_HeadVar__3_3;
        ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_4;
        ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_6;
        ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_procs_9_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_1,
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_2,
  MR_Word ml_backend__ml_proc_gen__HeadVar__3_3,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_5,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_7,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((ml_backend__ml_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_9 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8;
      *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_7 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6;
      *ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_5 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4;
    }
    else
    {
      MR_Word ml_backend__ml_proc_gen__PredProcId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_proc_gen__PredProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_34_34;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_35_35;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_36_36;

      ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(ml_backend__ml_proc_gen__Target_1, ml_backend__ml_proc_gen__ConstStructMap_2, ml_backend__ml_proc_gen__PredProcId_23, ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4, &ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_34_34, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6, &ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_35_35, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8, &ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_36_36);
      /* direct tailcall eliminated */
      {
        MR_Word ml_backend__ml_proc_gen__next_value_of_HeadVar__3_3 = ml_backend__ml_proc_gen__PredProcIds_24;
        MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_4 = ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_34_34;
        MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_6 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_35_35;
        MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_36_36;

        ml_backend__ml_proc_gen__HeadVar__3_3 = ml_backend__ml_proc_gen__next_value_of_HeadVar__3_3;
        ml_backend__ml_proc_gen__STATE_VARIABLE_FunctionDefns_0_4 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_FunctionDefns_0_4;
        ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_6 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_GlobalData_0_6;
        ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_8 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_9_p_0(
  MR_Word ml_backend__ml_proc_gen__Target_10,
  MR_Word ml_backend__ml_proc_gen__ConstStructMap_11,
  MR_Word ml_backend__ml_proc_gen__PredProcId_12,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_FuncDefns_0_62,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_FuncDefns_63,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_64,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_65,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__PredId_17;
    MR_Integer ml_backend__ml_proc_gen__ProcId_18;
    MR_Word ml_backend__ml_proc_gen__PredInfo_19;
    MR_Word ml_backend__ml_proc_gen__ProcInfo0_20;
    MR_Word ml_backend__ml_proc_gen__ProcInfo_21;
    MR_Word ml_backend__ml_proc_gen__PredStatus_22;
    MR_Word ml_backend__ml_proc_gen__ArgTypes_23;
    MR_Word ml_backend__ml_proc_gen__CodeModel_24;
    MR_Word ml_backend__ml_proc_gen__HeadVars_25;
    MR_Word ml_backend__ml_proc_gen__Modes_26;
    MR_Word ml_backend__ml_proc_gen__Goal_27;
    MR_Word ml_backend__ml_proc_gen__GoalInfo_29;
    MR_Word ml_backend__ml_proc_gen__Context_30;
    MR_Word ml_backend__ml_proc_gen__FuncBody_33;
    MR_Word ml_backend__ml_proc_gen__ClosureWrapperFuncDefns_34;
    MR_Word ml_backend__ml_proc_gen__MLDS_Params_35;
    MR_Word ml_backend__ml_proc_gen__EnvVarNames_51;
    MR_Word ml_backend__ml_proc_gen__ProcContext_52;
    MR_Word ml_backend__ml_proc_gen__PlainFuncName_54;
    MR_Word ml_backend__ml_proc_gen__DeclFlags_55;
    MR_Word ml_backend__ml_proc_gen__MaybePredProcId_56;
    MR_Word ml_backend__ml_proc_gen__MaybeRequireTailrecInfo_57;
    MR_Word ml_backend__ml_proc_gen__Attributes_58;
    MR_Word ml_backend__ml_proc_gen__AttributeList_59;
    MR_Word ml_backend__ml_proc_gen__MLDS_Attributes_60;
    MR_Word ml_backend__ml_proc_gen__FuncDefn_61;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_80_80;
    MR_Word ml_backend__ml_proc_gen__Var_82;
    MR_Word ml_backend__ml_proc_gen__Var_84;
    MR_Word ml_backend__ml_proc_gen__PredInfo_91;
    MR_Word ml_backend__ml_proc_gen__Access_92;
    MR_Word ml_backend__ml_proc_gen___GoalExpr_28;
    MR_Word ml_backend__ml_proc_gen__Var_74;
    MR_Word ml_backend__ml_proc_gen__Var_32;
    MR_Word ml_backend__ml_proc_gen___ModuleName_53;

    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Generating MLDS code for ", ml_backend__ml_proc_gen__PredProcId_12, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_66);
    ml_backend__ml_proc_gen__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_12, (MR_Integer) 0)));
    ml_backend__ml_proc_gen__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__PredProcId_12, (MR_Integer) 1)));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_66, ml_backend__ml_proc_gen__PredId_17, ml_backend__ml_proc_gen__ProcId_18, &ml_backend__ml_proc_gen__PredInfo_19, &ml_backend__ml_proc_gen__ProcInfo0_20);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__ml_proc_gen__ProcInfo0_20, &ml_backend__ml_proc_gen__ProcInfo_21);
    hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(ml_backend__ml_proc_gen__PredId_17, ml_backend__ml_proc_gen__ProcId_18, ml_backend__ml_proc_gen__PredInfo_19, ml_backend__ml_proc_gen__ProcInfo_21, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_0_66, ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67);
    hlds__hlds_pred__pred_info_get_status_2_p_0(ml_backend__ml_proc_gen__PredInfo_19, &ml_backend__ml_proc_gen__PredStatus_22);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(ml_backend__ml_proc_gen__PredInfo_19, &ml_backend__ml_proc_gen__ArgTypes_23);
    ml_backend__ml_proc_gen__CodeModel_24 = hlds__code_model__proc_info_interface_code_model_1_f_0(ml_backend__ml_proc_gen__ProcInfo_21);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ml_backend__ml_proc_gen__ProcInfo_21, &ml_backend__ml_proc_gen__HeadVars_25);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ml_backend__ml_proc_gen__ProcInfo_21, &ml_backend__ml_proc_gen__Modes_26);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__ml_proc_gen__ProcInfo_21, &ml_backend__ml_proc_gen__Goal_27);
    ml_backend__ml_proc_gen___GoalExpr_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_27, (MR_Integer) 0)));
    ml_backend__ml_proc_gen__GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_27, (MR_Integer) 1)));
    ml_backend__ml_proc_gen__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_proc_gen__GoalInfo_29);
    ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73 = ml_backend__ml_gen_info__ml_gen_info_init_7_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, ml_backend__ml_proc_gen__Target_10, ml_backend__ml_proc_gen__ConstStructMap_11, ml_backend__ml_proc_gen__PredId_17, ml_backend__ml_proc_gen__ProcId_18, ml_backend__ml_proc_gen__ProcInfo_21, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_64);
    ml_backend__ml_proc_gen__Var_74 = (MR_Word) ml_backend__ml_proc_gen__PredStatus_22;
    ml_backend__ml_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_proc_gen__Var_74)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_proc_gen__succeeded)
    {
      ml_backend__ml_proc_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_74, (MR_Integer) 0)));
      {
        MR_Word ml_backend__ml_proc_gen___Info_36;

        ml_backend__ml_proc_gen__FuncBody_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_proc_gen__ClosureWrapperFuncDefns_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_code_util__ml_gen_info_proc_params_5_p_0(ml_backend__ml_proc_gen__PredId_17, ml_backend__ml_proc_gen__ProcId_18, &ml_backend__ml_proc_gen__MLDS_Params_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73, &ml_backend__ml_proc_gen___Info_36);
        ml_backend__ml_proc_gen__STATE_VARIABLE_Info_80_80 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73;
        *ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_65 = ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_0_64;
      }
    }
    else
    {
      MR_Word ml_backend__ml_proc_gen__FuncDefns_13;
      MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_37;
      MR_Word ml_backend__ml_proc_gen__TopFunctorModes_38;
      MR_Word ml_backend__ml_proc_gen__LocalVarDefns0_39;
      MR_Word ml_backend__ml_proc_gen__Statements_40;
      MR_Word ml_backend__ml_proc_gen__OutputVarLocalDefns_41;
      MR_Word ml_backend__ml_proc_gen__UsedSucceededVar_47;
      MR_Word ml_backend__ml_proc_gen__ProcLocalVarDefns_48;
      MR_Word ml_backend__ml_proc_gen__LocalVarDefns_49;
      MR_Word ml_backend__ml_proc_gen__Statement_50;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77;
      MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_78_78;

      switch (ml_backend__ml_proc_gen__CodeModel_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, &ml_backend__ml_proc_gen__CopiedOutputVars_37, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76);
          break;
        case (MR_Integer) 2:
          ml_backend__ml_proc_gen__ml_set_up_initial_succ_cont_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, &ml_backend__ml_proc_gen__CopiedOutputVars_37, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_73_73, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76);
          break;
      }
      check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, ml_backend__ml_proc_gen__Modes_26, ml_backend__ml_proc_gen__ArgTypes_23, &ml_backend__ml_proc_gen__TopFunctorModes_38);
      ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0(ml_backend__ml_proc_gen__CodeModel_24, ml_backend__ml_proc_gen__HeadVars_25, ml_backend__ml_proc_gen__ArgTypes_23, ml_backend__ml_proc_gen__TopFunctorModes_38, ml_backend__ml_proc_gen__CopiedOutputVars_37, ml_backend__ml_proc_gen__Goal_27, &ml_backend__ml_proc_gen__LocalVarDefns0_39, &ml_backend__ml_proc_gen__FuncDefns_13, &ml_backend__ml_proc_gen__Statements_40, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_76_76, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77);
      if ((ml_backend__ml_proc_gen__CopiedOutputVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_proc_gen__OutputVarLocalDefns_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_proc_gen__STATE_VARIABLE_Info_78_78 = ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77;
      }
      else
      {
        MR_Word ml_backend__ml_proc_gen__VarSet_44;
        MR_Word ml_backend__ml_proc_gen__VarTypes_45;
        MR_Word ml_backend__ml_proc_gen__UpdatedVarTypes_46;

        hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_proc_gen__ProcInfo_21, &ml_backend__ml_proc_gen__VarSet_44);
        hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_proc_gen__ProcInfo_21, &ml_backend__ml_proc_gen__VarTypes_45);
        hlds__vartypes__vartypes_overlay_corresponding_lists_4_p_0(ml_backend__ml_proc_gen__HeadVars_25, ml_backend__ml_proc_gen__ArgTypes_23, ml_backend__ml_proc_gen__VarTypes_45, &ml_backend__ml_proc_gen__UpdatedVarTypes_46);
        ml_backend__ml_code_gen__ml_gen_local_var_decls_7_p_0(ml_backend__ml_proc_gen__VarSet_44, ml_backend__ml_proc_gen__UpdatedVarTypes_46, ml_backend__ml_proc_gen__Context_30, ml_backend__ml_proc_gen__CopiedOutputVars_37, &ml_backend__ml_proc_gen__OutputVarLocalDefns_41, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_77_77, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_78_78);
      }
      ml_backend__ml_gen_info__ml_gen_info_get_used_succeeded_var_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_78_78, &ml_backend__ml_proc_gen__UsedSucceededVar_47);
      switch (ml_backend__ml_proc_gen__UsedSucceededVar_47) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__ml_proc_gen__ProcLocalVarDefns_48 = ml_backend__ml_proc_gen__OutputVarLocalDefns_41;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_proc_gen__Var_79;

            ml_backend__ml_proc_gen__Var_79 = ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(ml_backend__ml_proc_gen__Context_30);
            {
              ml_backend__ml_proc_gen__ProcLocalVarDefns_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__ProcLocalVarDefns_48, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_79));
              MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__ProcLocalVarDefns_48, 1) = ((MR_Box) (ml_backend__ml_proc_gen__OutputVarLocalDefns_41));
            }
          }
          break;
      }
      ml_backend__ml_code_util__ml_gen_info_proc_params_5_p_0(ml_backend__ml_proc_gen__PredId_17, ml_backend__ml_proc_gen__ProcId_18, &ml_backend__ml_proc_gen__MLDS_Params_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_78_78, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_80_80);
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_80_80, &ml_backend__ml_proc_gen__ClosureWrapperFuncDefns_34);
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_80_80, ml_backend__ml_proc_gen__STATE_VARIABLE_GlobalData_65);
      ml_backend__ml_proc_gen__LocalVarDefns_49 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_proc_gen__ProcLocalVarDefns_48, ml_backend__ml_proc_gen__LocalVarDefns0_39);
      ml_backend__ml_proc_gen__Statement_50 = ml_backend__ml_code_util__ml_gen_block_4_f_0(ml_backend__ml_proc_gen__LocalVarDefns_49, ml_backend__ml_proc_gen__FuncDefns_13, ml_backend__ml_proc_gen__Statements_40, ml_backend__ml_proc_gen__Context_30);
      {
        ml_backend__ml_proc_gen__FuncBody_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__FuncBody_33, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Statement_50));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_env_var_names_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_80_80, &ml_backend__ml_proc_gen__EnvVarNames_51);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ml_backend__ml_proc_gen__ProcInfo0_20, &ml_backend__ml_proc_gen__ProcContext_52);
    ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, ml_backend__ml_proc_gen__PredId_17, ml_backend__ml_proc_gen__ProcId_18, &ml_backend__ml_proc_gen___ModuleName_53, &ml_backend__ml_proc_gen__PlainFuncName_54);
    hlds__hlds_module__module_info_pred_info_3_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, ml_backend__ml_proc_gen__PredId_17, &ml_backend__ml_proc_gen__PredInfo_91);
    ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, ml_backend__ml_proc_gen__PredInfo_91, ml_backend__ml_proc_gen__ProcId_18);
    if (ml_backend__ml_proc_gen__succeeded)
      ml_backend__ml_proc_gen__Access_92 = (MR_Integer) 0;
    else
      ml_backend__ml_proc_gen__Access_92 = (MR_Integer) 1;
    ml_backend__ml_proc_gen__DeclFlags_55 = ml_backend__mlds__init_function_decl_flags_2_f_0(ml_backend__ml_proc_gen__Access_92, (MR_Integer) 0);
    {
      ml_backend__ml_proc_gen__MaybePredProcId_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__MaybePredProcId_56, 0) = ((MR_Box) (ml_backend__ml_proc_gen__PredProcId_12));
    }
    hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ml_backend__ml_proc_gen__ProcInfo0_20, &ml_backend__ml_proc_gen__MaybeRequireTailrecInfo_57);
    hlds__hlds_pred__pred_info_get_attributes_2_p_0(ml_backend__ml_proc_gen__PredInfo_19, &ml_backend__ml_proc_gen__Attributes_58);
    hlds__hlds_pred__attributes_to_attribute_list_2_p_0(ml_backend__ml_proc_gen__Attributes_58, &ml_backend__ml_proc_gen__AttributeList_59);
    ml_backend__ml_proc_gen__MLDS_Attributes_60 = ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_ModuleInfo_67, ml_backend__ml_proc_gen__AttributeList_59);
    ml_backend__ml_proc_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_proc_gen__PlainFuncName_54);
    {
      ml_backend__ml_proc_gen__FuncDefn_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 0) = ((MR_Box) (ml_backend__ml_proc_gen__Var_82));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ProcContext_52));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 2) = ((MR_Box) (ml_backend__ml_proc_gen__DeclFlags_55));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 3) = ((MR_Box) (ml_backend__ml_proc_gen__MaybePredProcId_56));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 4) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Params_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 5) = ((MR_Box) (ml_backend__ml_proc_gen__FuncBody_33));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 6) = ((MR_Box) (ml_backend__ml_proc_gen__MLDS_Attributes_60));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 7) = ((MR_Box) (ml_backend__ml_proc_gen__EnvVarNames_51));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__FuncDefn_61, 8) = ((MR_Box) (ml_backend__ml_proc_gen__MaybeRequireTailrecInfo_57));
    }
    {
      ml_backend__ml_proc_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_84, 0) = ((MR_Box) (ml_backend__ml_proc_gen__FuncDefn_61));
      MR_hl_field(MR_mktag(1), ml_backend__ml_proc_gen__Var_84, 1) = ((MR_Box) (ml_backend__ml_proc_gen__STATE_VARIABLE_FuncDefns_0_62));
    }
    *ml_backend__ml_proc_gen__STATE_VARIABLE_FuncDefns_63 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, ml_backend__ml_proc_gen__ClosureWrapperFuncDefns_34, ml_backend__ml_proc_gen__Var_84);
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

    ml_backend__ml_proc_gen__conv0_HeadVar__3_3 = ml_backend__ml_proc_gen__attribute_to_mlds_attribute_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
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
    MR_Word ml_backend__ml_proc_gen__HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__Var_6;

    {
      ml_backend__ml_proc_gen__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 1) = ((MR_Box) (ml_backend__ml_proc_gen__attributes_to_mlds_attributes_2_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_6, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_4));
    }
    ml_backend__ml_proc_gen__HeadVar__3_3 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_attribute_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_attribute_0, ml_backend__ml_proc_gen__Var_6, ml_backend__ml_proc_gen__Attrs_5);
    return ml_backend__ml_proc_gen__HeadVar__3_3;
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_2(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv7_LambdaHeadVar__1_44;
    MR_Word ml_backend__ml_proc_gen__conv6_LambdaHeadVar__2_45;
    MR_Word ml_backend__ml_proc_gen__conv5_LambdaHeadVar__3_46;
    MR_Word ml_backend__ml_proc_gen__conv4_LambdaHeadVar__5_48;

    ml_backend__ml_proc_gen__IntroducedFrom__pred__ml_gen_proc_body__644__1_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 5))), &ml_backend__ml_proc_gen__conv7_LambdaHeadVar__1_44, &ml_backend__ml_proc_gen__conv6_LambdaHeadVar__2_45, &ml_backend__ml_proc_gen__conv5_LambdaHeadVar__3_46, ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_4), &ml_backend__ml_proc_gen__conv4_LambdaHeadVar__5_48);
    *ml_backend__ml_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_proc_gen__conv7_LambdaHeadVar__1_44));
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv6_LambdaHeadVar__2_45));
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv5_LambdaHeadVar__3_46));
    *ml_backend__ml_proc_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_proc_gen__conv4_LambdaHeadVar__5_48));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_1(
  MR_Box ml_backend__ml_proc_gen__closure_arg,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_proc_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_proc_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_proc_gen__closure = ml_backend__ml_proc_gen__closure_arg;
    MR_Word ml_backend__ml_proc_gen__conv3_HeadVar__3_3;
    MR_Word ml_backend__ml_proc_gen__conv2_HeadVar__4_4;
    MR_Word ml_backend__ml_proc_gen__conv1_HeadVar__5_5;
    MR_Word ml_backend__ml_proc_gen__conv0_HeadVar__7_7;

    ml_backend__ml_code_gen__ml_gen_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), &ml_backend__ml_proc_gen__conv3_HeadVar__3_3, &ml_backend__ml_proc_gen__conv2_HeadVar__4_4, &ml_backend__ml_proc_gen__conv1_HeadVar__5_5, ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_4), &ml_backend__ml_proc_gen__conv0_HeadVar__7_7);
    *ml_backend__ml_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_proc_gen__conv3_HeadVar__3_3));
    *ml_backend__ml_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_proc_gen__conv2_HeadVar__4_4));
    *ml_backend__ml_proc_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_proc_gen__conv1_HeadVar__5_5));
    *ml_backend__ml_proc_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_proc_gen__conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0(
  MR_Word ml_backend__ml_proc_gen__CodeModel_12,
  MR_Word ml_backend__ml_proc_gen__HeadVars_13,
  MR_Word ml_backend__ml_proc_gen__ArgTypes_14,
  MR_Word ml_backend__ml_proc_gen__TopFunctorModes_15,
  MR_Word ml_backend__ml_proc_gen__CopiedOutputVars_16,
  MR_Word ml_backend__ml_proc_gen__Goal_17,
  MR_Word * ml_backend__ml_proc_gen__LocalVarDefns_18,
  MR_Word * ml_backend__ml_proc_gen__FuncDefns_19,
  MR_Word * ml_backend__ml_proc_gen__Statements_20,
  MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41)
{
  {
    MR_bool ml_backend__ml_proc_gen__succeeded;
    MR_Word ml_backend__ml_proc_gen__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_17, (MR_Integer) 1)));
    MR_Word ml_backend__ml_proc_gen__Context_24;
    MR_Word ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_25;
    MR_Word ml_backend__ml_proc_gen__ConvLocalVarDefns_26;
    MR_Word ml_backend__ml_proc_gen__ConvInputStatements_27;
    MR_Word ml_backend__ml_proc_gen__ConvOutputStatements_28;
    MR_Word ml_backend__ml_proc_gen__Statements1_29;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_42_42;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_43_43;
    MR_Word ml_backend__ml_proc_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Goal_17, (MR_Integer) 0)));

    ml_backend__ml_proc_gen__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__ml_proc_gen__GoalInfo_23);
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__CopiedOutputVars_16, &ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_25);
    ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(ml_backend__ml_proc_gen__HeadVars_13, ml_backend__ml_proc_gen__ArgTypes_14, ml_backend__ml_proc_gen__TopFunctorModes_15, ml_backend__ml_proc_gen__CopiedOutputVars_16, ml_backend__ml_proc_gen__Context_24, &ml_backend__ml_proc_gen__ConvLocalVarDefns_26, &ml_backend__ml_proc_gen__ConvInputStatements_27, &ml_backend__ml_proc_gen__ConvOutputStatements_28, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_42_42);
    ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvLocalVarDefns_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ml_backend__ml_proc_gen__succeeded)
    {
      ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvInputStatements_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (ml_backend__ml_proc_gen__succeeded)
        ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__ConvOutputStatements_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (ml_backend__ml_proc_gen__succeeded)
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(ml_backend__ml_proc_gen__CodeModel_12, ml_backend__ml_proc_gen__Goal_17, ml_backend__ml_proc_gen__LocalVarDefns_18, ml_backend__ml_proc_gen__FuncDefns_19, &ml_backend__ml_proc_gen__Statements1_29, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_42_42, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_43_43);
    else
    {
      MR_Word ml_backend__ml_proc_gen__DoGenGoal_30;
      MR_Word ml_backend__ml_proc_gen__DoConvOutputs_31;
      MR_Word ml_backend__ml_proc_gen__LocalVarDefns0_37;
      MR_Word ml_backend__ml_proc_gen__Statements0_39;

      {
        ml_backend__ml_proc_gen__DoGenGoal_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_30, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_30, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_1));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_30, 3) = ((MR_Box) (ml_backend__ml_proc_gen__CodeModel_12));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoGenGoal_30, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Goal_17));
      }
      {
        ml_backend__ml_proc_gen__DoConvOutputs_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_31, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_31, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_gen_proc_body_11_p_0_2));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_31, 3) = ((MR_Box) (ml_backend__ml_proc_gen__CodeModel_12));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_31, 4) = ((MR_Box) (ml_backend__ml_proc_gen__Context_24));
        MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__DoConvOutputs_31, 5) = ((MR_Box) (ml_backend__ml_proc_gen__ConvOutputStatements_28));
      }
      ml_backend__ml_code_util__ml_combine_conj_9_p_0(ml_backend__ml_proc_gen__CodeModel_12, ml_backend__ml_proc_gen__Context_24, ml_backend__ml_proc_gen__DoGenGoal_30, ml_backend__ml_proc_gen__DoConvOutputs_31, &ml_backend__ml_proc_gen__LocalVarDefns0_37, ml_backend__ml_proc_gen__FuncDefns_19, &ml_backend__ml_proc_gen__Statements0_39, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_42_42, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_43_43);
      ml_backend__ml_proc_gen__Statements1_29 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__ConvInputStatements_27, ml_backend__ml_proc_gen__Statements0_39);
      *ml_backend__ml_proc_gen__LocalVarDefns_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_proc_gen__ConvLocalVarDefns_26, ml_backend__ml_proc_gen__LocalVarDefns0_37);
    }
    ml_backend__ml_code_util__ml_append_return_statement_7_p_0(ml_backend__ml_proc_gen__CodeModel_12, ml_backend__ml_proc_gen__CopiedOutputVarOriginalLvals_25, ml_backend__ml_proc_gen__Context_24, ml_backend__ml_proc_gen__Statements1_29, ml_backend__ml_proc_gen__Statements_20, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_43_43, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);
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

          ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__Var_20, &ml_backend__ml_proc_gen__BodyType_26);
          ml_backend__ml_proc_gen__succeeded = (ml_backend__ml_proc_gen__TopFunctorMode_24 == (MR_Integer) 2);
          if (ml_backend__ml_proc_gen__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_proc_gen__next_value_of_Vars_11 = ml_backend__ml_proc_gen__VarsTail_21;
              MR_Word ml_backend__ml_proc_gen__next_value_of_HeadTypes_12 = ml_backend__ml_proc_gen__HeadTypesTail_23;
              MR_Word ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13 = ml_backend__ml_proc_gen__TopFunctorModesTail_25;

              ml_backend__ml_proc_gen__Vars_11 = ml_backend__ml_proc_gen__next_value_of_Vars_11;
              ml_backend__ml_proc_gen__HeadTypes_12 = ml_backend__ml_proc_gen__next_value_of_HeadTypes_12;
              ml_backend__ml_proc_gen__TopFunctorModes_13 = ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13;
            }
            continue;
          }
          else
          {
            MR_Word ml_backend__ml_proc_gen__TypeInfo_53_53 = (MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[3];
            MR_Word ml_backend__ml_proc_gen__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
            MR_Word ml_backend__ml_proc_gen__Subst0_27;
            MR_Word ml_backend__ml_proc_gen__Subst_28;

            mercury__map__init_1_p_0(ml_backend__ml_proc_gen__TypeInfo_53_53, ml_backend__ml_proc_gen__TypeCtorInfo_54_54, &ml_backend__ml_proc_gen__Subst0_27);
            ml_backend__ml_proc_gen__succeeded = parse_tree__prog_type__type_unify_5_p_0(ml_backend__ml_proc_gen__HeadType_22, ml_backend__ml_proc_gen__BodyType_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__Subst0_27, &ml_backend__ml_proc_gen__Subst_28);
            if (ml_backend__ml_proc_gen__succeeded)
              ml_backend__ml_proc_gen__succeeded = mercury__map__is_empty_1_p_0(ml_backend__ml_proc_gen__TypeInfo_53_53, ml_backend__ml_proc_gen__TypeCtorInfo_54_54, ml_backend__ml_proc_gen__Subst_28);
            if (ml_backend__ml_proc_gen__succeeded)
            {
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__ml_proc_gen__next_value_of_Vars_11 = ml_backend__ml_proc_gen__VarsTail_21;
                MR_Word ml_backend__ml_proc_gen__next_value_of_HeadTypes_12 = ml_backend__ml_proc_gen__HeadTypesTail_23;
                MR_Word ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13 = ml_backend__ml_proc_gen__TopFunctorModesTail_25;

                ml_backend__ml_proc_gen__Vars_11 = ml_backend__ml_proc_gen__next_value_of_Vars_11;
                ml_backend__ml_proc_gen__HeadTypes_12 = ml_backend__ml_proc_gen__next_value_of_HeadTypes_12;
                ml_backend__ml_proc_gen__TopFunctorModes_13 = ml_backend__ml_proc_gen__next_value_of_TopFunctorModes_13;
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

              ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, ml_backend__ml_proc_gen__Var_20, ml_backend__ml_proc_gen__HeadType_22, &ml_backend__ml_proc_gen__HeadVarLval_29);
              ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__VarSet_30);
              ml_backend__ml_proc_gen__VarName_31 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(ml_backend__ml_proc_gen__VarSet_30, ml_backend__ml_proc_gen__Var_20);
              ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_proc_gen__HeadType_22, ml_backend__ml_proc_gen__BodyType_26, (MR_Integer) 0, ml_backend__ml_proc_gen__HeadVarLval_29, ml_backend__ml_proc_gen__VarName_31, ml_backend__ml_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_proc_gen__BodyLval_32, &ml_backend__ml_proc_gen__ConvDecls_33, &ml_backend__ml_proc_gen__ConvInputStatements_34, &ml_backend__ml_proc_gen__ConvOutputStatements_35, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_40, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48);
              ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(ml_backend__ml_proc_gen__Var_20, ml_backend__ml_proc_gen__BodyLval_32, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_48_48, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49);
              ml_backend__ml_proc_gen__ml_gen_convert_headvars_10_p_0(ml_backend__ml_proc_gen__VarsTail_21, ml_backend__ml_proc_gen__HeadTypesTail_23, ml_backend__ml_proc_gen__TopFunctorModesTail_25, ml_backend__ml_proc_gen__CopiedOutputVars_14, ml_backend__ml_proc_gen__Context_15, &ml_backend__ml_proc_gen__DeclsTail_36, &ml_backend__ml_proc_gen__InputStatementsTail_37, &ml_backend__ml_proc_gen__OutputStatementsTail_38, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_49_49, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41);
              ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(*ml_backend__ml_proc_gen__STATE_VARIABLE_Info_41, &ml_backend__ml_proc_gen__ByRefOutputVars_39);
              ml_backend__ml_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_proc_gen__Var_20)), ml_backend__ml_proc_gen__ByRefOutputVars_39);
              if (!(ml_backend__ml_proc_gen__succeeded))
              {
                ml_backend__ml_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ((MR_Box) (ml_backend__ml_proc_gen__Var_20)), ml_backend__ml_proc_gen__CopiedOutputVars_14);
              }
              if (ml_backend__ml_proc_gen__succeeded)
              {
                *ml_backend__ml_proc_gen__InputStatements_17 = ml_backend__ml_proc_gen__InputStatementsTail_37;
                *ml_backend__ml_proc_gen__OutputStatements_18 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__OutputStatementsTail_38, ml_backend__ml_proc_gen__ConvOutputStatements_35);
              }
              else
              {
                *ml_backend__ml_proc_gen__InputStatements_17 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_proc_gen__ConvInputStatements_34, ml_backend__ml_proc_gen__InputStatementsTail_37);
                *ml_backend__ml_proc_gen__OutputStatements_18 = ml_backend__ml_proc_gen__OutputStatementsTail_38;
              }
              *ml_backend__ml_proc_gen__Decls_16 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_proc_gen__ConvDecls_33, ml_backend__ml_proc_gen__DeclsTail_36);
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
    MR_Word ml_backend__ml_proc_gen__Globals_8;
    MR_Word ml_backend__ml_proc_gen__NondetCopyOut_9;
    MR_Word ml_backend__ml_proc_gen__OutputVarLvals_10;
    MR_Word ml_backend__ml_proc_gen__OutputVarTypes_11;
    MR_Word ml_backend__ml_proc_gen__InitialCont_12;
    MR_Word ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__Globals_8);
    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_8, (MR_Integer) 268, &ml_backend__ml_proc_gen__NondetCopyOut_9);
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
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13, ml_backend__ml_proc_gen__NondetCopiedOutputVars_6);
          ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17);
        }
        break;
    }
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17, *ml_backend__ml_proc_gen__NondetCopiedOutputVars_6, &ml_backend__ml_proc_gen__OutputVarLvals_10);
    ml_backend__ml_code_util__ml_variable_types_3_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17, *ml_backend__ml_proc_gen__NondetCopiedOutputVars_6, &ml_backend__ml_proc_gen__OutputVarTypes_11);
    ml_backend__ml_code_util__ml_initial_cont_4_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17, ml_backend__ml_proc_gen__OutputVarLvals_10, ml_backend__ml_proc_gen__OutputVarTypes_11, &ml_backend__ml_proc_gen__InitialCont_12);
    ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(ml_backend__ml_proc_gen__InitialCont_12, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_17_17, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_14);
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

    ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_proc_gen__wrapper_arg_1));
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

    ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__OutputVars_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, &ml_backend__ml_proc_gen__Globals_9);
    libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_proc_gen__Globals_9, (MR_Integer) 267, &ml_backend__ml_proc_gen__DetCopyOut_10);
    switch (ml_backend__ml_proc_gen__DetCopyOut_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_proc_gen__ResultVar_16;
          MR_Word ml_backend__ml_proc_gen__PredId_14;
          MR_Integer ml_backend__ml_proc_gen__ProcId_15;

          ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__PredId_14);
          ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__ProcId_15);
          ml_backend__ml_proc_gen__succeeded = ml_backend__ml_code_util__ml_is_output_det_function_4_p_0(ml_backend__ml_proc_gen__ModuleInfo_5, ml_backend__ml_proc_gen__PredId_14, ml_backend__ml_proc_gen__ProcId_15, &ml_backend__ml_proc_gen__ResultVar_16);
          if (ml_backend__ml_proc_gen__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_proc_gen__CopiedOutputVars_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_proc_gen__ResultVar_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__list__delete_all_3_p_1((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ml_backend__ml_proc_gen__OutputVars_8, ((MR_Box) (ml_backend__ml_proc_gen__ResultVar_16)), &ml_backend__ml_proc_gen__ByRefOutputVars_11);
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
          ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_proc_gen__VarTypes_12);
          {
            ml_backend__ml_proc_gen__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_det_copy_out_vars_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 3) = ((MR_Box) (ml_backend__ml_proc_gen__ModuleInfo_5));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_21, 4) = ((MR_Box) (ml_backend__ml_proc_gen__VarTypes_12));
          }
          mercury__list__filter_4_p_0((MR_Word) &ml_backend__ml_proc_gen_scalar_common_1[2], ml_backend__ml_proc_gen__Var_21, ml_backend__ml_proc_gen__OutputVars_8, &ml_backend__ml_proc_gen__Var_13, ml_backend__ml_proc_gen__CopiedOutputVars_6);
        }
        break;
    }
    ml_backend__ml_gen_info__ml_gen_info_set_byref_output_vars_3_p_0(ml_backend__ml_proc_gen__ByRefOutputVars_11, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_proc_gen__STATE_VARIABLE_Info_18);
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

    ml_backend__ml_proc_gen__conv0_LambdaHeadVar__2_26 = ml_backend__ml_proc_gen__IntroducedFrom__func__ml_find_procs_for_code_gen__327__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__ml_proc_gen__wrapper_arg_1));
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

        hlds__hlds_pred__pred_info_get_status_2_p_0(ml_backend__ml_proc_gen__PredInfo_11, &ml_backend__ml_proc_gen__PredStatus_12);
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

          ml_backend__ml_proc_gen__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(ml_backend__ml_proc_gen__PredInfo_11);
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
            ml_backend__ml_proc_gen__ProcIds_15 = hlds__hlds_pred__pred_info_procids_1_f_0(ml_backend__ml_proc_gen__PredInfo_11);
          }
          else
            ml_backend__ml_proc_gen__ProcIds_15 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(ml_backend__ml_proc_gen__PredInfo_11);
          ml_backend__ml_proc_gen__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          {
            ml_backend__ml_proc_gen__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 0) = ((MR_Box) (&ml_backend__ml_proc_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 1) = ((MR_Box) (ml_backend__ml_proc_gen__ml_find_procs_for_code_gen_3_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_proc_gen__Var_24, 3) = ((MR_Box) (ml_backend__ml_proc_gen__PredId_10));
          }
          ml_backend__ml_proc_gen__PredProcIds_16 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_proc_gen__TypeCtorInfo_31_31, ml_backend__ml_proc_gen__Var_24, ml_backend__ml_proc_gen__ProcIds_15);
          ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_27_27 = mercury__list__f_43_43_2_f_0(ml_backend__ml_proc_gen__TypeCtorInfo_31_31, ml_backend__ml_proc_gen__PredProcIds_16, ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2);
        }
        /* direct tailcall eliminated */
        {
          MR_Word ml_backend__ml_proc_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_proc_gen__PredIdInfos_8;
          MR_Word ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_CodeGenPredProcIds_0_2 = ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_27_27;

          ml_backend__ml_proc_gen__HeadVar__1_1 = ml_backend__ml_proc_gen__next_value_of_HeadVar__1_1;
          ml_backend__ml_proc_gen__STATE_VARIABLE_CodeGenPredProcIds_0_2 = ml_backend__ml_proc_gen__next_value_of_STATE_VARIABLE_CodeGenPredProcIds_0_2;
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
