/*
** Automatically generated from `mlds_to_c_file.m'
** by the Mercury compiler,
** version rotd-2019-06-20
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


// :- module ml_backend.mlds_to_c_file.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_file__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_file.mih"


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
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.name_mangle.mih"
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
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_class.mih"
#include "ml_backend.mlds_to_c_export.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_global.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__932__1_3_p_0(
  MR_String LambdaHeadVar__1_39);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defn_6_p_0(
  MR_Word Opts_7,
  MR_Integer _Indent_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_foreign_import_module_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ForeignImport_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word ForeignImport_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_7_p_0(
  MR_Word Opts_8,
  MR_Integer _Indent_9,
  MR_Word MaybeDesiredIsLocal_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_7_p_0(
  MR_Word Opts_8,
  MR_Word MaybeDesiredIsLocal_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_6_p_0(
  MR_Word Opts_7,
  MR_Word LiteralOrInclude_8,
  MR_Word Context_9,
  MR_Word * Res_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_env_var_init_3_p_0(
  MR_String EnvVarName_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_env_var_decl_3_p_0(
  MR_String EnvVarName_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_from_defn_2_p_0(
  MR_Word FuncDefn_3,
  MR_Word * EnvVarNameSet_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_9,
  MR_Word * Errors_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0(
  MR_Word Opts_8,
  MR_Word ModuleName_9,
  MR_Integer Indent_10,
  MR_Word ForeignCode_11,
  MR_Word * Errors_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ForeignCode_9,
  MR_Word * Errors_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_9_p_0(
  MR_Word Opts_10,
  MR_Word ModuleName_11,
  MR_Word FuncDefns_12,
  MR_Word TypeCtorInfoDefns_13,
  MR_Word AllocSites_14,
  MR_Word InitPreds_15,
  MR_Word FinalPreds_16);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_3_p_0(
  MR_Word AllocSites_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String Suffix_6);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_required_calls_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_3_p_0(
  MR_Word ModuleName_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_end_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_start_9_p_0(
  MR_Word Opts_10,
  MR_Integer Indent_11,
  MR_Word ModuleName_12,
  MR_Word ForeignCode_13,
  MR_Word InitPreds_14,
  MR_Word FinalPreds_15,
  MR_Word EnvVarNames_16);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0(
  MR_Word ModuleName_7,
  MR_Word UserInitPredCNames_8,
  MR_Word UserFinalPredCNames_9,
  MR_Word EnvVarNames_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(
  MR_Word FuncDefns_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_import_5_p_0(
  MR_Word Opts_6,
  MR_Integer _Indent_7,
  MR_Word Import_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word Import_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word Imports_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_9,
  MR_Word * Errors_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word ModuleName_10,
  MR_Word ForeignCode_11,
  MR_Word * Errors_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_5_p_0(
  MR_Word ModuleName_6,
  MR_Word InitPreds_7,
  MR_Word FinalPreds_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_grade_check_fn_name_3_p_0(
  MR_Word ModuleName_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String Suffix_6);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(
  MR_Word AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_end_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ModuleName_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_start_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ModuleName_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_named_function_defns_7_p_0(
  MR_Word Opts_8,
  MR_Word DumpPredNames_9,
  MR_Word ModuleName_10,
  MR_Word FuncDefns_11,
  MR_Word * Errors_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0(
  MR_Word MLDS_7,
  MR_Word Opts_8,
  MR_String Suffix_9,
  MR_Word * Succeeded_10);


static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_2[16][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_3[4][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_4[4][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_5[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_6[3][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_7[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_8[2][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_9[2][8];




static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\tinitialised = MR_TRUE;\n\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\tif (initialised) return;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\tstatic MR_bool initialised = MR_FALSE;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\"\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ".mih")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[3])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[3])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_3[4][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_5[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__932__1_3_p_0(
  MR_String LambdaHeadVar__1_39)
{
  {
    MR_Word Var_44;
    MR_Word Var_47;

    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (LambdaHeadVar__1_39));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[5])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) "#include \""));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    mercury__io__write_strings_3_p_0(Var_44);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defn_6_p_0(
  MR_Word Opts_7,
  MR_Integer _Indent_8,
  MR_Word ForeignBodyCode_9,
  MR_Word * Res_10)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_6_p_0(Opts_7, ForeignBodyCode_9, Res_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_6_p_0(
  MR_Word Opts_7,
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
        ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_6_p_0(Opts_7, LiteralOrInclude_13, Context_14, Res_10);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_defn\'/6", (MR_String) "foreign code other than C");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_foreign_import_module_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ForeignImport_8)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_p_0(Opts_6, ForeignImport_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word ForeignImport_8)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignImport_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Import_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImport_8, (MR_Integer) 1))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_16;
          MR_Word Var_19;

          Var_19 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Import_11);
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Var_19));
          }
          ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_p_0(Opts_6, Var_16);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_foreign_import_module\'/5", (MR_String) "foreign code other than C");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_7_p_0(
  MR_Word Opts_8,
  MR_Integer _Indent_9,
  MR_Word MaybeDesiredIsLocal_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_7_p_0(Opts_8, MaybeDesiredIsLocal_10, DeclCode_11, Res_12);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_7_p_0(
  MR_Word Opts_8,
  MR_Word MaybeDesiredIsLocal_10,
  MR_Word DeclCode_11,
  MR_Word * Res_12)
{
  {
    MR_bool succeeded;
    MR_Word Lang_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word IsLocal_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word LiteralOrInclude_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 1))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_11, (MR_Integer) 2))));

    switch (Lang_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          if ((MaybeDesiredIsLocal_10 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          {
            MR_Word DesiredIsLocal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDesiredIsLocal_10, (MR_Integer) 0))));

            succeeded = (IsLocal_15 == DesiredIsLocal_18);
          }
          if (succeeded)
            ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_6_p_0(Opts_8, LiteralOrInclude_16, Context_17, Res_12);
          else
            *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_hdr_decl\'/7", (MR_String) "foreign code other than C");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_6_p_0(
  MR_Word Opts_7,
  MR_Word LiteralOrInclude_8,
  MR_Word Context_9,
  MR_Word * Res_10)
{
  {
    MR_Word Var_83 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    MR_String Var_85 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) LiteralOrInclude_8)) == (MR_Integer) 1))
    {
      MR_String IncludeFileName_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_8, (MR_Integer) 0))));
      MR_String IncludePath_15;
      MR_Word Var_18;

      parse_tree__file_names__make_include_file_path_3_p_0(Var_85, IncludeFileName_13, &IncludePath_15);
      Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_file_line_5_p_0(Var_18, IncludePath_15, (MR_Integer) 1);
      libs__file_util__write_include_file_contents_cur_stream_4_p_0(IncludePath_15, Res_10);
    }
    else
    {
      MR_String Code_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_8, (MR_Integer) 0))));

      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_83, Context_9);
      mercury__io__write_string_3_p_0(Code_12);
      *Res_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_env_var_init_3_p_0(
  MR_String EnvVarName_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "ENVVAR ");
    mercury__io__write_string_3_p_0(EnvVarName_4);
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_env_var_decl_3_p_0(
  MR_String EnvVarName_4)
{
  {
    MR_String Var_10;
    MR_Word Var_12;

    mercury__io__write_string_3_p_0((MR_String) "extern MR_Word ");
    Var_12 = (MR_Word) (EnvVarName_4);
    Var_10 = ml_backend__mlds_to_c_name__global_var_name_1_f_0(Var_12);
    mercury__io__write_string_3_p_0(Var_10);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_from_defn_2_p_0(
  MR_Word FuncDefn_3,
  MR_Word * EnvVarNameSet_4)
{
  *EnvVarNameSet_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_3, (MR_Integer) 6))));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_class__mlds_output_class_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_env_var_decl_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__global_var_defn_is_type_ctor_info_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__class_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__function_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__global_var_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 0))));
    MR_Word Imports_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 1))));
    MR_Word GlobalData_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 2))));
    MR_Word TypeDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 3))));
    MR_Word TableStructDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 4))));
    MR_Word ProcDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 5))));
    MR_Word InitPreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 6))));
    MR_Word FinalPreds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 7))));
    MR_Word AllForeignCode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 8))));
    MR_Word ScalarCellGroupMap_22;
    MR_Word VectorCellGroupMap_23;
    MR_Word AllocSites_24;
    MR_Word RttiDefns_25;
    MR_Word CellDefns_26;
    MR_Word ClosureWrapperFuncDefns_27;
    MR_Word GlobalVarDefns_28;
    MR_Word PrivateGlobalVarDefns_29;
    MR_Word FuncDefns_30;
    MR_Word PrivateFuncDefns_31;
    MR_Word PrivateTypeDefns_32;
    MR_Word TypeCtorInfoDefns_33;
    MR_Word ScalarCellGroups_34;
    MR_Word VectorCellGroups_35;
    MR_Word ForeignCode_36;
    MR_Word EnvVarNameSet_37;
    MR_Word EnvVarNames_38;
    MR_Word ForeignDeclErrors_39;
    MR_Word MLDS_ModuleName_40;
    MR_Word ModuleSymName_41;
    MR_String MangledModuleName_42;
    MR_Word ForeignCodeErrors_43;
    MR_Word Var_46;
    MR_Word Var_59;
    MR_Box conv0_STATE_VARIABLE_IO_58_58;
    MR_Box conv1_STATE_VARIABLE_IO_60_60;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_14, &ScalarCellGroupMap_22, &VectorCellGroupMap_23, &AllocSites_24, &RttiDefns_25, &CellDefns_26, &ClosureWrapperFuncDefns_27);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_26, TableStructDefns_16);
    GlobalVarDefns_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), RttiDefns_25, Var_46);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[11]), GlobalVarDefns_28, &PrivateGlobalVarDefns_29);
    FuncDefns_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_27, ProcDefns_17);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[12]), FuncDefns_30, &PrivateFuncDefns_31);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[13]), TypeDefns_15, &PrivateTypeDefns_32);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[14]), RttiDefns_25, &TypeCtorInfoDefns_33);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_22, &ScalarCellGroups_34);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), VectorCellGroupMap_23, &VectorCellGroups_35);
    ForeignCode_36 = ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(AllForeignCode_20);
    EnvVarNameSet_37 = ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(ProcDefns_17);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNameSet_37, &EnvVarNames_38);
    ml_backend__mlds_to_c_file__mlds_output_src_start_9_p_0(Opts_7, Indent_8, ModuleName_12, ForeignCode_36, InitPreds_18, FinalPreds_19, EnvVarNames_38);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0(Opts_7, Indent_8, Imports_13);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0(Opts_7, Indent_8, ForeignCode_36, &ForeignDeclErrors_39);
    mercury__io__nl_2_p_0();
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[15]), EnvVarNames_38, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_58_58);
    MLDS_ModuleName_40 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0_6));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (MLDS_ModuleName_40));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, PrivateTypeDefns_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_60_60);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_global_var_decls_6_p_0(Opts_7, Indent_8, MLDS_ModuleName_40, PrivateGlobalVarDefns_29);
    ml_backend__mlds_to_c_func__mlds_output_function_decls_6_p_0(Opts_7, Indent_8, MLDS_ModuleName_40, PrivateFuncDefns_31);
    mercury__io__nl_2_p_0();
    ModuleSymName_41 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_40);
    MangledModuleName_42 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_41);
    ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_6_p_0(Opts_7, Indent_8, MangledModuleName_42, ScalarCellGroups_34);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_decls_7_p_0(Opts_7, Indent_8, MLDS_ModuleName_40, MangledModuleName_42, VectorCellGroups_35);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_alloc_site_decls_4_p_0(Indent_8, AllocSites_24);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_6_p_0(Opts_7, Indent_8, MangledModuleName_42, ScalarCellGroups_34);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_6_p_0(Opts_7, Indent_8, MangledModuleName_42, VectorCellGroups_35);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_6_p_0(Opts_7, Indent_8, MLDS_ModuleName_40, AllocSites_24);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0(Opts_7, MLDS_ModuleName_40, Indent_8, ForeignCode_36, &ForeignCodeErrors_43);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(Opts_7, Indent_8, (MR_Integer) 1, MLDS_ModuleName_40, RttiDefns_25);
    ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(Opts_7, Indent_8, MLDS_ModuleName_40, ClosureWrapperFuncDefns_27);
    ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(Opts_7, Indent_8, (MR_Integer) 1, MLDS_ModuleName_40, CellDefns_26);
    ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(Opts_7, Indent_8, (MR_Integer) 1, MLDS_ModuleName_40, TableStructDefns_16);
    ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(Opts_7, Indent_8, MLDS_ModuleName_40, ProcDefns_17);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_9_p_0(Opts_7, MLDS_ModuleName_40, FuncDefns_30, TypeCtorInfoDefns_33, AllocSites_24, InitPreds_18, FinalPreds_19);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_3_p_0(MLDS_ModuleName_40);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_src_end_4_p_0(Indent_8, ModuleName_12);
    *Errors_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_39, ForeignCodeErrors_43);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_4(
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
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Res_10;

    ml_backend__mlds_to_c_file__mlds_output_c_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_Res_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_c_foreign_import_module_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0(
  MR_Word Opts_8,
  MR_Word ModuleName_9,
  MR_Integer Indent_10,
  MR_Word ForeignCode_11,
  MR_Word * Errors_12)
{
  {
    MR_bool succeeded;
    MR_Word BodyCodes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_11, (MR_Integer) 1))));
    MR_Word Imports_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_11, (MR_Integer) 2))));
    MR_Word ExportDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_11, (MR_Integer) 3))));
    MR_Word Results_18;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_28;
    MR_Box conv0_STATE_VARIABLE_IO_22_22;
    MR_Box conv2_STATE_VARIABLE_IO_24_24;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Indent_10));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Imports_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22_22);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Indent_10));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, BodyCodes_15, &Results_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_24);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (Indent_10));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), ExportDefns_17, (MR_String) "\n", Var_28);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[10]), Results_18, Errors_12);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0_2(
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
ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Res_12;

    ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Res_12);
    *wrapper_arg_2 = ((MR_Box) (conv0_Res_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ForeignCode_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;
    MR_Word HeaderCodes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_9, (MR_Integer) 0))));
    MR_Word Results_16;
    MR_Word Var_19;
    MR_Box conv1_STATE_VARIABLE_IO_18;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_decls_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_8[1])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, HeaderCodes_12, &Results_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[9]), Results_16, Errors_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_9_p_0(
  MR_Word Opts_10,
  MR_Word ModuleName_11,
  MR_Word FuncDefns_12,
  MR_Word TypeCtorInfoDefns_13,
  MR_Word AllocSites_14,
  MR_Word InitPreds_15,
  MR_Word FinalPreds_16)
{
  {
    MR_bool succeeded;
    MR_Word NeedToInit_18;

    ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(ModuleName_11, (MR_String) "");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    NeedToInit_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    succeeded = (NeedToInit_18 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (FuncDefns_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word FuncDefn_106;
      MR_Word FuncDefns_107;
      MR_Word FuncName_109;
      MR_Word Var_114;

      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[3])));
      FuncDefn_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncDefns_12, (MR_Integer) 0))));
      FuncDefns_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncDefns_12, (MR_Integer) 1))));
      FuncName_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_106, (MR_Integer) 0))));
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_entry(");
      {
        Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (FuncName_109));
      }
      ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(Var_114);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_4_p_0(ModuleName_11, FuncDefns_107);
      ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_3_p_0(AllocSites_14);
    }
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(ModuleName_11, (MR_String) "_type_tables");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    if (!((TypeCtorInfoDefns_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_131;
      MR_Word GlobalVarDefns_132;
      MR_Word GlobalVarName_134;

      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[3])));
      GlobalVarDefn_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorInfoDefns_13, (MR_Integer) 0))));
      GlobalVarDefns_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorInfoDefns_13, (MR_Integer) 1))));
      GlobalVarName_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_131, (MR_Integer) 0))));
      mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_ctor_info(&");
      ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(ModuleName_11, GlobalVarName_134);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_4_p_0(ModuleName_11, GlobalVarDefns_132);
    }
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(ModuleName_11, (MR_String) "_debugger");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    mercury__io__write_string_3_p_0((MR_String) "\tMR_fatal_error(\"debugger initialization in MLDS grade\");\n");
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    if (!((InitPreds_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Call_151;
      MR_Word Calls_152;
      MR_String Var_156;
      MR_String Var_159;

      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(ModuleName_11, (MR_String) "required_init");
      mercury__io__write_string_3_p_0((MR_String) "\n{\n");
      Call_151 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitPreds_15, (MR_Integer) 0))));
      Calls_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitPreds_15, (MR_Integer) 1))));
      Var_159 = mercury__string__f_43_43_2_f_0(Call_151, (MR_String) "();\n");
      Var_156 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_159);
      mercury__io__write_string_3_p_0(Var_156);
      ml_backend__mlds_to_c_file__output_required_calls_3_p_0(Calls_152);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
    if (!((FinalPreds_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Call_165;
      MR_Word Calls_166;
      MR_String Var_170;
      MR_String Var_173;

      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(ModuleName_11, (MR_String) "required_final");
      mercury__io__write_string_3_p_0((MR_String) "\n{\n");
      Call_165 = ((MR_String) ((MR_hl_field(MR_mktag(1), FinalPreds_16, (MR_Integer) 0))));
      Calls_166 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FinalPreds_16, (MR_Integer) 1))));
      Var_173 = mercury__string__f_43_43_2_f_0(Call_165, (MR_String) "();\n");
      Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_173);
      mercury__io__write_string_3_p_0(Var_170);
      ml_backend__mlds_to_c_file__output_required_calls_3_p_0(Calls_166);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_3_p_0(
  MR_Word AllocSites_4)
{
  if (!((AllocSites_4 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer Length_8;

    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[0]), AllocSites_4, &Length_8);
    mercury__io__write_string_3_p_0((MR_String) "\tMR_register_alloc_sites(MR_alloc_sites, ");
    mercury__io__write_int_3_p_0(Length_8);
    mercury__io__write_string_3_p_0((MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GlobalVarName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_ctor_info(&");
      ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(HeadVar__1_1, GlobalVarName_13);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = GlobalVarDefns_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FuncDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FuncDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FuncName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_10, (MR_Integer) 0))));
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_entry(");
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (FuncName_13));
      }
      ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(Var_18);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = FuncDefns_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String Suffix_6)
{
  {
    MR_bool succeeded;
    MR_String ModuleNameString0_8;
    MR_String ModuleNameString_9;
    MR_Word Var_12;

    Var_12 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
    ModuleNameString0_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_12);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_8, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_9 = ModuleNameString0_8;
    else
    {
      ModuleNameString_9 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_8);
    }
    mercury__io__write_string_3_p_0((MR_String) "void ");
    mercury__io__write_string_3_p_0(ModuleNameString_9);
    mercury__io__write_string_3_p_0((MR_String) "__init");
    mercury__io__write_string_3_p_0(Suffix_6);
    mercury__io__write_string_3_p_0((MR_String) "(void)");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_required_calls_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Call_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Calls_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_12;
      MR_String Var_15;
      MR_Word next_value_of_HeadVar__1_1;

      Var_15 = mercury__string__f_43_43_2_f_0(Call_7, (MR_String) "();\n");
      Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_15);
      mercury__io__write_string_3_p_0(Var_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Calls_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_3_p_0(
  MR_Word ModuleName_4)
{
  {
    MR_bool succeeded;
    MR_String ModuleNameString0_21;
    MR_String ModuleNameString_22;
    MR_Word Var_23;

    mercury__io__write_string_3_p_0((MR_String) "// Ensure everything is compiled with the same grade.\n");
    Var_23 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
    ModuleNameString0_21 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_23);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_21, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_22 = ModuleNameString0_21;
    else
    {
      ModuleNameString_22 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_21);
    }
    mercury__io__write_string_3_p_0((MR_String) "const char *");
    mercury__io__write_string_3_p_0(ModuleNameString_22);
    mercury__io__write_string_3_p_0((MR_String) "__grade_check(void)");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    mercury__io__write_string_3_p_0((MR_String) "    return &MR_GRADE_VAR;\n");
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_end_4_p_0(
  MR_Integer Indent_5,
  MR_Word ModuleName_6)
{
  {
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "// :- end_module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_start_9_p_0(
  MR_Word Opts_10,
  MR_Integer Indent_11,
  MR_Word ModuleName_12,
  MR_Word ForeignCode_13,
  MR_Word InitPreds_14,
  MR_Word FinalPreds_15,
  MR_Word EnvVarNames_16)
{
  {
    MR_Word Exports_21;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_String Version_53;
    MR_String Fullarch_54;
    MR_Word Globals_55;
    MR_String SourceFileName_56;

    mercury__library__version_2_p_0(&Version_53, &Fullarch_54);
    Globals_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 0))));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_55, (MR_Integer) 1, (MR_String) ".m", ModuleName_12, &SourceFileName_56);
    backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(Globals_55, SourceFileName_56, Version_53, Fullarch_54);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "// :- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_12);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_11);
    mercury__io__write_string_3_p_0((MR_String) "// :- implementation.\n");
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0(ModuleName_12, InitPreds_14, FinalPreds_15, EnvVarNames_16);
    Var_43 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_43));
    }
    ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_p_0(Opts_10, Var_40);
    Exports_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_13, (MR_Integer) 3))));
    if (!((Exports_21 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Import_24;
      MR_Word Var_45;

      Var_45 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
      {
        Import_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Import_24, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Import_24, 1) = ((MR_Box) (Var_45));
      }
      ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_p_0(Opts_10, Import_24);
    }
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_env_var_init_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0(
  MR_Word ModuleName_7,
  MR_Word UserInitPredCNames_8,
  MR_Word UserFinalPredCNames_9,
  MR_Word EnvVarNames_10)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_36_36;

    mercury__io__write_string_3_p_0((MR_String) "/*\n");
    mercury__io__write_string_3_p_0((MR_String) "INIT ");
    backend_libs__name_mangle__output_init_name_3_p_0(ModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) "init\n");
    if (!((UserInitPredCNames_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_3_p_0((MR_String) "REQUIRED_INIT ");
      backend_libs__name_mangle__output_init_name_3_p_0(ModuleName_7);
      mercury__io__write_string_3_p_0((MR_String) "required_init\n");
    }
    if (!((UserFinalPredCNames_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_3_p_0((MR_String) "REQUIRED_FINAL ");
      backend_libs__name_mangle__output_init_name_3_p_0(ModuleName_7);
      mercury__io__write_string_3_p_0((MR_String) "required_final\n");
    }
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[8]), EnvVarNames_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36_36);
    mercury__io__write_string_3_p_0((MR_String) "ENDINIT\n");
    mercury__io__write_string_3_p_0((MR_String) "*/\n\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_EnvVarNameSet_4;

    ml_backend__mlds_to_c_file__mlds_get_env_var_names_from_defn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_EnvVarNameSet_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_EnvVarNameSet_4));
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(
  MR_Word FuncDefns_3)
{
  {
    MR_Word EnvVarNameSet_4;
    MR_Word EnvVarNameSets_5;

    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[7]), FuncDefns_3, &EnvVarNameSets_5);
    EnvVarNameSet_4 = mercury__set__union_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNameSets_5);
    return EnvVarNameSet_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_import_5_p_0(
  MR_Word Opts_6,
  MR_Integer _Indent_7,
  MR_Word Import_8)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_p_0(Opts_6, Import_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word Import_8)
{
  {
    MR_bool succeeded;
    MR_Word ImportType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Import_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ImportName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Import_8, (MR_Integer) 1))));
    MR_Word ModuleName0_12;
    MR_String HeaderExt_13;
    MR_Word ModuleName_15;
    MR_Word Globals_16;
    MR_String HeaderFile_17;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word ModuleName1_14;
    MR_String Var_44;

    ModuleName0_12 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ImportName_11);
    switch (ImportType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeaderExt_13 = (MR_String) ".mih";
        break;
      case (MR_Integer) 0:
        HeaderExt_13 = (MR_String) ".mh";
        break;
    }
    succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ModuleName0_12, &Var_44, &ModuleName1_14);
    if (succeeded)
    {
      succeeded = (strcmp((MR_String) "mercury", Var_44) == 0);
      if (succeeded)
        succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName1_14);
    }
    if (succeeded)
      ModuleName_15 = ModuleName1_14;
    else
      ModuleName_15 = ModuleName0_12;
    Globals_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
    parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_16, HeaderExt_13, ModuleName_15, &HeaderFile_17);
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (HeaderFile_17));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[4])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) "#include \""));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    mercury__io__write_strings_3_p_0(Var_22);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_src_import_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word Imports_8)
{
  {
    MR_Word Target_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);

    switch (Target_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SortedImports_11;
          MR_Word Var_16;
          MR_Box conv0_STATE_VARIABLE_IO_13;

          mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), Imports_8, &SortedImports_11);
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Opts_6));
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Indent_7));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, SortedImports_11, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_src_imports\'/5", (MR_String) "expected target c");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_class__mlds_output_class_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__function_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__global_var_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_target_util__class_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word MLDS_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 0))));
    MR_Word GlobalData_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 2))));
    MR_Word TypeDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 3))));
    MR_Word TableStructDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 4))));
    MR_Word ProcDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 5))));
    MR_Word InitPreds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 6))));
    MR_Word FinalPreds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 7))));
    MR_Word AllForeignCode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 8))));
    MR_Word ExportEnums_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_9, (MR_Integer) 9))));
    MR_Word RttiDefns_25;
    MR_Word CellDefns_26;
    MR_Word ClosureWrapperFuncDefns_27;
    MR_Word PublicTypeDefns_29;
    MR_Word PublicGlobarVarDefns_31;
    MR_Word PublicFuncDefns_33;
    MR_Word SortedPublicGlobarVarDefns_34;
    MR_Word SortedPublicFuncDefns_35;
    MR_Word ForeignCode_36;
    MR_Word MLDS_ModuleName_37;
    MR_Word StdOpts_38;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_55;
    MR_Word _ScalarCellGroupMap_22;
    MR_Word _VectorCellGroupMap_23;
    MR_Word _AllocSites_24;
    MR_Word _PrivateTypeDefns_28;
    MR_Word _PrivateGlobalVarDefns_30;
    MR_Word _PrivateFuncDefns_32;
    MR_Box conv0_STATE_VARIABLE_IO_56_56;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Unsigned packed_word_0;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_14, &_ScalarCellGroupMap_22, &_VectorCellGroupMap_23, &_AllocSites_24, &RttiDefns_25, &CellDefns_26, &ClosureWrapperFuncDefns_27);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[4]), TypeDefns_15, &_PrivateTypeDefns_28, &PublicTypeDefns_29);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_26, TableStructDefns_16);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), RttiDefns_25, Var_44);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[5]), Var_43, &_PrivateGlobalVarDefns_30, &PublicGlobarVarDefns_31);
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_27, ProcDefns_17);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[6]), Var_46, &_PrivateFuncDefns_32, &PublicFuncDefns_33);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), PublicGlobarVarDefns_31, &SortedPublicGlobarVarDefns_34);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), PublicFuncDefns_33, &SortedPublicFuncDefns_35);
    ml_backend__mlds_to_c_file__mlds_output_hdr_start_5_p_0(Opts_7, Indent_8, ModuleName_12);
    mercury__io__nl_2_p_0();
    mercury__io__nl_2_p_0();
    ForeignCode_36 = ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(AllForeignCode_20);
    MLDS_ModuleName_37 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
    ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0(Opts_7, Indent_8, MLDS_ModuleName_37, ForeignCode_36, Errors_10);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_export__mlds_output_export_enums_5_p_0(Opts_7, Indent_8, ExportEnums_21);
    mercury__io__nl_2_p_0();
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (MLDS_ModuleName_37));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, PublicTypeDefns_29, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_56_56);
    mercury__io__nl_2_p_0();
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 0))));
    Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));
    {
      StdOpts_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StdOpts_38, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), StdOpts_38, 1) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), StdOpts_38, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
    }
    ml_backend__mlds_to_c_global__mlds_output_global_var_decls_6_p_0(StdOpts_38, Indent_8, MLDS_ModuleName_37, SortedPublicGlobarVarDefns_34);
    ml_backend__mlds_to_c_func__mlds_output_function_decls_6_p_0(StdOpts_38, Indent_8, MLDS_ModuleName_37, SortedPublicFuncDefns_35);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_5_p_0(MLDS_ModuleName_37, InitPreds_18, FinalPreds_19);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_hdr_end_5_p_0(Opts_7, Indent_8, ModuleName_12);
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv4_HeadVar__2_2;

    succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Res_12;

    ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Res_12);
    *wrapper_arg_2 = ((MR_Box) (conv2_Res_12));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__932__1_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word ModuleName_10,
  MR_Word ForeignCode_11,
  MR_Word * Errors_12)
{
  {
    MR_bool succeeded;
    MR_Word DeclCodes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_11, (MR_Integer) 0))));
    MR_Word SymName_19;
    MR_String DeclGuard_20;
    MR_Word AncestorModuleNames_21;
    MR_Word AncestorFileNames_22;
    MR_Word DeclResults_25;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_54;
    MR_Word StdlibModuleName_18;
    MR_Box conv1_STATE_VARIABLE_IO_53_53;
    MR_Box conv3_STATE_VARIABLE_IO_55_55;

    succeeded = ml_backend__mlds__is_std_lib_module_2_p_0(ModuleName_10, &StdlibModuleName_18);
    if (succeeded)
      SymName_19 = StdlibModuleName_18;
    else
      SymName_19 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_10);
    DeclGuard_20 = backend_libs__foreign__decl_guard_1_f_0(SymName_19);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (DeclGuard_20));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[6])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "\n#define "));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (DeclGuard_20));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_String) "#ifndef "));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    mercury__io__write_strings_3_p_0(Var_28);
    AncestorModuleNames_21 = mdbcomp__sym_name__get_ancestors_1_f_0(SymName_19);
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[1]), AncestorModuleNames_21, &AncestorFileNames_22);
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[2]), AncestorFileNames_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_53_53);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Opts_8));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (Indent_9));
      MR_hl_field(MR_mktag(0), Var_54, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_8[0])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, DeclCodes_14, &DeclResults_25, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_55_55);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[3]), DeclResults_25, Errors_12);
    mercury__io__write_string_3_p_0((MR_String) "\n#endif\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_5_p_0(
  MR_Word ModuleName_6,
  MR_Word InitPreds_7,
  MR_Word FinalPreds_8)
{
  {
    MR_bool succeeded;
    MR_String ModuleNameString0_44;
    MR_String ModuleNameString_45;
    MR_Word Var_46;
    MR_String ModuleNameString0_62;
    MR_String ModuleNameString_63;
    MR_Word Var_64;
    MR_String ModuleNameString0_80;
    MR_String ModuleNameString_81;
    MR_Word Var_82;

    Var_46 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
    ModuleNameString0_44 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_46);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_44, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_45 = ModuleNameString0_44;
    else
    {
      ModuleNameString_45 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_44);
    }
    mercury__io__write_string_3_p_0((MR_String) "void ");
    mercury__io__write_string_3_p_0(ModuleNameString_45);
    mercury__io__write_string_3_p_0((MR_String) "__init");
    mercury__io__write_string_3_p_0((MR_String) "");
    mercury__io__write_string_3_p_0((MR_String) "(void)");
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    Var_64 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
    ModuleNameString0_62 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_64);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_62, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_63 = ModuleNameString0_62;
    else
    {
      ModuleNameString_63 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_62);
    }
    mercury__io__write_string_3_p_0((MR_String) "void ");
    mercury__io__write_string_3_p_0(ModuleNameString_63);
    mercury__io__write_string_3_p_0((MR_String) "__init");
    mercury__io__write_string_3_p_0((MR_String) "_type_tables");
    mercury__io__write_string_3_p_0((MR_String) "(void)");
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    Var_82 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
    ModuleNameString0_80 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_82);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_80, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_81 = ModuleNameString0_80;
    else
    {
      ModuleNameString_81 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_80);
    }
    mercury__io__write_string_3_p_0((MR_String) "void ");
    mercury__io__write_string_3_p_0(ModuleNameString_81);
    mercury__io__write_string_3_p_0((MR_String) "__init");
    mercury__io__write_string_3_p_0((MR_String) "_debugger");
    mercury__io__write_string_3_p_0((MR_String) "(void)");
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    if (!((InitPreds_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(ModuleName_6, (MR_String) "required_init");
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    if (!((FinalPreds_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(ModuleName_6, (MR_String) "required_final");
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
    ml_backend__mlds_to_c_file__output_grade_check_fn_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_grade_check_fn_name_3_p_0(
  MR_Word ModuleName_4)
{
  {
    MR_bool succeeded;
    MR_String ModuleNameString0_6;
    MR_String ModuleNameString_7;
    MR_Word Var_10;

    Var_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
    ModuleNameString0_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_10);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_6, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_7 = ModuleNameString0_6;
    else
    {
      ModuleNameString_7 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_6);
    }
    mercury__io__write_string_3_p_0((MR_String) "const char *");
    mercury__io__write_string_3_p_0(ModuleNameString_7);
    mercury__io__write_string_3_p_0((MR_String) "__grade_check(void)");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String Suffix_6)
{
  {
    MR_bool succeeded;
    MR_String ModuleNameString0_8;
    MR_String ModuleNameString_9;
    MR_Word Var_12;

    Var_12 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
    ModuleNameString0_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_12);
    succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_8, (MR_String) "mercury__");
    if (succeeded)
      ModuleNameString_9 = ModuleNameString0_8;
    else
    {
      ModuleNameString_9 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_8);
    }
    mercury__io__write_string_3_p_0((MR_String) "void ");
    mercury__io__write_string_3_p_0(ModuleNameString_9);
    mercury__io__write_string_3_p_0((MR_String) "__");
    mercury__io__write_string_3_p_0(Suffix_6);
    mercury__io__write_string_3_p_0((MR_String) "(void)");
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
{
  {
    MR_bool succeeded;
    MR_Word ForeignCode_4;
    MR_Word ForeignCode0_5;
    MR_Box conv0_ForeignCode0_5;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_3, ((MR_Box) ((MR_Integer) 0)), &conv0_ForeignCode0_5);
    if (succeeded)
    {
      ForeignCode0_5 = ((MR_Word) (conv0_ForeignCode0_5));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ForeignCode_4 = ForeignCode0_5;
    else
      ForeignCode_4 = (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_3[0]);
    return ForeignCode_4;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_end_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ModuleName_8)
{
  {
    MR_Word Target_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);

    switch (Target_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "#ifdef __cplusplus\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "}\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
          mercury__io__nl_2_p_0();
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "#endif // MR_HEADER_GUARD_");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_8);
    mercury__io__nl_2_p_0();
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "// :- end_interface ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_start_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ModuleName_8)
{
  {
    MR_String MangledModuleName_10;
    MR_Word Target_11;
    MR_String Version_69;
    MR_String Fullarch_70;
    MR_Word Globals_71;
    MR_String SourceFileName_72;

    mercury__library__version_2_p_0(&Version_69, &Fullarch_70);
    Globals_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_71, (MR_Integer) 1, (MR_String) ".m", ModuleName_8, &SourceFileName_72);
    backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(Globals_71, SourceFileName_72, Version_69, Fullarch_70);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "// :- module ");
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_8);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "// :- interface.\n");
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "#ifndef MR_HEADER_GUARD_");
    MangledModuleName_10 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_8);
    mercury__io__write_string_3_p_0(MangledModuleName_10);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "#define MR_HEADER_GUARD_");
    mercury__io__write_string_3_p_0(MangledModuleName_10);
    mercury__io__nl_2_p_0();
    mercury__io__nl_2_p_0();
    Target_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 7)) & (MR_Integer) 3);
    switch (Target_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "#ifdef __cplusplus\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "extern \"C\" {\n");
          ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
          mercury__io__write_string_3_p_0((MR_String) "#endif\n");
          mercury__io__nl_2_p_0();
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "#include \"mercury.h\"\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_named_function_defns_7_p_0(
  MR_Word Opts_8,
  MR_Word DumpPredNames_9,
  MR_Word ModuleName_10,
  MR_Word FuncDefns_11,
  MR_Word * Errors_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((FuncDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *Errors_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FuncDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncDefns_11, (MR_Integer) 0))));
      MR_Word FuncDefnsTail_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncDefns_11, (MR_Integer) 1))));
      MR_Word next_value_of_FuncDefns_11;

      succeeded = ml_backend__mlds_to_c_file__func_defn_has_name_in_list_2_p_0(DumpPredNames_9, FuncDefn_14);
      if (succeeded)
      {
        ml_backend__mlds_to_c_func__mlds_output_function_defn_6_p_0(Opts_8, (MR_Integer) 0, ModuleName_10, FuncDefn_14);
      }
      // direct tailcall eliminated
      ;
      next_value_of_FuncDefns_11 = FuncDefnsTail_15;
      FuncDefns_11 = next_value_of_FuncDefns_11;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
ml_backend__mlds_to_c_file__func_defn_has_name_in_list_2_p_0(
  MR_Word DumpPredNames_3,
  MR_Word FuncDefn_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_26_26;
    MR_Word PlainFuncName_5;
    MR_Word FuncLabel_6;
    MR_Word ProcLabel_8;
    MR_Word PredLabel_10;
    MR_String Name_14;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_4, (MR_Integer) 0))));

    succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 0);
    if (succeeded)
    {
      PlainFuncName_5 = (MR_Word) ((MR_Word) (Var_18));
      FuncLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_5, (MR_Integer) 0))));
      ProcLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_6, (MR_Integer) 0))));
      PredLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_8, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) PredLabel_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 2))));
        TypeCtorInfo_26_26 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_26_26, ((MR_Box) (Name_14)), DumpPredNames_3);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Errors_12;

    ml_backend__mlds_to_c_file__mlds_output_named_function_defns_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv0_Errors_12);
    *wrapper_arg_1 = ((MR_Box) (conv0_Errors_12));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_7_p_0(
  MR_Word MLDS_8,
  MR_Word Globals_9,
  MR_Word TargetOrDump_10,
  MR_String Suffix_11,
  MR_Word DumpPredNames_12)
{
  {
    MR_Word ModuleName_14;
    MR_String SourceFileName_15;
    MR_Word Opts_16;
    MR_String DumpFileName_17;
    MR_Word MLDS_ModuleName_18;
    MR_Word ProcDefns_19;
    MR_String Var_25;
    MR_Word Var_28;
    MR_Word _Succeeded_20;

    ModuleName_14 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_8);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_9, ModuleName_14, &SourceFileName_15);
    Opts_16 = ml_backend__mlds_to_c_util__init_mlds_to_c_opts_3_f_0(Globals_9, SourceFileName_15, TargetOrDump_10);
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) ".mlds_dump", Suffix_11);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, Var_25, ModuleName_14, &DumpFileName_17);
    MLDS_ModuleName_18 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_14);
    ProcDefns_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_dump_preds_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Opts_16));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (DumpPredNames_12));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (MLDS_ModuleName_18));
      MR_hl_field(MR_mktag(0), Var_28, 6) = ((MR_Box) (ProcDefns_19));
    }
    libs__file_util__output_to_file_6_p_0(Globals_9, DumpFileName_17, Var_28, &_Succeeded_20);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Errors_10;

    ml_backend__mlds_to_c_file__mlds_output_src_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv0_Errors_10);
    *wrapper_arg_1 = ((MR_Box) (conv0_Errors_10));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_7_p_0(
  MR_Word MLDS_8,
  MR_Word Globals_9,
  MR_Word TargetOrDump_10,
  MR_String Suffix_11,
  MR_Word * Succeeded_12)
{
  {
    MR_Word ModuleName_14;
    MR_String SourceFileName_15;
    MR_Word Opts_16;
    MR_Word Succeeded0_17;
    MR_Word ModuleName_30;
    MR_Word Globals_31;
    MR_String SourceFile_32;
    MR_String Var_35;
    MR_Word Var_38;

    ModuleName_14 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_8);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_9, ModuleName_14, &SourceFileName_15);
    Opts_16 = ml_backend__mlds_to_c_util__init_mlds_to_c_opts_3_f_0(Globals_9, SourceFileName_15, TargetOrDump_10);
    ModuleName_30 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_8);
    Globals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_16, (MR_Integer) 0))));
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) ".c", Suffix_11);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_31, (MR_Integer) 0, Var_35, ModuleName_30, &SourceFile_32);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_mlds_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Opts_16));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (MLDS_8));
    }
    libs__file_util__output_to_file_6_p_0(Globals_31, SourceFile_32, Var_38, &Succeeded0_17);
    switch (Succeeded0_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_12 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0(MLDS_8, Opts_16, Suffix_11, Succeeded_12);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Errors_10;

    ml_backend__mlds_to_c_file__mlds_output_hdr_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv0_Errors_10);
    *wrapper_arg_1 = ((MR_Box) (conv0_Errors_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0(
  MR_Word MLDS_7,
  MR_Word Opts_8,
  MR_String Suffix_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word ModuleName_12;
    MR_Word Globals_13;
    MR_String TmpHeaderFile_14;
    MR_String HeaderFile_15;
    MR_Word LineNumbersForCHdrs_16;
    MR_Word HdrOpts_17;
    MR_String Var_22;
    MR_String Var_25;
    MR_String Var_28;
    MR_Word Var_33;
    MR_Word Var_51;
    MR_String Var_52;
    MR_Unsigned packed_word_1;

    ModuleName_12 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    Globals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
    Var_25 = mercury__string__f_43_43_2_f_0(Suffix_9, (MR_String) ".tmp");
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ".mih", Var_25);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, Var_22, ModuleName_12, &TmpHeaderFile_14);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ".mih", Suffix_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, Var_28, ModuleName_12, &HeaderFile_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 155, &LineNumbersForCHdrs_16);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
    Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2)));
    {
      HdrOpts_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HdrOpts_17, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), HdrOpts_17, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), HdrOpts_17, 2) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 196608U)))) | (((((MR_Unsigned) (LineNumbersForCHdrs_16) << 16)) | (((MR_Unsigned) (LineNumbersForCHdrs_16) << 17))))));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (HdrOpts_17));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_6_p_0(Globals_13, TmpHeaderFile_14, Var_33, Succeeded_10);
    switch (*Succeeded_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        parse_tree__module_cmds__update_interface_4_p_0(Globals_13, HeaderFile_15);
        break;
    }
  }
}

void mercury__ml_backend__mlds_to_c_file__init(void)
{
}

void mercury__ml_backend__mlds_to_c_file__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_file.
