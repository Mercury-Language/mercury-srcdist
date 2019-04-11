/*
** Automatically generated from `mlds_to_c_file.m'
** by the Mercury compiler,
** version rotd-2018-07-17
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
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__921__1_3_p_0(
  MR_String LambdaHeadVar__1_36);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defn_5_p_0(
  MR_Word Opts_6,
  MR_Integer _Indent_7,
  MR_Word ForeignBodyCode_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word ForeignBodyCode_8);

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
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_6_p_0(
  MR_Word Opts_7,
  MR_Integer _Indent_8,
  MR_Word MaybeDesiredIsLocal_9,
  MR_Word DeclCode_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word MaybeDesiredIsLocal_9,
  MR_Word DeclCode_10);

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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0(
  MR_Word Opts_7,
  MR_Word ModuleName_8,
  MR_Integer Indent_9,
  MR_Word ForeignCode_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ForeignCode_8);

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
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ForeignCode_10);

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
ml_backend__mlds_to_c_file__mlds_output_named_function_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0(
  MR_Word MLDS_7,
  MR_Word Opts_8,
  MR_String Suffix_9,
  MR_Word * Succeeded_10);


static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_2[13][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_3[4][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_4[4][8];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_5[4][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_6[2][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_7[1][6];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_8[2][1];




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

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[3])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_init_and_final_comments_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[3])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_5[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__921__1_3_p_0(
  MR_String LambdaHeadVar__1_36)
{
  {
    MR_Word Var_41;
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (LambdaHeadVar__1_36));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[5])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "#include \""));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    mercury__io__write_strings_3_p_0(Var_41);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defn_5_p_0(
  MR_Word Opts_6,
  MR_Integer _Indent_7,
  MR_Word ForeignBodyCode_8)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_p_0(Opts_6, ForeignBodyCode_8);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_50_93_95_48_5_p_0(
  MR_Word Opts_6,
  MR_Word ForeignBodyCode_8)
{
  {
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 0))));
    MR_Word LiteralOrInclude_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBodyCode_8, (MR_Integer) 2))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_88 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_String Var_90 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

          if (((MR_tag((MR_Word) LiteralOrInclude_11)) == (MR_Integer) 1))
          {
            MR_String IncludeFileName_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_11, (MR_Integer) 0))));
            MR_String IncludePath_27;
            MR_Word Var_28;
            MR_Unsigned packed_args_1;

            parse_tree__file_names__make_include_file_path_3_p_0(Var_90, IncludeFileName_25, &IncludePath_27);
            packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));
            Var_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_c_util__c_output_file_line_5_p_0(Var_28, IncludePath_27, (MR_Integer) 1);
            libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_27);
          }
          else
          {
            MR_String Code_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_11, (MR_Integer) 0))));

            ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_88, Context_12);
            mercury__io__write_string_3_p_0(Code_24);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_defn\'/5", (MR_String) "foreign code other than C");
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
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImport_8, (MR_Integer) 0))));
    MR_Word Import_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImport_8, (MR_Integer) 1))));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_16;
          MR_Word Var_19;

          Var_19 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Import_11);
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) ((MR_Integer) 0));
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
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_6_p_0(
  MR_Word Opts_7,
  MR_Integer _Indent_8,
  MR_Word MaybeDesiredIsLocal_9,
  MR_Word DeclCode_10)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(Opts_7, MaybeDesiredIsLocal_9, DeclCode_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_50_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word MaybeDesiredIsLocal_9,
  MR_Word DeclCode_10)
{
  {
    MR_bool succeeded;
    MR_Word Lang_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_10, (MR_Integer) 0))));
    MR_Word IsLocal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_10, (MR_Integer) 1))));
    MR_Word LiteralOrInclude_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_10, (MR_Integer) 2))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclCode_10, (MR_Integer) 3))));

    switch (Lang_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          if ((MaybeDesiredIsLocal_9 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          {
            MR_Word DesiredIsLocal_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDesiredIsLocal_9, (MR_Integer) 0))));

            succeeded = (IsLocal_13 == DesiredIsLocal_16);
          }
          if (succeeded)
          {
            MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_String Var_94 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 1))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));

            if (((MR_tag((MR_Word) LiteralOrInclude_14)) == (MR_Integer) 1))
            {
              MR_String IncludeFileName_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_14, (MR_Integer) 0))));
              MR_String IncludePath_31;
              MR_Word Var_32;
              MR_Unsigned packed_args_1;

              parse_tree__file_names__make_include_file_path_3_p_0(Var_94, IncludeFileName_29, &IncludePath_31);
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2)));
              Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_c_util__c_output_file_line_5_p_0(Var_32, IncludePath_31, (MR_Integer) 1);
              libs__file_util__write_include_file_contents_cur_stream_3_p_0(IncludePath_31);
            }
            else
            {
              MR_String Code_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_14, (MR_Integer) 0))));

              ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_92, Context_15);
              mercury__io__write_string_3_p_0(Code_28);
            }
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_hdr_decl\'/6", (MR_String) "foreign code other than C");
            return;
          }
        }
        break;
    }
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_6(
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_5(
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_4(
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_3(
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_2(
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_1(
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
ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 0))));
    MR_Word Imports_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 1))));
    MR_Word GlobalData_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 2))));
    MR_Word TypeDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 3))));
    MR_Word TableStructDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 4))));
    MR_Word ProcDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
    MR_Word InitPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 6))));
    MR_Word FinalPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 7))));
    MR_Word AllForeignCode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 8))));
    MR_Word ScalarCellGroupMap_20;
    MR_Word VectorCellGroupMap_21;
    MR_Word AllocSites_22;
    MR_Word RttiDefns_23;
    MR_Word CellDefns_24;
    MR_Word ClosureWrapperFuncDefns_25;
    MR_Word GlobalVarDefns_26;
    MR_Word PrivateGlobalVarDefns_27;
    MR_Word FuncDefns_28;
    MR_Word PrivateFuncDefns_29;
    MR_Word PrivateTypeDefns_30;
    MR_Word TypeCtorInfoDefns_31;
    MR_Word ScalarCellGroups_32;
    MR_Word VectorCellGroups_33;
    MR_Word ForeignCode_34;
    MR_Word EnvVarNameSet_35;
    MR_Word EnvVarNames_36;
    MR_Word MLDS_ModuleName_37;
    MR_Word ModuleSymName_38;
    MR_String MangledModuleName_39;
    MR_Word Var_42;
    MR_Word Var_55;
    MR_Box conv0_STATE_VARIABLE_IO_54_54;
    MR_Box conv1_STATE_VARIABLE_IO_56_56;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_12, &ScalarCellGroupMap_20, &VectorCellGroupMap_21, &AllocSites_22, &RttiDefns_23, &CellDefns_24, &ClosureWrapperFuncDefns_25);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_24, TableStructDefns_14);
    GlobalVarDefns_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), RttiDefns_23, Var_42);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[8]), GlobalVarDefns_26, &PrivateGlobalVarDefns_27);
    FuncDefns_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_25, ProcDefns_15);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[9]), FuncDefns_28, &PrivateFuncDefns_29);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[10]), TypeDefns_13, &PrivateTypeDefns_30);
    mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[11]), RttiDefns_23, &TypeCtorInfoDefns_31);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_20, &ScalarCellGroups_32);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), VectorCellGroupMap_21, &VectorCellGroups_33);
    ForeignCode_34 = ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(AllForeignCode_18);
    EnvVarNameSet_35 = ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(ProcDefns_15);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNameSet_35, &EnvVarNames_36);
    ml_backend__mlds_to_c_file__mlds_output_src_start_9_p_0(Opts_6, Indent_7, ModuleName_10, ForeignCode_34, InitPreds_16, FinalPreds_17, EnvVarNames_36);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0(Opts_6, Indent_7, Imports_11);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_c_decls_5_p_0(Opts_6, Indent_7, ForeignCode_34);
    mercury__io__nl_2_p_0();
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[12]), EnvVarNames_36, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
    MLDS_ModuleName_37 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_10);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0_6));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Opts_6));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Indent_7));
      MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (MLDS_ModuleName_37));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, PrivateTypeDefns_30, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_56_56);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_global_var_decls_6_p_0(Opts_6, Indent_7, MLDS_ModuleName_37, PrivateGlobalVarDefns_27);
    ml_backend__mlds_to_c_func__mlds_output_function_decls_6_p_0(Opts_6, Indent_7, MLDS_ModuleName_37, PrivateFuncDefns_29);
    mercury__io__nl_2_p_0();
    ModuleSymName_38 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_37);
    MangledModuleName_39 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_38);
    ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_6_p_0(Opts_6, Indent_7, MangledModuleName_39, ScalarCellGroups_32);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_decls_7_p_0(Opts_6, Indent_7, MLDS_ModuleName_37, MangledModuleName_39, VectorCellGroups_33);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_alloc_site_decls_4_p_0(Indent_7, AllocSites_22);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_6_p_0(Opts_6, Indent_7, MangledModuleName_39, ScalarCellGroups_32);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_6_p_0(Opts_6, Indent_7, MangledModuleName_39, VectorCellGroups_33);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_6_p_0(Opts_6, Indent_7, MLDS_ModuleName_37, AllocSites_22);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0(Opts_6, MLDS_ModuleName_37, Indent_7, ForeignCode_34);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(Opts_6, Indent_7, (MR_Integer) 1, MLDS_ModuleName_37, RttiDefns_23);
    ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(Opts_6, Indent_7, MLDS_ModuleName_37, ClosureWrapperFuncDefns_25);
    ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(Opts_6, Indent_7, (MR_Integer) 1, MLDS_ModuleName_37, CellDefns_24);
    ml_backend__mlds_to_c_global__mlds_output_global_var_defns_7_p_0(Opts_6, Indent_7, (MR_Integer) 1, MLDS_ModuleName_37, TableStructDefns_14);
    ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(Opts_6, Indent_7, MLDS_ModuleName_37, ProcDefns_15);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_9_p_0(Opts_6, MLDS_ModuleName_37, FuncDefns_28, TypeCtorInfoDefns_31, AllocSites_22, InitPreds_16, FinalPreds_17);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_3_p_0(MLDS_ModuleName_37);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_src_end_4_p_0(Indent_7, ModuleName_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_3(
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
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_c_defn_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_1(
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
ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0(
  MR_Word Opts_7,
  MR_Word ModuleName_8,
  MR_Integer Indent_9,
  MR_Word ForeignCode_10)
{
  {
    MR_Word BodyCodes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_10, (MR_Integer) 1))));
    MR_Word Imports_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_10, (MR_Integer) 2))));
    MR_Word ExportDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_10, (MR_Integer) 3))));
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_26;
    MR_Box conv0_STATE_VARIABLE_IO_19_19;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Indent_9));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, Imports_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19_19);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Indent_9));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), BodyCodes_13, (MR_String) "\n", Var_21);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (Indent_9));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), ExportDefns_15, (MR_String) "\n", Var_26);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word ForeignCode_8)
{
  {
    MR_Word HeaderCodes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_8, (MR_Integer) 0))));
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_decls_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Opts_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Indent_7));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_8[1])));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), HeaderCodes_10, (MR_String) "\n", Var_17);
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
    MR_Unsigned packed_args_0;

    ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(ModuleName_11, (MR_String) "");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2)));
    NeedToInit_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    succeeded = (NeedToInit_18 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) FuncDefns_12)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word FuncDefn_105;
      MR_Word FuncDefns_106;
      MR_Word FuncName_108;
      MR_Word Var_113;

      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[3])));
      FuncDefn_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncDefns_12, (MR_Integer) 0))));
      FuncDefns_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncDefns_12, (MR_Integer) 1))));
      FuncName_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn_105, (MR_Integer) 0))));
      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_entry(");
      {
        Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (ModuleName_11));
        MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (FuncName_108));
      }
      ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(Var_113);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_4_p_0(ModuleName_11, FuncDefns_106);
      ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_3_p_0(AllocSites_14);
    }
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(ModuleName_11, (MR_String) "_type_tables");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    if (!((TypeCtorInfoDefns_13 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_130;
      MR_Word GlobalVarDefns_131;
      MR_Word GlobalVarName_133;

      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[3])));
      GlobalVarDefn_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorInfoDefns_13, (MR_Integer) 0))));
      GlobalVarDefns_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorInfoDefns_13, (MR_Integer) 1))));
      GlobalVarName_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_130, (MR_Integer) 0))));
      mercury__io__write_string_3_p_0((MR_String) "\tMR_register_type_ctor_info(&");
      ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(ModuleName_11, GlobalVarName_133);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_4_p_0(ModuleName_11, GlobalVarDefns_131);
    }
    mercury__io__write_string_3_p_0((MR_String) "}\n\n");
    ml_backend__mlds_to_c_file__output_init_fn_name_4_p_0(ModuleName_11, (MR_String) "_debugger");
    mercury__io__write_string_3_p_0((MR_String) "\n{\n");
    mercury__io__write_string_3_p_0((MR_String) "\tMR_fatal_error(\"debugger initialization in MLDS grade\");\n");
    mercury__io__write_string_3_p_0((MR_String) "}\n");
    if (!((InitPreds_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Call_150;
      MR_Word Calls_151;
      MR_String Var_155;
      MR_String Var_158;

      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(ModuleName_11, (MR_String) "required_init");
      mercury__io__write_string_3_p_0((MR_String) "\n{\n");
      Call_150 = ((MR_String) ((MR_hl_field(MR_mktag(1), InitPreds_15, (MR_Integer) 0))));
      Calls_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InitPreds_15, (MR_Integer) 1))));
      Var_158 = mercury__string__f_43_43_2_f_0(Call_150, (MR_String) "();\n");
      Var_155 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_158);
      mercury__io__write_string_3_p_0(Var_155);
      ml_backend__mlds_to_c_file__output_required_calls_3_p_0(Calls_151);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
    if (!((FinalPreds_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Call_164;
      MR_Word Calls_165;
      MR_String Var_169;
      MR_String Var_172;

      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_c_file__output_required_fn_name_4_p_0(ModuleName_11, (MR_String) "required_final");
      mercury__io__write_string_3_p_0((MR_String) "\n{\n");
      Call_164 = ((MR_String) ((MR_hl_field(MR_mktag(1), FinalPreds_16, (MR_Integer) 0))));
      Calls_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FinalPreds_16, (MR_Integer) 1))));
      Var_172 = mercury__string__f_43_43_2_f_0(Call_164, (MR_String) "();\n");
      Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_172);
      mercury__io__write_string_3_p_0(Var_169);
      ml_backend__mlds_to_c_file__output_required_calls_3_p_0(Calls_165);
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
        Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Unsigned packed_args_0;

    mercury__library__version_2_p_0(&Version_53, &Fullarch_54);
    Globals_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_10, (MR_Integer) 2)));
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
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) ((MR_Integer) 1));
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
        Import_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Import_24, 0) = ((MR_Box) ((MR_Integer) 0));
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
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[7]), EnvVarNames_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36_36);
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

    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[6]), FuncDefns_3, &EnvVarNameSets_5);
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
    MR_Word ImportType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Import_8, (MR_Integer) 0))));
    MR_Word ImportName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Import_8, (MR_Integer) 1))));
    MR_Word ModuleName0_12;
    MR_String HeaderExt_13;
    MR_Word ModuleName_15;
    MR_Word Globals_16;
    MR_String HeaderFile_17;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word ModuleName1_14;
    MR_String Var_43;
    MR_Unsigned packed_args_0;

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
    succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ModuleName0_12, &Var_43, &ModuleName1_14);
    if (succeeded)
    {
      succeeded = (strcmp((MR_String) "mercury", Var_43) == 0);
      if (succeeded)
        succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName1_14);
    }
    if (succeeded)
      ModuleName_15 = ModuleName1_14;
    else
      ModuleName_15 = ModuleName0_12;
    Globals_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));
    parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_16, HeaderExt_13, ModuleName_15, &HeaderFile_17);
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (HeaderFile_17));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[4])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word Target_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

    switch (Target_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SortedImports_11;
          MR_Word Var_16;
          MR_Box conv0_STATE_VARIABLE_IO_13;

          mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), Imports_8, &SortedImports_11);
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_imports_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_4(
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
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_3(
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
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_2(
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
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_1(
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
ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word MLDS_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 0))));
    MR_Word GlobalData_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 2))));
    MR_Word TypeDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 3))));
    MR_Word TableStructDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 4))));
    MR_Word ProcDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
    MR_Word InitPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 6))));
    MR_Word FinalPreds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 7))));
    MR_Word AllForeignCode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 8))));
    MR_Word ExportEnums_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 9))));
    MR_Word RttiDefns_23;
    MR_Word CellDefns_24;
    MR_Word ClosureWrapperFuncDefns_25;
    MR_Word PublicTypeDefns_27;
    MR_Word PublicGlobarVarDefns_29;
    MR_Word PublicFuncDefns_31;
    MR_Word SortedPublicGlobarVarDefns_32;
    MR_Word SortedPublicFuncDefns_33;
    MR_Word ForeignCode_34;
    MR_Word MLDS_ModuleName_35;
    MR_Word StdOpts_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_53;
    MR_Word _ScalarCellGroupMap_20;
    MR_Word _VectorCellGroupMap_21;
    MR_Word _AllocSites_22;
    MR_Word _PrivateTypeDefns_26;
    MR_Word _PrivateGlobalVarDefns_28;
    MR_Word _PrivateFuncDefns_30;
    MR_Box conv0_STATE_VARIABLE_IO_54_54;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Unsigned packed_args_0;

    ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_12, &_ScalarCellGroupMap_20, &_VectorCellGroupMap_21, &_AllocSites_22, &RttiDefns_23, &CellDefns_24, &ClosureWrapperFuncDefns_25);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[3]), TypeDefns_13, &_PrivateTypeDefns_26, &PublicTypeDefns_27);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_24, TableStructDefns_14);
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), RttiDefns_23, Var_42);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[4]), Var_41, &_PrivateGlobalVarDefns_28, &PublicGlobarVarDefns_29);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_25, ProcDefns_15);
    mercury__list__filter_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[5]), Var_44, &_PrivateFuncDefns_30, &PublicFuncDefns_31);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), PublicGlobarVarDefns_29, &SortedPublicGlobarVarDefns_32);
    mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), PublicFuncDefns_31, &SortedPublicFuncDefns_33);
    ml_backend__mlds_to_c_file__mlds_output_hdr_start_5_p_0(Opts_6, Indent_7, ModuleName_10);
    mercury__io__nl_2_p_0();
    mercury__io__nl_2_p_0();
    ForeignCode_34 = ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(AllForeignCode_18);
    MLDS_ModuleName_35 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_10);
    ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0(Opts_6, Indent_7, MLDS_ModuleName_35, ForeignCode_34);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_export__mlds_output_export_enums_5_p_0(Opts_6, Indent_7, ExportEnums_19);
    mercury__io__nl_2_p_0();
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0_4));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Opts_6));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Indent_7));
      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (MLDS_ModuleName_35));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, PublicTypeDefns_27, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_54_54);
    mercury__io__nl_2_p_0();
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
    Var_64 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 1))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));
    Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
    {
      StdOpts_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StdOpts_36, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), StdOpts_36, 1) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), StdOpts_36, 2) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_65))) | (((((MR_Unsigned) (((MR_Box) (Var_66))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) (Var_67))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (Var_68))) << (MR_Integer) 3)) | (((((MR_Unsigned) (((MR_Box) (Var_69))) << (MR_Integer) 4)) | (((((MR_Unsigned) (((MR_Box) (Var_70))) << (MR_Integer) 5)) | (((((MR_Unsigned) (((MR_Box) (Var_71))) << (MR_Integer) 6)) | (((((MR_Unsigned) (((MR_Box) (Var_72))) << (MR_Integer) 7)) | (((((MR_Unsigned) (((MR_Box) (Var_73))) << (MR_Integer) 8)) | (((((MR_Unsigned) (((MR_Box) (Var_74))) << (MR_Integer) 9)) | (((((MR_Unsigned) (((MR_Box) (Var_75))) << (MR_Integer) 11)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 1))) << (MR_Integer) 14)) | (((MR_Unsigned) (((MR_Box) (Var_77))) << (MR_Integer) 15))))))))))))))))))))))))));
    }
    ml_backend__mlds_to_c_global__mlds_output_global_var_decls_6_p_0(StdOpts_36, Indent_7, MLDS_ModuleName_35, SortedPublicGlobarVarDefns_32);
    ml_backend__mlds_to_c_func__mlds_output_function_decls_6_p_0(StdOpts_36, Indent_7, MLDS_ModuleName_35, SortedPublicFuncDefns_33);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_5_p_0(MLDS_ModuleName_35, InitPreds_16, FinalPreds_17);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_file__mlds_output_hdr_end_5_p_0(Opts_6, Indent_7, ModuleName_10);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__921__1_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_1(
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
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word ForeignCode_10)
{
  {
    MR_bool succeeded;
    MR_Word DeclCodes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignCode_10, (MR_Integer) 0))));
    MR_Word SymName_17;
    MR_String DeclGuard_18;
    MR_Word AncestorModuleNames_19;
    MR_Word AncestorFileNames_20;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_52;
    MR_Word StdlibModuleName_16;
    MR_Box conv1_STATE_VARIABLE_IO_50_50;

    succeeded = ml_backend__mlds__is_std_lib_module_2_p_0(ModuleName_9, &StdlibModuleName_16);
    if (succeeded)
      SymName_17 = StdlibModuleName_16;
    else
      SymName_17 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_9);
    DeclGuard_18 = backend_libs__foreign__decl_guard_1_f_0(SymName_17);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (DeclGuard_18));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_1[6])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "\n#define "));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (DeclGuard_18));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "#ifndef "));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    mercury__io__write_strings_3_p_0(Var_25);
    AncestorModuleNames_19 = mdbcomp__sym_name__get_ancestors_1_f_0(SymName_17);
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[1]), AncestorModuleNames_19, &AncestorFileNames_20);
    mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[2]), AncestorFileNames_20, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_50_50);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (Opts_7));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (Indent_8));
      MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_c_file_scalar_common_8[0])));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), DeclCodes_12, (MR_String) "\n", Var_52);
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
    MR_Word Target_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));

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
    MR_String Version_68;
    MR_String Fullarch_69;
    MR_Word Globals_70;
    MR_String SourceFileName_71;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;

    mercury__library__version_2_p_0(&Version_68, &Fullarch_69);
    Globals_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_70, (MR_Integer) 1, (MR_String) ".m", ModuleName_8, &SourceFileName_71);
    backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(Globals_70, SourceFileName_71, Version_68, Fullarch_69);
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
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2)));
    Target_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
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
ml_backend__mlds_to_c_file__mlds_output_named_function_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FuncDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word FuncDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      succeeded = ml_backend__mlds_to_c_file__func_defn_has_name_in_list_2_p_0(HeadVar__2_2, FuncDefn_16);
      if (succeeded)
      {
        ml_backend__mlds_to_c_func__mlds_output_function_defn_6_p_0(HeadVar__1_1, (MR_Integer) 0, HeadVar__3_3, FuncDefn_16);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = FuncDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
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
      PlainFuncName_5 = (MR_Word) (MR_body((MR_Word) (Var_18), (MR_Integer) 0));
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
ml_backend__mlds_to_c_file__output_c_dump_preds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_named_function_defns_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_6_p_0(
  MR_Word MLDS_7,
  MR_Word Globals_8,
  MR_String Suffix_9,
  MR_Word DumpPredNames_10)
{
  {
    MR_Word ModuleName_12;
    MR_String SourceFileName_13;
    MR_Word Opts_14;
    MR_String DumpFileName_15;
    MR_Word MLDS_ModuleName_16;
    MR_Word ProcDefns_17;
    MR_String Var_23;
    MR_Word Var_26;
    MR_Word _Succeeded_18;

    ModuleName_12 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_8, ModuleName_12, &SourceFileName_13);
    Opts_14 = ml_backend__mlds_to_c_util__init_mlds_to_c_opts_2_f_0(Globals_8, SourceFileName_13);
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ".mlds_dump", Suffix_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 0, Var_23, ModuleName_12, &DumpFileName_15);
    MLDS_ModuleName_16 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_12);
    ProcDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_7, (MR_Integer) 5))));
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_dump_preds_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Opts_14));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (DumpPredNames_10));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (MLDS_ModuleName_16));
      MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (ProcDefns_17));
    }
    libs__file_util__output_to_file_6_p_0(Globals_8, DumpFileName_15, Var_26, &_Succeeded_18);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_src_file_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_6_p_0(
  MR_Word MLDS_7,
  MR_Word Globals_8,
  MR_String Suffix_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word ModuleName_12;
    MR_String SourceFileName_13;
    MR_Word Opts_14;
    MR_Word Succeeded0_15;
    MR_Word ModuleName_28;
    MR_Word Globals_29;
    MR_String SourceFile_30;
    MR_String Var_33;
    MR_Word Var_36;
    MR_Unsigned packed_args_0;

    ModuleName_12 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_8, ModuleName_12, &SourceFileName_13);
    Opts_14 = ml_backend__mlds_to_c_util__init_mlds_to_c_opts_2_f_0(Globals_8, SourceFileName_13);
    ModuleName_28 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    Globals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_14, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_14, (MR_Integer) 2)));
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ".c", Suffix_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_29, (MR_Integer) 0, Var_33, ModuleName_28, &SourceFile_30);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_mlds_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Opts_14));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (MLDS_7));
    }
    libs__file_util__output_to_file_6_p_0(Globals_29, SourceFile_30, Var_36, &Succeeded0_15);
    switch (Succeeded0_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0(MLDS_7, Opts_14, Suffix_9, Succeeded_10);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_file__mlds_output_hdr_file_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
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
    MR_Word Var_50;
    MR_String Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;

    ModuleName_12 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_7);
    Globals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2)));
    Var_25 = mercury__string__f_43_43_2_f_0(Suffix_9, (MR_String) ".tmp");
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ".mih", Var_25);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, Var_22, ModuleName_12, &TmpHeaderFile_14);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ".mih", Suffix_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, Var_28, ModuleName_12, &HeaderFile_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 153, &LineNumbersForCHdrs_16);
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 0))));
    Var_51 = ((MR_String) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 1))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2)));
    Var_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    Var_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    Var_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 9)) & (MR_Integer) 3);
    Var_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 11)) & (MR_Integer) 7);
    Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_8, (MR_Integer) 2))) >> (MR_Integer) 15)) & (MR_Integer) 3);
    {
      HdrOpts_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HdrOpts_17, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), HdrOpts_17, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), HdrOpts_17, 2) = (MR_Box) (((MR_Unsigned) (((MR_Box) (LineNumbersForCHdrs_16))) | (((((MR_Unsigned) (((MR_Box) (LineNumbersForCHdrs_16))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) (Var_54))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (Var_55))) << (MR_Integer) 3)) | (((((MR_Unsigned) (((MR_Box) (Var_56))) << (MR_Integer) 4)) | (((((MR_Unsigned) (((MR_Box) (Var_57))) << (MR_Integer) 5)) | (((((MR_Unsigned) (((MR_Box) (Var_58))) << (MR_Integer) 6)) | (((((MR_Unsigned) (((MR_Box) (Var_59))) << (MR_Integer) 7)) | (((((MR_Unsigned) (((MR_Box) (Var_60))) << (MR_Integer) 8)) | (((((MR_Unsigned) (((MR_Box) (Var_61))) << (MR_Integer) 9)) | (((((MR_Unsigned) (((MR_Box) (Var_62))) << (MR_Integer) 11)) | (((((MR_Unsigned) (((MR_Box) (Var_63))) << (MR_Integer) 14)) | (((MR_Unsigned) (((MR_Box) (Var_64))) << (MR_Integer) 15))))))))))))))))))))))))));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_header_file_opts_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
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
