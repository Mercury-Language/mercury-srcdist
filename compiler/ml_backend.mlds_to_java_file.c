/*
** Automatically generated from `mlds_to_java_file.m'
** by the Mercury compiler,
** version rotd-2023-07-02
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


// :- module ml_backend.mlds_to_java_file.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_file__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_file.mih"


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
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_rename_classes.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_class.mih"
#include "ml_backend.mlds_to_java_export.mih"
#include "ml_backend.mlds_to_java_func.mih"
#include "ml_backend.mlds_to_java_global.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_java_wrap.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java_file__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__169__1_1_f_0(
  MR_Word LambdaHeadVar__1_96);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_env_var_definition_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String EnvVarName_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_final_for_java_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_String FinalPred_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_init_for_java_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_String InitPred_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_body_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_decl_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DeclCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_import_comment_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word Import_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MLDS_8,
  MR_Word Stream_9,
  MR_Word * Errors_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word FinalPreds_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word InitPreds_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ModuleName_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word MercuryModuleName_12,
  MR_Word Imports_13,
  MR_Word ForeignDecls_14,
  MR_Word FuncDefns_15,
  MR_Word * Errors_16);

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String ClassName_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__make_code_addr_map_for_java_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_1[25][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_2[11][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_4[5][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_5[3][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_6[3][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_7[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_8[5][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_9[2][10];




static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_1[25][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "java.lang.System.exit(jmercury.runtime.JavaInternal.exit_status);")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stderr_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stdout_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.runMain(run_main);")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "};")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "    }")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "  }\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "    }\n")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) " init]\");\n")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "      public void run() {")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "    new java.lang.Runnable() {")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "  jmercury.runtime.JavaInternal.register_finaliser(")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "static {")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "  );")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "    }")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "      }")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "start")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[12])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "end")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[12])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[23])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[1])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[4])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[4])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".java")))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_4[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_5[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_6[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_7[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_8[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_9[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java_file__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds_to_java_file__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__169__1_1_f_0(
  MR_Word LambdaHeadVar__1_96)
{
  MR_Word LambdaHeadVar__2_97 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_96, (MR_Integer) 4))));

  return LambdaHeadVar__2_97;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_env_var_definition_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String EnvVarName_8)
{
  MR_String IndentStr_10;

  IndentStr_10 = libs__indent__indent2_string_1_f_0(Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "private static int mercury_envvar_");
  mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " =\n");
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "java.lang.System.getenv(\"");
  mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\") == null \? 0 : 1;\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_final_for_java_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_String FinalPred_8)
{
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_7);
  mercury__io__write_string_4_p_0(Stream_6, FinalPred_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "();\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_init_for_java_5_p_0(
  MR_Word Stream_6,
  MR_String IndentStr_7,
  MR_String InitPred_8)
{
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_7);
  mercury__io__write_string_4_p_0(Stream_6, InitPred_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "();\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_body_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, ForeignBodyCode_9, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_13 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_9, (MR_Integer) 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_9, (MR_Integer) 2))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_body_code\'/6", (MR_String) "foreign code other than Java");
        return;
      }
      break;
    case (MR_Integer) 2:
      if (((MR_tag((MR_Word) LiteralOrInclude_13)) == (MR_Integer) 1))
      {
        MR_String IncludeFile_21 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_13, (MR_Integer) 0))));
        MR_String SourceFileName_22 = ((MR_String) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));
        MR_String IncludePath_23;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_32;

        parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_22, IncludeFile_21, &IncludePath_23);
        Var_25 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (IncludePath_23));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_8, Var_25, (MR_Integer) 0, Var_27);
        libs__file_util__write_include_file_contents_5_p_0(Stream_8, IncludePath_23, Res_10);
        mercury__io__nl_3_p_0(Stream_8);
        Var_32 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_8, Var_32, (MR_Integer) 1, Context_14);
      }
      else
      {
        MR_String Code_20 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_13, (MR_Integer) 0))));

        ml_backend__mlds_to_java_util__write_string_with_context_block_7_p_0(Info_7, Stream_8, (MR_Integer) 0, Code_20, Context_14);
        *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_decl_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DeclCode_9,
  MR_Word * Res_10)
{
  MR_Word Lang_12 = ((((MR_Unsigned) ((MR_hl_field(0, DeclCode_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_14 = ((MR_Word) ((MR_hl_field(0, DeclCode_9, (MR_Integer) 1))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, DeclCode_9, (MR_Integer) 2))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_decl_code\'/6", (MR_String) "foreign decl other than Java");
        return;
      }
      break;
    case (MR_Integer) 2:
      if (((MR_tag((MR_Word) LiteralOrInclude_14)) == (MR_Integer) 1))
      {
        MR_String IncludeFile_22 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_14, (MR_Integer) 0))));
        MR_String SourceFileName_23 = ((MR_String) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));
        MR_String IncludePath_24;
        MR_Word Var_26;
        MR_Word Var_28;
        MR_Word Var_33;

        parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_23, IncludeFile_22, &IncludePath_24);
        Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (IncludePath_24));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_8, Var_26, (MR_Integer) 0, Var_28);
        libs__file_util__write_include_file_contents_5_p_0(Stream_8, IncludePath_24, Res_10);
        mercury__io__nl_3_p_0(Stream_8);
        Var_33 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_8, Var_33, (MR_Integer) 1, Context_15);
      }
      else
      {
        MR_String Code_21 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_14, (MR_Integer) 0))));

        ml_backend__mlds_to_java_util__write_string_with_context_block_7_p_0(Info_7, Stream_8, (MR_Integer) 0, Code_21, Context_15);
        *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_import_comment_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word Import_6)
{
  MR_Word ImportType_8 = ((MR_Unsigned) ((MR_hl_field(0, Import_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(0, Import_6, (MR_Integer) 1))));
  MR_String ClassFile_10;

  switch (ImportType_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_import_comment_for_java\'/4", (MR_String) "import_type \140user_visible_interface\' in Java backend");
        return;
      }
      break;
  }
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_9, (MR_Integer) 0, (MR_String) "__", &ClassFile_10);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "// import ");
  mercury__io__write_string_4_p_0(Stream_5, ClassFile_10);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_env_var_definition_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv25_HeadVar__3_3;

  ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv25_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_HeadVar__3_3;

  ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv23_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_enum_class_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_global_var_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv18_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv18_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv18_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_Res_10;

  ml_backend__mlds_to_java_file__output_java_body_code_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv16_Res_10);
  *wrapper_arg_2 = ((MR_Box) (conv16_Res_10));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__3_3;

  ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_HeadVar__3_3;

  ml_backend__ml_rename_classes__rename_class_names_in_global_var_defn_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv13_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;

  ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__2_2;
  MR_Word conv9_HeadVar__4_4;

  ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv9_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv9_HeadVar__4_4));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;
  MR_Word conv6_HeadVar__4_4;

  ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv6_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv6_HeadVar__4_4));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;
  MR_Word conv3_HeadVar__5_5;

  ml_backend__mlds_to_java_wrap__generate_addr_wrapper_class_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
}

static MR_Box MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_97;

  conv0_LambdaHeadVar__2_97 = ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__169__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_97));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MLDS_8,
  MR_Word Stream_9,
  MR_Word * Errors_10)
{
  MR_bool succeeded;
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 0))));
  MR_Word Imports_13 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 1))));
  MR_Word GlobalData_14 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 2))));
  MR_Word ClassDefns0_15 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 3))));
  MR_Word EnumDefns_16 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 4))));
  MR_Word TableStructDefns0_17 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 5))));
  MR_Word ProcDefns0_18 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 6))));
  MR_Word InitPreds_19 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 7))));
  MR_Word FinalPreds_20 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 8))));
  MR_Word AllForeignCode_21 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 9))));
  MR_Word ExportedEnums_22 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 10))));
  MR_Word ScalarCellGroupMap_23;
  MR_Word VectorCellGroupMap_24;
  MR_Word RttiDefns0_26;
  MR_Word CellDefns0_27;
  MR_Word ClosureWrapperFuncDefns0_28;
  MR_Word MLDS_ModuleName_29;
  MR_Word ScalarCellGroups_31;
  MR_Word ScalarCellRows_32;
  MR_Word RevSeqNumsCodeAddrs_36;
  MR_Word RevCodeAddrs_37;
  MR_Word CodeAddrsMap_38;
  MR_Word CodeAddrsAssocList_39;
  MR_Word WrapperClassDefns0_40;
  MR_Word AddrOfMap_41;
  MR_Word ClassDefns1_42;
  MR_Word RenamingMap1_43;
  MR_Word WrapperClassDefns1_44;
  MR_Word RenamingMap_45;
  MR_Word ClassDefns_46;
  MR_Word WrapperClassDefns_47;
  MR_Word RttiDefns_48;
  MR_Word CellDefns_49;
  MR_Word TableStructDefns_50;
  MR_Word ClosureWrapperFuncDefns_51;
  MR_Word ProcDefns_52;
  MR_Word ForeignDeclCodes_55;
  MR_Word ForeignBodyCodes_56;
  MR_Word ExportDefns_58;
  MR_String SourceFileName_59;
  MR_Word Info_60;
  MR_Word ForeignDeclErrors_61;
  MR_Word ForeignCodeResults_62;
  MR_Word ForeignCodeErrors_63;
  MR_Word SortedFuncDefns_66;
  MR_Word SortedClassDefns_69;
  MR_Word SortedEnumDefns_72;
  MR_Word EnvVarNamesSet0_83;
  MR_Word EnvVarNamesSet1_84;
  MR_Word EnvVarNamesSet_85;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_88_88;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_89_89;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_90_90;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_91_91;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_92_92;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_93_93;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_94_94;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_99_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_104;
  MR_Word Var_116;
  MR_Word Var_144;
  MR_Word Var_151;
  MR_Word _AllocIdMap_25;
  MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_99_99;
  MR_Box conv5_AddrOfMap_41;
  MR_Box conv8_RenamingMap1_43;
  MR_Box conv11_RenamingMap_45;
  MR_Word ForeignCode_54;
  MR_Box conv15_ForeignCode_54;
  MR_Box conv17_STATE_VARIABLE_IO_117_117;
  MR_Box conv24_EnvVarNamesSet1_84;
  MR_Box conv26_EnvVarNamesSet_85;

  ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_14, &ScalarCellGroupMap_23, &VectorCellGroupMap_24, &_AllocIdMap_25, &RttiDefns0_26, &CellDefns0_27, &ClosureWrapperFuncDefns0_28);
  MLDS_ModuleName_29 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
  STATE_VARIABLE_CodeAddrsInConsts_88_88 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
  ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(ClassDefns0_15, STATE_VARIABLE_CodeAddrsInConsts_88_88, &STATE_VARIABLE_CodeAddrsInConsts_89_89);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns0_26, STATE_VARIABLE_CodeAddrsInConsts_89_89, &STATE_VARIABLE_CodeAddrsInConsts_90_90);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns0_27, STATE_VARIABLE_CodeAddrsInConsts_90_90, &STATE_VARIABLE_CodeAddrsInConsts_91_91);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns0_17, STATE_VARIABLE_CodeAddrsInConsts_91_91, &STATE_VARIABLE_CodeAddrsInConsts_92_92);
  ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns0_28, STATE_VARIABLE_CodeAddrsInConsts_92_92, &STATE_VARIABLE_CodeAddrsInConsts_93_93);
  ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns0_18, STATE_VARIABLE_CodeAddrsInConsts_93_93, &STATE_VARIABLE_CodeAddrsInConsts_94_94);
  mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_23, &ScalarCellGroups_31);
  ScalarCellRows_32 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[4]), ScalarCellGroups_31);
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[5]), ScalarCellRows_32, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_94_94)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_99_99);
  STATE_VARIABLE_CodeAddrsInConsts_99_99 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_99_99));
  RevSeqNumsCodeAddrs_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CodeAddrsInConsts_99_99, (MR_Integer) 2))));
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), RevSeqNumsCodeAddrs_36, &RevCodeAddrs_37);
  Var_100 = mercury__multi_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0));
  ml_backend__mlds_to_java_file__make_code_addr_map_for_java_3_p_0(RevCodeAddrs_37, Var_100, &CodeAddrsMap_38);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[1]), CodeAddrsMap_38, &CodeAddrsAssocList_39);
  {
    Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_101, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[1]));
    MR_hl_field(0, Var_101, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_3));
    MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_101, 3) = ((MR_Box) (MLDS_ModuleName_29));
  }
  Var_102 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[1]), Var_101, CodeAddrsAssocList_39, &WrapperClassDefns0_40, ((MR_Box) (Var_102)), &conv5_AddrOfMap_41);
  AddrOfMap_41 = ((MR_Word) (conv5_AddrOfMap_41));
  Var_104 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[6]), ClassDefns0_15, &ClassDefns1_42, ((MR_Box) (Var_104)), &conv8_RenamingMap1_43);
  RenamingMap1_43 = ((MR_Word) (conv8_RenamingMap1_43));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[7]), WrapperClassDefns0_40, &WrapperClassDefns1_44, ((MR_Box) (RenamingMap1_43)), &conv11_RenamingMap_45);
  RenamingMap_45 = ((MR_Word) (conv11_RenamingMap_45));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenamingMap_45);
  if (succeeded)
  {
    ClassDefns_46 = ClassDefns0_15;
    WrapperClassDefns_47 = WrapperClassDefns0_40;
    RttiDefns_48 = RttiDefns0_26;
    CellDefns_49 = CellDefns0_27;
    TableStructDefns_50 = TableStructDefns0_17;
    ClosureWrapperFuncDefns_51 = ClosureWrapperFuncDefns0_28;
    ProcDefns_52 = ProcDefns0_18;
  }
  else
  {
    MR_Word Renaming_53;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_111;

    {
      Renaming_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Renaming_53, 0) = ((MR_Box) (MLDS_ModuleName_29));
      MR_hl_field(0, Renaming_53, 1) = ((MR_Box) (RenamingMap_45));
    }
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_106, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[1]));
      MR_hl_field(0, Var_106, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_6));
      MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_106, 3) = ((MR_Box) (Renaming_53));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_106, ClassDefns1_42, &ClassDefns_46);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_106, WrapperClassDefns1_44, &WrapperClassDefns_47);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_108, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[2]));
      MR_hl_field(0, Var_108, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_7));
      MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_108, 3) = ((MR_Box) (Renaming_53));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_108, RttiDefns0_26, &RttiDefns_48);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_108, CellDefns0_27, &CellDefns_49);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_108, TableStructDefns0_17, &TableStructDefns_50);
    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_111, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[3]));
      MR_hl_field(0, Var_111, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_8));
      MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_111, 3) = ((MR_Box) (Renaming_53));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_111, ClosureWrapperFuncDefns0_28, &ClosureWrapperFuncDefns_51);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_111, ProcDefns0_18, &ProcDefns_52);
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_21, ((MR_Box) ((MR_Integer) 2)), &conv15_ForeignCode_54);
  if (succeeded)
  {
    ForeignCode_54 = ((MR_Word) (conv15_ForeignCode_54));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ForeignDeclCodes_55 = ((MR_Word) ((MR_hl_field(0, ForeignCode_54, (MR_Integer) 0))));
    ForeignBodyCodes_56 = ((MR_Word) ((MR_hl_field(0, ForeignCode_54, (MR_Integer) 1))));
    ExportDefns_58 = ((MR_Word) ((MR_hl_field(0, ForeignCode_54, (MR_Integer) 3))));
  }
  else
  {
    ForeignDeclCodes_55 = (MR_Word) ((MR_Unsigned) 0U);
    ForeignBodyCodes_56 = (MR_Word) ((MR_Unsigned) 0U);
    ExportDefns_58 = (MR_Word) ((MR_Unsigned) 0U);
  }
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_12, &SourceFileName_59);
  Info_60 = ml_backend__mlds_to_java_util__init_java_out_info_3_f_0(ModuleInfo_7, SourceFileName_59, AddrOfMap_41);
  ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0(Info_60, Stream_9, ModuleName_12, Imports_13, ForeignDeclCodes_55, ProcDefns_52, &ForeignDeclErrors_61);
  {
    Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_116, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[2]));
    MR_hl_field(0, Var_116, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_9));
    MR_hl_field(0, Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_116, 3) = ((MR_Box) (Info_60));
    MR_hl_field(0, Var_116, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_116, ForeignBodyCodes_56, &ForeignCodeResults_62, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_117_117);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[8]), ForeignCodeResults_62, &ForeignCodeErrors_63);
  if (!((RttiDefns_48 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_121;
    MR_Box conv19_STATE_VARIABLE_IO_122_122;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// RttiDefns\n");
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_121, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[0]));
      MR_hl_field(0, Var_121, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_11));
      MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_121, 3) = ((MR_Box) (Info_60));
      MR_hl_field(0, Var_121, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_121, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_121, 6) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, RttiDefns_48, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_122_122);
    ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, RttiDefns_48);
  }
  succeeded = (CellDefns_49 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (TableStructDefns_50 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    MR_Word Var_134;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Cell and tabling definitions\n");
    ml_backend__mlds_to_java_global__output_global_var_decls_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, CellDefns_49);
    ml_backend__mlds_to_java_global__output_global_var_decls_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, TableStructDefns_50);
    Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_49, TableStructDefns_50);
    ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, Var_134);
  }
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_23);
  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Scalar common data\n");
    ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, ScalarCellGroupMap_23);
  }
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), VectorCellGroupMap_24);
  if (!(succeeded))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Vector common data\n");
    ml_backend__mlds_to_java_global__output_vector_common_data_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, VectorCellGroupMap_24);
  }
  Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_51, ProcDefns_52);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_144, &SortedFuncDefns_66);
  if (!((SortedFuncDefns_66 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_147;
    MR_Box conv20_STATE_VARIABLE_IO_148_148;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Function definitions\n");
    {
      Var_147 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_147, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[1]));
      MR_hl_field(0, Var_147, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_12));
      MR_hl_field(0, Var_147, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_147, 3) = ((MR_Box) (Info_60));
      MR_hl_field(0, Var_147, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_147, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_147, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_147, SortedFuncDefns_66, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_148_148);
  }
  Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), WrapperClassDefns_47, ClassDefns_46);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_151, &SortedClassDefns_69);
  if (!((SortedClassDefns_69 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_154;
    MR_Box conv21_STATE_VARIABLE_IO_155_155;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Class definitions\n");
    {
      Var_154 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_154, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[3]));
      MR_hl_field(0, Var_154, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_13));
      MR_hl_field(0, Var_154, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_154, 3) = ((MR_Box) (Info_60));
      MR_hl_field(0, Var_154, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_154, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_154, SortedClassDefns_69, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_155_155);
  }
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0), EnumDefns_16, &SortedEnumDefns_72);
  if (!((SortedEnumDefns_72 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_159;
    MR_Box conv22_STATE_VARIABLE_IO_160_160;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Enum class definitions\n");
    {
      Var_159 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_159, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[4]));
      MR_hl_field(0, Var_159, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_14));
      MR_hl_field(0, Var_159, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_159, 3) = ((MR_Box) (Info_60));
      MR_hl_field(0, Var_159, 4) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_159, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_159, SortedEnumDefns_72, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_160_160);
  }
  if (!((ExportDefns_58 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// ExportDefns\n");
    ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, ExportDefns_58);
  }
  if (!((ExportedEnums_22 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// ExportedEnums\n");
    ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0(Info_60, Stream_9, (MR_Integer) 1, ExportedEnums_22);
  }
  if (!((InitPreds_19 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// InitPreds\n");
    ml_backend__mlds_to_java_file__output_inits_for_java_5_p_0(Stream_9, (MR_Integer) 1, InitPreds_19);
  }
  if (!((FinalPreds_20 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// FinalPreds\n");
    ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0(Stream_9, (MR_Integer) 1, FinalPreds_20);
  }
  mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_83);
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[9]), ProcDefns_52, ((MR_Box) (EnvVarNamesSet0_83)), &conv24_EnvVarNamesSet1_84);
  EnvVarNamesSet1_84 = ((MR_Word) (conv24_EnvVarNamesSet1_84));
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[10]), ClosureWrapperFuncDefns_51, ((MR_Box) (EnvVarNamesSet1_84)), &conv26_EnvVarNamesSet_85);
  EnvVarNamesSet_85 = ((MR_Word) (conv26_EnvVarNamesSet_85));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNamesSet_85);
  if (!(succeeded))
  {
    MR_Word Var_182;
    MR_Box conv27_STATE_VARIABLE_IO_183_183;

    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// EnvVarNames\n");
    {
      Var_182 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_182, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[2]));
      MR_hl_field(0, Var_182, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_17));
      MR_hl_field(0, Var_182, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_182, 3) = ((MR_Box) (Stream_9));
      MR_hl_field(0, Var_182, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_182, EnvVarNamesSet_85, ((MR_Box) ((MR_Integer) 0)), &conv27_STATE_VARIABLE_IO_183_183);
  }
  ml_backend__mlds_to_java_file__output_src_end_for_java_5_p_0(Info_60, Stream_9, ModuleName_12);
  *Errors_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_61, ForeignCodeErrors_63);
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_final_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_target_util__write_indentstr_line_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word FinalPreds_8)
{
  if (!((FinalPreds_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String IndentStr_14;
    MR_String Indent4Str_15;
    MR_Integer Var_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Box conv0_STATE_VARIABLE_IO_37_37;
    MR_Box conv1_STATE_VARIABLE_IO_39_39;
    MR_Box conv2_STATE_VARIABLE_IO_17;

    IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_7);
    Var_34 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 4);
    Indent4Str_15 = libs__indent__indent2_string_1_f_0(Var_34);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_1));
      MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_36, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_36, 4) = ((MR_Box) (IndentStr_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[16])), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_37_37);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_2));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (Indent4Str_15));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, FinalPreds_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[20])), ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_17);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_init_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word InitPreds_8)
{
  if (!((InitPreds_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String IndentStr_12;
    MR_String Indent1Str_13;
    MR_Integer Var_16;
    MR_Word Var_23;
    MR_Box conv0_STATE_VARIABLE_IO_24_24;

    IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_7);
    Var_16 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    Indent1Str_13 = libs__indent__indent2_string_1_f_0(Var_16);
    mercury__io__write_string_4_p_0(Stream_6, IndentStr_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static {\n");
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_inits_for_java_5_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_23, 4) = ((MR_Box) (Indent1Str_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, InitPreds_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_24);
    mercury__io__write_string_4_p_0(Stream_6, IndentStr_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word ModuleName_8)
{
  MR_Word AutoComments_10;
  MR_Word DebugClassInit_36;

  DebugClassInit_36 = ml_backend__mlds_to_java_util__get_debug_class_init_1_f_0(Info_6);
  switch (DebugClassInit_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_String Var_45;
        MR_Box conv0_STATE_VARIABLE_IO_14_14;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[1]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_end_for_java_5_p_0_1));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Stream_7));
        }
        Var_45 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_8);
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[24])));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) ((MR_String) "  static {\n"));
          MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, Var_38, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n");
  AutoComments_10 = ((((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  switch (AutoComments_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_21;

        Var_21 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(ModuleName_8);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "// :- end_module ");
        mercury__io__write_string_4_p_0(Stream_7, Var_21);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Res_10;

  ml_backend__mlds_to_java_file__output_java_decl_code_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_Res_10));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_import_comment_for_java_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word MercuryModuleName_12,
  MR_Word Imports_13,
  MR_Word ForeignDecls_14,
  MR_Word FuncDefns_15,
  MR_Word * Errors_16)
{
  MR_bool succeeded;
  MR_Word ForeignDeclResults_18;
  MR_String ClassName_19;
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Info_10, (MR_Integer) 3))));
  MR_String Var_28;
  MR_Word Var_33;
  MR_Word AutoComments_69;
  MR_Word DebugClassInit_83;
  MR_Box conv2_STATE_VARIABLE_IO_34_34;

  ml_backend__mlds_to_target_util__output_auto_gen_comment_4_p_0(Stream_11, Var_22);
  Var_28 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(MercuryModuleName_12);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "// :- module ");
  mercury__io__write_string_4_p_0(Stream_11, Var_28);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ".\n\n");
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "package jmercury;\n");
  AutoComments_69 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  switch (AutoComments_69) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_70;
        MR_Box conv0_STATE_VARIABLE_IO_16_71;

        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0]));
          MR_hl_field(0, Var_70, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_1));
          MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_70, 3) = ((MR_Box) (Stream_11));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, Imports_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_71);
        if (!((Imports_13 == (MR_Word) ((MR_Unsigned) 0U))))
          mercury__io__nl_3_p_0(Stream_11);
      }
      break;
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Info_10));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (Stream_11));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, ForeignDecls_14, &ForeignDeclResults_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_34_34);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[3]), ForeignDeclResults_18, Errors_16);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "public class ");
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MercuryModuleName_12, (MR_Integer) 0, (MR_String) "__", &ClassName_19);
  mercury__io__write_string_4_p_0(Stream_11, ClassName_19);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " {\n");
  DebugClassInit_83 = ml_backend__mlds_to_java_util__get_debug_class_init_1_f_0(Info_10);
  switch (DebugClassInit_83) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_91;
        MR_String Var_92;
        MR_Box conv4_STATE_VARIABLE_IO_44_44;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[1]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_4));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (Stream_11));
        }
        Var_92 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(MercuryModuleName_12);
        {
          Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
          MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[22])));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_91));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) ((MR_String) "  static {\n"));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_87));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_84, Var_85, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_44_44);
      }
      break;
  }
  succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(FuncDefns_15);
  if (succeeded)
    ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0(Stream_11, (MR_Integer) 1, ClassName_19);
}

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_target_util__write_indentstr_line_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String ClassName_8)
{
  MR_String IndentStr_10;
  MR_Word Body_11;
  MR_String Indent1Str_12;
  MR_String Var_25;
  MR_String Var_27;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_String Var_42;
  MR_String Var_44;
  MR_Integer Var_59;
  MR_Word Var_61;
  MR_Box conv0_STATE_VARIABLE_IO_62_62;

  IndentStr_10 = libs__indent__indent2_string_1_f_0(Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "public static void main(java.lang.String[] args)\n");
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "{\n");
  Var_27 = mercury__string__f_43_43_2_f_0(ClassName_8, (MR_String) "\";");
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "jmercury.runtime.JavaInternal.progname = \"", Var_27);
  Var_44 = mercury__string__f_43_43_2_f_0(ClassName_8, (MR_String) ".main_2_p_0();");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "        ", Var_44);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[9])));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "    public void run() {"));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "Runnable run_main = new Runnable() {"));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) ((MR_String) "benchmarking.ML_initialise();"));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_String) "library.ML_std_library_init();"));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.exit_status = 0;"));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.args = args;"));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Body_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Body_11, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Body_11, 1) = ((MR_Box) (Var_29));
  }
  Var_59 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
  Indent1Str_12 = libs__indent__indent2_string_1_f_0(Var_59);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) (Indent1Str_12));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, Body_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_62_62);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__make_code_addr_map_for_java_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_2,
  MR_Word * STATE_VARIABLE_Map_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Map_3 = STATE_VARIABLE_Map_0_2;
    else
    {
      MR_Word CodeAddr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CodeAddrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word OrigFuncSignature_11 = ((MR_Word) ((MR_hl_field(0, CodeAddr_7, (MR_Integer) 1))));
      MR_Word OrigArgTypes_12 = ((MR_Word) ((MR_hl_field(0, OrigFuncSignature_11, (MR_Integer) 0))));
      MR_Integer Arity_14;
      MR_Word STATE_VARIABLE_Map_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Map_0_2;

      mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), OrigArgTypes_12, &Arity_14);
      mercury__multi_map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), ((MR_Box) (Arity_14)), ((MR_Box) (CodeAddr_7)), STATE_VARIABLE_Map_0_2, &STATE_VARIABLE_Map_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CodeAddrs_8;
      next_value_of_STATE_VARIABLE_Map_0_2 = STATE_VARIABLE_Map_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Map_0_2 = next_value_of_STATE_VARIABLE_Map_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Errors_10;

  ml_backend__mlds_to_java_file__output_java_src_file_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Errors_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Errors_10));
}

void MR_CALL 
ml_backend__mlds_to_java_file__output_java_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  MR_Word Globals_10;
  MR_Word ModuleName_11;
  MR_String JavaSourceFileName_12;
  MR_Word Var_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_10, (MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_mlds\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_3[0])), (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_java_file_scalar_common_1[3])), ModuleName_11, &JavaSourceFileName_12);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_mlds_5_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (MLDS_7));
  }
  libs__file_util__output_to_file_stream_7_p_0(Globals_10, ModuleName_11, JavaSourceFileName_12, Var_23, Succeeded_8);
}

void mercury__ml_backend__mlds_to_java_file__init(void)
{
}

void mercury__ml_backend__mlds_to_java_file__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_file.
