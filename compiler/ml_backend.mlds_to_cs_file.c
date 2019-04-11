/*
** Automatically generated from `mlds_to_cs_file.m'
** by the Mercury compiler,
** version rotd-2018-07-12
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
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__373__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__373__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_39);

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__366__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_27);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__106__1_1_f_0(
  MR_Word LambdaHeadVar__1_57);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constant_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word CodeAddr_9,
  MR_String Name_10);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_body_code_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ForeignBodyCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_decl_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word DeclCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word MercuryModuleName_11,
  MR_Word ForeignDecls_13,
  MR_Word Defns_14);

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_src_end_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0(
  MR_Word MercuryModuleName_7,
  MR_Integer Indent_8,
  MR_Word StaticConstructors_9,
  MR_Word FinalPreds_10);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word CodeAddrs_8);

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
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_2[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_3[4][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_4[3][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_5[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_6[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_7[5][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_8[3][6];




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
    ((MR_Box) ((MR_String) "}")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "       System.Environment.ExitCode = 1;")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.ExitCode == 0) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "   }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "       System.Console.Error.WriteLine(e.StackTrace);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "           \"MERCURY_SUPPRESS_STACK_TRACE\") == null) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "   if (System.Environment.GetEnvironmentVariable(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "       (univ.Univ_0) e.exception);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "   exception.ML_report_uncaught_exception(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "} catch (runtime.Exception e) {")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_3[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_4[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_7[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_8[2])),
    ((MR_Box) (ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__373__1_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_file_scalar_common_8[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__373__1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__373__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_39)
{
  {
    MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Box conv0_LambdaHeadVar__3_41;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_44);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (LambdaHeadVar__1_39));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[13])));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "(sender, ev) => "));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) "System.AppDomain.CurrentDomain.ProcessExit += "));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[4]), Var_48, ((MR_Box) ((MR_Integer) 0)), &conv0_LambdaHeadVar__3_41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__366__1_4_p_0(
  MR_Integer Indent_8,
  MR_String LambdaHeadVar__1_27)
{
  {
    MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_32);
    mercury__io__write_string_3_p_0(LambdaHeadVar__1_27);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__106__1_1_f_0(
  MR_Word LambdaHeadVar__1_57)
{
  {
    MR_Word LambdaHeadVar__2_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_57, (MR_Integer) 4))));

    return LambdaHeadVar__2_58;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6)
{
  {
    MR_Integer Var_16;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "private static int mercury_envvar_");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) " =\n");
    Var_16 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_16);
    mercury__io__write_string_3_p_0((MR_String) "System.Environment.GetEnvironmentVariable(\"");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) "\") == null \? 0 : 1;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constant_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word CodeAddr_9,
  MR_String Name_10)
{
  {
    MR_Word Signature_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_9, (MR_Integer) 1))));
    MR_Word ArgTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_13, (MR_Integer) 0))));
    MR_Word RetTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_13, (MR_Integer) 1))));
    MR_String TypeString_16;

    TypeString_16 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_7, ArgTypes_14, RetTypes_15);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "private static readonly ");
    mercury__io__write_string_3_p_0(TypeString_16);
    mercury__io__write_string_3_p_0((MR_String) " ");
    mercury__io__write_string_3_p_0(Name_10);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    ml_backend__mlds_to_cs_data__mlds_output_code_addr_for_csharp_5_p_0(Info_7, CodeAddr_9, (MR_Integer) 0);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_body_code_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ForeignBodyCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 0))));
    MR_Word LiteralOrInclude_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 2))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_body_code\'/5", (MR_String) "foreign code other than C#");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_38;
          MR_String Var_80 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
          MR_Word Var_82 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          MR_Unsigned packed_args_4;
          MR_Unsigned packed_args_5;

          if (((MR_tag((MR_Word) LiteralOrInclude_11)) == (MR_Integer) 1))
          {
            MR_String IncludeFileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_11, (MR_Integer) 0))));
            MR_String IncludePath_28;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Unsigned packed_args_2;
            MR_Unsigned packed_args_3;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_80, IncludeFileName_26, &IncludePath_28);
            packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
            Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
            {
              Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (IncludePath_28));
              MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ml_backend__mlds_to_cs_util__cs_output_context_4_p_0(Var_29, Var_30);
            libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_28);
          }
          else
          {
            MR_String Code_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_11, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_82, Context_12, Indent_7);
            mercury__io__write_string_3_p_0(Code_25);
          }
          mercury__io__nl_2_p_0();
          packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          ml_backend__mlds_to_cs_util__cs_output_default_context_3_p_0(Var_38);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_decl_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word DeclCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 0))));
    MR_Word LiteralOrInclude_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 2))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_8, (MR_Integer) 3))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_file.output_csharp_decl\'/5", (MR_String) "foreign decl other than C#");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_39;
          MR_String Var_81 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
          MR_Word Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          MR_Unsigned packed_args_4;
          MR_Unsigned packed_args_5;

          if (((MR_tag((MR_Word) LiteralOrInclude_12)) == (MR_Integer) 1))
          {
            MR_String IncludeFileName_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_12, (MR_Integer) 0))));
            MR_String IncludePath_29;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Unsigned packed_args_2;
            MR_Unsigned packed_args_3;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_81, IncludeFileName_27, &IncludePath_29);
            packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
            Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (IncludePath_29));
              MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ml_backend__mlds_to_cs_util__cs_output_context_4_p_0(Var_30, Var_31);
            libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_29);
          }
          else
          {
            MR_String Code_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_12, (MR_Integer) 0))));

            ml_backend__mlds_to_cs_util__indent_line_after_context_5_p_0(Var_83, Context_13, Indent_7);
            mercury__io__write_string_3_p_0(Code_26);
          }
          mercury__io__nl_2_p_0();
          packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
          ml_backend__mlds_to_cs_util__cs_output_default_context_3_p_0(Var_39);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_env_var_definition_for_csharp_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_global__output_global_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_csharp_body_code_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_2(
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
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_58;

    conv0_LambdaHeadVar__2_58 = ml_backend__mlds_to_cs_file__IntroducedFrom__func__output_csharp_src_file__106__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_58));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 0))));
    MR_Word GlobalData_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 2))));
    MR_Word TypeDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 3))));
    MR_Word TableStructDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 4))));
    MR_Word ProcDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
    MR_Word InitPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 6))));
    MR_Word FinalPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 7))));
    MR_Word AllForeignCode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 8))));
    MR_Word ExportedEnums_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 9))));
    MR_Word ScalarCellGroupMap_20;
    MR_Word VectorCellGroupMap_21;
    MR_Word RttiDefns_23;
    MR_Word CellDefns_24;
    MR_Word ClosureWrapperFuncDefns_25;
    MR_Word ScalarCellGroups_27;
    MR_Word ScalarCellRows_28;
    MR_Word RevSeqNumCodeAddrs_32;
    MR_Word CodeAddrs_33;
    MR_Word ForeignCode_34;
    MR_Word ForeignDeclCodes_35;
    MR_Word ForeignBodyCodes_36;
    MR_Word ExportDefns_38;
    MR_Word Globals_39;
    MR_String SourceFileName_40;
    MR_Word Info_41;
    MR_Word SortedFuncDefns_42;
    MR_Word SortedClassDefns_43;
    MR_Word EnvVarNamesSet0_44;
    MR_Word EnvVarNamesSet1_45;
    MR_Word EnvVarNamesSet_46;
    MR_Word StaticCtorCalls_47;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_50_50;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_51_51;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_52_52;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_53_53;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_54_54;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_55_55;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Word Var_61;
    MR_Word Var_65;
    MR_Word Var_70;
    MR_Integer Var_72;
    MR_Integer Var_75;
    MR_Integer Var_80;
    MR_Integer Var_83;
    MR_Integer Var_86;
    MR_Word Var_87;
    MR_Integer Var_92;
    MR_Integer Var_97;
    MR_Integer Var_102;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Integer Var_110;
    MR_Word Var_115;
    MR_Integer Var_117;
    MR_Integer Var_121;
    MR_Integer Var_126;
    MR_Word Var_133;
    MR_Integer Var_135;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_Word Var_142;
    MR_Integer Var_144;
    MR_Word _AllocIdMap_22;
    MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60;
    MR_Box conv3_STATE_VARIABLE_IO_71_71;
    MR_Box conv4_STATE_VARIABLE_IO_109_109;
    MR_Box conv5_STATE_VARIABLE_IO_116_116;
    MR_Box conv7_EnvVarNamesSet1_45;
    MR_Box conv9_EnvVarNamesSet_46;
    MR_Box conv10_STATE_VARIABLE_IO_134_134;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_12, &ScalarCellGroupMap_20, &VectorCellGroupMap_21, &_AllocIdMap_22, &RttiDefns_23, &CellDefns_24, &ClosureWrapperFuncDefns_25);
    STATE_VARIABLE_CodeAddrsInConsts_50_50 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns_23, STATE_VARIABLE_CodeAddrsInConsts_50_50, &STATE_VARIABLE_CodeAddrsInConsts_51_51);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns_24, STATE_VARIABLE_CodeAddrsInConsts_51_51, &STATE_VARIABLE_CodeAddrsInConsts_52_52);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns_14, STATE_VARIABLE_CodeAddrsInConsts_52_52, &STATE_VARIABLE_CodeAddrsInConsts_53_53);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns_25, STATE_VARIABLE_CodeAddrsInConsts_53_53, &STATE_VARIABLE_CodeAddrsInConsts_54_54);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns_15, STATE_VARIABLE_CodeAddrsInConsts_54_54, &STATE_VARIABLE_CodeAddrsInConsts_55_55);
    mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_20, &ScalarCellGroups_27);
    ScalarCellRows_28 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[0]), ScalarCellGroups_27);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[1]), ScalarCellRows_28, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_55_55)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60);
    STATE_VARIABLE_CodeAddrsInConsts_60_60 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_60_60));
    RevSeqNumCodeAddrs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_60_60, (MR_Integer) 2))));
    Var_61 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    ml_backend__mlds_to_cs_file__make_code_addr_map_for_csharp_3_p_0(RevSeqNumCodeAddrs_32, Var_61, &CodeAddrs_33);
    ForeignCode_34 = ml_backend__mlds_to_cs_file__mlds_get_csharp_foreign_code_1_f_0(AllForeignCode_18);
    ForeignDeclCodes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_34, (MR_Integer) 0))));
    ForeignBodyCodes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_34, (MR_Integer) 1))));
    ExportDefns_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_34, (MR_Integer) 3))));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_39);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_39, ModuleName_10, &SourceFileName_40);
    Info_41 = ml_backend__mlds_to_cs_util__init_csharp_out_info_3_f_0(ModuleInfo_6, SourceFileName_40, CodeAddrs_33);
    ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_41, Indent_7, ModuleName_10, ForeignDeclCodes_35, ProcDefns_15);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Indent_7));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodes_36, (MR_String) "\n", Var_65);
    ml_backend__mlds_to_cs_util__output_pragma_warning_disable_2_p_0();
    mercury__io__write_string_3_p_0((MR_String) "\n// RttiDefns\n");
    Var_72 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), Var_70, 5) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, RttiDefns_23, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_71_71);
    Var_75 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_5_p_0(Info_41, Var_75, RttiDefns_23);
    mercury__io__write_string_3_p_0((MR_String) "\n// Cell and tabling definitions\n");
    Var_80 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_5_p_0(Info_41, Var_80, CellDefns_24);
    Var_83 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_5_p_0(Info_41, Var_83, TableStructDefns_14);
    Var_86 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_24, TableStructDefns_14);
    ml_backend__mlds_to_cs_global__output_init_global_var_method_for_csharp_5_p_0(Info_41, Var_86, Var_87);
    mercury__io__write_string_3_p_0((MR_String) "\n// Scalar common data\n");
    Var_92 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_5_p_0(Info_41, Var_92, ScalarCellGroupMap_20);
    mercury__io__write_string_3_p_0((MR_String) "\n// Vector common data\n");
    Var_97 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_5_p_0(Info_41, Var_97, VectorCellGroupMap_21);
    mercury__io__write_string_3_p_0((MR_String) "\n// Method pointers\n");
    Var_102 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_file__output_method_ptr_constants_5_p_0(Info_41, Var_102, CodeAddrs_33);
    mercury__io__write_string_3_p_0((MR_String) "\n// Function definitions\n");
    Var_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_25, ProcDefns_15);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_107, &SortedFuncDefns_42);
    Var_110 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_5));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), Var_108, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, SortedFuncDefns_42, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_109_109);
    mercury__io__write_string_3_p_0((MR_String) "\n// Class definitions\n");
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), TypeDefns_13, &SortedClassDefns_43);
    Var_117 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (Info_41));
      MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) (Var_117));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, SortedClassDefns_43, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_116_116);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportDefns\n");
    Var_121 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_export__output_exports_for_csharp_5_p_0(Info_41, Var_121, ExportDefns_38);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportedEnums\n");
    Var_126 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_export__output_exported_enums_for_csharp_5_p_0(Info_41, Var_126, ExportedEnums_19);
    mercury__io__write_string_3_p_0((MR_String) "\n// EnvVarNames\n");
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_44);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[2]), ProcDefns_15, ((MR_Box) (EnvVarNamesSet0_44)), &conv7_EnvVarNamesSet1_45);
    EnvVarNamesSet1_45 = ((MR_Word) (conv7_EnvVarNamesSet1_45));
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_7[3]), ClosureWrapperFuncDefns_25, ((MR_Box) (EnvVarNamesSet1_45)), &conv9_EnvVarNamesSet_46);
    EnvVarNamesSet_46 = ((MR_Word) (conv9_EnvVarNamesSet_46));
    Var_135 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0_9));
      MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_133, 3) = ((MR_Box) (Var_135));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, EnvVarNamesSet_46, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_134_134);
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "MR_init_vector_common_data"));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (InitPreds_16));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_String) "MR_init_scalar_common_data"));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) ((MR_String) "MR_init_data"));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
    }
    {
      StaticCtorCalls_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StaticCtorCalls_47, 0) = ((MR_Box) ((MR_String) "MR_init_rtti"));
      MR_hl_field(MR_mktag(1), StaticCtorCalls_47, 1) = ((MR_Box) (Var_138));
    }
    Var_144 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0(ModuleName_10, Var_144, StaticCtorCalls_47, FinalPreds_17);
    ml_backend__mlds_to_cs_file__output_src_end_for_csharp_4_p_0(Indent_7, ModuleName_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_csharp_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word MercuryModuleName_11,
  MR_Word ForeignDecls_13,
  MR_Word Defns_14)
{
  {
    MR_bool succeeded;
    MR_String ClassName_16;
    MR_String Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
    MR_Word Var_31;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5)));

    ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(Var_19);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "/* :- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(MercuryModuleName_11);
    mercury__io__write_string_3_p_0((MR_String) ". */\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "namespace mercury {\n\n");
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_114_99_95_115_116_97_114_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Indent_10));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDecls_13, (MR_String) "\n", Var_31);
    mercury__io__write_string_3_p_0((MR_String) "public static class ");
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(MercuryModuleName_11, (MR_Integer) 0, (MR_String) "__", &ClassName_16);
    mercury__io__write_string_3_p_0(ClassName_16);
    mercury__io__write_string_3_p_0((MR_String) " {\n");
    succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(Defns_14);
    if (succeeded)
    {
      MR_Integer Var_40 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);

      ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_4_p_0(Var_40, ClassName_16);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_target_util__write_indented_line_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6)
{
  {
    MR_Word Body_8;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_String Var_23;
    MR_String Var_25;
    MR_Word Var_50;
    MR_Integer Var_52;
    MR_Box conv0_STATE_VARIABLE_IO_51_51;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "public static void Main");
    mercury__io__write_string_3_p_0((MR_String) "(string[] args)\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_25 = mercury__string__f_43_43_2_f_0(ClassName_6, (MR_String) ".main_2_p_0();");
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "   ", Var_25);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_cs_file_scalar_common_1[12])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "   library.ML_std_library_init();"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Body_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_8, 0) = ((MR_Box) ((MR_String) "try {"));
      MR_hl_field(MR_mktag(1), Body_8, 1) = ((MR_Box) (Var_20));
    }
    Var_52 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__write_main_driver_for_csharp_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Var_52));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, Body_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_51_51);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_src_end_for_csharp_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__373__1_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__IntroducedFrom__pred__output_static_constructor__366__1_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0(
  MR_Word MercuryModuleName_7,
  MR_Integer Indent_8,
  MR_Word StaticConstructors_9,
  MR_Word FinalPreds_10)
{
  {
    MR_String ClassName_12;
    MR_Word WriteCall_13;
    MR_Word WriteFinal_15;
    MR_Box conv0_STATE_VARIABLE_IO_38_38;
    MR_Box conv1_STATE_VARIABLE_IO_57_57;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "static ");
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(MercuryModuleName_7, (MR_Integer) 0, (MR_String) "__", &ClassName_12);
    mercury__io__write_string_3_p_0(ClassName_12);
    mercury__io__write_string_3_p_0((MR_String) "() {\n");
    {
      WriteCall_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WriteCall_13, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), WriteCall_13, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0_1));
      MR_hl_field(MR_mktag(0), WriteCall_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), WriteCall_13, 3) = ((MR_Box) (Indent_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteCall_13, StaticConstructors_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_38_38);
    {
      WriteFinal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), WriteFinal_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), WriteFinal_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_static_constructor_6_p_0_2));
      MR_hl_field(MR_mktag(0), WriteFinal_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), WriteFinal_15, 3) = ((MR_Box) (Indent_8));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteFinal_15, FinalPreds_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_57_57);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_method_ptr_constant_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_file__output_method_ptr_constants_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word CodeAddrs_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_method_ptr_constants_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, CodeAddrs_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
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
      ForeignCode_4 = (MR_Word) (&ml_backend__mlds_to_cs_file_scalar_common_2[0]);
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
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_cs_file__output_csharp_src_file_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
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
    MR_String SourceFile_12;
    MR_Word Var_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".cs", ModuleName_11, &SourceFile_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs_file__output_csharp_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_6_p_0(Globals_10, SourceFile_12, Var_19, Succeeded_8);
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
