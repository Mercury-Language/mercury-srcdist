/*
** Automatically generated from `mlds_to_java_file.m'
** by the Mercury compiler,
** version rotd-2022-11-25
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
#include "libs.maybe_succeeded.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
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
ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__167__1_1_f_0(
  MR_Word LambdaHeadVar__1_94);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_env_var_definition_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String EnvVarName_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_final_pred_call_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String FinalPred_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_init_for_java_2_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String InitPred_8);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_body_code_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_decl_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_import_4_p_0(
  MR_Word Stream_5,
  MR_Word Import_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Integer Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ModuleName_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word MercuryModuleName_14,
  MR_Word Imports_15,
  MR_Word ForeignDecls_16,
  MR_Word FuncDefns_17,
  MR_Word * Errors_18);

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

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__mlds_get_java_foreign_code_1_f_0(
  MR_Word AllForeignCode_3);

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


static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_1[16][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_2[11][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_4[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_5[5][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_6[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_7[3][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_8[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_9[5][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_10[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_1[16][2] = {
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
    ((MR_Box) ((MR_String) "java.lang.System.exit(jmercury.runtime.JavaInternal.exit_status);")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stderr_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stdout_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.runMain(run_main);")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "};")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "    }")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "  }\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "    }\n")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) " init]\");\n")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "start")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "end")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[11])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[14])))
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
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[1])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[2])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[2])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[4])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[4])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_3[1][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_4[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_5[5][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_7[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_8[2][5] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_9[5][6] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_10[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
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
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java_file__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__167__1_1_f_0(
  MR_Word LambdaHeadVar__1_94)
{
  MR_Word LambdaHeadVar__2_95 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_94, (MR_Integer) 4))));

  return LambdaHeadVar__2_95;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_env_var_definition_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String EnvVarName_8)
{
  MR_Integer Var_18;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "private static int mercury_envvar_");
  mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " =\n");
  Var_18 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_18);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "java.lang.System.getenv(\"");
  mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\") == null \? 0 : 1;\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_final_pred_call_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String FinalPred_8)
{
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, FinalPred_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "();\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_init_for_java_2_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String InitPred_8)
{
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, InitPred_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "();\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_body_code_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12)
{
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(0, ForeignBodyCode_11, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_15 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_11, (MR_Integer) 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_11, (MR_Integer) 2))));

  switch (Lang_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_body_code\'/7", (MR_String) "foreign code other than Java");
        return;
      }
      break;
    case (MR_Integer) 2:
      if (((MR_tag((MR_Word) LiteralOrInclude_15)) == (MR_Integer) 1))
      {
        MR_String IncludeFile_23 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_15, (MR_Integer) 0))));
        MR_String SourceFileName_24 = ((MR_String) ((MR_hl_field(0, Info_8, (MR_Integer) 3))));
        MR_String IncludePath_25;
        MR_Word Var_26;
        MR_Word Var_28;
        MR_Word Var_33;

        parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_24, IncludeFile_23, &IncludePath_25);
        Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (IncludePath_25));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_9, Var_26, (MR_Integer) 0, Var_28);
        libs__file_util__write_include_file_contents_5_p_0(Stream_9, IncludePath_25, Res_12);
        mercury__io__nl_3_p_0(Stream_9);
        Var_33 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_9, Var_33, (MR_Integer) 1, Context_16);
      }
      else
      {
        MR_String Code_22 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_15, (MR_Integer) 0))));

        ml_backend__mlds_to_java_util__write_string_with_context_block_7_p_0(Info_8, Stream_9, Indent_10, Code_22, Context_16);
        *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_decl_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12)
{
  MR_Word Lang_14 = ((((MR_Unsigned) ((MR_hl_field(0, DeclCode_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_16 = ((MR_Word) ((MR_hl_field(0, DeclCode_11, (MR_Integer) 1))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, DeclCode_11, (MR_Integer) 2))));

  switch (Lang_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_decl\'/7", (MR_String) "foreign decl other than Java");
        return;
      }
      break;
    case (MR_Integer) 2:
      if (((MR_tag((MR_Word) LiteralOrInclude_16)) == (MR_Integer) 1))
      {
        MR_String IncludeFile_24 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_16, (MR_Integer) 0))));
        MR_String SourceFileName_25 = ((MR_String) ((MR_hl_field(0, Info_8, (MR_Integer) 3))));
        MR_String IncludePath_26;
        MR_Word Var_27;
        MR_Word Var_29;
        MR_Word Var_34;

        parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_25, IncludeFile_24, &IncludePath_26);
        Var_27 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (IncludePath_26));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_9, Var_27, (MR_Integer) 0, Var_29);
        libs__file_util__write_include_file_contents_5_p_0(Stream_9, IncludePath_26, Res_12);
        mercury__io__nl_3_p_0(Stream_9);
        Var_34 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
        ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_9, Var_34, (MR_Integer) 1, Context_17);
      }
      else
      {
        MR_String Code_23 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_16, (MR_Integer) 0))));

        ml_backend__mlds_to_java_util__write_string_with_context_block_7_p_0(Info_8, Stream_9, Indent_10, Code_23, Context_17);
        *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_import_4_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_import\'/4", (MR_String) "import_type \140user_visible_interface\' in Java backend");
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_env_var_definition_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_HeadVar__3_3;

  ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv24_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_HeadVar__3_3;

  ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv22_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_init_for_java_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_class__output_class_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_global_var_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv17_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv17_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv17_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_Res_12;

  ml_backend__mlds_to_java_file__output_java_body_code_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv15_Res_12);
  *wrapper_arg_2 = ((MR_Box) (conv15_Res_12));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_8(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_7(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_6(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_5(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_4(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_3(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_2(
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
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_95;

  conv0_LambdaHeadVar__2_95 = ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__167__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_95));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Integer Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 0))));
  MR_Word Imports_15 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 1))));
  MR_Word GlobalData_16 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 2))));
  MR_Word TypeDefns0_17 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 3))));
  MR_Word TableStructDefns0_18 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 4))));
  MR_Word ProcDefns0_19 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 5))));
  MR_Word InitPreds_20 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 6))));
  MR_Word FinalPreds_21 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 7))));
  MR_Word AllForeignCode_22 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 8))));
  MR_Word ExportedEnums_23 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 9))));
  MR_Word ScalarCellGroupMap_24;
  MR_Word VectorCellGroupMap_25;
  MR_Word RttiDefns0_27;
  MR_Word CellDefns0_28;
  MR_Word ClosureWrapperFuncDefns0_29;
  MR_Word MLDS_ModuleName_30;
  MR_Word ScalarCellGroups_32;
  MR_Word ScalarCellRows_33;
  MR_Word RevSeqNumsCodeAddrs_37;
  MR_Word RevCodeAddrs_38;
  MR_Word CodeAddrsMap_39;
  MR_Word CodeAddrsAssocList_40;
  MR_Word WrapperClassDefns0_41;
  MR_Word AddrOfMap_42;
  MR_Word TypeDefns1_43;
  MR_Word RenamingMap1_44;
  MR_Word WrapperClassDefns1_45;
  MR_Word RenamingMap_46;
  MR_Word TypeDefns_47;
  MR_Word WrapperClassDefns_48;
  MR_Word RttiDefns_49;
  MR_Word CellDefns_50;
  MR_Word TableStructDefns_51;
  MR_Word ClosureWrapperFuncDefns_52;
  MR_Word ProcDefns_53;
  MR_Word ForeignCode_55;
  MR_Word ForeignDeclCodes_56;
  MR_Word ForeignBodyCodes_57;
  MR_Word ExportDefns_59;
  MR_String SourceFileName_60;
  MR_Word Info_61;
  MR_Word ForeignDeclErrors_62;
  MR_Word ForeignCodeResults_63;
  MR_Word ForeignCodeErrors_64;
  MR_Word SortedFuncDefns_67;
  MR_Word SortedClassDefns_70;
  MR_Word EnvVarNamesSet0_81;
  MR_Word EnvVarNamesSet1_82;
  MR_Word EnvVarNamesSet_83;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_86_86;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_87_87;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_88_88;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_89_89;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_90_90;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_91_91;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_92_92;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_97_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_113;
  MR_Word Var_148;
  MR_Word Var_156;
  MR_Word _AllocIdMap_26;
  MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_97_97;
  MR_Box conv5_AddrOfMap_42;
  MR_Box conv8_RenamingMap1_44;
  MR_Box conv11_RenamingMap_46;
  MR_Box conv16_STATE_VARIABLE_IO_114_114;
  MR_Box conv23_EnvVarNamesSet1_82;
  MR_Box conv25_EnvVarNamesSet_83;

  ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_16, &ScalarCellGroupMap_24, &VectorCellGroupMap_25, &_AllocIdMap_26, &RttiDefns0_27, &CellDefns0_28, &ClosureWrapperFuncDefns0_29);
  MLDS_ModuleName_30 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_14);
  STATE_VARIABLE_CodeAddrsInConsts_86_86 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
  ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(TypeDefns0_17, STATE_VARIABLE_CodeAddrsInConsts_86_86, &STATE_VARIABLE_CodeAddrsInConsts_87_87);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns0_27, STATE_VARIABLE_CodeAddrsInConsts_87_87, &STATE_VARIABLE_CodeAddrsInConsts_88_88);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns0_28, STATE_VARIABLE_CodeAddrsInConsts_88_88, &STATE_VARIABLE_CodeAddrsInConsts_89_89);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns0_18, STATE_VARIABLE_CodeAddrsInConsts_89_89, &STATE_VARIABLE_CodeAddrsInConsts_90_90);
  ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns0_29, STATE_VARIABLE_CodeAddrsInConsts_90_90, &STATE_VARIABLE_CodeAddrsInConsts_91_91);
  ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns0_19, STATE_VARIABLE_CodeAddrsInConsts_91_91, &STATE_VARIABLE_CodeAddrsInConsts_92_92);
  mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_24, &ScalarCellGroups_32);
  ScalarCellRows_33 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[4]), ScalarCellGroups_32);
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[5]), ScalarCellRows_33, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_92_92)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_97_97);
  STATE_VARIABLE_CodeAddrsInConsts_97_97 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_97_97));
  RevSeqNumsCodeAddrs_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CodeAddrsInConsts_97_97, (MR_Integer) 2))));
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), RevSeqNumsCodeAddrs_37, &RevCodeAddrs_38);
  Var_98 = mercury__multi_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0));
  ml_backend__mlds_to_java_file__make_code_addr_map_for_java_3_p_0(RevCodeAddrs_38, Var_98, &CodeAddrsMap_39);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[1]), CodeAddrsMap_39, &CodeAddrsAssocList_40);
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[1]));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_3));
    MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_99, 3) = ((MR_Box) (MLDS_ModuleName_30));
  }
  Var_100 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[1]), Var_99, CodeAddrsAssocList_40, &WrapperClassDefns0_41, ((MR_Box) (Var_100)), &conv5_AddrOfMap_42);
  AddrOfMap_42 = ((MR_Word) (conv5_AddrOfMap_42));
  Var_102 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[6]), TypeDefns0_17, &TypeDefns1_43, ((MR_Box) (Var_102)), &conv8_RenamingMap1_44);
  RenamingMap1_44 = ((MR_Word) (conv8_RenamingMap1_44));
  mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[7]), WrapperClassDefns0_41, &WrapperClassDefns1_45, ((MR_Box) (RenamingMap1_44)), &conv11_RenamingMap_46);
  RenamingMap_46 = ((MR_Word) (conv11_RenamingMap_46));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenamingMap_46);
  if (succeeded)
  {
    TypeDefns_47 = TypeDefns0_17;
    WrapperClassDefns_48 = WrapperClassDefns0_41;
    RttiDefns_49 = RttiDefns0_27;
    CellDefns_50 = CellDefns0_28;
    TableStructDefns_51 = TableStructDefns0_18;
    ClosureWrapperFuncDefns_52 = ClosureWrapperFuncDefns0_29;
    ProcDefns_53 = ProcDefns0_19;
  }
  else
  {
    MR_Word Renaming_54;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_109;

    {
      Renaming_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Renaming_54, 0) = ((MR_Box) (MLDS_ModuleName_30));
      MR_hl_field(0, Renaming_54, 1) = ((MR_Box) (RenamingMap_46));
    }
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_104, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[1]));
      MR_hl_field(0, Var_104, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_6));
      MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_104, 3) = ((MR_Box) (Renaming_54));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_104, TypeDefns1_43, &TypeDefns_47);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_104, WrapperClassDefns1_45, &WrapperClassDefns_48);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_106, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[2]));
      MR_hl_field(0, Var_106, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_7));
      MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_106, 3) = ((MR_Box) (Renaming_54));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_106, RttiDefns0_27, &RttiDefns_49);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_106, CellDefns0_28, &CellDefns_50);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_106, TableStructDefns0_18, &TableStructDefns_51);
    {
      Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_109, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_9[3]));
      MR_hl_field(0, Var_109, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_8));
      MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_109, 3) = ((MR_Box) (Renaming_54));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_109, ClosureWrapperFuncDefns0_29, &ClosureWrapperFuncDefns_52);
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_109, ProcDefns0_19, &ProcDefns_53);
  }
  ForeignCode_55 = ml_backend__mlds_to_java_file__mlds_get_java_foreign_code_1_f_0(AllForeignCode_22);
  ForeignDeclCodes_56 = ((MR_Word) ((MR_hl_field(0, ForeignCode_55, (MR_Integer) 0))));
  ForeignBodyCodes_57 = ((MR_Word) ((MR_hl_field(0, ForeignCode_55, (MR_Integer) 1))));
  ExportDefns_59 = ((MR_Word) ((MR_hl_field(0, ForeignCode_55, (MR_Integer) 3))));
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_14, &SourceFileName_60);
  Info_61 = ml_backend__mlds_to_java_util__init_java_out_info_3_f_0(ModuleInfo_8, SourceFileName_60, AddrOfMap_42);
  ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0(Info_61, Stream_11, Indent_9, ModuleName_14, Imports_15, ForeignDeclCodes_56, ProcDefns_53, &ForeignDeclErrors_62);
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[2]));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_9));
    MR_hl_field(0, Var_113, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_113, 3) = ((MR_Box) (Info_61));
    MR_hl_field(0, Var_113, 4) = ((MR_Box) (Stream_11));
    MR_hl_field(0, Var_113, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_113, ForeignBodyCodes_57, &ForeignCodeResults_63, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_114_114);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[8]), ForeignCodeResults_63, &ForeignCodeErrors_64);
  if (!((RttiDefns_49 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_118;
    MR_Integer Var_120;
    MR_Integer Var_123;
    MR_Box conv18_STATE_VARIABLE_IO_119_119;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// RttiDefns\n");
    Var_120 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_118, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[3]));
      MR_hl_field(0, Var_118, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_11));
      MR_hl_field(0, Var_118, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_118, 3) = ((MR_Box) (Info_61));
      MR_hl_field(0, Var_118, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(0, Var_118, 5) = ((MR_Box) (Var_120));
      MR_hl_field(0, Var_118, 6) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_118, RttiDefns_49, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_119_119);
    Var_123 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_6_p_0(Info_61, Stream_11, Var_123, RttiDefns_49);
  }
  succeeded = (CellDefns_50 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (TableStructDefns_51 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    MR_Integer Var_128;
    MR_Integer Var_131;
    MR_Integer Var_134;
    MR_Word Var_135;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Cell and tabling definitions\n");
    Var_128 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_global__output_global_var_decls_for_java_6_p_0(Info_61, Stream_11, Var_128, CellDefns_50);
    Var_131 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_global__output_global_var_decls_for_java_6_p_0(Info_61, Stream_11, Var_131, TableStructDefns_51);
    Var_134 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_50, TableStructDefns_51);
    ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0(Info_61, Stream_11, Var_134, Var_135);
  }
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_24);
  if (!(succeeded))
  {
    MR_Integer Var_140;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Scalar common data\n");
    Var_140 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0(Info_61, Stream_11, Var_140, ScalarCellGroupMap_24);
  }
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), VectorCellGroupMap_25);
  if (!(succeeded))
  {
    MR_Integer Var_145;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Vector common data\n");
    Var_145 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_global__output_vector_common_data_for_java_6_p_0(Info_61, Stream_11, Var_145, VectorCellGroupMap_25);
  }
  Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_52, ProcDefns_53);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_148, &SortedFuncDefns_67);
  if (!((SortedFuncDefns_67 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_151;
    MR_Integer Var_153;
    MR_Box conv19_STATE_VARIABLE_IO_152_152;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Function definitions\n");
    Var_153 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_151 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_151, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[4]));
      MR_hl_field(0, Var_151, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_12));
      MR_hl_field(0, Var_151, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_151, 3) = ((MR_Box) (Info_61));
      MR_hl_field(0, Var_151, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(0, Var_151, 5) = ((MR_Box) (Var_153));
      MR_hl_field(0, Var_151, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_151, SortedFuncDefns_67, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_152_152);
  }
  Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), WrapperClassDefns_48, TypeDefns_47);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_156, &SortedClassDefns_70);
  if (!((SortedClassDefns_70 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_159;
    MR_Integer Var_161;
    MR_Box conv20_STATE_VARIABLE_IO_160_160;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Class definitions\n");
    Var_161 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_159 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_159, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_10[0]));
      MR_hl_field(0, Var_159, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_13));
      MR_hl_field(0, Var_159, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_159, 3) = ((MR_Box) (Info_61));
      MR_hl_field(0, Var_159, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(0, Var_159, 5) = ((MR_Box) (Var_161));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_159, SortedClassDefns_70, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_160_160);
  }
  if (!((ExportDefns_59 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Var_165;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// ExportDefns\n");
    Var_165 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_export__output_exports_for_java_6_p_0(Info_61, Stream_11, Var_165, ExportDefns_59);
  }
  if (!((ExportedEnums_23 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Var_170;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// ExportedEnums\n");
    Var_170 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_export__output_exported_enums_for_java_6_p_0(Info_61, Stream_11, Var_170, ExportedEnums_23);
  }
  if (!((InitPreds_20 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Var_175;
    MR_Word Var_273;
    MR_Integer Var_275;
    MR_Box conv21_STATE_VARIABLE_IO_18_274;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// InitPreds\n");
    Var_175 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Var_175);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "static {\n");
    Var_275 = (MR_Integer) ((MR_Unsigned) Var_175 + (MR_Unsigned) 1);
    {
      Var_273 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_273, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0]));
      MR_hl_field(0, Var_273, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_14));
      MR_hl_field(0, Var_273, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_273, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(0, Var_273, 4) = ((MR_Box) (Var_275));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_273, InitPreds_20, ((MR_Box) ((MR_Integer) 0)), &conv21_STATE_VARIABLE_IO_18_274);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Var_175);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}\n");
  }
  if (!((FinalPreds_21 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Var_180;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// FinalPreds\n");
    Var_180 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0(Stream_11, Var_180, FinalPreds_21);
  }
  mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_81);
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[9]), ProcDefns_53, ((MR_Box) (EnvVarNamesSet0_81)), &conv23_EnvVarNamesSet1_82);
  EnvVarNamesSet1_82 = ((MR_Word) (conv23_EnvVarNamesSet1_82));
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[10]), ClosureWrapperFuncDefns_52, ((MR_Box) (EnvVarNamesSet1_82)), &conv25_EnvVarNamesSet_83);
  EnvVarNamesSet_83 = ((MR_Word) (conv25_EnvVarNamesSet_83));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNamesSet_83);
  if (!(succeeded))
  {
    MR_Word Var_187;
    MR_Integer Var_189;
    MR_Box conv26_STATE_VARIABLE_IO_188_188;

    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// EnvVarNames\n");
    Var_189 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_187 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_187, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0]));
      MR_hl_field(0, Var_187, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_7_p_0_17));
      MR_hl_field(0, Var_187, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_187, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(0, Var_187, 4) = ((MR_Box) (Var_189));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_187, EnvVarNamesSet_83, ((MR_Box) ((MR_Integer) 0)), &conv26_STATE_VARIABLE_IO_188_188);
  }
  ml_backend__mlds_to_java_file__output_src_end_for_java_6_p_0(Info_61, Stream_11, Indent_9, ModuleName_14);
  *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_62, ForeignCodeErrors_64);
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ModuleName_10)
{
  MR_Word AutoComments_12;
  MR_Word DebugClassInit_33;

  DebugClassInit_33 = ml_backend__mlds_to_java_util__get_debug_class_init_1_f_0(Info_7);
  switch (DebugClassInit_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_String Var_42;
        MR_Box conv0_STATE_VARIABLE_IO_16_16;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[1]));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_end_for_java_6_p_0_1));
          MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_34, 3) = ((MR_Box) (Stream_8));
        }
        Var_42 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_10);
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[15])));
        }
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
          MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) ((MR_String) "  static {\n"));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, Var_35, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
  AutoComments_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  switch (AutoComments_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "// :- end_module ");
        parse_tree__prog_out__write_sym_name_4_p_0(Stream_8, ModuleName_10);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_3(
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
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Res_12;

  ml_backend__mlds_to_java_file__output_java_decl_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_Res_12));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_import_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word MercuryModuleName_14,
  MR_Word Imports_15,
  MR_Word ForeignDecls_16,
  MR_Word FuncDefns_17,
  MR_Word * Errors_18)
{
  MR_bool succeeded;
  MR_Word AutoComments_20;
  MR_Word ForeignDeclResults_21;
  MR_String ClassName_22;
  MR_String Var_25 = ((MR_String) ((MR_hl_field(0, Info_11, (MR_Integer) 3))));
  MR_Word Var_37;
  MR_Word AutoComments_80;
  MR_Word DebugClassInit_93;
  MR_Box conv2_STATE_VARIABLE_IO_38_38;

  ml_backend__mlds_to_target_util__output_auto_gen_comment_4_p_0(Stream_12, Var_25);
  AutoComments_20 = ((((MR_Unsigned) ((MR_hl_field(0, Info_11, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  switch (AutoComments_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_13);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "/* :- module ");
        parse_tree__prog_out__write_sym_name_4_p_0(Stream_12, MercuryModuleName_14);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) ". */\n\n");
      }
      break;
  }
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_13);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "package jmercury;\n");
  AutoComments_80 = ((((MR_Unsigned) ((MR_hl_field(0, Info_11, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
  switch (AutoComments_80) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_81;
        MR_Box conv0_STATE_VARIABLE_IO_36_36;

        {
          Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_81, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[0]));
          MR_hl_field(0, Var_81, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_1));
          MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_81, 3) = ((MR_Box) (Stream_12));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_81, Imports_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36_36);
      }
      break;
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[1]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_2));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (Info_11));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) (Stream_12));
    MR_hl_field(0, Var_37, 5) = ((MR_Box) (Indent_13));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, ForeignDecls_16, &ForeignDeclResults_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_38_38);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[3]), ForeignDeclResults_21, Errors_18);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "public class ");
  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MercuryModuleName_14, (MR_Integer) 0, (MR_String) "__", &ClassName_22);
  mercury__io__write_string_4_p_0(Stream_12, ClassName_22);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) " {\n");
  DebugClassInit_93 = ml_backend__mlds_to_java_util__get_debug_class_init_1_f_0(Info_11);
  switch (DebugClassInit_93) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_97;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_String Var_102;
        MR_Box conv4_STATE_VARIABLE_IO_48_48;

        {
          Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_94, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[1]));
          MR_hl_field(0, Var_94, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_10_p_0_4));
          MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_94, 3) = ((MR_Box) (Stream_12));
        }
        Var_102 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(MercuryModuleName_14);
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[13])));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_101));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) ((MR_String) "  static {\n"));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_97));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_94, Var_95, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_48_48);
      }
      break;
  }
  succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(FuncDefns_17);
  if (succeeded)
  {
    MR_Integer Var_49 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);

    ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0(Stream_12, Var_49, ClassName_22);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_target_util__write_indented_line_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String ClassName_8)
{
  MR_Word Body_10;
  MR_String Var_21;
  MR_String Var_23;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_String Var_38;
  MR_String Var_40;
  MR_Word Var_55;
  MR_Integer Var_57;
  MR_Box conv0_STATE_VARIABLE_IO_56_56;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "public static void main");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(java.lang.String[] args)\n");
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "{\n");
  Var_23 = mercury__string__f_43_43_2_f_0(ClassName_8, (MR_String) "\";");
  Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "jmercury.runtime.JavaInternal.progname = \"", Var_23);
  Var_40 = mercury__string__f_43_43_2_f_0(ClassName_8, (MR_String) ".main_2_p_0();");
  Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "        ", Var_40);
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_1[8])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) ((MR_String) "    public void run() {"));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) ((MR_String) "Runnable run_main = new Runnable() {"));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) ((MR_String) "benchmarking.ML_initialise();"));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_String) "library.ML_std_library_init();"));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.exit_status = 0;"));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.args = args;"));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
  }
  {
    Body_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Body_10, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Body_10, 1) = ((MR_Box) (Var_25));
  }
  Var_57 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0]));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__write_main_driver_for_java_5_p_0_1));
    MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_55, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_55, 4) = ((MR_Box) (Var_57));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, Body_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_file__output_final_pred_call_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word FinalPreds_8)
{
  if (!((FinalPreds_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Var_17;
    MR_Integer Var_22;
    MR_Integer Var_27;
    MR_Word Var_32;
    MR_Integer Var_34;
    MR_Integer Var_36;
    MR_Integer Var_41;
    MR_Integer Var_46;
    MR_Box conv0_STATE_VARIABLE_IO_33_33;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "static {\n");
    Var_17 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_17);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "jmercury.runtime.JavaInternal.register_finaliser(\n");
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_22);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "new java.lang.Runnable() {\n");
    Var_27 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 3);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_27);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "public void run() {\n");
    Var_34 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 4);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_finals_for_java_5_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) (Var_34));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, FinalPreds_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33_33);
    Var_36 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 3);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_36);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
    Var_41 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 2);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_41);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
    Var_46 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_46);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ");\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__mlds_get_java_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
{
  MR_bool succeeded;
  MR_Word ForeignCode_4;
  MR_Word ForeignCode0_5;
  MR_Box conv0_ForeignCode0_5;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_3, ((MR_Box) ((MR_Integer) 2)), &conv0_ForeignCode0_5);
  if (succeeded)
  {
    ForeignCode0_5 = ((MR_Word) (conv0_ForeignCode0_5));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ForeignCode_4 = ForeignCode0_5;
  else
    ForeignCode_4 = (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_4[0]);
  return ForeignCode_4;
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
  MR_Word conv0_Errors_12;

  ml_backend__mlds_to_java_file__output_java_src_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Errors_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_Errors_12));
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
  MR_Word Var_22;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
  ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_mlds\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_file_scalar_common_3[0])), ModuleName_11, &JavaSourceFileName_12);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_mlds_5_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (MLDS_7));
  }
  libs__file_util__output_to_file_stream_7_p_0(Globals_10, ModuleName_11, JavaSourceFileName_12, Var_22, Succeeded_8);
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
