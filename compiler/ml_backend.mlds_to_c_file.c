/*
** Automatically generated from `mlds_to_c_file.m'
** by the Mercury compiler,
** version rotd-2026-04-20
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
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_class.mih"
#include "ml_backend.mlds_to_c_export.mih"
#include "ml_backend.mlds_to_c_func.mih"
#include "ml_backend.mlds_to_c_global.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__869__1_4_p_0(
  MR_Word Stream_10,
  MR_String LambdaHeadVar__1_38);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_src_file__386__1_2_p_0(
  MR_Word EnumDefns_18,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_src_file__385__1_2_p_0(
  MR_Word ClassDefns_17,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_mih_hdr_file__263__1_2_p_0(
  MR_Word EnumDefns_18,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_mih_hdr_file__262__1_2_p_0(
  MR_Word ClassDefns_17,
  MR_Word HeadVar__2_44);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned _Indent_10,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_51_93_95_48_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_foreign_import_module_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word FIMSpec_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FIMSpec_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned _Indent_11,
  MR_Word MaybeDesiredIsLocal_12,
  MR_Word DeclCode_13,
  MR_Word * Res_14);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_51_93_95_48_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word MaybeDesiredIsLocal_12,
  MR_Word DeclCode_13,
  MR_Word * Res_14);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word LiteralOrInclude_10,
  MR_Word Context_11,
  MR_Word * Res_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_env_var_decl_4_p_0(
  MR_Word Stream_5,
  MR_String EnvVarName_6);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_from_defn_2_p_0(
  MR_Word FuncDefn_3,
  MR_Word * EnvVarNameSet_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0(
  MR_Word Opts_8,
  MR_Unsigned Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word ModuleName_11,
  MR_Unsigned Indent_12,
  MR_Word ForeignCode_13,
  MR_Word * Errors_14);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word ForeignCode_11,
  MR_Word * Errors_12);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_10_p_0(
  MR_Word Opts_11,
  MR_Word Stream_12,
  MR_Word ModuleName_13,
  MR_Word FuncDefns_14,
  MR_Word TypeCtorInfoDefns_15,
  MR_Word AllocSites_16,
  MR_Word InitFuncNames_17,
  MR_Word FinalFuncNames_18);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_4_p_0(
  MR_Word Stream_5,
  MR_Word AllocSites_6);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MLDS_ModuleName_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_5_p_0(
  MR_Word Stream_1,
  MR_Word ModuleName_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_calls_to_void_funcs_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(
  MR_Word AllForeignCode_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_end_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_Word ModuleName_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_start_10_p_0(
  MR_Word Opts_11,
  MR_Word Stream_12,
  MR_Unsigned Indent_13,
  MR_Word ModuleName_14,
  MR_Word ForeignCode_15,
  MR_Word InitPreds_16,
  MR_Word FinalPreds_17,
  MR_Word EnvVarNames_18);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(
  MR_Word FuncDefns_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_import_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned _Indent_9,
  MR_Word Import_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Import_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Imports_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0(
  MR_Word Opts_8,
  MR_Unsigned Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word ModuleName_12,
  MR_Word ForeignCode_13,
  MR_Word * Errors_14);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleName_8,
  MR_Word InitFuncNames_9,
  MR_Word FinalFuncNames_10);

static MR_String MR_CALL 
ml_backend__mlds_to_c_file__grade_check_fn_decl_to_string_1_f_0(
  MR_Word ModuleName_3);

static MR_String MR_CALL 
ml_backend__mlds_to_c_file__required_fn_decl_to_string_2_f_0(
  MR_Word ModuleName_4,
  MR_String Suffix_5);

static MR_String MR_CALL 
ml_backend__mlds_to_c_file__init_fn_decl_to_string_2_f_0(
  MR_Word ModuleName_4,
  MR_String Suffix_5);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_end_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ModuleName_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_start_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ModuleName_10);

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_auto_gen_comment_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word ModuleName_8);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_func_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word ModuleName_2,
  MR_Word HeadVar__3_3,
  MR_Word Stream_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_2[11][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_3[3][4];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_4[3][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_5[5][10];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_6[6][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_7[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_8[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_9[2][9];




static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "  initialised = MR_TRUE;\n\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "  if (initialised) return;\n")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_c_file_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "  static MR_bool initialised = MR_FALSE;\n")),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_c_file_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[5])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[2])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_3[1])),
    ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_3[3][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_4[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_5[5][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_env_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_6[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_file_scalar_common_9[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
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


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_enum_class_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_file__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static void MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__869__1_4_p_0(
  MR_Word Stream_10,
  MR_String LambdaHeadVar__1_38)
{
  MR_Word Var_44;
  MR_Word Var_46;

  {
    Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_46, 1) = ((MR_Box) (LambdaHeadVar__1_38));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__io__format_5_p_0(Stream_10, (MR_String) "#include \"%s.mih\"\n", Var_44);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_src_file__386__1_2_p_0(
  MR_Word EnumDefns_18,
  MR_Word HeadVar__2_57)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[1]), ((MR_Box) (EnumDefns_18)), ((MR_Box) (HeadVar__2_57)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_src_file__385__1_2_p_0(
  MR_Word ClassDefns_17,
  MR_Word HeadVar__2_53)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[0]), ((MR_Box) (ClassDefns_17)), ((MR_Box) (HeadVar__2_53)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_mih_hdr_file__263__1_2_p_0(
  MR_Word EnumDefns_18,
  MR_Word HeadVar__2_48)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[1]), ((MR_Box) (EnumDefns_18)), ((MR_Box) (HeadVar__2_48)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_mih_hdr_file__262__1_2_p_0(
  MR_Word ClassDefns_17,
  MR_Word HeadVar__2_44)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[0]), ((MR_Box) (ClassDefns_17)), ((MR_Box) (HeadVar__2_44)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defn_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned _Indent_10,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_51_93_95_48_7_p_0(Opts_8, Stream_9, ForeignBodyCode_11, Res_12);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_100_101_102_110_95_95_91_51_93_95_48_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word ForeignBodyCode_11,
  MR_Word * Res_12)
{
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(0, ForeignBodyCode_11, 0))) & (MR_Integer) 3);
  MR_Word LiteralOrInclude_15 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_11, 1))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, ForeignBodyCode_11, 2))));

  switch (Lang_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_7_p_0(Opts_8, Stream_9, LiteralOrInclude_15, Context_16, Res_12);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_defn\'/7", (MR_String) "foreign code other than C");
        return;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_foreign_import_module_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word FIMSpec_10)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_51_93_95_48_6_p_0(Opts_7, Stream_8, FIMSpec_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_102_111_114_101_105_103_110_95_105_109_112_111_114_116_95_109_111_100_117_108_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word FIMSpec_10)
{
  MR_Word Lang_12 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_10, 0))) & (MR_Integer) 3);
  MR_Word Import_13 = ((MR_Word) ((MR_hl_field(0, FIMSpec_10, 1))));

  switch (Lang_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word UserImport_14;

        {
          UserImport_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UserImport_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, UserImport_14, 1) = ((MR_Box) (Import_13));
        }
        ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_51_93_95_48_6_p_0(Opts_7, Stream_8, UserImport_14);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_foreign_import_module\'/6", (MR_String) "foreign code other than C");
        return;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned _Indent_11,
  MR_Word MaybeDesiredIsLocal_12,
  MR_Word DeclCode_13,
  MR_Word * Res_14)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_51_93_95_48_8_p_0(Opts_9, Stream_10, MaybeDesiredIsLocal_12, DeclCode_13, Res_14);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_99_95_104_100_114_95_100_101_99_108_95_95_91_51_93_95_48_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word MaybeDesiredIsLocal_12,
  MR_Word DeclCode_13,
  MR_Word * Res_14)
{
  MR_bool succeeded;
  MR_Word Lang_16 = ((((MR_Unsigned) ((MR_hl_field(0, DeclCode_13, 0))) >> 1)) & (MR_Integer) 3);
  MR_Word IsLocal_17 = ((MR_Unsigned) ((MR_hl_field(0, DeclCode_13, 0))) & (MR_Integer) 1);
  MR_Word LiteralOrInclude_18 = ((MR_Word) ((MR_hl_field(0, DeclCode_13, 1))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, DeclCode_13, 2))));

  switch (Lang_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((MaybeDesiredIsLocal_12 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word DesiredIsLocal_20 = ((MR_Word) ((MR_hl_field(1, MaybeDesiredIsLocal_12, 0))));

          succeeded = (IsLocal_17 == DesiredIsLocal_20);
        }
        if (succeeded)
          ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_7_p_0(Opts_9, Stream_10, LiteralOrInclude_18, Context_19, Res_14);
        else
          *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_c_hdr_decl\'/8", (MR_String) "foreign code other than C");
        return;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_foreign_literal_or_include_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word LiteralOrInclude_10,
  MR_Word Context_11,
  MR_Word * Res_12)
{
  MR_Word Var_98 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 15)) & (MR_Integer) 1);
  MR_String Var_101 = ((MR_String) ((MR_hl_field(0, Opts_8, 1))));

  if (((MR_tag((MR_Word) LiteralOrInclude_10)) == (MR_Integer) 1))
  {
    MR_String IncludeFileName_15 = ((MR_String) ((MR_hl_field(1, LiteralOrInclude_10, 0))));
    MR_String IncludePath_17;
    MR_Word Globals_18;
    MR_Word Var_24;

    parse_tree__file_names__make_include_file_path_3_p_0(Var_101, IncludeFileName_15, &IncludePath_17);
    Var_24 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 15)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_file_line_6_p_0(Stream_9, Var_24, IncludePath_17, (MR_Integer) 1);
    Globals_18 = ((MR_Word) ((MR_hl_field(0, Opts_8, 0))));
    libs__file_util__write_include_file_contents_6_p_0(Stream_9, Globals_18, IncludePath_17, Res_12);
  }
  else
  {
    MR_String Code_14 = ((MR_String) ((MR_hl_field(0, LiteralOrInclude_10, 0))));

    ml_backend__mlds_to_c_util__c_output_context_5_p_0(Stream_9, Var_98, Context_11);
    mercury__io__write_string_4_p_0(Stream_9, Code_14);
    *Res_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
  mercury__io__nl_3_p_0(Stream_9);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_env_var_decl_4_p_0(
  MR_Word Stream_5,
  MR_String EnvVarName_6)
{
  MR_String Var_14;
  MR_Word Var_15 = (MR_Word) (EnvVarName_6);

  Var_14 = ml_backend__mlds_to_c_name__global_var_ref_to_string_1_f_0(Var_15);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "extern MR_Word ");
  mercury__io__write_string_4_p_0(Stream_5, Var_14);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_from_defn_2_p_0(
  MR_Word FuncDefn_3,
  MR_Word * EnvVarNameSet_4)
{
  *EnvVarNameSet_4 = ((MR_Word) ((MR_hl_field(0, FuncDefn_3, 6))));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_class__mlds_output_env_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_file__mlds_output_env_var_decl_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__global_var_defn_is_type_ctor_info_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__function_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__global_var_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_src_file__386__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_src_file__385__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0(
  MR_Word Opts_8,
  MR_Unsigned Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 0))));
  MR_Word Imports_15 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 1))));
  MR_Word GlobalData_16 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 2))));
  MR_Word ClassDefns_17 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 3))));
  MR_Word EnumDefns_18 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 4))));
  MR_Word TableStructDefns_20 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 6))));
  MR_Word ProcDefns_21 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 7))));
  MR_Word InitPreds_22 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 8))));
  MR_Word FinalPreds_23 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 9))));
  MR_Word AllForeignCode_24 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 10))));
  MR_Word ScalarCellGroupMap_26;
  MR_Word VectorCellGroupMap_27;
  MR_Word AllocSites_28;
  MR_Word RttiDefns_29;
  MR_Word CellDefns_30;
  MR_Word ClosureWrapperFuncDefns_31;
  MR_Word PrivateEnvDefns_32 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 5))));
  MR_Word GlobalVarDefns_33;
  MR_Word PrivateGlobalVarDefns_34;
  MR_Word FuncDefns_35;
  MR_Word PrivateFuncDefns_36;
  MR_Word TypeCtorInfoDefns_37;
  MR_Word ScalarCellGroups_38;
  MR_Word VectorCellGroups_39;
  MR_Word ForeignCode_40;
  MR_Word EnvVarNameSet_41;
  MR_Word EnvVarNames_42;
  MR_Word ForeignDeclErrors_43;
  MR_Word MLDS_ModuleName_44;
  MR_Word ModuleSymName_45;
  MR_String MangledModuleName_46;
  MR_Word ForeignCodeErrors_47;
  MR_Word Var_50;
  MR_Word Var_54;
  MR_Word Var_58;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Box conv0_STATE_VARIABLE_IO_7_69;
  MR_Box conv1_STATE_VARIABLE_IO_8_71;

  ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_16, &ScalarCellGroupMap_26, &VectorCellGroupMap_27, &AllocSites_28, &RttiDefns_29, &CellDefns_30, &ClosureWrapperFuncDefns_31);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[3]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_1));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (ClassDefns_17));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_src_file\'/7", (MR_String) "ClassDefns != []");
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[4]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_2));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (EnumDefns_18));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_src_file\'/7", (MR_String) "EnumDefns != []");
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_30, TableStructDefns_20);
  GlobalVarDefns_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), RttiDefns_29, Var_58);
  mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[8]), GlobalVarDefns_33, &PrivateGlobalVarDefns_34);
  FuncDefns_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_31, ProcDefns_21);
  mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[9]), FuncDefns_35, &PrivateFuncDefns_36);
  mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[10]), RttiDefns_29, &TypeCtorInfoDefns_37);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), ScalarCellGroupMap_26, &ScalarCellGroups_38);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), VectorCellGroupMap_27, &VectorCellGroups_39);
  ForeignCode_40 = ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(AllForeignCode_24);
  EnvVarNameSet_41 = ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(ProcDefns_21);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNameSet_41, &EnvVarNames_42);
  ml_backend__mlds_to_c_file__mlds_output_src_start_10_p_0(Opts_8, Stream_11, Indent_9, ModuleName_14, ForeignCode_40, InitPreds_22, FinalPreds_23, EnvVarNames_42);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_src_imports_6_p_0(Opts_8, Stream_11, Indent_9, Imports_15);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0(Opts_8, Stream_11, Indent_9, ForeignCode_40, &ForeignDeclErrors_43);
  mercury__io__nl_3_p_0(Stream_11);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_6));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (Stream_11));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, EnvVarNames_42, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_7_69);
  MLDS_ModuleName_44 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_14);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[4]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0_7));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_70, 4) = ((MR_Box) (Stream_11));
    MR_hl_field(0, Var_70, 5) = ((MR_Box) (Indent_9));
    MR_hl_field(0, Var_70, 6) = ((MR_Box) (MLDS_ModuleName_44));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_env_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_70, PrivateEnvDefns_32, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8_71);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_global_var_decls_7_p_0(Opts_8, Stream_11, Indent_9, MLDS_ModuleName_44, PrivateGlobalVarDefns_34);
  ml_backend__mlds_to_c_func__mlds_output_function_decls_7_p_0(Opts_8, Stream_11, Indent_9, MLDS_ModuleName_44, PrivateFuncDefns_36);
  mercury__io__nl_3_p_0(Stream_11);
  ModuleSymName_45 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_44);
  MangledModuleName_46 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_45);
  ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_decls_7_p_0(Opts_8, Stream_11, Indent_9, MangledModuleName_46, ScalarCellGroups_38);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_decls_8_p_0(Opts_8, Stream_11, Indent_9, MLDS_ModuleName_44, MangledModuleName_46, VectorCellGroups_39);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_alloc_site_decls_5_p_0(Stream_11, Indent_9, AllocSites_28);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_scalar_cell_group_defns_7_p_0(Opts_8, Stream_11, Indent_9, MangledModuleName_46, ScalarCellGroups_38);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_vector_cell_group_defns_7_p_0(Opts_8, Stream_11, Indent_9, MangledModuleName_46, VectorCellGroups_39);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_alloc_site_defns_7_p_0(Opts_8, Stream_11, Indent_9, MLDS_ModuleName_44, AllocSites_28);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0(Opts_8, Stream_11, MLDS_ModuleName_44, Indent_9, ForeignCode_40, &ForeignCodeErrors_47);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_global__mlds_output_global_var_defns_8_p_0(Opts_8, Stream_11, Indent_9, (MR_Integer) 1, MLDS_ModuleName_44, RttiDefns_29);
  ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 1, Stream_11, Indent_9, MLDS_ModuleName_44, ClosureWrapperFuncDefns_31);
  ml_backend__mlds_to_c_global__mlds_output_global_var_defns_8_p_0(Opts_8, Stream_11, Indent_9, (MR_Integer) 1, MLDS_ModuleName_44, CellDefns_30);
  ml_backend__mlds_to_c_global__mlds_output_global_var_defns_8_p_0(Opts_8, Stream_11, Indent_9, (MR_Integer) 1, MLDS_ModuleName_44, TableStructDefns_20);
  ml_backend__mlds_to_c_func__mlds_output_function_defns_8_p_0(Opts_8, (MR_Integer) 1, Stream_11, Indent_9, MLDS_ModuleName_44, ProcDefns_21);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_10_p_0(Opts_8, Stream_11, MLDS_ModuleName_44, FuncDefns_35, TypeCtorInfoDefns_37, AllocSites_28, InitPreds_22, FinalPreds_23);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_4_p_0(Stream_11, MLDS_ModuleName_44);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_src_end_5_p_0(Stream_11, Indent_9, ModuleName_14);
  *Errors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_43, ForeignCodeErrors_47);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_export__mlds_output_pragma_export_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Res_12;

  ml_backend__mlds_to_c_file__mlds_output_c_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Res_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_Res_12));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_file__mlds_output_c_foreign_import_module_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Word ModuleName_11,
  MR_Unsigned Indent_12,
  MR_Word ForeignCode_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word BodyCodes_17 = ((MR_Word) ((MR_hl_field(0, ForeignCode_13, 1))));
  MR_Word Imports_18 = ((MR_Word) ((MR_hl_field(0, ForeignCode_13, 2))));
  MR_Word ExportDefns_19 = ((MR_Word) ((MR_hl_field(0, ForeignCode_13, 3))));
  MR_Word Results_20;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Box conv0_STATE_VARIABLE_IO_1_24;
  MR_Box conv2_STATE_VARIABLE_IO_2_26;
  MR_Box conv3_STATE_VARIABLE_IO_22;

  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_9[1]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Opts_9));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (Indent_12));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, Imports_18, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_1_24);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[2]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Opts_9));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (Indent_12));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, BodyCodes_17, &Results_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_26);
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[3]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_defns_8_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Opts_9));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_27, 5) = ((MR_Box) (Indent_12));
    MR_hl_field(0, Var_27, 6) = ((MR_Box) (ModuleName_11));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_pragma_export_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, ExportDefns_19, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_22);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[7]), Results_20, Errors_14);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0_2(
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
ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Res_14;

  ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_Res_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_Res_14));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word ForeignCode_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word HeaderCodes_14 = ((MR_Word) ((MR_hl_field(0, ForeignCode_11, 0))));
  MR_Word Results_18;
  MR_Word Var_21;
  MR_Box conv1_STATE_VARIABLE_IO_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_8[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_decls_7_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Opts_8));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Stream_9));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (Indent_10));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_c_file_scalar_common_4[2])));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, HeaderCodes_14, &Results_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[6]), Results_18, Errors_12);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_defns_10_p_0(
  MR_Word Opts_11,
  MR_Word Stream_12,
  MR_Word ModuleName_13,
  MR_Word FuncDefns_14,
  MR_Word TypeCtorInfoDefns_15,
  MR_Word AllocSites_16,
  MR_Word InitFuncNames_17,
  MR_Word FinalFuncNames_18)
{
  MR_bool succeeded;
  MR_String ModuleInitDecl_20;
  MR_String TypeTablesDecl_21;
  MR_String DebuggerDecl_22;
  MR_Word NeedToInit_23;

  ModuleInitDecl_20 = ml_backend__mlds_to_c_file__init_fn_decl_to_string_2_f_0(ModuleName_13, (MR_String) "");
  TypeTablesDecl_21 = ml_backend__mlds_to_c_file__init_fn_decl_to_string_2_f_0(ModuleName_13, (MR_String) "_type_tables");
  DebuggerDecl_22 = ml_backend__mlds_to_c_file__init_fn_decl_to_string_2_f_0(ModuleName_13, (MR_String) "_debugger");
  mercury__io__write_string_4_p_0(Stream_12, ModuleInitDecl_20);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n{\n");
  NeedToInit_23 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_11, 3))) >> 9)) & (MR_Integer) 1);
  succeeded = (NeedToInit_23 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (FuncDefns_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word FuncDefn_133;
    MR_Word FuncDefns_134;
    MR_Word FuncName_135;
    MR_Word QualFuncName_136;
    MR_String QualFuncNameStr_137;

    mercury__io__write_strings_4_p_0(Stream_12, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_c_file_scalar_common_1[8])));
    FuncDefn_133 = ((MR_Word) ((MR_hl_field(1, FuncDefns_14, 0))));
    FuncDefns_134 = ((MR_Word) ((MR_hl_field(1, FuncDefns_14, 1))));
    FuncName_135 = ((MR_Word) ((MR_hl_field(0, FuncDefn_133, 0))));
    {
      QualFuncName_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, QualFuncName_136, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, QualFuncName_136, 1) = ((MR_Box) (FuncName_135));
    }
    QualFuncNameStr_137 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(QualFuncName_136);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "  MR_init_entry(");
    mercury__io__write_string_4_p_0(Stream_12, QualFuncNameStr_137);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ");\n");
    ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_5_p_0(Stream_12, ModuleName_13, FuncDefns_134);
    ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_4_p_0(Stream_12, AllocSites_16);
  }
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n\n");
  mercury__io__write_string_4_p_0(Stream_12, TypeTablesDecl_21);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n{\n");
  if (!((TypeCtorInfoDefns_15 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word GlobalVarDefn_162;
    MR_Word GlobalVarDefns_163;
    MR_Word GlobalVarName_164;
    MR_String QualGlobalVarNameStr_165;

    mercury__io__write_strings_4_p_0(Stream_12, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_c_file_scalar_common_1[8])));
    GlobalVarDefn_162 = ((MR_Word) ((MR_hl_field(1, TypeCtorInfoDefns_15, 0))));
    GlobalVarDefns_163 = ((MR_Word) ((MR_hl_field(1, TypeCtorInfoDefns_15, 1))));
    GlobalVarName_164 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_162, 0))));
    QualGlobalVarNameStr_165 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(ModuleName_13, GlobalVarName_164);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "  MR_register_type_ctor_info(&");
    mercury__io__write_string_4_p_0(Stream_12, QualGlobalVarNameStr_165);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ");\n");
    ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_5_p_0(Stream_12, ModuleName_13, GlobalVarDefns_163);
  }
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n\n");
  mercury__io__write_string_4_p_0(Stream_12, DebuggerDecl_22);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n{\n");
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "  MR_fatal_error(\"debugger initialization in MLDS grade\");\n");
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n");
  if (!((InitFuncNames_17 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ReqInitDecl_30;
    MR_String FuncName_186;
    MR_Word FuncNames_187;

    ReqInitDecl_30 = ml_backend__mlds_to_c_file__required_fn_decl_to_string_2_f_0(ModuleName_13, (MR_String) "init");
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_12, ReqInitDecl_30);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n{\n");
    FuncName_186 = ((MR_String) ((MR_hl_field(1, InitFuncNames_17, 0))));
    FuncNames_187 = ((MR_Word) ((MR_hl_field(1, InitFuncNames_17, 1))));
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "  ");
    mercury__io__write_string_4_p_0(Stream_12, FuncName_186);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "();\n");
    ml_backend__mlds_to_c_file__output_calls_to_void_funcs_4_p_0(Stream_12, FuncNames_187);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n");
  }
  if (!((FinalFuncNames_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ReqFinalDecl_33;
    MR_String FuncName_203;
    MR_Word FuncNames_204;

    ReqFinalDecl_33 = ml_backend__mlds_to_c_file__required_fn_decl_to_string_2_f_0(ModuleName_13, (MR_String) "final");
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_12, ReqFinalDecl_33);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n{\n");
    FuncName_203 = ((MR_String) ((MR_hl_field(1, FinalFuncNames_18, 0))));
    FuncNames_204 = ((MR_Word) ((MR_hl_field(1, FinalFuncNames_18, 1))));
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "  ");
    mercury__io__write_string_4_p_0(Stream_12, FuncName_203);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "();\n");
    ml_backend__mlds_to_c_file__output_calls_to_void_funcs_4_p_0(Stream_12, FuncNames_204);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_call_to_register_alloc_sites_4_p_0(
  MR_Word Stream_5,
  MR_Word AllocSites_6)
{
  if (!((AllocSites_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer NumAllocSites_10;
    MR_String Var_22;

    mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[0]), AllocSites_6, &NumAllocSites_10);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "  MR_register_alloc_sites(MR_alloc_sites, ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_4[0]), NumAllocSites_10, &Var_22);
    mercury__io__write_string_4_p_0(Stream_5, Var_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ");\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_register_tci_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MLDS_ModuleName_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word GlobalVarDefns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word GlobalVarName_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_13, 0))));
      MR_String QualGlobalVarNameStr_17;
      MR_Word next_value_of_HeadVar__3_3;

      QualGlobalVarNameStr_17 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_2, GlobalVarName_16);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "  MR_register_type_ctor_info(&");
      mercury__io__write_string_4_p_0(HeadVar__1_1, QualGlobalVarNameStr_17);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ");\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_calls_to_init_entry_5_p_0(
  MR_Word Stream_1,
  MR_Word ModuleName_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FuncDefn_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word FuncDefns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word FuncName_16 = ((MR_Word) ((MR_hl_field(0, FuncDefn_13, 0))));
      MR_Word QualFuncName_17;
      MR_String QualFuncNameStr_18;
      MR_Word next_value_of_HeadVar__3_3;

      {
        QualFuncName_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, QualFuncName_17, 0) = ((MR_Box) (ModuleName_2));
        MR_hl_field(0, QualFuncName_17, 1) = ((MR_Box) (FuncName_16));
      }
      QualFuncNameStr_18 = ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(QualFuncName_17);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "  MR_init_entry(");
      mercury__io__write_string_4_p_0(Stream_1, QualFuncNameStr_18);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ");\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = FuncDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_calls_to_void_funcs_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String FuncName_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word FuncNames_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "  ");
      mercury__io__write_string_4_p_0(Stream_1, FuncName_10);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "();\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = FuncNames_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_c_foreign_code_1_f_0(
  MR_Word AllForeignCode_3)
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

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_grade_check_fn_defn_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6)
{
  MR_bool succeeded;
  MR_String GradeCheckDecl_8;
  MR_String ModuleNameString_31;
  MR_String Var_37;
  MR_String ModuleNameString0_39;
  MR_Word Var_40;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "// Ensure everything is compiled with the same grade.\n");
  Var_40 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
  ModuleNameString0_39 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_40);
  succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_39, (MR_String) "mercury__");
  if (succeeded)
    ModuleNameString_31 = ModuleNameString0_39;
  else
    ModuleNameString_31 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_39);
  Var_37 = mercury__string__f_43_43_2_f_0(ModuleNameString_31, (MR_String) "__grade_check(void)");
  GradeCheckDecl_8 = mercury__string__f_43_43_2_f_0((MR_String) "const char *", Var_37);
  mercury__io__write_string_4_p_0(Stream_5, GradeCheckDecl_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "{\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "  return &MR_GRADE_VAR;\n");
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_end_5_p_0(
  MR_Word Stream_6,
  MR_Unsigned Indent_7,
  MR_Word ModuleName_8)
{
  MR_String IndentStr_10;
  MR_String Var_19;

  IndentStr_10 = libs__indent__indent2_string_1_f_0(Indent_7);
  Var_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "// :- end_module ");
  mercury__io__write_string_4_p_0(Stream_6, Var_19);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_start_10_p_0(
  MR_Word Opts_11,
  MR_Word Stream_12,
  MR_Unsigned Indent_13,
  MR_Word ModuleName_14,
  MR_Word ForeignCode_15,
  MR_Word InitPreds_16,
  MR_Word FinalPreds_17,
  MR_Word EnvVarNames_18)
{
  MR_String ModuleNameStr_20;
  MR_String IndentStr_21;
  MR_Word CompilerImport_22;
  MR_Word Exports_26;
  MR_String Version_59;
  MR_String Fullarch_60;
  MR_Word Globals_61;
  MR_String SourceFileName_62;

  ModuleNameStr_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
  mercury__library__version_2_p_0(&Version_59, &Fullarch_60);
  Globals_61 = ((MR_Word) ((MR_hl_field(0, Opts_11, 0))));
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_14, &SourceFileName_62);
  backend_libs__c_util__output_c_file_intro_and_grade_7_p_0(Globals_61, Stream_12, SourceFileName_62, Version_59, Fullarch_60);
  mercury__io__nl_3_p_0(Stream_12);
  IndentStr_21 = libs__indent__indent2_string_1_f_0(Indent_13);
  mercury__io__write_string_4_p_0(Stream_12, IndentStr_21);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "// :- module ");
  mercury__io__write_string_4_p_0(Stream_12, ModuleNameStr_20);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) ".\n");
  mercury__io__write_string_4_p_0(Stream_12, IndentStr_21);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "// :- implementation.\n");
  mercury__io__nl_3_p_0(Stream_12);
  backend_libs__c_util__output_init_c_comment_7_p_0(Stream_12, ModuleName_14, InitPreds_16, FinalPreds_17, EnvVarNames_18);
  {
    CompilerImport_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CompilerImport_22, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, CompilerImport_22, 1) = ((MR_Box) (ModuleName_14));
  }
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_51_93_95_48_6_p_0(Opts_11, Stream_12, CompilerImport_22);
  Exports_26 = ((MR_Word) ((MR_hl_field(0, ForeignCode_15, 3))));
  if (!((Exports_26 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word UserImport_29;

    {
      UserImport_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UserImport_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, UserImport_29, 1) = ((MR_Box) (ModuleName_14));
    }
    ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_51_93_95_48_6_p_0(Opts_11, Stream_12, UserImport_29);
  }
  mercury__io__nl_3_p_0(Stream_12);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_EnvVarNameSet_4;

  ml_backend__mlds_to_c_file__mlds_get_env_var_names_from_defn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_EnvVarNameSet_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_EnvVarNameSet_4));
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_file__mlds_get_env_var_names_1_f_0(
  MR_Word FuncDefns_3)
{
  MR_Word EnvVarNameSet_4;
  MR_Word EnvVarNameSets_5;

  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[5]), FuncDefns_3, &EnvVarNameSets_5);
  EnvVarNameSet_4 = mercury__set__union_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), EnvVarNameSets_5);
  return EnvVarNameSet_4;
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_import_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned _Indent_9,
  MR_Word Import_10)
{
  ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_51_93_95_48_6_p_0(Opts_7, Stream_8, Import_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_115_114_99_95_105_109_112_111_114_116_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Import_10)
{
  MR_bool succeeded;
  MR_Word ImportType_12 = ((MR_Unsigned) ((MR_hl_field(0, Import_10, 0))) & (MR_Integer) 1);
  MR_Word ModuleName0_13 = ((MR_Word) ((MR_hl_field(0, Import_10, 1))));
  MR_Word HeaderExt_14;
  MR_Word ModuleName_16;
  MR_Word Globals_17;
  MR_String HeaderFileName_18;
  MR_Word ModuleName1_15;
  MR_String Var_45;

  switch (ImportType_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeaderExt_14 = (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_c_file_scalar_common_1[4]));
      break;
    case (MR_Integer) 0:
      HeaderExt_14 = (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_c_file_scalar_common_1[5]));
      break;
  }
  succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ModuleName0_13, &Var_45, &ModuleName1_15);
  if (succeeded)
  {
    succeeded = (strcmp((MR_String) "mercury", Var_45) == 0);
    if (succeeded)
      succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName1_15);
  }
  if (succeeded)
    ModuleName_16 = ModuleName1_15;
  else
    ModuleName_16 = ModuleName0_13;
  Globals_17 = ((MR_Word) ((MR_hl_field(0, Opts_7, 0))));
  parse_tree__file_names__module_name_to_file_name_curdir_5_p_0(Globals_17, (MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_src_import\'/6", HeaderExt_14, ModuleName_16, &HeaderFileName_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#include \"");
  mercury__io__write_string_4_p_0(Stream_8, HeaderFileName_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\"\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_file__mlds_output_src_import_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_src_imports_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Imports_10)
{
  MR_Word Target_12 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_7, 3))) >> 7)) & (MR_Integer) 3);

  switch (Target_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SortedImports_13;
        MR_Word Var_16;
        MR_Box conv0_STATE_VARIABLE_IO_15;

        mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), Imports_10, &SortedImports_13);
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_9[0]));
          MR_hl_field(0, Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_src_imports_6_p_0_1));
          MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_16, 3) = ((MR_Box) (Opts_7));
          MR_hl_field(0, Var_16, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_16, 5) = ((MR_Box) (Indent_9));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_import_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_16, SortedImports_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15);
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_src_imports\'/6", (MR_String) "expected target c");
        return;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__function_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_target_util__global_var_defn_is_private_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_mih_hdr_file__263__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_mih_hdr_file__262__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0(
  MR_Word Opts_8,
  MR_Unsigned Indent_9,
  MR_Word MLDS_10,
  MR_Word Stream_11,
  MR_Word * Errors_12)
{
  MR_bool succeeded;
  MR_Word ModuleName_14 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 0))));
  MR_Word GlobalData_16 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 2))));
  MR_Word ClassDefns_17 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 3))));
  MR_Word EnumDefns_18 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 4))));
  MR_Word TableStructDefns_20 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 6))));
  MR_Word ProcDefns_21 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 7))));
  MR_Word InitPreds_22 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 8))));
  MR_Word FinalPreds_23 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 9))));
  MR_Word AllForeignCode_24 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 10))));
  MR_Word ExportEnums_25 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 11))));
  MR_Word RttiDefns_29;
  MR_Word CellDefns_30;
  MR_Word ClosureWrapperFuncDefns_31;
  MR_Word PublicGlobarVarDefns_32;
  MR_Word PublicFuncDefns_33;
  MR_Word SortedPublicGlobarVarDefns_34;
  MR_Word SortedPublicFuncDefns_35;
  MR_Word ForeignCode_36;
  MR_Word MLDS_ModuleName_37;
  MR_Word StdOpts_38;
  MR_Word Var_41;
  MR_Word Var_45;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word _ScalarCellGroupMap_26;
  MR_Word _VectorCellGroupMap_27;
  MR_Word _AllocSites_28;
  MR_Word ForeignCode0_90;
  MR_Box conv0_ForeignCode0_90;
  MR_Word Var_68;
  MR_String Var_69;
  MR_String Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_83;

  ml_backend__ml_global_data__ml_global_data_get_all_global_defns_7_p_0(GlobalData_16, &_ScalarCellGroupMap_26, &_VectorCellGroupMap_27, &_AllocSites_28, &RttiDefns_29, &CellDefns_30, &ClosureWrapperFuncDefns_31);
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[3]));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_1));
    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_41, 3) = ((MR_Box) (ClassDefns_17));
    MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_mih_hdr_file\'/7", (MR_String) "ClassDefns != []");
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[4]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0_2));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (EnumDefns_18));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ml_backend.mlds_to_c_file.mlds_output_mih_hdr_file\'/7", (MR_String) "EnumDefns != []");
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), CellDefns_30, TableStructDefns_20);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), RttiDefns_29, Var_51);
  mercury__list__negated_filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[3]), Var_50, &PublicGlobarVarDefns_32);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), ClosureWrapperFuncDefns_31, ProcDefns_21);
  mercury__list__negated_filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[4]), Var_53, &PublicFuncDefns_33);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), PublicGlobarVarDefns_32, &SortedPublicGlobarVarDefns_34);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), PublicFuncDefns_33, &SortedPublicFuncDefns_35);
  ml_backend__mlds_to_c_file__mlds_output_mih_hdr_start_6_p_0(Opts_8, Stream_11, Indent_9, ModuleName_14);
  mercury__io__nl_3_p_0(Stream_11);
  mercury__io__nl_3_p_0(Stream_11);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_foreign_code_0), AllForeignCode_24, ((MR_Box) ((MR_Integer) 0)), &conv0_ForeignCode0_90);
  if (succeeded)
  {
    ForeignCode0_90 = ((MR_Word) (conv0_ForeignCode0_90));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ForeignCode_36 = ForeignCode0_90;
  else
    ForeignCode_36 = (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_3[0]);
  MLDS_ModuleName_37 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_14);
  ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0(Opts_8, Stream_11, Indent_9, MLDS_ModuleName_37, ForeignCode_36, Errors_12);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_export__mlds_output_export_enums_6_p_0(Opts_8, Stream_11, Indent_9, ExportEnums_25);
  mercury__io__nl_3_p_0(Stream_11);
  Var_68 = ((MR_Word) ((MR_hl_field(0, Opts_8, 0))));
  Var_69 = ((MR_String) ((MR_hl_field(0, Opts_8, 1))));
  Var_70 = ((MR_String) ((MR_hl_field(0, Opts_8, 2))));
  Var_71 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 16)) & (MR_Integer) 1);
  Var_72 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 15)) & (MR_Integer) 1);
  Var_73 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 14)) & (MR_Integer) 1);
  Var_74 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 13)) & (MR_Integer) 1);
  Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 12)) & (MR_Integer) 1);
  Var_76 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 11)) & (MR_Integer) 1);
  Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 10)) & (MR_Integer) 1);
  Var_78 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 9)) & (MR_Integer) 1);
  Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 7)) & (MR_Integer) 3);
  Var_80 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 4)) & (MR_Integer) 7);
  Var_81 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) >> 3)) & (MR_Integer) 1);
  Var_83 = ((MR_Unsigned) ((MR_hl_field(0, Opts_8, 3))) & (MR_Integer) 3);
  {
    StdOpts_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StdOpts_38, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, StdOpts_38, 1) = ((MR_Box) (Var_69));
    MR_hl_field(0, StdOpts_38, 2) = ((MR_Box) (Var_70));
    MR_hl_field(0, StdOpts_38, 3) = (MR_Box) (((((MR_Unsigned) (Var_71) << 16)) | (((((MR_Unsigned) (Var_72) << 15)) | (((((MR_Unsigned) (Var_73) << 14)) | (((((MR_Unsigned) (Var_74) << 13)) | (((((MR_Unsigned) (Var_75) << 12)) | (((((MR_Unsigned) (Var_76) << 11)) | (((((MR_Unsigned) (Var_77) << 10)) | (((((MR_Unsigned) (Var_78) << 9)) | (((((MR_Unsigned) (Var_79) << 7)) | (((((MR_Unsigned) (Var_80) << 4)) | (((((MR_Unsigned) (Var_81) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) (Var_83)))))))))))))))))))))))));
  }
  ml_backend__mlds_to_c_global__mlds_output_global_var_decls_7_p_0(StdOpts_38, Stream_11, Indent_9, MLDS_ModuleName_37, SortedPublicGlobarVarDefns_34);
  ml_backend__mlds_to_c_func__mlds_output_function_decls_7_p_0(StdOpts_38, Stream_11, Indent_9, MLDS_ModuleName_37, SortedPublicFuncDefns_35);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_6_p_0(Stream_11, MLDS_ModuleName_37, InitPreds_22, FinalPreds_23);
  mercury__io__nl_3_p_0(Stream_11);
  ml_backend__mlds_to_c_file__mlds_output_hdr_end_6_p_0(Opts_8, Stream_11, Indent_9, ModuleName_14);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Res_14;

  ml_backend__mlds_to_c_file__mlds_output_c_hdr_decl_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Res_14);
  *wrapper_arg_2 = ((MR_Box) (conv2_Res_14));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_c_file__IntroducedFrom__pred__mlds_output_c_hdr_decls__869__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0(
  MR_Word Opts_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word ModuleName_12,
  MR_Word ForeignCode_13,
  MR_Word * Errors_14)
{
  MR_bool succeeded;
  MR_Word DeclCodes_16 = ((MR_Word) ((MR_hl_field(0, ForeignCode_13, 0))));
  MR_Word SymName_21;
  MR_String DeclGuard_22;
  MR_Word AncestorModuleNames_23;
  MR_Word AncestorFileNames_24;
  MR_Word WriteAncestorInclude_25;
  MR_Word DeclResults_27;
  MR_Word Var_49;
  MR_Word StdlibModuleName_20;
  MR_Box conv1_STATE_VARIABLE_IO_3_48;
  MR_Box conv3_STATE_VARIABLE_IO_4_50;

  succeeded = ml_backend__mlds__is_std_lib_module_2_p_0(ModuleName_12, &StdlibModuleName_20);
  if (succeeded)
    SymName_21 = StdlibModuleName_20;
  else
    SymName_21 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_12);
  DeclGuard_22 = backend_libs__foreign__decl_guard_1_f_0(SymName_21);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "#ifndef ");
  mercury__io__write_string_4_p_0(Stream_10, DeclGuard_22);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n#define ");
  mercury__io__write_string_4_p_0(Stream_10, DeclGuard_22);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  AncestorModuleNames_23 = mdbcomp__sym_name__get_ancestors_1_f_0(SymName_21);
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[1]), AncestorModuleNames_23, &AncestorFileNames_24);
  {
    WriteAncestorInclude_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, WriteAncestorInclude_25, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_7[0]));
    MR_hl_field(0, WriteAncestorInclude_25, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_2));
    MR_hl_field(0, WriteAncestorInclude_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, WriteAncestorInclude_25, 3) = ((MR_Box) (Stream_10));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), WriteAncestorInclude_25, AncestorFileNames_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_3_48);
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_8[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__mlds_output_c_hdr_decls_8_p_0_3));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (Opts_9));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (Indent_11));
    MR_hl_field(0, Var_49, 6) = ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_c_file_scalar_common_4[1])));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, DeclCodes_16, &DeclResults_27, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_4_50);
  mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_to_c_file_scalar_common_2[2]), DeclResults_27, Errors_14);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n#endif\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_init_fn_decls_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleName_8,
  MR_Word InitFuncNames_9,
  MR_Word FinalFuncNames_10)
{
  MR_bool succeeded;
  MR_String ModuleInitDecl_12;
  MR_String TypeTablesDecl_13;
  MR_String DebuggerDecl_14;
  MR_String GradeCheckDecl_21;
  MR_String ModuleNameString_71;
  MR_String Var_82;
  MR_String ModuleNameString0_84;
  MR_Word Var_85;
  MR_String ModuleNameString_88;
  MR_String Var_99;
  MR_String ModuleNameString0_101;
  MR_Word Var_102;

  Var_85 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
  ModuleNameString0_84 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_85);
  succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_84, (MR_String) "mercury__");
  if (succeeded)
    ModuleNameString_71 = ModuleNameString0_84;
  else
    ModuleNameString_71 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_84);
  Var_82 = mercury__string__f_43_43_2_f_0(ModuleNameString_71, (MR_String) "__init(void)");
  ModuleInitDecl_12 = mercury__string__f_43_43_2_f_0((MR_String) "void ", Var_82);
  Var_102 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
  ModuleNameString0_101 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_102);
  succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_101, (MR_String) "mercury__");
  if (succeeded)
    ModuleNameString_88 = ModuleNameString0_101;
  else
    ModuleNameString_88 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_101);
  Var_99 = mercury__string__f_43_43_2_f_0(ModuleNameString_88, (MR_String) "__init_type_tables(void)");
  TypeTablesDecl_13 = mercury__string__f_43_43_2_f_0((MR_String) "void ", Var_99);
  DebuggerDecl_14 = ml_backend__mlds_to_c_file__init_fn_decl_to_string_2_f_0(ModuleName_8, (MR_String) "_debugger");
  mercury__io__write_string_4_p_0(Stream_7, ModuleInitDecl_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
  mercury__io__write_string_4_p_0(Stream_7, TypeTablesDecl_13);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
  mercury__io__write_string_4_p_0(Stream_7, DebuggerDecl_14);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
  if (!((InitFuncNames_9 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ReqInitDecl_17;

    ReqInitDecl_17 = ml_backend__mlds_to_c_file__required_fn_decl_to_string_2_f_0(ModuleName_8, (MR_String) "init");
    mercury__io__write_string_4_p_0(Stream_7, ReqInitDecl_17);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
  }
  if (!((FinalFuncNames_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ReqFinalDecl_20;

    ReqFinalDecl_20 = ml_backend__mlds_to_c_file__required_fn_decl_to_string_2_f_0(ModuleName_8, (MR_String) "final");
    mercury__io__write_string_4_p_0(Stream_7, ReqFinalDecl_20);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
  }
  GradeCheckDecl_21 = ml_backend__mlds_to_c_file__grade_check_fn_decl_to_string_1_f_0(ModuleName_8);
  mercury__io__write_string_4_p_0(Stream_7, GradeCheckDecl_21);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ";\n");
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_file__grade_check_fn_decl_to_string_1_f_0(
  MR_Word ModuleName_3)
{
  MR_bool succeeded;
  MR_String Decl_4;
  MR_String ModuleNameString_5;
  MR_String Var_11;
  MR_String ModuleNameString0_13;
  MR_Word Var_14;

  Var_14 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_3);
  ModuleNameString0_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_14);
  succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_13, (MR_String) "mercury__");
  if (succeeded)
    ModuleNameString_5 = ModuleNameString0_13;
  else
    ModuleNameString_5 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_13);
  Var_11 = mercury__string__f_43_43_2_f_0(ModuleNameString_5, (MR_String) "__grade_check(void)");
  Decl_4 = mercury__string__f_43_43_2_f_0((MR_String) "const char *", Var_11);
  return Decl_4;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_file__required_fn_decl_to_string_2_f_0(
  MR_Word ModuleName_4,
  MR_String Suffix_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_String ModuleNameString_7;
  MR_String Var_15;
  MR_String Var_17;
  MR_String Var_18;
  MR_String ModuleNameString0_20;
  MR_Word Var_21;

  Var_21 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
  ModuleNameString0_20 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_21);
  succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_20, (MR_String) "mercury__");
  if (succeeded)
    ModuleNameString_7 = ModuleNameString0_20;
  else
    ModuleNameString_7 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_20);
  Var_15 = mercury__string__f_43_43_2_f_0(Suffix_5, (MR_String) "(void)");
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "__required_", Var_15);
  Var_18 = mercury__string__f_43_43_2_f_0(ModuleNameString_7, Var_17);
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "void ", Var_18);
  return Str_6;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_file__init_fn_decl_to_string_2_f_0(
  MR_Word ModuleName_4,
  MR_String Suffix_5)
{
  MR_bool succeeded;
  MR_String Decl_6;
  MR_String ModuleNameString_7;
  MR_String Var_15;
  MR_String Var_17;
  MR_String Var_18;
  MR_String ModuleNameString0_20;
  MR_Word Var_21;

  Var_21 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
  ModuleNameString0_20 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Var_21);
  succeeded = mercury__string__prefix_2_p_0(ModuleNameString0_20, (MR_String) "mercury__");
  if (succeeded)
    ModuleNameString_7 = ModuleNameString0_20;
  else
    ModuleNameString_7 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", ModuleNameString0_20);
  Var_15 = mercury__string__f_43_43_2_f_0(Suffix_5, (MR_String) "(void)");
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "__init", Var_15);
  Var_18 = mercury__string__f_43_43_2_f_0(ModuleNameString_7, Var_17);
  Decl_6 = mercury__string__f_43_43_2_f_0((MR_String) "void ", Var_18);
  return Decl_6;
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_hdr_end_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ModuleName_10)
{
  MR_Word Target_12 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_7, 3))) >> 7)) & (MR_Integer) 3);
  MR_String IndentStr_13;
  MR_String ModuleNameStr_14;

  IndentStr_13 = libs__indent__indent2_string_1_f_0(Indent_9);
  switch (Target_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_13);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#ifdef __cplusplus\n");
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_13);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_13);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#endif\n");
        mercury__io__nl_3_p_0(Stream_8);
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
  ModuleNameStr_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#endif // MR_HEADER_GUARD_");
  mercury__io__write_string_4_p_0(Stream_8, ModuleNameStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "// :- end_interface ");
  mercury__io__write_string_4_p_0(Stream_8, ModuleNameStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_mih_hdr_start_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ModuleName_10)
{
  MR_String ModuleNameStr_12;
  MR_String MangledModuleNameStr_13;
  MR_String IndentStr_14;
  MR_Word Target_15;

  ModuleNameStr_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  MangledModuleNameStr_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_10);
  ml_backend__mlds_to_c_file__mlds_output_auto_gen_comment_5_p_0(Opts_7, Stream_8, ModuleName_10);
  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "// :- module ");
  mercury__io__write_string_4_p_0(Stream_8, ModuleNameStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "// :- interface.\n\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#ifndef MR_HEADER_GUARD_");
  mercury__io__write_string_4_p_0(Stream_8, MangledModuleNameStr_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#define MR_HEADER_GUARD_");
  mercury__io__write_string_4_p_0(Stream_8, MangledModuleNameStr_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n\n");
  Target_15 = ((((MR_Unsigned) ((MR_hl_field(0, Opts_7, 3))) >> 7)) & (MR_Integer) 3);
  switch (Target_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#ifdef __cplusplus\n");
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "extern \"C\" {\n");
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#endif\n");
        mercury__io__nl_3_p_0(Stream_8);
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "#include \"mercury.h\"\n");
}

static void MR_CALL 
ml_backend__mlds_to_c_file__mlds_output_auto_gen_comment_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word ModuleName_8)
{
  MR_String Version_10;
  MR_String Fullarch_11;
  MR_Word Globals_12;
  MR_String SourceFileName_13;

  mercury__library__version_2_p_0(&Version_10, &Fullarch_11);
  Globals_12 = ((MR_Word) ((MR_hl_field(0, Opts_6, 0))));
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_8, &SourceFileName_13);
  backend_libs__c_util__output_c_file_intro_and_grade_7_p_0(Globals_12, Stream_7, SourceFileName_13, Version_10, Fullarch_11);
  mercury__io__nl_3_p_0(Stream_7);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_func_defns_7_p_0(
  MR_Word Opts_1,
  MR_Word ModuleName_2,
  MR_Word HeadVar__3_3,
  MR_Word Stream_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FuncDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word FuncDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_c_func__mlds_output_function_defn_7_p_0(Opts_1, Stream_4, (MR_Unsigned) 0U, ModuleName_2, FuncDefn_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = FuncDefns_17;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
  MR_bool succeeded;
  MR_Word TypeCtorInfo_24_24;
  MR_Word PlainFuncName_5;
  MR_Word FuncLabel_6;
  MR_Word ProcLabel_8;
  MR_Word PredLabel_10;
  MR_String Name_14;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, FuncDefn_4, 0))));

  succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
  if (succeeded)
  {
    PlainFuncName_5 = (MR_Word) ((MR_Word) (Var_16));
    FuncLabel_6 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_5, 0))));
    ProcLabel_8 = ((MR_Word) ((MR_hl_field(0, FuncLabel_6, 0))));
    PredLabel_10 = ((MR_Word) ((MR_hl_field(0, ProcLabel_8, 0))));
    succeeded = ((MR_tag((MR_Word) PredLabel_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_14 = ((MR_String) ((MR_hl_field(0, PredLabel_10, 2))));
      TypeCtorInfo_24_24 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (Name_14)), DumpPredNames_3);
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  ml_backend__mlds_to_c_file__output_c_dump_func_defns_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_file__func_defn_has_name_in_list_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word MLDS_10,
  MR_Word Globals_11,
  MR_Word TargetOrDump_12,
  MR_String Suffix_13,
  MR_Word DumpPredNames_14)
{
  MR_bool succeeded;
  MR_Word ModuleName_16;
  MR_String MercSourceFileName_17;
  MR_String DumpBaseName_18;
  MR_String DumpFileName_19;
  MR_Word Opts_20;
  MR_Word MLDS_ModuleName_21;
  MR_Word ProcDefns_22;
  MR_Word SelectedProcDefns_23;
  MR_Word SortedSelectedProcDefns_24;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word _Succeeded_25;

  ModuleName_16 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_10);
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_16, &MercSourceFileName_17);
  parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 9, ModuleName_16, &DumpBaseName_18);
  DumpFileName_19 = mercury__string__f_43_43_2_f_0(DumpBaseName_18, Suffix_13);
  Opts_20 = ml_backend__mlds_to_c_util__init_mlds_to_c_opts_4_f_0(Globals_11, MercSourceFileName_17, DumpFileName_19, TargetOrDump_12);
  MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_16);
  ProcDefns_22 = ((MR_Word) ((MR_hl_field(0, MLDS_10, 7))));
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_6[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (DumpPredNames_14));
  }
  mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_30, ProcDefns_22, &SelectedProcDefns_23);
  mercury__list__sort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), SelectedProcDefns_23, &SortedSelectedProcDefns_24);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Opts_20));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (MLDS_ModuleName_21));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (SortedSelectedProcDefns_24));
  }
  libs__file_util__output_to_file_stream_7_p_0(ProgressStream_9, Globals_11, DumpFileName_19, Var_31, &_Succeeded_25);
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Errors_12;

  ml_backend__mlds_to_c_file__mlds_output_mih_hdr_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Errors_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_Errors_12));
}

static void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Errors_12;

  ml_backend__mlds_to_c_file__mlds_output_src_file_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_Errors_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_Errors_12));
}

void MR_CALL 
ml_backend__mlds_to_c_file__output_c_mlds_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word MLDS_10,
  MR_Word Globals_11,
  MR_Word TargetOrDump_12,
  MR_String Suffix_13,
  MR_Word * Succeeded_14)
{
  MR_Word SrcOpts_16;
  MR_Word Succeeded0_17;
  MR_Word ModuleName_21;
  MR_String MercSourceFileName_22;
  MR_String CSourceFileName_23;
  MR_String SuffixCSourceFileName_25;
  MR_Word Var_31;
  MR_String _SourceFileNameProposed0_24;

  ModuleName_21 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_10);
  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_21, &MercSourceFileName_22);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_11, (MR_String) "predicate \140ml_backend.mlds_to_c_file.output_c_src_file_opts\'/9", (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_c_file_scalar_common_1[3])), ModuleName_21, &CSourceFileName_23, &_SourceFileNameProposed0_24);
  SrcOpts_16 = ml_backend__mlds_to_c_util__init_mlds_to_c_opts_4_f_0(Globals_11, MercSourceFileName_22, CSourceFileName_23, TargetOrDump_12);
  SuffixCSourceFileName_25 = mercury__string__f_43_43_2_f_0(CSourceFileName_23, Suffix_13);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_mlds_8_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (SrcOpts_16));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (MLDS_10));
  }
  libs__file_util__output_to_file_stream_7_p_0(ProgressStream_9, Globals_11, SuffixCSourceFileName_25, Var_31, &Succeeded0_17);
  switch (Succeeded0_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Succeeded_14 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_32;
        MR_Word Globals_33;
        MR_String MihFileName_34;
        MR_String MihSuffixFileName_36;
        MR_String TmpMihSuffixFileName_37;
        MR_Word LineNumbersForCHdrs_38;
        MR_Word HdrOpts_39;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_Succeeded_1_47;
        MR_Word Var_65;
        MR_String Var_66;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_String _MihFileNameProposed_35;

        ModuleName_32 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_10);
        Globals_33 = ((MR_Word) ((MR_hl_field(0, SrcOpts_16, 0))));
        parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_33, (MR_String) "predicate \140ml_backend.mlds_to_c_file.output_c_mih_header_file_opts\'/7", (MR_Word) (MR_mkword(3, &ml_backend__mlds_to_c_file_scalar_common_1[4])), ModuleName_32, &MihFileName_34, &_MihFileNameProposed_35);
        MihSuffixFileName_36 = mercury__string__f_43_43_2_f_0(MihFileName_34, Suffix_13);
        TmpMihSuffixFileName_37 = mercury__string__f_43_43_2_f_0(MihSuffixFileName_36, (MR_String) ".tmp");
        libs__globals__lookup_bool_option_3_p_0(Globals_33, (MR_Integer) 460, &LineNumbersForCHdrs_38);
        Var_65 = ((MR_Word) ((MR_hl_field(0, SrcOpts_16, 0))));
        Var_66 = ((MR_String) ((MR_hl_field(0, SrcOpts_16, 1))));
        Var_70 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 14)) & (MR_Integer) 1);
        Var_71 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 13)) & (MR_Integer) 1);
        Var_72 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 12)) & (MR_Integer) 1);
        Var_73 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 11)) & (MR_Integer) 1);
        Var_74 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 10)) & (MR_Integer) 1);
        Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 9)) & (MR_Integer) 1);
        Var_76 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 7)) & (MR_Integer) 3);
        Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 4)) & (MR_Integer) 7);
        Var_78 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 3)) & (MR_Integer) 1);
        Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) >> 2)) & (MR_Integer) 1);
        Var_80 = ((MR_Unsigned) ((MR_hl_field(0, SrcOpts_16, 3))) & (MR_Integer) 3);
        {
          HdrOpts_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HdrOpts_39, 0) = ((MR_Box) (Var_65));
          MR_hl_field(0, HdrOpts_39, 1) = ((MR_Box) (Var_66));
          MR_hl_field(0, HdrOpts_39, 2) = ((MR_Box) (MihFileName_34));
          MR_hl_field(0, HdrOpts_39, 3) = (MR_Box) (((((MR_Unsigned) (LineNumbersForCHdrs_38) << 16)) | (((((MR_Unsigned) (LineNumbersForCHdrs_38) << 15)) | (((((MR_Unsigned) (Var_70) << 14)) | (((((MR_Unsigned) (Var_71) << 13)) | (((((MR_Unsigned) (Var_72) << 12)) | (((((MR_Unsigned) (Var_73) << 11)) | (((((MR_Unsigned) (Var_74) << 10)) | (((((MR_Unsigned) (Var_75) << 9)) | (((((MR_Unsigned) (Var_76) << 7)) | (((((MR_Unsigned) (Var_77) << 4)) | (((((MR_Unsigned) (Var_78) << 3)) | (((((MR_Unsigned) (Var_79) << 2)) | (MR_Unsigned) (Var_80)))))))))))))))))))))))));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&ml_backend__mlds_to_c_file_scalar_common_5[0]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (ml_backend__mlds_to_c_file__output_c_mlds_8_p_0_2));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (HdrOpts_39));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_46, 5) = ((MR_Box) (MLDS_10));
        }
        libs__file_util__output_to_file_stream_7_p_0(ProgressStream_9, Globals_33, TmpMihSuffixFileName_37, Var_46, &STATE_VARIABLE_Succeeded_1_47);
        switch (STATE_VARIABLE_Succeeded_1_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Succeeded_14 = STATE_VARIABLE_Succeeded_1_47;
            break;
          case (MR_Integer) 1:
            parse_tree__module_cmds__copy_dot_tmp_to_base_file_report_any_error_7_p_0(ProgressStream_9, Globals_33, (MR_String) ".mih", MihSuffixFileName_36, Succeeded_14);
            break;
        }
      }
      break;
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
