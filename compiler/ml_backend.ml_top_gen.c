/*
** Automatically generated from `ml_top_gen.m'
** by the Mercury compiler,
** version rotd-2023-03-31
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ml_backend.ml_top_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_top_gen__init
ENDINIT
*/

#include "ml_backend.ml_top_gen.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_args_util.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_proc_gen.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.ml_unify_gen_construct.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_top_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_top_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static MR_bool MR_CALL 
ml_backend__ml_top_gen__IntroducedFrom__pred__ml_gen_table_structs__262__1_2_p_0(
  MR_Word GC_Method_10,
  MR_Word HeadVar__2_14);

static MR_Word MR_CALL 
ml_backend__ml_top_gen__IntroducedFrom__func__ml_gen_imports__148__1_1_f_0(
  MR_Word LambdaHeadVar__1_10);

static void MR_CALL 
ml_backend__ml_top_gen__init_stats_step_3_p_0(
  MR_Word StepId_4,
  MR_Word StepDesc_5,
  MR_Word * Init_6);

static MR_Word MR_CALL 
ml_backend__ml_top_gen__init_step_desc_2_f_0(
  MR_Word StructId_4,
  MR_Word StepDesc_5);

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DataDefns_0_57,
  MR_Word * STATE_VARIABLE_DataDefns_58);

static MR_Word MR_CALL 
ml_backend__ml_top_gen__tabling_name_and_init_to_defn_5_f_0(
  MR_Word ProcLabel_7,
  MR_Word Id_8,
  MR_Word Context_9,
  MR_Word Constness_10,
  MR_Word Initializer_11);

static MR_Word MR_CALL 
ml_backend__ml_top_gen__gen_init_tabling_name_3_f_0(
  MR_Word ModuleName_5,
  MR_Word ProcLabel_6,
  MR_Word TablingId_7);

static void MR_CALL 
ml_backend__ml_top_gen__init_stats_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_top_gen__init_stats_8_p_0(
  MR_Word MLDS_ModuleName_9,
  MR_Word MLDS_ProcLabel_10,
  MR_Word Context_11,
  MR_Word CallOrAnswer_12,
  MR_Word CurrOrPrev_13,
  MR_Word StepDescs_14,
  MR_Word * StatsInit_15,
  MR_Word * StatsStepDefns_16);

static MR_bool MR_CALL 
ml_backend__ml_top_gen__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ml_backend__ml_top_gen__ml_gen_pragma_export_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_pragma_export_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PragmaExportedProc_5,
  MR_Word * Defn_6);

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_foreign_code_lang_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_foreign_code_lang_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ForeignDeclCodes_10,
  MR_Word ForeignBodyCodes_11,
  MR_Word WantedForeignImports_12,
  MR_Word ForeignExports_13,
  MR_Word Lang_14,
  MR_Word STATE_VARIABLE_Map_0_24,
  MR_Word * STATE_VARIABLE_Map_25);

static void MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_4(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_1[10][2];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_2[4][3];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_3[3][1];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_4[3][6];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_5[1][11];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_6[2][5];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_8[3][4];




static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[0])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[1])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_top_gen__ml_code_gen_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_8[0])),
    ((MR_Box) (ml_backend__ml_top_gen__ml_gen_pragma_export_proc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_3[3][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_c_j_cs_fims_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_6[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_gc_method_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_top_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_top_gen_scalar_common_8[3][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[0])))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_4[2])),
    ((MR_Box) (ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[1])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_top_gen__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_top_gen__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_top_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static MR_bool MR_CALL 
ml_backend__ml_top_gen__IntroducedFrom__pred__ml_gen_table_structs__262__1_2_p_0(
  MR_Word GC_Method_10,
  MR_Word HeadVar__2_14)
{
  MR_bool succeeded = (HeadVar__2_14 == GC_Method_10);

  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_top_gen__IntroducedFrom__func__ml_gen_imports__148__1_1_f_0(
  MR_Word LambdaHeadVar__1_10)
{
  MR_Word LambdaHeadVar__2_11;

  {
    LambdaHeadVar__2_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_11, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, LambdaHeadVar__2_11, 1) = ((MR_Box) (LambdaHeadVar__1_10));
  }
  return LambdaHeadVar__2_11;
}

static void MR_CALL 
ml_backend__ml_top_gen__init_stats_step_3_p_0(
  MR_Word StepId_4,
  MR_Word StepDesc_5,
  MR_Word * Init_6)
{
  MR_Word Step_8 = ((MR_Word) ((MR_hl_field(0, StepDesc_5, (MR_Integer) 1))));
  MR_String KindStr_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Const_72;
  MR_Word Var_75;

  KindStr_9 = hlds__hlds_pred__table_step_stats_kind_1_f_0(Step_8);
  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_10, 1) = ((MR_Box) (StepId_4));
  }
  Var_12 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_15 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  {
    Const_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Const_72, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, Const_72, 1) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_1[2]));
    MR_hl_field(3, Const_72, 2) = ((MR_Box) (KindStr_9));
  }
  {
    Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_75, 1) = ((MR_Box) (Const_72));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_75));
  }
  Var_20 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_23 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_26 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_29 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_38 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_41 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_44 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_47 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_50 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_53 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_56 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_59 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_62 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_65 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_68 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Init_6 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(2, base, 1) = ((MR_Box) (Var_11));
  }
}

static MR_Word MR_CALL 
ml_backend__ml_top_gen__init_step_desc_2_f_0(
  MR_Word StructId_4,
  MR_Word StepDesc_5)
{
  MR_Word HeadVar__3_3;
  MR_Word StructType_6;
  MR_Word FieldInits_7;
  MR_String VarName_8 = ((MR_String) ((MR_hl_field(0, StepDesc_5, (MR_Integer) 0))));
  MR_Word Step_9 = ((MR_Word) ((MR_hl_field(0, StepDesc_5, (MR_Integer) 1))));
  MR_String StepStr_10;
  MR_Word MaybeEnumRange_11;
  MR_Word VarNameInit_12;
  MR_Word StepInit_13;
  MR_Word MaybeEnumRangeInit_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Const_21;
  MR_Word Var_24;

  backend_libs__rtti__table_trie_step_to_c_3_p_0(Step_9, &StepStr_10, &MaybeEnumRange_11);
  VarNameInit_12 = ml_backend__ml_util__gen_init_string_1_f_0(VarName_8);
  {
    Const_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Const_21, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, Const_21, 1) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_1[2]));
    MR_hl_field(3, Const_21, 2) = ((MR_Box) (StepStr_10));
  }
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Const_21));
  }
  {
    StepInit_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StepInit_13, 0) = ((MR_Box) (Var_24));
  }
  if ((MaybeEnumRange_11 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) -1);
  else
  {
    MR_Integer EnumRange_15 = ((MR_Integer) ((MR_hl_field(1, MaybeEnumRange_11, (MR_Integer) 0))));

    MaybeEnumRangeInit_14 = ml_backend__ml_util__gen_init_int_1_f_0(EnumRange_15);
  }
  {
    StructType_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StructType_6, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, StructType_6, 1) = ((MR_Box) (StructId_4));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MaybeEnumRangeInit_14));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (StepInit_13));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    FieldInits_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FieldInits_7, 0) = ((MR_Box) (VarNameInit_12));
    MR_hl_field(1, FieldInits_7, 1) = ((MR_Box) (Var_17));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__3_3, 0) = ((MR_Box) (StructType_6));
    MR_hl_field(2, HeadVar__3_3, 1) = ((MR_Box) (FieldInits_7));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = ml_backend__ml_top_gen__init_step_desc_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = ml_backend__ml_top_gen__init_step_desc_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DataDefns_0_57,
  MR_Word * STATE_VARIABLE_DataDefns_58)
{
  MR_Word PredProcId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TableStructInfo_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ModuleName_9;
  MR_Word MLDS_ModuleName_10;
  MR_Integer ProcId_12;
  MR_Word ProcTableStructInfo_13;
  MR_Word RttiProcLabel_15;
  MR_Word Context_17;
  MR_Integer NumInputs_18;
  MR_Integer NumOutputs_19;
  MR_Word InputSteps_20;
  MR_Word MaybeOutputSteps_21;
  MR_Word TabledMethod_23;
  MR_Word PredLabel_24;
  MR_Word MLDS_ProcLabel_26;
  MR_String TableTypeStr_27;
  MR_Word InputStepsRefInit_29;
  MR_Word InputStepsDefns_30;
  MR_Word CallStatsInit_35;
  MR_Word CallStatsDefns_36;
  MR_Word PrevCallStatsInit_37;
  MR_Word PrevCallStatsDefns_38;
  MR_Word CallDefns_39;
  MR_Integer HasAnswerTable_40;
  MR_Word OutputStepsRefInit_41;
  MR_Word OutputStepsDefns_42;
  MR_Word AnswerStatsInit_46;
  MR_Word AnswerStatsDefns_47;
  MR_Word PrevAnswerStatsInit_48;
  MR_Word PrevAnswerStatsDefns_49;
  MR_Word AnswerDefns_50;
  MR_Word PTIsRefInit_51;
  MR_Word TypeParamLocnsRefInit_52;
  MR_Word RootNodeInit_53;
  MR_Word TipsRefInit_54;
  MR_Word ProcTableInfoInit_55;
  MR_Word ProcTableInfoDefn_56;
  MR_Word Var_78;
  MR_Word Var_96;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word _PredModule_25;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_9);
  MLDS_ModuleName_10 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_9);
  ProcId_12 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, (MR_Integer) 1))));
  ProcTableStructInfo_13 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_7, (MR_Integer) 0))));
  RttiProcLabel_15 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 0))));
  Context_17 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 2))));
  NumInputs_18 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 3))));
  NumOutputs_19 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 4))));
  InputSteps_20 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 5))));
  MaybeOutputSteps_21 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 6))));
  TabledMethod_23 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_13, (MR_Integer) 8))));
  ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_5, RttiProcLabel_15, &PredLabel_24, &_PredModule_25);
  {
    MLDS_ProcLabel_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MLDS_ProcLabel_26, 0) = ((MR_Box) (PredLabel_24));
    MR_hl_field(0, MLDS_ProcLabel_26, 1) = ((MR_Box) (ProcId_12));
  }
  TableTypeStr_27 = parse_tree__prog_data_pragma__tabled_eval_method_to_table_type_1_f_0(TabledMethod_23);
  if ((InputSteps_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    InputStepsRefInit_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[3])));
    InputStepsDefns_30 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word InputStepsInit_33;
    MR_Word InputStepsDefn_34;
    MR_Word Var_66;

    InputStepsRefInit_29 = ml_backend__ml_top_gen__gen_init_tabling_name_3_f_0(MLDS_ModuleName_10, MLDS_ProcLabel_26, (MR_Word) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[0])));
    Var_66 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_8[1]), InputSteps_20);
    {
      InputStepsInit_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, InputStepsInit_33, 0) = ((MR_Box) (Var_66));
    }
    InputStepsDefn_34 = ml_backend__ml_top_gen__tabling_name_and_init_to_defn_5_f_0(MLDS_ProcLabel_26, (MR_Word) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[0])), Context_17, (MR_Integer) 1, InputStepsInit_33);
    {
      InputStepsDefns_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InputStepsDefns_30, 0) = ((MR_Box) (InputStepsDefn_34));
      MR_hl_field(1, InputStepsDefns_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  ml_backend__ml_top_gen__init_stats_8_p_0(MLDS_ModuleName_10, MLDS_ProcLabel_26, Context_17, (MR_Integer) 0, (MR_Integer) 0, InputSteps_20, &CallStatsInit_35, &CallStatsDefns_36);
  ml_backend__ml_top_gen__init_stats_8_p_0(MLDS_ModuleName_10, MLDS_ProcLabel_26, Context_17, (MR_Integer) 0, (MR_Integer) 1, InputSteps_20, &PrevCallStatsInit_37, &PrevCallStatsDefns_38);
  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CallStatsDefns_36, PrevCallStatsDefns_38);
  CallDefns_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), InputStepsDefns_30, Var_78);
  if ((MaybeOutputSteps_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HasAnswerTable_40 = (MR_Integer) 0;
    OutputStepsRefInit_41 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[4])));
    OutputStepsDefns_42 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word OutputSteps_43 = ((MR_Word) ((MR_hl_field(1, MaybeOutputSteps_21, (MR_Integer) 0))));
    MR_Word OutputStepsInit_44;
    MR_Word OutputStepsDefn_45;
    MR_Word Var_84;

    HasAnswerTable_40 = (MR_Integer) 1;
    OutputStepsRefInit_41 = ml_backend__ml_top_gen__gen_init_tabling_name_3_f_0(MLDS_ModuleName_10, MLDS_ProcLabel_26, (MR_Word) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[1])));
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_8[2]), OutputSteps_43);
    {
      OutputStepsInit_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, OutputStepsInit_44, 0) = ((MR_Box) (Var_84));
    }
    OutputStepsDefn_45 = ml_backend__ml_top_gen__tabling_name_and_init_to_defn_5_f_0(MLDS_ProcLabel_26, (MR_Word) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[1])), Context_17, (MR_Integer) 1, OutputStepsInit_44);
    {
      OutputStepsDefns_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OutputStepsDefns_42, 0) = ((MR_Box) (OutputStepsDefn_45));
      MR_hl_field(1, OutputStepsDefns_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  ml_backend__ml_top_gen__init_stats_8_p_0(MLDS_ModuleName_10, MLDS_ProcLabel_26, Context_17, (MR_Integer) 1, (MR_Integer) 0, InputSteps_20, &AnswerStatsInit_46, &AnswerStatsDefns_47);
  ml_backend__ml_top_gen__init_stats_8_p_0(MLDS_ModuleName_10, MLDS_ProcLabel_26, Context_17, (MR_Integer) 1, (MR_Integer) 1, InputSteps_20, &PrevAnswerStatsInit_48, &PrevAnswerStatsDefns_49);
  Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), AnswerStatsDefns_47, PrevAnswerStatsDefns_49);
  AnswerDefns_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), OutputStepsDefns_42, Var_96);
  PTIsRefInit_51 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[5])));
  TypeParamLocnsRefInit_52 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[6])));
  Var_104 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    RootNodeInit_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, RootNodeInit_53, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[7])));
    MR_hl_field(2, RootNodeInit_53, 1) = ((MR_Box) (Var_103));
  }
  TipsRefInit_54 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[8])));
  Var_112 = ml_backend__ml_util__gen_init_builtin_const_2_f_0((MR_Word) (&ml_backend__ml_top_gen_scalar_common_1[2]), TableTypeStr_27);
  Var_114 = ml_backend__ml_util__gen_init_int_1_f_0(NumInputs_18);
  Var_116 = ml_backend__ml_util__gen_init_int_1_f_0(NumOutputs_19);
  Var_118 = ml_backend__ml_util__gen_init_int_1_f_0(HasAnswerTable_40);
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (OutputStepsRefInit_41));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (InputStepsRefInit_29));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_123, 0) = ((MR_Box) (Var_124));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (PrevCallStatsInit_37));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (CallStatsInit_35));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_132));
  }
  {
    Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_130, 0) = ((MR_Box) (Var_131));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (PrevAnswerStatsInit_48));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (AnswerStatsInit_46));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_135, 0) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) (Var_129));
  }
  Var_141 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_145 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_148 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (TipsRefInit_54));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_143));
  }
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (Var_128));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_127));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (RootNodeInit_53));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (TypeParamLocnsRefInit_52));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (PTIsRefInit_51));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_115));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_113));
  }
  {
    ProcTableInfoInit_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ProcTableInfoInit_55, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_top_gen_scalar_common_1[9])));
    MR_hl_field(2, ProcTableInfoInit_55, 1) = ((MR_Box) (Var_111));
  }
  ProcTableInfoDefn_56 = ml_backend__ml_top_gen__tabling_name_and_init_to_defn_5_f_0(MLDS_ProcLabel_26, (MR_Word) ((MR_Unsigned) 0U), Context_17, (MR_Integer) 0, ProcTableInfoInit_55);
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (ProcTableInfoDefn_56));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (STATE_VARIABLE_DataDefns_0_57));
  }
  Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), AnswerDefns_50, Var_155);
  *STATE_VARIABLE_DataDefns_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CallDefns_39, Var_154);
}

static MR_Word MR_CALL 
ml_backend__ml_top_gen__tabling_name_and_init_to_defn_5_f_0(
  MR_Word ProcLabel_7,
  MR_Word Id_8,
  MR_Word Context_9,
  MR_Word Constness_10,
  MR_Word Initializer_11)
{
  MR_Word GlobalVarDefn_12;
  MR_Word MLDS_Type_14;
  MR_Word Flags_15;
  MR_Word Name_16;

  {
    MLDS_Type_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MLDS_Type_14, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, MLDS_Type_14, 1) = ((MR_Box) (Id_8));
  }
  {
    Flags_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Flags_15, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Constness_10)));
  }
  {
    Name_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Name_16, 0) = ((MR_Box) (ProcLabel_7));
    MR_hl_field(2, Name_16, 1) = ((MR_Box) (Id_8));
  }
  {
    GlobalVarDefn_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GlobalVarDefn_12, 0) = ((MR_Box) (Name_16));
    MR_hl_field(0, GlobalVarDefn_12, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, GlobalVarDefn_12, 2) = ((MR_Box) (Flags_15));
    MR_hl_field(0, GlobalVarDefn_12, 3) = ((MR_Box) (MLDS_Type_14));
    MR_hl_field(0, GlobalVarDefn_12, 4) = ((MR_Box) (Initializer_11));
    MR_hl_field(0, GlobalVarDefn_12, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return GlobalVarDefn_12;
}

static MR_Word MR_CALL 
ml_backend__ml_top_gen__gen_init_tabling_name_3_f_0(
  MR_Word ModuleName_5,
  MR_Word ProcLabel_6,
  MR_Word TablingId_7)
{
  MR_Word Rval_8;
  MR_Word QualProcLabel_9;
  MR_Word Const_10;
  MR_Word Var_11;

  {
    QualProcLabel_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualProcLabel_9, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(0, QualProcLabel_9, 1) = ((MR_Box) (ProcLabel_6));
  }
  {
    Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 19U));
    MR_hl_field(3, Const_10, 1) = ((MR_Box) (QualProcLabel_9));
    MR_hl_field(3, Const_10, 2) = ((MR_Box) (TablingId_7));
  }
  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (Const_10));
  }
  {
    Rval_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Rval_8, 0) = ((MR_Box) (Var_11));
  }
  return Rval_8;
}

static void MR_CALL 
ml_backend__ml_top_gen__init_stats_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Init_6;

  ml_backend__ml_top_gen__init_stats_step_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Init_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Init_6));
}

static void MR_CALL 
ml_backend__ml_top_gen__init_stats_8_p_0(
  MR_Word MLDS_ModuleName_9,
  MR_Word MLDS_ProcLabel_10,
  MR_Word Context_11,
  MR_Word CallOrAnswer_12,
  MR_Word CurrOrPrev_13,
  MR_Word StepDescs_14,
  MR_Word * StatsInit_15,
  MR_Word * StatsStepDefns_16)
{
  MR_Word StatsId_17;
  MR_Word StatsStepsId_18;
  MR_Word StatsType_19;
  MR_Word StatsStepsType_20;
  MR_Word StatsStepsArrayRefInit_21;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;

  {
    StatsId_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, StatsId_17, 0) = (MR_Box) (((((MR_Unsigned) (CallOrAnswer_12) << 1)) | (MR_Unsigned) (CurrOrPrev_13)));
  }
  {
    StatsStepsId_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StatsStepsId_18, 0) = (MR_Box) (((((MR_Unsigned) (CallOrAnswer_12) << 1)) | (MR_Unsigned) (CurrOrPrev_13)));
  }
  {
    StatsType_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StatsType_19, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, StatsType_19, 1) = ((MR_Box) (StatsId_17));
  }
  {
    StatsStepsType_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StatsStepsType_20, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, StatsStepsType_20, 1) = ((MR_Box) (StatsStepsId_18));
  }
  if ((StepDescs_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *StatsStepDefns_16 = (MR_Word) ((MR_Unsigned) 0U);
    StatsStepsArrayRefInit_21 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(StatsStepsType_20);
  }
  else
  {
    MR_Word StatsStepsInits_24;
    MR_Word StatsStepsArrayInit_25;
    MR_Word StatsStepDefn_26;
    MR_Word Var_27;
    MR_Word Name_46;
    MR_Word QualProcLabel_48;
    MR_Word Const_49;
    MR_Word Var_50;

    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_4[2]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (ml_backend__ml_top_gen__init_stats_8_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (StatsStepsId_18));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_27, StepDescs_14, &StatsStepsInits_24);
    {
      StatsStepsArrayInit_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, StatsStepsArrayInit_25, 0) = ((MR_Box) (StatsStepsInits_24));
    }
    {
      Name_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Name_46, 0) = ((MR_Box) (MLDS_ProcLabel_10));
      MR_hl_field(2, Name_46, 1) = ((MR_Box) (StatsStepsId_18));
    }
    {
      StatsStepDefn_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StatsStepDefn_26, 0) = ((MR_Box) (Name_46));
      MR_hl_field(0, StatsStepDefn_26, 1) = ((MR_Box) (Context_11));
      MR_hl_field(0, StatsStepDefn_26, 2) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_3[2]));
      MR_hl_field(0, StatsStepDefn_26, 3) = ((MR_Box) (StatsStepsType_20));
      MR_hl_field(0, StatsStepDefn_26, 4) = ((MR_Box) (StatsStepsArrayInit_25));
      MR_hl_field(0, StatsStepDefn_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *StatsStepDefns_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StatsStepDefn_26));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      QualProcLabel_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, QualProcLabel_48, 0) = ((MR_Box) (MLDS_ModuleName_9));
      MR_hl_field(0, QualProcLabel_48, 1) = ((MR_Box) (MLDS_ProcLabel_10));
    }
    {
      Const_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Const_49, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(3, Const_49, 1) = ((MR_Box) (QualProcLabel_48));
      MR_hl_field(3, Const_49, 2) = ((MR_Box) (StatsStepsId_18));
    }
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (Const_49));
    }
    {
      StatsStepsArrayRefInit_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StatsStepsArrayRefInit_21, 0) = ((MR_Box) (Var_50));
    }
  }
  Var_32 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  Var_35 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (StatsStepsArrayRefInit_21));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *StatsInit_15 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (StatsType_19));
    MR_hl_field(2, base, 1) = ((MR_Box) (Var_31));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_top_gen__has_ptr_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((((MR_tag((MR_Word) Var_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_5, (MR_Integer) 0)))) == (MR_Integer) 7)));
  if (succeeded)
  {
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_top_gen__ml_gen_pragma_export_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_top_gen__has_ptr_type_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_pragma_export_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PragmaExportedProc_5,
  MR_Word * Defn_6)
{
  MR_bool succeeded;
  MR_Word Lang_7 = ((MR_Unsigned) ((MR_hl_field(0, PragmaExportedProc_5, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, PragmaExportedProc_5, (MR_Integer) 1))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, PragmaExportedProc_5, (MR_Integer) 2))));
  MR_String ExportName_10 = ((MR_String) ((MR_hl_field(0, PragmaExportedProc_5, (MR_Integer) 3))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, PragmaExportedProc_5, (MR_Integer) 4))));
  MR_Word PredProcId_12;
  MR_Word ModuleName_13;
  MR_Word PlainName_14;
  MR_Word MLDS_Name_15;
  MR_Word FuncParams_16;
  MR_Word PredInfo_17;
  MR_Word UnivQTVars_18;
  MR_Word Var_19;
  MR_Word Globals_20;
  MR_Word Target_21;
  MR_Word FuncParamsByRef_25;
  MR_Word GlobalsByRef_22;
  MR_Word ModuleInfoByRef_23;
  MR_Word Args_26;
  MR_Word ReturnTypes_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word _ArgTuples_24;

  {
    PredProcId_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_12, 0) = ((MR_Box) (PredId_8));
    MR_hl_field(0, PredProcId_12, 1) = ((MR_Box) (ProcId_9));
  }
  ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_4, PredProcId_12, &ModuleName_13, &PlainName_14);
  Var_19 = (MR_Word) ((MR_Word) (PlainName_14));
  {
    MLDS_Name_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MLDS_Name_15, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, MLDS_Name_15, 1) = ((MR_Box) (Var_19));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_20);
  libs__globals__get_target_2_p_0(Globals_20, &Target_21);
  switch (Target_21) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
    Var_29 = (MR_Integer) 310;
    Var_30 = (MR_Word) (MR_mkword(1, &ml_backend__ml_top_gen_scalar_common_3[0]));
    libs__globals__set_option_4_p_0(Var_29, Var_30, Globals_20, &GlobalsByRef_22);
    hlds__hlds_module__module_info_set_globals_3_p_0(GlobalsByRef_22, ModuleInfo_4, &ModuleInfoByRef_23);
    ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfoByRef_23, PredProcId_12, &_ArgTuples_24, &FuncParamsByRef_25);
    Args_26 = ((MR_Word) ((MR_hl_field(0, FuncParamsByRef_25, (MR_Integer) 0))));
    ReturnTypes_27 = ((MR_Word) ((MR_hl_field(0, FuncParamsByRef_25, (MR_Integer) 1))));
    if ((ReturnTypes_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OutArgs_28;
      MR_Integer Var_32;

      mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_2[3]), Args_26, &OutArgs_28);
      Var_32 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), OutArgs_28);
      succeeded = (Var_32 > (MR_Integer) 1);
    }
    else
      succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncParams_16 = FuncParamsByRef_25;
  else
  {
    MR_Word _ArgTuples_34;

    ml_backend__ml_args_util__ml_gen_proc_params_no_gc_stmts_4_p_0(ModuleInfo_4, PredProcId_12, &_ArgTuples_34, &FuncParams_16);
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_8, &PredInfo_17);
  hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(PredInfo_17, &UnivQTVars_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Defn_6 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExportName_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (MLDS_Name_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (FuncParams_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (UnivQTVars_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_11));
  }
}

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_foreign_code_lang_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Defn_6;

  ml_backend__ml_top_gen__ml_gen_pragma_export_proc_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Defn_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Defn_6));
}

static void MR_CALL 
ml_backend__ml_top_gen__ml_gen_foreign_code_lang_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ForeignDeclCodes_10,
  MR_Word ForeignBodyCodes_11,
  MR_Word WantedForeignImports_12,
  MR_Word ForeignExports_13,
  MR_Word Lang_14,
  MR_Word STATE_VARIABLE_Map_0_24,
  MR_Word * STATE_VARIABLE_Map_25)
{
  MR_Word WantedForeignDeclCodes_16;
  MR_Word WantedForeignBodyCodes_18;
  MR_Word WantedForeignExports_20;
  MR_Word MLDSWantedForeignExports_22;
  MR_Word MLDS_ForeignCode_23;
  MR_Word Var_26;
  MR_Word _OtherForeignDeclCodes_17;
  MR_Word _OtherForeignBodyCodes_19;
  MR_Word _OtherForeignExports_21;

  backend_libs__foreign__filter_decls_4_p_0(Lang_14, ForeignDeclCodes_10, &WantedForeignDeclCodes_16, &_OtherForeignDeclCodes_17);
  backend_libs__foreign__filter_bodys_4_p_0(Lang_14, ForeignBodyCodes_11, &WantedForeignBodyCodes_18, &_OtherForeignBodyCodes_19);
  backend_libs__foreign__filter_exports_4_p_0(Lang_14, ForeignExports_13, &WantedForeignExports_20, &_OtherForeignExports_21);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_4[1]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__ml_top_gen__ml_gen_foreign_code_lang_8_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), Var_26, WantedForeignExports_20, &MLDSWantedForeignExports_22);
  {
    MLDS_ForeignCode_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MLDS_ForeignCode_23, 0) = ((MR_Box) (WantedForeignDeclCodes_16));
    MR_hl_field(0, MLDS_ForeignCode_23, 1) = ((MR_Box) (WantedForeignBodyCodes_18));
    MR_hl_field(0, MLDS_ForeignCode_23, 2) = ((MR_Box) (WantedForeignImports_12));
    MR_hl_field(0, MLDS_ForeignCode_23, 3) = ((MR_Box) (MLDSWantedForeignExports_22));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), ((MR_Box) (Lang_14)), ((MR_Box) (MLDS_ForeignCode_23)), STATE_VARIABLE_Map_0_24, STATE_VARIABLE_Map_25);
}

static void MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_DataDefns_58;

  ml_backend__ml_top_gen__ml_gen_add_table_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_DataDefns_58);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_DataDefns_58));
}

static MR_bool MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_top_gen__IntroducedFrom__pred__ml_gen_table_structs__262__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_11;

  conv3_LambdaHeadVar__2_11 = ml_backend__ml_top_gen__IntroducedFrom__func__ml_gen_imports__148__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_11));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Map_25;

  ml_backend__ml_top_gen__ml_gen_foreign_code_lang_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Map_25);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Map_25));
}

static MR_Box MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__prog_data_foreign__get_lang_fim_specs_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_top_gen__ml_code_gen_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Target_9,
  MR_Word * MLDS_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_bool succeeded;
  MR_Word ModuleName_13;
  MR_Word ForeignCode_14;
  MR_Word Imports_15;
  MR_Word TypeDefns_16;
  MR_Word TableStructDefns_17;
  MR_Word GlobalData0_18;
  MR_Word ConstStructMap_19;
  MR_Word GlobalData1_20;
  MR_Word ExportedEnums_21;
  MR_Word InitPreds_22;
  MR_Word FinalPreds_23;
  MR_Word PredDefns_24;
  MR_Word GlobalData_25;
  MR_Word ForeignDeclCodeUserCord_30;
  MR_Word ForeignDeclCodeAuxCord_31;
  MR_Word ForeignBodyCodeCord_32;
  MR_Word CJCsEFIMs_33;
  MR_Word ForeignExportsCord_34;
  MR_Word ForeignDeclCodes_35;
  MR_Word ForeignBodyCodes_36;
  MR_Word ForeignExports_37;
  MR_Word Globals_38;
  MR_Word BackendForeignLanguages_39;
  MR_Word WantedForeignImports_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word AllImports0_55;
  MR_Word ThisModule_56;
  MR_Word AllImports_57;
  MR_Word Var_59;
  MR_Word TableStructMap_62;
  MR_Word TableStructs_63;
  MR_Word Globals_77;
  MR_Word UnboxedFloats_78;
  MR_Word HaveUnboxedFloats_79;
  MR_Word UnboxedInt64s_80;
  MR_Word HaveUnboxedInt64s_81;
  MR_Box conv2_ForeignCode_14;

  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ModuleName_13);
  hlds__hlds_module__module_info_get_foreign_decl_codes_user_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ForeignDeclCodeUserCord_30);
  hlds__hlds_module__module_info_get_foreign_decl_codes_aux_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ForeignDeclCodeAuxCord_31);
  hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ForeignBodyCodeCord_32);
  hlds__hlds_module__module_info_get_c_j_cs_fims_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &CJCsEFIMs_33);
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ForeignExportsCord_34);
  Var_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodeUserCord_30, ForeignDeclCodeAuxCord_31);
  ForeignDeclCodes_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), Var_41);
  ForeignBodyCodes_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodeCord_32);
  ForeignExports_37 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ForeignExportsCord_34);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_38);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_38, &BackendForeignLanguages_39);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_4[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (ml_backend__ml_top_gen__ml_code_gen_7_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (CJCsEFIMs_33));
  }
  Var_43 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_1[0]), Var_44, BackendForeignLanguages_39);
  Var_42 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_43);
  WantedForeignImports_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_42);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_5[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__ml_top_gen__ml_code_gen_7_p_0_2));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (ForeignDeclCodes_35));
    MR_hl_field(0, Var_45, 5) = ((MR_Box) (ForeignBodyCodes_36));
    MR_hl_field(0, Var_45, 6) = ((MR_Box) (WantedForeignImports_40));
    MR_hl_field(0, Var_45, 7) = ((MR_Box) (ForeignExports_37));
  }
  Var_46 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0));
  mercury__list__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_2[0]), Var_45, BackendForeignLanguages_39, ((MR_Box) (Var_46)), &conv2_ForeignCode_14);
  ForeignCode_14 = ((MR_Word) (conv2_ForeignCode_14));
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &AllImports0_55);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ThisModule_56);
  AllImports_57 = mercury__set__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllImports0_55, ((MR_Box) (ThisModule_56)));
  Var_59 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllImports_57);
  Imports_15 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_2[2]), Var_59);
  ml_backend__ml_type_gen__ml_gen_types_3_p_0(STATE_VARIABLE_ModuleInfo_0_26, Target_9, &TypeDefns_16);
  hlds__hlds_module__module_info_get_table_struct_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &TableStructMap_62);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_62, &TableStructs_63);
  if ((TableStructs_63 == (MR_Word) ((MR_Unsigned) 0U)))
    TableStructDefns_17 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Globals_64;
    MR_Word GC_Method_65;
    MR_Word Var_66;
    MR_Word Var_70;
    MR_Box conv5_TableStructDefns_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_64);
    libs__globals__get_gc_method_2_p_0(Globals_64, &GC_Method_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_6[1]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (ml_backend__ml_top_gen__ml_code_gen_7_p_0_4));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (GC_Method_65));
      MR_hl_field(0, Var_66, 4) = ((MR_Box) ((MR_Integer) 5));
    }
    mercury__require__expect_not_3_p_0(Var_66, (MR_String) "predicate \140ml_backend.ml_top_gen.ml_gen_table_structs\'/2", (MR_String) "tabling and \140--gc accurate\'");
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ml_backend__ml_top_gen_scalar_common_7[0]));
      MR_hl_field(0, Var_70, 1) = ((MR_Box) (ml_backend__ml_top_gen__ml_code_gen_7_p_0_5));
      MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_70, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_top_gen_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_top_gen_scalar_common_1[1]), Var_70, TableStructs_63, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_TableStructDefns_17);
    TableStructDefns_17 = ((MR_Word) (conv5_TableStructDefns_17));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_77);
  libs__globals__lookup_bool_option_3_p_0(Globals_77, (MR_Integer) 288, &UnboxedFloats_78);
  switch (UnboxedFloats_78) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HaveUnboxedFloats_79 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      HaveUnboxedFloats_79 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_77, (MR_Integer) 289, &UnboxedInt64s_80);
  switch (UnboxedInt64s_80) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HaveUnboxedInt64s_81 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      HaveUnboxedInt64s_81 = (MR_Integer) 0;
      break;
  }
  GlobalData0_18 = ml_backend__ml_global_data__ml_global_data_init_4_f_0(Target_9, (MR_Integer) 1, HaveUnboxedFloats_79, HaveUnboxedInt64s_81);
  ml_backend__ml_unify_gen_construct__ml_generate_const_structs_5_p_0(STATE_VARIABLE_ModuleInfo_0_26, Target_9, &ConstStructMap_19, GlobalData0_18, &GlobalData1_20);
  ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ExportedEnums_21);
  hlds__hlds_module__module_info_user_init_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &InitPreds_22);
  hlds__hlds_module__module_info_user_final_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &FinalPreds_23);
  ml_backend__ml_proc_gen__ml_gen_preds_10_p_0(ProgressStream_8, Target_9, ConstStructMap_19, &PredDefns_24, GlobalData1_20, &GlobalData_25, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *MLDS_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (Imports_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (GlobalData_25));
    MR_hl_field(0, base, 3) = ((MR_Box) (TypeDefns_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (TableStructDefns_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (PredDefns_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (InitPreds_22));
    MR_hl_field(0, base, 7) = ((MR_Box) (FinalPreds_23));
    MR_hl_field(0, base, 8) = ((MR_Box) (ForeignCode_14));
    MR_hl_field(0, base, 9) = ((MR_Box) (ExportedEnums_21));
  }
}

void mercury__ml_backend__ml_top_gen__init(void)
{
}

void mercury__ml_backend__ml_top_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_top_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_top_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_top_gen.
