/*
** Automatically generated from `mlds_to_java_file.m'
** by the Mercury compiler,
** version rotd-2018-11-14
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_to_java_file__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_code_addr_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_code_addr_0__plain_ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_file__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__166__1_1_f_0(
  MR_Word LambdaHeadVar__1_79);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_env_var_definition_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_final_pred_call_4_p_0(
  MR_Integer Indent_5,
  MR_String FinalPred_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_init_for_java_2_4_p_0(
  MR_Integer Indent_5,
  MR_String InitPred_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_body_code_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_decl_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word DeclCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_import_3_p_0(
  MR_Word Import_4);

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
  MR_Integer Indent_8,
  MR_Word MLDS_9,
  MR_Word * Errors_10);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6);

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
  MR_Integer Indent_11,
  MR_Word MercuryModuleName_12,
  MR_Word Imports_13,
  MR_Word ForeignDecls_14,
  MR_Word FuncDefns_15,
  MR_Word * Errors_16);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_debug_class_init_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_debug_class_init_4_p_0(
  MR_Word ModuleName_5,
  MR_String State_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word FinalPreds_6);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word InitPreds_6);

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
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_1[15][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_2[14][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_3[1][4];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_4[5][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_5[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_6[7][6];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_7[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_8[2][8];




static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_1[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "java.lang.System.exit(jmercury.runtime.JavaInternal.exit_status);")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stderr_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "io.flush_output_3_p_0(io.stdout_stream_0_f_0());")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.runMain(run_main);")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "};")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "    }")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "  }\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "    }\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) " init]\");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "end")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_debug_class_init_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_src_end_for_java_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[1])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[1])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[6])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[6])),
    ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_4[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_6[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_7[2][5] = {
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
    ((MR_Box) (&ml_backend__mlds_to_java_file__cord__pti_cord_1__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_file_scalar_common_8[2][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__166__1_1_f_0(
  MR_Word LambdaHeadVar__1_79)
{
  {
    MR_Word LambdaHeadVar__2_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_79, (MR_Integer) 4))));

    return LambdaHeadVar__2_80;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_env_var_definition_for_java_4_p_0(
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
    mercury__io__write_string_3_p_0((MR_String) "java.lang.System.getenv(\"");
    mercury__io__write_string_3_p_0(EnvVarName_6);
    mercury__io__write_string_3_p_0((MR_String) "\") == null \? 0 : 1;\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_final_pred_call_4_p_0(
  MR_Integer Indent_5,
  MR_String FinalPred_6)
{
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0(FinalPred_6);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_init_for_java_2_4_p_0(
  MR_Integer Indent_5,
  MR_String InitPred_6)
{
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0(InitPred_6);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_body_code_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10)
{
  {
    MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_9, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word LiteralOrInclude_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_9, (MR_Integer) 1))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_9, (MR_Integer) 2))));

    switch (Lang_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_body_code\'/6", (MR_String) "foreign code other than Java");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        if (((MR_tag((MR_Word) LiteralOrInclude_13)) == (MR_Integer) 1))
        {
          MR_String IncludeFile_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_13, (MR_Integer) 0))));
          MR_String SourceFileName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
          MR_String IncludePath_31;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_39;

          parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_30, IncludeFile_29, &IncludePath_31);
          Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (IncludePath_31));
            MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ml_backend__mlds_to_java_util__output_context_for_java_5_p_0(Var_32, (MR_Integer) 0, Var_34);
          libs__file_util__write_include_file_contents_cur_stream_4_p_0(IncludePath_31, Res_10);
          mercury__io__nl_2_p_0();
          Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
          ml_backend__mlds_to_java_util__output_context_for_java_5_p_0(Var_39, (MR_Integer) 1, Context_14);
        }
        else
        {
          MR_String Code_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_13, (MR_Integer) 0))));

          ml_backend__mlds_to_java_util__write_string_with_context_block_6_p_0(Info_7, Indent_8, Code_28, Context_14);
          *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_decl_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word DeclCode_9,
  MR_Word * Res_10)
{
  {
    MR_Word Lang_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclCode_9, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word LiteralOrInclude_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_9, (MR_Integer) 1))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_9, (MR_Integer) 2))));

    switch (Lang_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_java_decl\'/6", (MR_String) "foreign decl other than Java");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        if (((MR_tag((MR_Word) LiteralOrInclude_14)) == (MR_Integer) 1))
        {
          MR_String IncludeFile_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_14, (MR_Integer) 0))));
          MR_String SourceFileName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
          MR_String IncludePath_32;
          MR_Word Var_33;
          MR_Word Var_35;
          MR_Word Var_40;

          parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_31, IncludeFile_30, &IncludePath_32);
          Var_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (IncludePath_32));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ml_backend__mlds_to_java_util__output_context_for_java_5_p_0(Var_33, (MR_Integer) 0, Var_35);
          libs__file_util__write_include_file_contents_cur_stream_4_p_0(IncludePath_32, Res_10);
          mercury__io__nl_2_p_0();
          Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) & (MR_Integer) 1);
          ml_backend__mlds_to_java_util__output_context_for_java_5_p_0(Var_40, (MR_Integer) 1, Context_15);
        }
        else
        {
          MR_String Code_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_14, (MR_Integer) 0))));

          ml_backend__mlds_to_java_util__write_string_with_context_block_6_p_0(Info_7, Indent_8, Code_29, Context_15);
          *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_import_3_p_0(
  MR_Word Import_4)
{
  {
    MR_Word ImportType_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Import_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ImportName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Import_4, (MR_Integer) 1))));
    MR_Word SymName_8;
    MR_String ClassFile_9;
    MR_Word Var_16;
    MR_Word Var_19;

    switch (ImportType_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_file.output_import\'/3", (MR_String) "import_type \140user_visible_interface\' in Java backend");
            return;
          }
        }
        break;
    }
    SymName_8 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ImportName_7);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_8, (MR_Integer) 0, (MR_String) "__", &ClassFile_9);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (ClassFile_9));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[14])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "// import "));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    mercury__io__write_strings_3_p_0(Var_16);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_file__output_env_var_definition_for_java_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv23_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv23_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv21_HeadVar__3_3;

    ml_backend__mlds_to_target_util__accumulate_env_var_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv21_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_func__output_function_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_global_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
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
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_Res_10;

    ml_backend__mlds_to_java_file__output_java_body_code_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv15_Res_10);
    *wrapper_arg_2 = ((MR_Box) (conv15_Res_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__3_3;

    ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv14_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv14_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_HeadVar__3_3;

    ml_backend__ml_rename_classes__rename_class_names_in_global_var_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv13_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv13_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__3_3;

    ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_HeadVar__2_2;
    MR_Word conv9_HeadVar__4_4;

    ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0(((MR_Word) (wrapper_arg_1)), &conv10_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv9_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv9_HeadVar__4_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;
    MR_Word conv6_HeadVar__4_4;

    ml_backend__mlds_to_java_class__maybe_shorten_long_class_name_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv6_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv6_HeadVar__4_4));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;
    MR_Word conv3_HeadVar__5_5;

    ml_backend__mlds_to_java_wrap__generate_addr_wrapper_class_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__5_5));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_2(
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
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_80;

    conv0_LambdaHeadVar__2_80 = ml_backend__mlds_to_java_file__IntroducedFrom__func__output_java_src_file__166__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_80));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_java_src_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Integer Indent_8,
  MR_Word MLDS_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 0))));
    MR_Word Imports_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 1))));
    MR_Word GlobalData_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 2))));
    MR_Word TypeDefns0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 3))));
    MR_Word TableStructDefns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 4))));
    MR_Word ProcDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 5))));
    MR_Word InitPreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 6))));
    MR_Word FinalPreds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 7))));
    MR_Word AllForeignCode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 8))));
    MR_Word ExportedEnums_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 9))));
    MR_Word ScalarCellGroupMap_22;
    MR_Word VectorCellGroupMap_23;
    MR_Word RttiDefns0_25;
    MR_Word CellDefns0_26;
    MR_Word ClosureWrapperFuncDefns0_27;
    MR_Word MLDS_ModuleName_28;
    MR_Word ScalarCellGroups_30;
    MR_Word ScalarCellRows_31;
    MR_Word RevSeqNumsCodeAddrs_35;
    MR_Word RevCodeAddrs_36;
    MR_Word CodeAddrsMap_37;
    MR_Word CodeAddrsAssocList_38;
    MR_Word WrapperClassDefns0_39;
    MR_Word AddrOfMap_40;
    MR_Word TypeDefns1_41;
    MR_Word RenamingMap1_42;
    MR_Word WrapperClassDefns1_43;
    MR_Word RenamingMap_44;
    MR_Word TypeDefns_45;
    MR_Word WrapperClassDefns_46;
    MR_Word RttiDefns_47;
    MR_Word CellDefns_48;
    MR_Word TableStructDefns_49;
    MR_Word ClosureWrapperFuncDefns_50;
    MR_Word ProcDefns_51;
    MR_Word ForeignCode_53;
    MR_Word ForeignDeclCodes_54;
    MR_Word ForeignBodyCodes_55;
    MR_Word ExportDefns_57;
    MR_Word Globals_58;
    MR_String SourceFileName_59;
    MR_Word Info_60;
    MR_Word ForeignDeclErrors_61;
    MR_Word ForeignCodeResults_62;
    MR_Word ForeignCodeErrors_63;
    MR_Word SortedFuncDefns_64;
    MR_Word SortedClassDefns_65;
    MR_Word EnvVarNamesSet0_66;
    MR_Word EnvVarNamesSet1_67;
    MR_Word EnvVarNamesSet_68;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_71_71;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_72_72;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_73_73;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_74_74;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_75_75;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_76_76;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_77_77;
    MR_Word STATE_VARIABLE_CodeAddrsInConsts_82_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_98;
    MR_Word Var_103;
    MR_Integer Var_105;
    MR_Integer Var_108;
    MR_Integer Var_113;
    MR_Integer Var_116;
    MR_Integer Var_119;
    MR_Word Var_120;
    MR_Integer Var_125;
    MR_Integer Var_130;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Integer Var_138;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Integer Var_146;
    MR_Integer Var_150;
    MR_Integer Var_155;
    MR_Integer Var_160;
    MR_Integer Var_165;
    MR_Word Var_172;
    MR_Integer Var_174;
    MR_Word _AllocIdMap_24;
    MR_Box conv2_STATE_VARIABLE_CodeAddrsInConsts_82_82;
    MR_Box conv5_AddrOfMap_40;
    MR_Box conv8_RenamingMap1_42;
    MR_Box conv11_RenamingMap_44;
    MR_Box conv16_STATE_VARIABLE_IO_99_99;
    MR_Box conv18_STATE_VARIABLE_IO_104_104;
    MR_Box conv19_STATE_VARIABLE_IO_137_137;
    MR_Box conv20_STATE_VARIABLE_IO_145_145;
    MR_Box conv22_EnvVarNamesSet1_67;
    MR_Box conv24_EnvVarNamesSet_68;
    MR_Box conv25_STATE_VARIABLE_IO_173_173;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_14, &ScalarCellGroupMap_22, &VectorCellGroupMap_23, &_AllocIdMap_24, &RttiDefns0_25, &CellDefns0_26, &ClosureWrapperFuncDefns0_27);
    MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
    STATE_VARIABLE_CodeAddrsInConsts_71_71 = ml_backend__mlds_to_target_util__init_code_addrs_in_consts_0_f_0();
    ml_backend__mlds_to_target_util__method_ptrs_in_class_defns_3_p_0(TypeDefns0_15, STATE_VARIABLE_CodeAddrsInConsts_71_71, &STATE_VARIABLE_CodeAddrsInConsts_72_72);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(RttiDefns0_25, STATE_VARIABLE_CodeAddrsInConsts_72_72, &STATE_VARIABLE_CodeAddrsInConsts_73_73);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(CellDefns0_26, STATE_VARIABLE_CodeAddrsInConsts_73_73, &STATE_VARIABLE_CodeAddrsInConsts_74_74);
    ml_backend__mlds_to_target_util__method_ptrs_in_global_var_defns_3_p_0(TableStructDefns0_16, STATE_VARIABLE_CodeAddrsInConsts_74_74, &STATE_VARIABLE_CodeAddrsInConsts_75_75);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ClosureWrapperFuncDefns0_27, STATE_VARIABLE_CodeAddrsInConsts_75_75, &STATE_VARIABLE_CodeAddrsInConsts_76_76);
    ml_backend__mlds_to_target_util__method_ptrs_in_function_defns_3_p_0(ProcDefns0_17, STATE_VARIABLE_CodeAddrsInConsts_76_76, &STATE_VARIABLE_CodeAddrsInConsts_77_77);
    mercury__map__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_22, &ScalarCellGroups_30);
    ScalarCellRows_31 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[7]), ScalarCellGroups_30);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_code_addrs_in_consts_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[8]), ScalarCellRows_31, ((MR_Box) (STATE_VARIABLE_CodeAddrsInConsts_77_77)), &conv2_STATE_VARIABLE_CodeAddrsInConsts_82_82);
    STATE_VARIABLE_CodeAddrsInConsts_82_82 = ((MR_Word) (conv2_STATE_VARIABLE_CodeAddrsInConsts_82_82));
    RevSeqNumsCodeAddrs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CodeAddrsInConsts_82_82, (MR_Integer) 2))));
    mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), RevSeqNumsCodeAddrs_35, &RevCodeAddrs_36);
    Var_83 = mercury__multi_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0));
    ml_backend__mlds_to_java_file__make_code_addr_map_for_java_3_p_0(RevCodeAddrs_36, Var_83, &CodeAddrsMap_37);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[1]), CodeAddrsMap_37, &CodeAddrsAssocList_38);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (MLDS_ModuleName_28));
    }
    Var_85 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[0]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[1]), Var_84, CodeAddrsAssocList_38, &WrapperClassDefns0_39, ((MR_Box) (Var_85)), &conv5_AddrOfMap_40);
    AddrOfMap_40 = ((MR_Word) (conv5_AddrOfMap_40));
    Var_87 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[9]), TypeDefns0_15, &TypeDefns1_41, ((MR_Box) (Var_87)), &conv8_RenamingMap1_42);
    RenamingMap1_42 = ((MR_Word) (conv8_RenamingMap1_42));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[10]), WrapperClassDefns0_39, &WrapperClassDefns1_43, ((MR_Box) (RenamingMap1_42)), &conv11_RenamingMap_44);
    RenamingMap_44 = ((MR_Word) (conv11_RenamingMap_44));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RenamingMap_44);
    if (succeeded)
    {
      TypeDefns_45 = TypeDefns0_15;
      WrapperClassDefns_46 = WrapperClassDefns0_39;
      RttiDefns_47 = RttiDefns0_25;
      CellDefns_48 = CellDefns0_26;
      TableStructDefns_49 = TableStructDefns0_16;
      ClosureWrapperFuncDefns_50 = ClosureWrapperFuncDefns0_27;
      ProcDefns_51 = ProcDefns0_17;
    }
    else
    {
      MR_Word Renaming_52;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_94;

      {
        Renaming_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Renaming_52, 0) = ((MR_Box) (MLDS_ModuleName_28));
        MR_hl_field(MR_mktag(0), Renaming_52, 1) = ((MR_Box) (RenamingMap_44));
      }
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_6));
        MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (Renaming_52));
      }
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_89, TypeDefns1_41, &TypeDefns_45);
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_89, WrapperClassDefns1_43, &WrapperClassDefns_46);
      {
        Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[4]));
        MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_7));
        MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (Renaming_52));
      }
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_91, RttiDefns0_25, &RttiDefns_47);
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_91, CellDefns0_26, &CellDefns_48);
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), Var_91, TableStructDefns0_16, &TableStructDefns_49);
      {
        Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_6[5]));
        MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_8));
        MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (Renaming_52));
      }
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_94, ClosureWrapperFuncDefns0_27, &ClosureWrapperFuncDefns_50);
      mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_94, ProcDefns0_17, &ProcDefns_51);
    }
    ForeignCode_53 = ml_backend__mlds_to_java_file__mlds_get_java_foreign_code_1_f_0(AllForeignCode_20);
    ForeignDeclCodes_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_53, (MR_Integer) 0))));
    ForeignBodyCodes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_53, (MR_Integer) 1))));
    ExportDefns_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_53, (MR_Integer) 3))));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_58);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_58, ModuleName_12, &SourceFileName_59);
    Info_60 = ml_backend__mlds_to_java_util__init_java_out_info_3_f_0(ModuleInfo_7, SourceFileName_59, AddrOfMap_40);
    ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0(Info_60, Indent_8, ModuleName_12, Imports_13, ForeignDeclCodes_54, ProcDefns_51, &ForeignDeclErrors_61);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_9));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (Info_60));
      MR_hl_field(MR_mktag(0), Var_98, 4) = ((MR_Box) (Indent_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_98, ForeignBodyCodes_55, &ForeignCodeResults_62, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_99_99);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[11]), ForeignCodeResults_62, &ForeignCodeErrors_63);
    mercury__io__write_string_3_p_0((MR_String) "\n// RttiDefns\n");
    Var_105 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_11));
      MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (Info_60));
      MR_hl_field(MR_mktag(0), Var_103, 4) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), Var_103, 5) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_103, RttiDefns_47, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_104_104);
    Var_108 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_5_p_0(Info_60, Var_108, RttiDefns_47);
    mercury__io__write_string_3_p_0((MR_String) "\n// Cell and tabling definitions\n");
    Var_113 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_global__output_global_var_decls_for_java_5_p_0(Info_60, Var_113, CellDefns_48);
    Var_116 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_global__output_global_var_decls_for_java_5_p_0(Info_60, Var_116, TableStructDefns_49);
    Var_119 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_48, TableStructDefns_49);
    ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0(Info_60, Var_119, Var_120);
    mercury__io__write_string_3_p_0((MR_String) "\n// Scalar common data\n");
    Var_125 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0(Info_60, Var_125, ScalarCellGroupMap_22);
    mercury__io__write_string_3_p_0((MR_String) "\n// Vector common data\n");
    Var_130 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_global__output_vector_common_data_for_java_5_p_0(Info_60, Var_130, VectorCellGroupMap_23);
    mercury__io__write_string_3_p_0((MR_String) "\n// Function definitions\n");
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_50, ProcDefns_51);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_135, &SortedFuncDefns_64);
    Var_138 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_12));
      MR_hl_field(MR_mktag(0), Var_136, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_136, 3) = ((MR_Box) (Info_60));
      MR_hl_field(MR_mktag(0), Var_136, 4) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(0), Var_136, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_136, SortedFuncDefns_64, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_137_137);
    mercury__io__write_string_3_p_0((MR_String) "\n// Class definitions\n");
    Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), WrapperClassDefns_46, TypeDefns_45);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_143, &SortedClassDefns_65);
    Var_146 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_13));
      MR_hl_field(MR_mktag(0), Var_144, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_144, 3) = ((MR_Box) (Info_60));
      MR_hl_field(MR_mktag(0), Var_144, 4) = ((MR_Box) (Var_146));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_144, SortedClassDefns_65, ((MR_Box) ((MR_Integer) 0)), &conv20_STATE_VARIABLE_IO_145_145);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportDefns\n");
    Var_150 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_export__output_exports_for_java_5_p_0(Info_60, Var_150, ExportDefns_57);
    mercury__io__write_string_3_p_0((MR_String) "\n// ExportedEnums\n");
    Var_155 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_export__output_exported_enums_for_java_5_p_0(Info_60, Var_155, ExportedEnums_21);
    mercury__io__write_string_3_p_0((MR_String) "\n// InitPreds\n");
    Var_160 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_file__output_inits_for_java_4_p_0(Var_160, InitPreds_18);
    mercury__io__write_string_3_p_0((MR_String) "\n// FinalPreds\n");
    Var_165 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_file__output_finals_for_java_4_p_0(Var_165, FinalPreds_19);
    mercury__io__write_string_3_p_0((MR_String) "\n// EnvVarNames\n");
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &EnvVarNamesSet0_66);
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[12]), ProcDefns_51, ((MR_Box) (EnvVarNamesSet0_66)), &conv22_EnvVarNamesSet1_67);
    EnvVarNamesSet1_67 = ((MR_Word) (conv22_EnvVarNamesSet1_67));
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[13]), ClosureWrapperFuncDefns_50, ((MR_Box) (EnvVarNamesSet1_67)), &conv24_EnvVarNamesSet_68);
    EnvVarNamesSet_68 = ((MR_Word) (conv24_EnvVarNamesSet_68));
    Var_174 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_172 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_src_file_6_p_0_16));
      MR_hl_field(MR_mktag(0), Var_172, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_172, 3) = ((MR_Box) (Var_174));
    }
    mercury__set__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_172, EnvVarNamesSet_68, ((MR_Box) ((MR_Integer) 0)), &conv25_STATE_VARIABLE_IO_173_173);
    ml_backend__mlds_to_java_file__output_src_end_for_java_4_p_0(Indent_8, ModuleName_12);
    *Errors_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_61, ForeignCodeErrors_63);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_end_for_java_4_p_0_1(
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
ml_backend__mlds_to_java_file__output_src_end_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6)
{
  {
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_String Var_34;
    MR_Box conv0_STATE_VARIABLE_IO_11_11;

    Var_34 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_6);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[13])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "  static {\n"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[6]), Var_26, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11_11);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
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
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Res_10;

    ml_backend__mlds_to_java_file__output_java_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_Res_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_file__output_import_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word MercuryModuleName_12,
  MR_Word Imports_13,
  MR_Word ForeignDecls_14,
  MR_Word FuncDefns_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word ForeignDeclResults_18;
    MR_String ClassName_19;
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 3))));
    MR_Word Var_34;
    MR_Box conv0_STATE_VARIABLE_IO_33_33;
    MR_Box conv2_STATE_VARIABLE_IO_35_35;

    ml_backend__mlds_to_target_util__output_auto_gen_comment_3_p_0(Var_22);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "/* :- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(MercuryModuleName_12);
    mercury__io__write_string_3_p_0((MR_String) ". */\n\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "package jmercury;\n");
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[4]), Imports_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33_33);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_src_start_for_java_9_p_0_2));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Info_10));
      MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (Indent_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, ForeignDecls_14, &ForeignDeclResults_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_35_35);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[5]), ForeignDeclResults_18, Errors_16);
    mercury__io__write_string_3_p_0((MR_String) "public class ");
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(MercuryModuleName_12, (MR_Integer) 0, (MR_String) "__", &ClassName_19);
    mercury__io__write_string_3_p_0(ClassName_19);
    mercury__io__write_string_3_p_0((MR_String) " {\n");
    ml_backend__mlds_to_java_file__output_debug_class_init_4_p_0(MercuryModuleName_12, (MR_String) "start");
    succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(FuncDefns_15);
    if (succeeded)
    {
      MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) (MR_Integer) 1);

      ml_backend__mlds_to_java_file__write_main_driver_for_java_4_p_0(Var_46, ClassName_19);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_debug_class_init_4_p_0_1(
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
ml_backend__mlds_to_java_file__output_debug_class_init_4_p_0(
  MR_Word ModuleName_5,
  MR_String State_6)
{
  {
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    Var_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_5);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (State_6));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[11])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "      System.out.println(\"["));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "    if (System.getenv(\"MERCURY_DEBUG_CLASS_INIT\") != null) {\n"));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_String) "  static {\n"));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_2[3]), Var_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__write_main_driver_for_java_4_p_0_1(
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
ml_backend__mlds_to_java_file__write_main_driver_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_String ClassName_6)
{
  {
    MR_Word Body_8;
    MR_String Var_19;
    MR_String Var_21;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_String Var_36;
    MR_String Var_38;
    MR_Word Var_53;
    MR_Integer Var_55;
    MR_Box conv0_STATE_VARIABLE_IO_54_54;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "public static void main");
    mercury__io__write_string_3_p_0((MR_String) "(java.lang.String[] args)\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    Var_21 = mercury__string__f_43_43_2_f_0(ClassName_6, (MR_String) "\";");
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "jmercury.runtime.JavaInternal.progname = \"", Var_21);
    Var_38 = mercury__string__f_43_43_2_f_0(ClassName_6, (MR_String) ".main_2_p_0();");
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "        ", Var_38);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_file_scalar_common_1[8])));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_String) "    public void run() {"));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) ((MR_String) "Runnable run_main = new Runnable() {"));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "benchmarking.ML_initialise();"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "library.ML_std_library_init();"));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.exit_status = 0;"));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) "jmercury.runtime.JavaInternal.args = args;"));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Body_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_8, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Body_8, 1) = ((MR_Box) (Var_23));
    }
    Var_55 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__write_main_driver_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Var_55));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, Body_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_file__output_final_pred_call_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_finals_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word FinalPreds_6)
{
  if (!((FinalPreds_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Var_15;
    MR_Integer Var_20;
    MR_Integer Var_25;
    MR_Word Var_30;
    MR_Integer Var_32;
    MR_Integer Var_34;
    MR_Integer Var_39;
    MR_Integer Var_44;
    MR_Box conv0_STATE_VARIABLE_IO_31_31;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_15 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_15);
    mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.JavaInternal.register_finaliser(\n");
    Var_20 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 2);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_20);
    mercury__io__write_string_3_p_0((MR_String) "new java.lang.Runnable() {\n");
    Var_25 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 3);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_25);
    mercury__io__write_string_3_p_0((MR_String) "public void run() {\n");
    Var_32 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 4);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_finals_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Var_32));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, FinalPreds_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_31);
    Var_34 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 3);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_34);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    Var_39 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 2);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_39);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    Var_44 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_44);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_file__output_init_for_java_2_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_file__output_inits_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Word InitPreds_6)
{
  if (!((InitPreds_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_15;
    MR_Integer Var_17;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_17 = (MR_Integer) ((MR_Unsigned) Indent_5 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_inits_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Var_17));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, InitPreds_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java_file__mlds_get_java_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
{
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
      ForeignCode_4 = (MR_Word) (&ml_backend__mlds_to_java_file_scalar_common_3[0]);
    return ForeignCode_4;
  }
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
      MR_Word CodeAddr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CodeAddrs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word OrigFuncSignature_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 1))));
      MR_Word OrigArgTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigFuncSignature_11, (MR_Integer) 0))));
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
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Errors_10;

    ml_backend__mlds_to_java_file__output_java_src_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv0_Errors_10);
    *wrapper_arg_1 = ((MR_Box) (conv0_Errors_10));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_file__output_java_mlds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word ModuleName_11;
    MR_String JavaSourceFile_12;
    MR_Word Var_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    ModuleName_11 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 0, (MR_String) ".java", ModuleName_11, &JavaSourceFile_12);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_java_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_java_file__output_java_mlds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_6_p_0(Globals_10, JavaSourceFile_12, Var_19, Succeeded_8);
  }
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
