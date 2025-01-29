/*
** Automatically generated from `mlds_to_cs_file.m'
** by the Mercury compiler,
** version rotd-2025-01-29
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__280__1_5_p_0(
  MR_Word Stream_8,
  MR_String Indent1Str_15,
  MR_String LambdaHeadVar__1_47);

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__274__1_5_p_0(
  MR_Word Stream_8,
  MR_String Indent1Str_15,
  MR_String LambdaHeadVar__1_34);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__111__1_1_f_0(
  MR_Word LambdaHeadVar__1_65);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_String EnvVarName_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constant_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word CodeAddr_11,
  MR_String Name_12);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_body_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_decl_code_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DeclCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MLDS_8,
  MR_Word Stream_9,
  MR_Word * Errors_10);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word ModuleName_12,
  MR_Word ForeignDecls_14,
  MR_Word FuncDefns_15,
  MR_Word * Errors_16);

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
  MR_Unsigned Indent_9,
  MR_Word CodeAddrs_10);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_src_end_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6);

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
  MR_Word ModuleName_9,
  MR_Unsigned Indent_10,
  MR_Word StaticConstructors_11,
  MR_Word FinalPreds_12);

static void MR_CALL 
ml_backend__mlds_to_cs_file__make_code_addr_map_for_csharp_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CodeAddrMap_0_2,
  MR_Word * STATE_VARIABLE_CodeAddrMap_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_mlds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_2[6][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_3[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_4[3][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_5[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_6[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_7[2][6];




static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_1[14][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "       System.Environment.ExitCode = 1;")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.ExitCode == 0) {")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "       System.Console.Error.WriteLine(e.StackTrace);")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "           \"MERCURY_SUPPRESS_STACK_TRACE\") == null) {")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.GetEnvironmentVariable(")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "       (univ.Univ_0) e.exception);")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "   exception.ML_report_uncaught_exception(")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "} catch (runtime.Exception e) {")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[12])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_2[6][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_env_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_3[2][8] = {
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_4[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_5[2][5] = {
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
    ((MR_Box) (&ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_6[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_7[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_7[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__280__1_5_p_0(
  MR_Word Stream_8,
  MR_String Indent1Str_15,
  MR_String LambdaHeadVar__1_47)
{
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word Var_62;

  {
    Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_55, 1) = ((MR_Box) (Indent1Str_15));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_5_p_0(Stream_8, (MR_String) "%sSystem.AppDomain.CurrentDomain.ProcessExit +=\n", Var_53);
  {
    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_62, 1) = ((MR_Box) (LambdaHeadVar__1_47));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
  }
  mercury__io__format_5_p_0(Stream_8, (MR_String) "%s  (sender, ev) => %s();\n", Var_58);
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__274__1_5_p_0(
  MR_Word Stream_8,
  MR_String Indent1Str_15,
  MR_String LambdaHeadVar__1_34)
{
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;

  {
    Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_42, 1) = ((MR_Box) (Indent1Str_15));
  }
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (LambdaHeadVar__1_34));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
  }
  mercury__io__format_5_p_0(Stream_8, (MR_String) "%s%s();\n", Var_40);
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__111__1_1_f_0(
  MR_Word LambdaHeadVar__1_65)
{
  MR_Word LambdaHeadVar__2_66 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_65, (MR_Integer) 4))));

  return LambdaHeadVar__2_66;
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_String EnvVarName_8)
{
  MR_String IndentStr_10;

  IndentStr_10 = libs__indent__indent2_string_1_f_0(Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "private static int mercury_envvar_");
  mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " =\n");
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "  System.Environment.GetEnvironmentVariable(\"");
  mercury__io__write_string_4_p_0(Stream_6, EnvVarName_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\") == null \? 0 : 1;\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constant_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word CodeAddr_11,
  MR_String Name_12)
{
  MR_Word Signature_15 = ((MR_Word) ((MR_hl_field(0, CodeAddr_11, (MR_Integer) 1))));
  MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(0, Signature_15, (MR_Integer) 0))));
  MR_Word RetTypes_17 = ((MR_Word) ((MR_hl_field(0, Signature_15, (MR_Integer) 1))));
  MR_String TypeNameStr_18;

  TypeNameStr_18 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_8, ArgTypes_16, RetTypes_17);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private static readonly ");
  mercury__io__write_string_4_p_0(Stream_9, TypeNameStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, Name_12);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
  ml_backend__mlds_to_cs_data__output_code_addr_for_csharp_6_p_0(Info_8, Stream_9, CodeAddr_11, (MR_Integer) 0);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_body_code_6_p_0(
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
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_body_code\'/6", (MR_String) "foreign code other than C#");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrintLineNumbers_20 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String Var_35 = ((MR_String) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));

        if (((MR_tag((MR_Word) LiteralOrInclude_13)) == (MR_Integer) 1))
        {
          MR_String IncludeFileName_22 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_13, (MR_Integer) 0))));
          MR_String IncludePath_24;
          MR_Word InitialFileContext_25;

          parse_tree__file_names__make_include_file_path_3_p_0(Var_35, IncludeFileName_22, &IncludePath_24);
          {
            InitialFileContext_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InitialFileContext_25, 0) = ((MR_Box) (IncludePath_24));
            MR_hl_field(0, InitialFileContext_25, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_8, PrintLineNumbers_20, InitialFileContext_25);
          libs__file_util__write_include_file_contents_5_p_0(Stream_8, IncludePath_24, Res_10);
        }
        else
        {
          MR_String Code_21 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_13, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_8, PrintLineNumbers_20, Context_14);
          mercury__io__write_string_4_p_0(Stream_8, Code_21);
          *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        mercury__io__nl_3_p_0(Stream_8);
        ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_8, PrintLineNumbers_20);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_decl_code_6_p_0(
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
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_decl_code\'/6", (MR_String) "foreign decl other than C#");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrintLineNumbers_21 = ((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String Var_36 = ((MR_String) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));

        if (((MR_tag((MR_Word) LiteralOrInclude_14)) == (MR_Integer) 1))
        {
          MR_String IncludeFileName_23 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_14, (MR_Integer) 0))));
          MR_String IncludePath_25;
          MR_Word InitialFileContext_26;

          parse_tree__file_names__make_include_file_path_3_p_0(Var_36, IncludeFileName_23, &IncludePath_25);
          {
            InitialFileContext_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InitialFileContext_26, 0) = ((MR_Box) (IncludePath_25));
            MR_hl_field(0, InitialFileContext_26, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_8, PrintLineNumbers_21, InitialFileContext_26);
          libs__file_util__write_include_file_contents_5_p_0(Stream_8, IncludePath_25, Res_10);
        }
        else
        {
          MR_String Code_22 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_14, (MR_Integer) 0))));

          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_8, PrintLineNumbers_21, Context_15);
          mercury__io__write_string_4_p_0(Stream_8, Code_22);
          *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        mercury__io__nl_3_p_0(Stream_8);
        ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_8, PrintLineNumbers_21);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__3_3;

  ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;

  ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__3_3));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_env_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_enum_class_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_global_var_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv6_HeadVar__2_2;

  succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Res_10;

  ml_backend__mlds_to_cs_file__output_csharp_body_code_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_Res_10);
  *wrapper_arg_2 = ((MR_Box) (conv4_Res_10));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_2(
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
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_66;

  conv0_LambdaHeadVar__2_66 = ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__111__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_66));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word MLDS_8,
  MR_Word Stream_9,
  MR_Word * Errors_10)
{
  MR_bool succeeded;
  MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 0))));
  MR_Word GlobalData_14 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 2))));
  MR_Word ClassDefns_15 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 3))));
  MR_Word EnumDefns_16 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 4))));
  MR_Word EnvDefns_17 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 5))));
  MR_Word TableStructDefns_18 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 6))));
  MR_Word ProcDefns_19 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 7))));
  MR_Word InitPreds_20 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 8))));
  MR_Word FinalPreds_21 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 9))));
  MR_Word AllForeignCode_22 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 10))));
  MR_Word ExportedEnums_23 = ((MR_Word) ((MR_hl_field(0, MLDS_8, (MR_Integer) 11))));
  MR_Word ScalarCellGroupMap_24;
  MR_Word VectorCellGroupMap_25;
  MR_Word RttiDefns_27;
  MR_Word CellDefns_28;
  MR_Word ClosureWrapperFuncDefns_29;
  MR_Word ScalarCellGroups_31;
  MR_Word ScalarCellRows_32;
  MR_Word RevSeqNumCodeAddrs_36;
  MR_Word CodeAddrs_37;
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
  MR_Word SortedEnumDefns_50;
  MR_Word SortedEnvDefns_51;
  MR_Word EnvVarNamesSet0_52;
  MR_Word EnvVarNamesSet1_53;
  MR_Word EnvVarNamesSet_54;
  MR_Word StaticCtorCalls_55;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_58_58;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_59_59;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_61_61;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_62_62;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_63_63;
  MR_Word STATE_VARIABLE_CodeAddrsInConsts_68_68;
  MR_Word Var_69;
  MR_Word Var_73;
  MR_Word Var_79;
  MR_Word Var_92;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_115;
  MR_Word Var_120;
  MR_Word Var_125;
  MR_Word Var_140;
  MR_Word Var_144;
  MR_Word Var_146;
  MR_Word Var_148;
  MR_Word _AllocIdMap_26;
  MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_68_68;
  MR_Word ForeignCode_38;
  MR_Box conv3_ForeignCode_38;
  MR_Box conv5_STATE_VARIABLE_IO_74_74;
  MR_Box conv7_STATE_VARIABLE_IO_80_80;
  MR_Box conv8_STATE_VARIABLE_IO_110_110;
  MR_Box conv9_STATE_VARIABLE_IO_116_116;
  MR_Box conv10_STATE_VARIABLE_IO_121_121;
  MR_Box conv11_STATE_VARIABLE_IO_126_126;
  MR_Box conv13_EnvVarNamesSet1_53;
  MR_Box conv15_EnvVarNamesSet_54;
  MR_Box conv16_STATE_VARIABLE_IO_141_141;

  ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_14, &ScalarCellGroupMap_24, &VectorCellGroupMap_25, &_AllocIdMap_26, &RttiDefns_27, &CellDefns_28, &ClosureWrapperFuncDefns_29);
  STATE_VARIABLE_CodeAddrsInConsts_58_58 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns_27, STATE_VARIABLE_CodeAddrsInConsts_58_58, &STATE_VARIABLE_CodeAddrsInConsts_59_59);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns_28, STATE_VARIABLE_CodeAddrsInConsts_59_59, &STATE_VARIABLE_CodeAddrsInConsts_60_60);
  ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns_18, STATE_VARIABLE_CodeAddrsInConsts_60_60, &STATE_VARIABLE_CodeAddrsInConsts_61_61);
  ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns_29, STATE_VARIABLE_CodeAddrsInConsts_61_61, &STATE_VARIABLE_CodeAddrsInConsts_62_62);
  ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns_19, STATE_VARIABLE_CodeAddrsInConsts_62_62, &STATE_VARIABLE_CodeAddrsInConsts_63_63);
  mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_24, &ScalarCellGroups_31);
  ScalarCellRows_32 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_6[1]), ScalarCellGroups_31);
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_6[2]), ScalarCellRows_32, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_63_63)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_68_68);
  STATE_VARIABLE_CodeAddrsInConsts_68_68 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_68_68));
  RevSeqNumCodeAddrs_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_CodeAddrsInConsts_68_68, (MR_Integer) 2))));
  Var_69 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  ml_backend__mlds_to_cs_file__make_code_addr_map_for_csharp_3_p_0(RevSeqNumCodeAddrs_36, Var_69, &CodeAddrs_37);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_22, ((MR_Box) ((MR_Integer) 1)), &conv3_ForeignCode_38);
  if (succeeded)
  {
    ForeignCode_38 = ((MR_Word) (conv3_ForeignCode_38));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ForeignDeclCodes_39 = ((MR_Word) ((MR_hl_field(0, ForeignCode_38, (MR_Integer) 0))));
    ForeignBodyCodes_40 = ((MR_Word) ((MR_hl_field(0, ForeignCode_38, (MR_Integer) 1))));
    ExportDefns_42 = ((MR_Word) ((MR_hl_field(0, ForeignCode_38, (MR_Integer) 3))));
  }
  else
  {
    ForeignDeclCodes_39 = (MR_Word) ((MR_Unsigned) 0U);
    ForeignBodyCodes_40 = (MR_Word) ((MR_Unsigned) 0U);
    ExportDefns_42 = (MR_Word) ((MR_Unsigned) 0U);
  }
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_12, &SourceFileName_43);
  Info_44 = ml_backend__mlds_to_cs_util__init_csharp_out_info_3_f_0(ModuleInfo_7, SourceFileName_43, CodeAddrs_37);
  ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(Info_44, Stream_9, ModuleName_12, ForeignDeclCodes_39, ProcDefns_19, &ForeignDeclErrors_45);
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_2[2]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_3));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (Info_44));
    MR_hl_field(0, Var_73, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, ForeignBodyCodes_40, &ForeignCodeResults_46, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_74_74);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_6[3]), ForeignCodeResults_46, &ForeignCodeErrors_47);
  ml_backend__mlds_to_cs_util__output_pragma_warning_disable_3_p_0(Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// RttiDefns\n");
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[1]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_5));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (Info_44));
    MR_hl_field(0, Var_79, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_79, 5) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(0, Var_79, 6) = ((MR_Box) ((MR_Unsigned) 4U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_79, RttiDefns_27, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_80_80);
  ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, RttiDefns_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Cell and tabling definitions\n");
  ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, CellDefns_28);
  ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, TableStructDefns_18);
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_28, TableStructDefns_18);
  ml_backend__mlds_to_cs_global__output_init_global_var_method_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, Var_92);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Scalar common data\n");
  ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, ScalarCellGroupMap_24);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Vector common data\n");
  ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, VectorCellGroupMap_25);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Method pointers\n");
  ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, CodeAddrs_37);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Function definitions\n");
  Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_29, ProcDefns_19);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_108, &SortedFuncDefns_48);
  {
    Var_109 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_109, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[2]));
    MR_hl_field(0, Var_109, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_6));
    MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_109, 3) = ((MR_Box) (Info_44));
    MR_hl_field(0, Var_109, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_109, 5) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(0, Var_109, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_109, SortedFuncDefns_48, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_110_110);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Class definitions\n");
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), ClassDefns_15, &SortedClassDefns_49);
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_2[3]));
    MR_hl_field(0, Var_115, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_7));
    MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_115, 3) = ((MR_Box) (Info_44));
    MR_hl_field(0, Var_115, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_115, 5) = ((MR_Box) ((MR_Unsigned) 1U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, SortedClassDefns_49, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_116_116);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Enum class definitions\n");
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0), EnumDefns_16, &SortedEnumDefns_50);
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_2[4]));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_8));
    MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_120, 3) = ((MR_Box) (Info_44));
    MR_hl_field(0, Var_120, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_120, 5) = ((MR_Box) ((MR_Unsigned) 1U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_120, SortedEnumDefns_50, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_121_121);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// Env definitions\n");
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_env_defn_0), EnvDefns_17, &SortedEnvDefns_51);
  {
    Var_125 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_125, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_2[5]));
    MR_hl_field(0, Var_125, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_9));
    MR_hl_field(0, Var_125, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_125, 3) = ((MR_Box) (Info_44));
    MR_hl_field(0, Var_125, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_125, 5) = ((MR_Box) ((MR_Unsigned) 1U));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_env_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_125, SortedEnvDefns_51, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_126_126);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// ExportDefns\n");
  ml_backend__mlds_to_cs_export__output_exports_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, ExportDefns_42);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// ExportedEnums\n");
  ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_6_p_0(Info_44, Stream_9, (MR_Unsigned) 1U, ExportedEnums_23);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n// EnvVarNames\n");
  mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_52);
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_6[4]), ProcDefns_19, ((MR_Box) (EnvVarNamesSet0_52)), &conv13_EnvVarNamesSet1_53);
  EnvVarNamesSet1_53 = ((MR_Word) (conv13_EnvVarNamesSet1_53));
  mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_6[5]), ClosureWrapperFuncDefns_29, ((MR_Box) (EnvVarNamesSet1_53)), &conv15_EnvVarNamesSet_54);
  EnvVarNamesSet_54 = ((MR_Word) (conv15_EnvVarNamesSet_54));
  {
    Var_140 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_140, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[1]));
    MR_hl_field(0, Var_140, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0_12));
    MR_hl_field(0, Var_140, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_140, 3) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_140, 4) = ((MR_Box) ((MR_Unsigned) 1U));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_140, EnvVarNamesSet_54, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_141_141);
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) ((MR_String) "MR_init_vector_common_data"));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) (InitPreds_20));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) ((MR_String) "MR_init_scalar_common_data"));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_148));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) ((MR_String) "MR_init_data"));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_146));
  }
  {
    StaticCtorCalls_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StaticCtorCalls_55, 0) = ((MR_Box) ((MR_String) "MR_init_rtti"));
    MR_hl_field(1, StaticCtorCalls_55, 1) = ((MR_Box) (Var_144));
  }
  ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0(Stream_9, ModuleName_12, (MR_Unsigned) 1U, StaticCtorCalls_55, FinalPreds_21);
  ml_backend__mlds_to_cs_file__output_src_end_for_csharp_4_p_0(Stream_9, ModuleName_12);
  *Errors_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_45, ForeignCodeErrors_47);
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_target_util__write_indentstr_line_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Res_10;

  ml_backend__mlds_to_cs_file__output_csharp_decl_code_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Res_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Res_10));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word ModuleName_12,
  MR_Word ForeignDecls_14,
  MR_Word FuncDefns_15,
  MR_Word * Errors_16)
{
  MR_bool succeeded;
  MR_Word ForeignDeclResults_18;
  MR_String ClassName_19;
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Info_10, (MR_Integer) 3))));
  MR_String Var_28;
  MR_Word Var_32;
  MR_Box conv1_STATE_VARIABLE_IO_33_33;

  ml_backend__mlds_to_target_util__output_auto_gen_comment_4_p_0(Stream_11, Var_22);
  Var_28 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_12);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "// :- module ");
  mercury__io__write_string_4_p_0(Stream_11, Var_28);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) ".\n\n");
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "namespace mercury {\n\n");
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_2[1]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (Info_10));
    MR_hl_field(0, Var_32, 4) = ((MR_Box) (Stream_11));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, ForeignDecls_14, &ForeignDeclResults_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_33_33);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_6[0]), ForeignDeclResults_18, Errors_16);
  parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ModuleName_12, (MR_Integer) 0, (MR_String) "__", &ClassName_19);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "public static class ");
  mercury__io__write_string_4_p_0(Stream_11, ClassName_19);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " {\n");
  succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(FuncDefns_15);
  if (succeeded)
  {
    MR_String IndentStr_70;
    MR_String Indent1Str_71;
    MR_Word Body_72;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_String Var_81;
    MR_String Var_83;
    MR_Word Var_86;
    MR_Box conv3_STATE_VARIABLE_IO_59_87;

    IndentStr_70 = libs__indent__indent2_string_1_f_0((MR_Unsigned) 1U);
    Indent1Str_71 = libs__indent__indent2_string_1_f_0(((MR_Unsigned) 1U + (MR_Unsigned) 1U));
    mercury__io__write_string_4_p_0(Stream_11, IndentStr_70);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "public static void Main(string[] args)\n");
    mercury__io__write_string_4_p_0(Stream_11, IndentStr_70);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "{\n");
    Var_83 = mercury__string__f_43_43_2_f_0(ClassName_19, (MR_String) ".main_2_p_0();");
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "   ", Var_83);
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_file_scalar_common_1[13])));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_String) "   library.ML_std_library_init();"));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
    }
    {
      Body_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Body_72, 0) = ((MR_Box) ((MR_String) "try {"));
      MR_hl_field(1, Body_72, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_86 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[0]));
      MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0_3));
      MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_86, 3) = ((MR_Box) (Stream_11));
      MR_hl_field(0, Var_86, 4) = ((MR_Box) (Indent1Str_71));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, Body_72, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_59_87);
    mercury__io__write_string_4_p_0(Stream_11, IndentStr_70);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}\n");
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
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_file__output_method_ptr_constant_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word CodeAddrs_10)
{
  MR_String IndentStr_12;
  MR_Word Var_15;
  MR_Box conv0_STATE_VARIABLE_IO_14;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_9);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_method_ptr_constants_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (IndentStr_12));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, CodeAddrs_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_src_end_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6)
{
  MR_String Var_18;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "}\n\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "}\n");
  Var_18 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "// :- end_module ");
  mercury__io__write_string_4_p_0(Stream_5, Var_18);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ".\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__280__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__274__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleName_9,
  MR_Unsigned Indent_10,
  MR_Word StaticConstructors_11,
  MR_Word FinalPreds_12)
{
  MR_String IndentStr_14;
  MR_String Indent1Str_15;
  MR_String ClassName_16;
  MR_Word WriteCall_17;
  MR_Word WriteFinal_19;
  MR_Unsigned Var_23;
  MR_Box conv0_STATE_VARIABLE_IO_46_46;
  MR_Box conv1_STATE_VARIABLE_IO_64_64;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  Var_23 = (Indent_10 + (MR_Unsigned) 1U);
  Indent1Str_15 = libs__indent__indent2_string_1_f_0(Var_23);
  parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(ModuleName_9, (MR_Integer) 0, (MR_String) "__", &ClassName_16);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static ");
  mercury__io__write_string_4_p_0(Stream_8, ClassName_16);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "() {\n");
  {
    WriteCall_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, WriteCall_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[0]));
    MR_hl_field(0, WriteCall_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_1));
    MR_hl_field(0, WriteCall_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, WriteCall_17, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, WriteCall_17, 4) = ((MR_Box) (Indent1Str_15));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteCall_17, StaticConstructors_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_46_46);
  {
    WriteFinal_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, WriteFinal_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[0]));
    MR_hl_field(0, WriteFinal_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_static_constructor_7_p_0_2));
    MR_hl_field(0, WriteFinal_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, WriteFinal_19, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, WriteFinal_19, 4) = ((MR_Box) (Indent1Str_15));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteFinal_19, FinalPreds_12, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_64_64);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
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
      MR_Word SeqNumsCodeAddrs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_11;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_16;
      MR_Word STATE_VARIABLE_CodeAddrMap_17_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CodeAddrMap_0_2;

      SeqNum_7 = ((MR_Integer) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
      CodeAddr_8 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
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
ml_backend__mlds_to_cs_file__output_csharp_mlds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Errors_10;

  ml_backend__mlds_to_cs_file__output_csharp_src_file_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Errors_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_Errors_10));
}

void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_mlds_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word ModuleInfo_8,
  MR_Word MLDS_9,
  MR_Word * Succeeded_10)
{
  MR_Word Globals_12;
  MR_Word ModuleName_13;
  MR_String SourceFileName_14;
  MR_Word Var_22;
  MR_String _SourceFileNameProposed_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_12);
  ModuleName_13 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_9);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_12, (MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_mlds\'/6", (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_cs_file_scalar_common_1[2])), ModuleName_13, &SourceFileName_14, &_SourceFileNameProposed_15);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_2[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_mlds_6_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (MLDS_9));
  }
  libs__file_util__output_to_file_stream_7_p_0(ProgressStream_7, Globals_12, SourceFileName_14, Var_22, Succeeded_10);
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
