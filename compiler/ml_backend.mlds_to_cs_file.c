/*
** Automatically generated from `mlds_to_cs_file.m'
** by the Mercury compiler,
** version 22.01.9
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


// :- module ml_backend.mlds_to_cs_file.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_file__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_file.mih"


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
#include "integer.mih"
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
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_class.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_export.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_global.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.error_util.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__393__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__393__1_5_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_10,
  MR_String LambdaHeadVar__1_41);

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__386__1_5_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_10,
  MR_String LambdaHeadVar__1_29);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__109__1_1_f_0(
  MR_Word LambdaHeadVar__1_63);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String EnvVarName_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constant_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word CodeAddr_11,
  MR_String Name_12);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_body_code_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_decl_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Integer Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word MercuryModuleName_14,
  MR_Word ForeignDecls_16,
  MR_Word Defns_17,
  MR_Word * Errors_18);

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String ClassName_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_src_end_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ModuleName_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0(
  MR_Word Stream_8,
  MR_Word MercuryModuleName_9,
  MR_Integer Indent_10,
  MR_Word StaticConstructors_11,
  MR_Word FinalPreds_12);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word CodeAddrs_10);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__make_code_addr_map_for_csharp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrMap_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_4[6][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_5[1][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_6[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_7[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_8[2][6];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_9[1][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_10[1][7];




static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "       System.Environment.ExitCode = 1;")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.ExitCode == 0) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "       System.Console.Error.WriteLine(e.StackTrace);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "           \"MERCURY_SUPPRESS_STACK_TRACE\") == null) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.GetEnvironmentVariable(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "       (univ.Univ_0) e.exception);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "   exception.ML_report_uncaught_exception(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "} catch (runtime.Exception e) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".cs"))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_4[6][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_5[1][8] = {
  /* row 0 */
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
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_7[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_10[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__393__1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__393__1_5_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_10,
  MR_String LambdaHeadVar__1_41)
{
  {
    MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Box conv0_LambdaHeadVar__3_43;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Var_46);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__393__1_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Stream_8));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (LambdaHeadVar__1_41));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[2])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "(sender, ev) => "));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) "System.AppDomain.CurrentDomain.ProcessExit += "));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, Var_50, ((MR_Box) ((MR_Integer) 0)), &conv0_LambdaHeadVar__3_43);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__386__1_5_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_10,
  MR_String LambdaHeadVar__1_29)
{
  {
    MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Var_34);
    mercury__io__write_string_4_p_0(Stream_8, LambdaHeadVar__1_29);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "();\n");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__109__1_1_f_0(
  MR_Word LambdaHeadVar__1_63)
{
  {
    MR_Word LambdaHeadVar__2_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_63, (MR_Integer) 4))));

    return LambdaHeadVar__2_64;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String EnvVarName_8)
{
  {
    MR_Integer Var_18;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "private static int mercury_envvar_");
    mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " =\n");
    Var_18 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Var_18);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "System.Environment.GetEnvironmentVariable(\"");
    mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\") == null \? 0 : 1;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constant_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word CodeAddr_11,
  MR_String Name_12)
{
  {
    MR_Word Signature_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_11, (MR_Integer) 1))));
    MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_15, (MR_Integer) 0))));
    MR_Word RetTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_15, (MR_Integer) 1))));
    MR_String TypeString_18;

    TypeString_18 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_8, ArgTypes_16, RetTypes_17);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private static readonly ");
    mercury__io__write_string_4_p_0(Stream_9, TypeString_18);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_9, Name_12);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
    ml_backend__mlds_to_cs_data__mlds_output_code_addr_for_csharp_6_p_0(Info_8, Stream_9, CodeAddr_11, (MR_Integer) 0);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_body_code_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12)
{
  {
    MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_11, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word LiteralOrInclude_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_11, (MR_Integer) 1))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_11, (MR_Integer) 2))));

    switch (Lang_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_body_code\'/7", (MR_String) "foreign code other than C#");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_44;
          MR_String Var_86 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
          MR_Word Var_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);

          if (((MR_tag((MR_Word) LiteralOrInclude_15)) == (MR_Integer) 1))
          {
            MR_String IncludeFileName_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_15, (MR_Integer) 0))));
            MR_String IncludePath_34;
            MR_Word Var_35;
            MR_Word Var_36;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_86, IncludeFileName_32, &IncludePath_34);
            Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (IncludePath_34));
              MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_9, Var_35, Var_36);
            libs__file_util__write_include_file_contents_5_p_0(Stream_9, IncludePath_34, Res_12);
          }
          else
          {
            MR_String Code_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_15, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_88, Context_16, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, Code_31);
            *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          mercury__io__nl_3_p_0(Stream_9);
          Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_9, Var_44);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_decl_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12)
{
  {
    MR_Word Lang_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word LiteralOrInclude_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 1))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 2))));

    switch (Lang_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_decl\'/7", (MR_String) "foreign decl other than C#");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_45;
          MR_String Var_87 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
          MR_Word Var_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);

          if (((MR_tag((MR_Word) LiteralOrInclude_16)) == (MR_Integer) 1))
          {
            MR_String IncludeFileName_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_16, (MR_Integer) 0))));
            MR_String IncludePath_35;
            MR_Word Var_36;
            MR_Word Var_37;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_87, IncludeFileName_33, &IncludePath_35);
            Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (IncludePath_35));
              MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_9, Var_36, Var_37);
            libs__file_util__write_include_file_contents_5_p_0(Stream_9, IncludePath_35, Res_12);
          }
          else
          {
            MR_String Code_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_16, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_89, Context_17, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, Code_32);
            *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
          }
          mercury__io__nl_3_p_0(Stream_9);
          Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
          ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_9, Var_45);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_global__output_global_var_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv5_HeadVar__2_2;

    succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Res_12;

    ml_backend__mlds_to_cs_file__output_csharp_body_code_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Res_12);
    *wrapper_arg_2 = ((MR_Box) (conv3_Res_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    ml_backend__mlds_to_target_util__method_ptrs_in_scalars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_64;

    conv0_LambdaHeadVar__2_64 = ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__109__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_64));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Integer Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 0))));
    MR_Word GlobalData_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 2))));
    MR_Word TypeDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 3))));
    MR_Word TableStructDefns_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 4))));
    MR_Word ProcDefns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 5))));
    MR_Word InitPreds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 6))));
    MR_Word FinalPreds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 7))));
    MR_Word AllForeignCode_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 8))));
    MR_Word ExportedEnums_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_10, (MR_Integer) 9))));
    MR_Word ScalarCellGroupMap_24;
    MR_Word VectorCellGroupMap_25;
    MR_Word RttiDefns_27;
    MR_Word CellDefns_28;
    MR_Word ClosureWrapperFuncDefns_29;
    MR_Word ScalarCellGroups_31;
    MR_Word ScalarCellRows_32;
    MR_Word RevSeqNumCodeAddrs_36;
    MR_Word CodeAddrs_37;
    MR_Word ForeignCode_38;
    MR_Word ForeignDeclCodes_39;
    MR_Word ForeignBodyCodes_40;
    MR_Word ExportDefns_42;
    MR_String SourceFileName_43;
    MR_Word Info_44;
    MR_Word ForeignDeclErrors_45;
    MR_Word ForeignCodeResults_46;
    MR_Word ForeignCodeErrors_47;
    MR_Word SortedFuncDefns_48;
    MR_Word SortedClassDefns_49;
    MR_Word EnvVarNamesSet0_50;
    MR_Word EnvVarNamesSet1_51;
    MR_Word EnvVarNamesSet_52;
    MR_Word StaticCtorCalls_53;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_56_56;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_57_57;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_58_58;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_59_59;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_61_61;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_66_66;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_76;
    MR_Integer Var_78;
    MR_Integer Var_81;
    MR_Integer Var_86;
    MR_Integer Var_89;
    MR_Integer Var_92;
    MR_Word Var_93;
    MR_Integer Var_98;
    MR_Integer Var_103;
    MR_Integer Var_108;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Integer Var_116;
    MR_Word Var_121;
    MR_Integer Var_123;
    MR_Integer Var_127;
    MR_Integer Var_132;
    MR_Word Var_139;
    MR_Integer Var_141;
    MR_Word Var_144;
    MR_Word Var_146;
    MR_Word Var_148;
    MR_Integer Var_150;
    MR_Word _AllocIdMap_26;
    MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_66_66;
    MR_Box conv4_STATE_VARIABLE_IO_71_71;
    MR_Box conv6_STATE_VARIABLE_IO_77_77;
    MR_Box conv7_STATE_VARIABLE_IO_115_115;
    MR_Box conv8_STATE_VARIABLE_IO_122_122;
    MR_Box conv10_EnvVarNamesSet1_51;
    MR_Box conv12_EnvVarNamesSet_52;
    MR_Box conv13_STATE_VARIABLE_IO_140_140;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_16, &ScalarCellGroupMap_24, &VectorCellGroupMap_25, &_AllocIdMap_26, &RttiDefns_27, &CellDefns_28, &ClosureWrapperFuncDefns_29);
    STATE_VARIABLE_CodeAddrsInConsts_56_56 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns_27, STATE_VARIABLE_CodeAddrsInConsts_56_56, &STATE_VARIABLE_CodeAddrsInConsts_57_57);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns_28, STATE_VARIABLE_CodeAddrsInConsts_57_57, &STATE_VARIABLE_CodeAddrsInConsts_58_58);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns_18, STATE_VARIABLE_CodeAddrsInConsts_58_58, &STATE_VARIABLE_CodeAddrsInConsts_59_59);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns_29, STATE_VARIABLE_CodeAddrsInConsts_59_59, &STATE_VARIABLE_CodeAddrsInConsts_60_60);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns_19, STATE_VARIABLE_CodeAddrsInConsts_60_60, &STATE_VARIABLE_CodeAddrsInConsts_61_61);
    mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_24, &ScalarCellGroups_31);
    ScalarCellRows_32 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[1]), ScalarCellGroups_31);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[2]), ScalarCellRows_32, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_61_61)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_66_66);
    STATE_VARIABLE_CodeAddrsInConsts_66_66 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_66_66));
    RevSeqNumCodeAddrs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_66_66, (MR_Integer) 2))));
    Var_67 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    ml_backend__mlds_to_cs_file__make_code_addr_map_for_csharp_3_p_0(RevSeqNumCodeAddrs_36, Var_67, &CodeAddrs_37);
    ForeignCode_38 = ml_backend__mlds_to_cs_file__mlds_get_csharp_foreign_code_1_f_0(AllForeignCode_22);
    ForeignDeclCodes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_38, (MR_Integer) 0))));
    ForeignBodyCodes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_38, (MR_Integer) 1))));
    ExportDefns_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_38, (MR_Integer) 3))));
    parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_14, &SourceFileName_43);
    Info_44 = ml_backend__mlds_to_cs_util__init_csharp_out_info_3_f_0(ModuleInfo_8, SourceFileName_43, CodeAddrs_37);
    ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0(Info_44, Stream_11, Indent_9, ModuleName_14, ForeignDeclCodes_39, ProcDefns_19, &ForeignDeclErrors_45);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_44));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_70, 5) = ((MR_Box) (Indent_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, ForeignBodyCodes_40, &ForeignCodeResults_46, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_71_71);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[3]), ForeignCodeResults_46, &ForeignCodeErrors_47);
    ml_backend__mlds_to_cs_util__output_pragma_warning_disable_3_p_0(Stream_11);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// RttiDefns\n");
    Var_78 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_5));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Info_44));
      MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_76, 5) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), Var_76, 6) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, RttiDefns_27, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_77_77);
    Var_81 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0(Info_44, Stream_11, Var_81, RttiDefns_27);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Cell and tabling definitions\n");
    Var_86 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_6_p_0(Info_44, Stream_11, Var_86, CellDefns_28);
    Var_89 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_6_p_0(Info_44, Stream_11, Var_89, TableStructDefns_18);
    Var_92 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_28, TableStructDefns_18);
    ml_backend__mlds_to_cs_global__output_init_global_var_method_for_csharp_6_p_0(Info_44, Stream_11, Var_92, Var_93);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Scalar common data\n");
    Var_98 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0(Info_44, Stream_11, Var_98, ScalarCellGroupMap_24);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Vector common data\n");
    Var_103 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0(Info_44, Stream_11, Var_103, VectorCellGroupMap_25);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Method pointers\n");
    Var_108 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0(Info_44, Stream_11, Var_108, CodeAddrs_37);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Function definitions\n");
    Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_29, ProcDefns_19);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_113, &SortedFuncDefns_48);
    Var_116 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_6));
      MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (Info_44));
      MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_114, 5) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), Var_114, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_114, SortedFuncDefns_48, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_115_115);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// Class definitions\n");
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), TypeDefns_17, &SortedClassDefns_49);
    Var_123 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_7));
      MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (Info_44));
      MR_hl_field(MR_mktag(0), Var_121, 4) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_121, 5) = ((MR_Box) (Var_123));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_121, SortedClassDefns_49, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_122_122);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// ExportDefns\n");
    Var_127 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0(Info_44, Stream_11, Var_127, ExportDefns_42);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// ExportedEnums\n");
    Var_132 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0(Info_44, Stream_11, Var_132, ExportedEnums_23);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n// EnvVarNames\n");
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_50);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[4]), ProcDefns_19, ((MR_Box) (EnvVarNamesSet0_50)), &conv10_EnvVarNamesSet1_51);
    EnvVarNamesSet1_51 = ((MR_Word) (conv10_EnvVarNamesSet1_51));
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[5]), ClosureWrapperFuncDefns_29, ((MR_Box) (EnvVarNamesSet1_51)), &conv12_EnvVarNamesSet_52);
    EnvVarNamesSet_52 = ((MR_Word) (conv12_EnvVarNamesSet_52));
    Var_141 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_139 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0_10));
      MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_139, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(MR_mktag(0), Var_139, 4) = ((MR_Box) (Var_141));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_139, EnvVarNamesSet_52, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_140_140);
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) "MR_init_vector_common_data"));
      MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (InitPreds_20));
    }
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) ((MR_String) "MR_init_scalar_common_data"));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) ((MR_String) "MR_init_data"));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_146));
    }
    {
      StaticCtorCalls_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StaticCtorCalls_53, 0) = ((MR_Box) ((MR_String) "MR_init_rtti"));
      MR_hl_field(MR_mktag(1), StaticCtorCalls_53, 1) = ((MR_Box) (Var_144));
    }
    Var_150 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0(Stream_11, ModuleName_14, Var_150, StaticCtorCalls_53, FinalPreds_21);
    ml_backend__mlds_to_cs_file__output_src_end_for_csharp_5_p_0(Stream_11, Indent_9, ModuleName_14);
    *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_45, ForeignCodeErrors_47);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__2_2;

    succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Res_12;

    ml_backend__mlds_to_cs_file__output_csharp_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Res_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_Res_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word MercuryModuleName_14,
  MR_Word ForeignDecls_16,
  MR_Word Defns_17,
  MR_Word * Errors_18)
{
  {
    MR_bool succeeded;
    MR_Word ForeignDeclResults_20;
    MR_String ClassName_21;
    MR_String Var_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3))));
    MR_Word Var_35;
    MR_Box conv1_STATE_VARIABLE_IO_36_36;

    ml_backend__mlds_to_target_util__output_auto_gen_comment_4_p_0(Stream_12, Var_24);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_13);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "/* :- module ");
    parse_tree__prog_out__write_sym_name_4_p_0(Stream_12, MercuryModuleName_14);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ". */\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_12, Indent_13);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "namespace mercury {\n\n");
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_53_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Info_11));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (Stream_12));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (Indent_13));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, ForeignDecls_16, &ForeignDeclResults_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_36_36);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[0]), ForeignDeclResults_20, Errors_18);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "public static class ");
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(MercuryModuleName_14, (MR_Integer) 0, (MR_String) "__", &ClassName_21);
    mercury__io__write_string_4_p_0(Stream_12, ClassName_21);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " {\n");
    succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(Defns_17);
    if (succeeded)
    {
      MR_Integer Var_45 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);

      ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_5_p_0(Stream_12, Var_45, ClassName_21);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_target_util__write_indented_line_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_String ClassName_8)
{
  {
    MR_Word Body_10;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_String Var_25;
    MR_String Var_27;
    MR_Word Var_52;
    MR_Integer Var_54;
    MR_Box conv0_STATE_VARIABLE_IO_53_53;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "public static void Main");
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "(string[] args)\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "{\n");
    Var_27 = mercury__string__f_43_43_2_f_0(ClassName_8, (MR_String) ".main_2_p_0();");
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "   ", Var_27);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[13])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) "   library.ML_std_library_init();"));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Body_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_10, 0) = ((MR_Box) ((MR_String) "try {"));
      MR_hl_field(MR_mktag(1), Body_10, 1) = ((MR_Box) (Var_22));
    }
    Var_54 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Stream_6));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Var_54));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, Body_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_53_53);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_src_end_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word ModuleName_8)
{
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "}\n");
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "// :- end_module ");
    parse_tree__prog_out__write_sym_name_4_p_0(Stream_6, ModuleName_8);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__393__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__386__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0(
  MR_Word Stream_8,
  MR_Word MercuryModuleName_9,
  MR_Integer Indent_10,
  MR_Word StaticConstructors_11,
  MR_Word FinalPreds_12)
{
  {
    MR_String ClassName_14;
    MR_Word WriteCall_15;
    MR_Word WriteFinal_17;
    MR_Box conv0_STATE_VARIABLE_IO_40_40;
    MR_Box conv1_STATE_VARIABLE_IO_59_59;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(MercuryModuleName_9, (MR_Integer) 0, (MR_String) "__", &ClassName_14);
    mercury__io__write_string_4_p_0(Stream_8, ClassName_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "() {\n");
    {
      WriteCall_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WriteCall_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), WriteCall_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_1));
      MR_hl_field(MR_mktag(0), WriteCall_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), WriteCall_15, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), WriteCall_15, 4) = ((MR_Box) (Indent_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteCall_15, StaticConstructors_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_40_40);
    {
      WriteFinal_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WriteFinal_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), WriteFinal_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_2));
      MR_hl_field(MR_mktag(0), WriteFinal_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), WriteFinal_17, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), WriteFinal_17, 4) = ((MR_Box) (Indent_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteFinal_17, FinalPreds_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_59_59);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_10);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_method_ptr_constant_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word CodeAddrs_10)
{
  {
    MR_Word Var_14;
    MR_Box conv0_STATE_VARIABLE_IO_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Info_7));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Indent_9));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, CodeAddrs_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__mlds_get_csharp_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
{
  {
    MR_bool succeeded;
    MR_Word ForeignCode_4;
    MR_Word ForeignCode0_5;
    MR_Box conv0_ForeignCode0_5;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_3, ((MR_Box) ((MR_Integer) 1)), &conv0_ForeignCode0_5);
    if (succeeded)
    {
      ForeignCode0_5 = ((MR_Word) (conv0_ForeignCode0_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ForeignCode_4 = ForeignCode0_5;
    else
      ForeignCode_4 = (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_3[0]);
    return ForeignCode_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__make_code_addr_map_for_csharp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CodeAddrMap_3 = STATE_VARIABLE_CodeAddrMap_0_2;
    else
    {
      MR_Integer SeqNum_7;
      MR_Word CodeAddr_8;
      MR_Word SeqNumsCodeAddrs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_11;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_16;
      MR_Word STATE_VARIABLE_CodeAddrMap_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrMap_0_2;

      SeqNum_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      CodeAddr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      Var_16 = mercury__string__from_int_1_f_0(SeqNum_7);
      Name_11 = mercury__string__f_43_43_2_f_0((MR_String) "MR_method_ptr_", Var_16);
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CodeAddr_8)), ((MR_Box) (Name_11)), STATE_VARIABLE_CodeAddrMap_0_2, &STATE_VARIABLE_CodeAddrMap_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SeqNumsCodeAddrs_9;
      next_value_of_STATE_VARIABLE_CodeAddrMap_0_2 = STATE_VARIABLE_CodeAddrMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CodeAddrMap_0_2 = next_value_of_STATE_VARIABLE_CodeAddrMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_mlds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Errors_12;

    ml_backend__mlds_to_cs_file__output_csharp_src_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Errors_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_Errors_12));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word ModuleName_11;
    MR_String SourceFileName_12;
    MR_Word Var_22;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_mlds\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_2[0])), ModuleName_11, &SourceFileName_12);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_stream_7_p_0(Globals_10, ModuleName_11, SourceFileName_12, Var_22, Succeeded_8);
  }
}

void mercury__ml_backend__mlds_to_cs_file__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_file__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_file.
