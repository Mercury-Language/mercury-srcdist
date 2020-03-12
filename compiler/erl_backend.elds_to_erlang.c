/*
** Automatically generated from `elds_to_erlang.m'
** by the Mercury compiler,
** version rotd-2020-03-12
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


// :- module erl_backend.elds_to_erlang.
// :- implementation.

/*
INIT mercury__erl_backend__elds_to_erlang__init
ENDINIT
*/

#include "erl_backend.elds_to_erlang.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "erl_backend.elds.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s {
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3;
  MR_bool erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded;
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6;
  jmp_buf erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0;
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7;
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8;
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9;
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__Var_12;
  MR_Box erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7;
};


static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0;

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1;

static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2];

static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2];

static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2];

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_5_p_0(
  MR_String SourceFileName_6,
  MR_Word ForeignDecl_7,
  MR_Word * Res_8);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ELDS_8,
  MR_String SourceFileName_9,
  MR_Word * Errors_10);

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
  MR_Word StringOrAtom_5,
  MR_Char Char_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
  MR_Char C_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RttiDefn_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ForeignExportDefn_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0(
  MR_String SourceFileName_6,
  MR_Word ForeignBody_7,
  MR_Word * Res_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0(
  MR_String SourceFileName_6,
  MR_Word ForeignDecl_7,
  MR_Word * Res_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
  MR_Word Globals_5,
  MR_Word Import_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
  MR_String EnvVarName_4);

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
  MR_Word ProcDefn_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ForeignExportDefn_8,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
  MR_Word ForeignExportDefn_6,
  MR_Word NeedComma_7,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Defn_8,
  MR_Word STATE_VARIABLE_NeedComma_0_18,
  MR_Word * STATE_VARIABLE_NeedComma_19);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ELDS_8,
  MR_String SourceFileName_9,
  MR_Word * Errors_10);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
  MR_Word ModuleName_3);

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Name_7,
  MR_Word PredProcIds_8);

static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
  MR_Word ProcDefns_3);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
  void * env_ptr_arg);

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
  MR_Word ModuleInfo_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
  MR_Word AddMainWrapper_6,
  MR_Word InitPreds_7,
  MR_Word FinalPreds_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
  MR_String SourceFileName_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarSet_7,
  MR_Word Clause_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Catch_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Expr_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Clause_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Expr_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Term_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Args_10);

static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
  MR_Integer N_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
  MR_Word Binop_4);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RttiId_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6);

static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
  MR_Word ThisModule_10,
  MR_Word PredModule_11,
  MR_String PredName_12,
  MR_Word PredOrFunc_13,
  MR_Integer PredArity_14,
  MR_Integer ProcId_15,
  MR_Word PredIsImported_16,
  MR_Word * MaybeExtModule_17,
  MR_String * ProcNameStr_18);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
  MR_String Name0_3);

static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void);

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
  MR_Word StringOrAtom_5,
  MR_String String_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
  MR_String String_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
  MR_String String_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
  MR_Word VarSet_5,
  MR_Word Var_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
  MR_Float Float_4);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
  MR_String String_5,
  MR_Word PrevDigit_6,
  MR_Integer Pos0_7,
  MR_Integer * Pos_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Exprs_10);

static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
  MR_Integer N_4);

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void);

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_1[7][2];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_2[7][9];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_3[6][7];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_4[9][4];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_5[2][6];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_6[8][3];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_8[2][1];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_9[2][5];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_10[3][8];


/* sealed */ struct erl_backend__elds_to_erlang__vector_common_type_7_0_s {
  const MR_String erl_backend__elds_to_erlang__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct erl_backend__elds_to_erlang__vector_common_type_7_0_s erl_backend__elds_to_erlang_vector_common_7[23];



static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "%\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "% Do not edit.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 13U)),
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_8[0]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ", 1).\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_2[7][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_3[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_4[9][4] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_atom_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_6[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_var_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_var_string_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_9[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_10[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[1])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_9[1])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_9[1])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_9[1])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_hrl_file_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_to_erlang_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_10[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct erl_backend__elds_to_erlang__vector_common_type_7_0_s erl_backend__elds_to_erlang_vector_common_7[23] = {
  /* row 0 */   {     (MR_String) "+" },
  /* row 1 */   {     (MR_String) "-" },
  /* row 2 */   {     (MR_String) "bnot " },
  /* row 3 */   {     (MR_String) "not " },
  /* row 4 */   {     (MR_String) "*" },
  /* row 5 */   {     (MR_String) "/" },
  /* row 6 */   {     (MR_String) "div" },
  /* row 7 */   {     (MR_String) "rem" },
  /* row 8 */   {     (MR_String) "band" },
  /* row 9 */   {     (MR_String) "+" },
  /* row 10 */   {     (MR_String) "-" },
  /* row 11 */   {     (MR_String) "bor" },
  /* row 12 */   {     (MR_String) "bxor" },
  /* row 13 */   {     (MR_String) "bsl" },
  /* row 14 */   {     (MR_String) "bsr" },
  /* row 15 */   {     (MR_String) "=<" },
  /* row 16 */   {     (MR_String) "<" },
  /* row 17 */   {     (MR_String) ">=" },
  /* row 18 */   {     (MR_String) ">" },
  /* row 19 */   {     (MR_String) "=:=" },
  /* row 20 */   {     (MR_String) "=/=" },
  /* row 21 */   {     (MR_String) "andalso" },
  /* row 22 */   {     (MR_String) "orelse" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (erl_backend__elds_to_erlang____Unify____indent_0_0_10001)),
  ((MR_Box) (erl_backend__elds_to_erlang____Compare____indent_0_0_10001)),
  (MR_String) "erl_backend.elds_to_erlang",
  (MR_String) "indent",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0 = {
  (MR_String) "in_string",
  INT32_C(0)
};

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1 = {
  (MR_String) "in_atom",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1
};

static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0
};

static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001)),
  ((MR_Box) (erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001)),
  (MR_String) "erl_backend.elds_to_erlang",
  (MR_String) "string_or_atom",
  {     erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0 },
  {     erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0
};

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_5_p_0(
  MR_String SourceFileName_6,
  MR_Word ForeignDecl_7,
  MR_Word * Res_8)
{
  {
    MR_Word IsLocal_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignDecl_7, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (IsLocal_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0(SourceFileName_6, ForeignDecl_7, Res_8);
        break;
      case (MR_Integer) 0:
        *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_6_p_0_2(
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
erl_backend__elds_to_erlang__output_hrl_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Res_8;

    erl_backend__elds_to_erlang__output_exported_foreign_decl_code_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Res_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Res_8));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ELDS_8,
  MR_String SourceFileName_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;
    MR_String MangledModuleName_12;
    MR_String UppercaseModuleName_13;
    MR_String GuardMacroName_14;
    MR_Word ForeignDecls_15;
    MR_Word ForeignDeclResults_16;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_String Version_60;
    MR_String Fullarch_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Box conv1_STATE_VARIABLE_IO_34_34;

    mercury__library__version_2_p_0(&Version_60, &Fullarch_61);
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Fullarch_61));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) ((MR_String) "% configured for "));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Version_60));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) ((MR_String) "% version "));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (SourceFileName_9));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "%\n"));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    mercury__io__write_strings_3_p_0(Var_62);
    MangledModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_7);
    mercury__string__to_upper_2_p_0(MangledModuleName_12, &UppercaseModuleName_13);
    mercury__string__append_3_p_2(UppercaseModuleName_13, (MR_String) "_HRL", &GuardMacroName_14);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (GuardMacroName_14));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[6])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) ((MR_String) "-define("));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) ").\n"));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (GuardMacroName_14));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) ((MR_String) "-ifndef("));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    mercury__io__write_strings_3_p_0(Var_21);
    ForeignDecls_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 2))));
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_hrl_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (SourceFileName_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, ForeignDecls_15, &ForeignDeclResults_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[7]), ForeignDeclResults_16, Errors_10);
    mercury__io__write_string_3_p_0((MR_String) "-endif.\n");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
  MR_Word StringOrAtom_5,
  MR_Char Char_6)
{
  {
    MR_bool succeeded;
    MR_Integer Int_8;

    mercury__char__to_int_2_p_0(Char_6, &Int_8);
    succeeded = ((MR_Integer) 32 <= Int_8);
    if (succeeded)
    {
      succeeded = (Char_6 != (MR_Char) 92);
      if (succeeded)
        switch (StringOrAtom_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            succeeded = (Char_6 != (MR_Char) 39);
            break;
          case (MR_Integer) 0:
            succeeded = (Char_6 != (MR_Char) 34);
            break;
        }
    }
    if (succeeded)
      mercury__io__write_char_3_p_0(Char_6);
    else
    {
      MR_String Esc_9;

      switch (Int_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            Esc_9 = (MR_String) "\\^a";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            Esc_9 = (MR_String) "\\^b";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            Esc_9 = (MR_String) "\\^c";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            Esc_9 = (MR_String) "\\^d";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            Esc_9 = (MR_String) "\\^e";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            Esc_9 = (MR_String) "\\^f";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            Esc_9 = (MR_String) "\\^g";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            Esc_9 = (MR_String) "\\b";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            Esc_9 = (MR_String) "\\t";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            Esc_9 = (MR_String) "\\n";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 11:
          {
            Esc_9 = (MR_String) "\\v";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 12:
          {
            Esc_9 = (MR_String) "\\f";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            Esc_9 = (MR_String) "\\r";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            Esc_9 = (MR_String) "\\^n";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            Esc_9 = (MR_String) "\\^o";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            Esc_9 = (MR_String) "\\^p";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 17:
          {
            Esc_9 = (MR_String) "\\^q";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 18:
          {
            Esc_9 = (MR_String) "\\^r";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 19:
          {
            Esc_9 = (MR_String) "\\^s";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 20:
          {
            Esc_9 = (MR_String) "\\^t";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 21:
          {
            Esc_9 = (MR_String) "\\^u";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 22:
          {
            Esc_9 = (MR_String) "\\^v";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 23:
          {
            Esc_9 = (MR_String) "\\^w";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 24:
          {
            Esc_9 = (MR_String) "\\^x";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 25:
          {
            Esc_9 = (MR_String) "\\^y";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 26:
          {
            Esc_9 = (MR_String) "\\^z";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 27:
          {
            Esc_9 = (MR_String) "\\e";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 32:
          {
            Esc_9 = (MR_String) "\\s";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 34:
          {
            Esc_9 = (MR_String) "\\\"";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 39:
          {
            Esc_9 = (MR_String) "\\\'";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 92:
          {
            Esc_9 = (MR_String) "\\\\";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 127:
          {
            Esc_9 = (MR_String) "\\d";
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
        mercury__io__write_string_3_p_0(Esc_9);
      else
      {
        MR_String OctalString_10;

        mercury__string__int_to_base_string_3_p_0(Int_8, (MR_Integer) 8, &OctalString_10);
        mercury__io__write_char_3_p_0((MR_Char) 92);
        mercury__io__write_string_3_p_0(OctalString_10);
      }
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
  MR_Char C_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__char__is_alnum_or_underscore_1_p_0(C_4);
    if (succeeded)
      mercury__io__write_char_3_p_0(C_4);
    else
    {
      MR_Integer Var_9;

      Var_9 = mercury__char__to_int_1_f_0(C_4);
      mercury__io__write_int_3_p_0(Var_9);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_Word Pattern_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Expr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Integer Var_19;
    MR_Integer Var_22;
    MR_Word Exprs_44;

    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0(Indent_9);
    erl_backend__elds_to_erlang__output_term_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Pattern_10);
    mercury__io__write_string_3_p_0((MR_String) "->");
    Var_19 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0(Var_19);
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    succeeded = ((MR_tag((MR_Word) Expr_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      Exprs_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_11, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_7, VarSet_8, Var_22, Exprs_44);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Var_22, Expr_11);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RttiDefn_6)
{
  {
    MR_bool succeeded;
    MR_Word RttiId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiDefn_6, (MR_Integer) 0))));
    MR_Word VarSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiDefn_6, (MR_Integer) 2))));
    MR_Word Clause_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiDefn_6, (MR_Integer) 3))));
    MR_Word Pattern_34;
    MR_Word Expr_35;
    MR_Word Var_39;
    MR_Integer Var_46;
    MR_Word Exprs_66;

    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__output_rtti_id_4_p_0(ModuleInfo_5, RttiId_8);
    Pattern_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_11, (MR_Integer) 0))));
    Expr_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_11, (MR_Integer) 1))));
    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Pattern_34, (MR_String) ", ", Var_39);
    mercury__io__write_string_3_p_0((MR_String) ") -> ");
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1));
    Var_46 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
    succeeded = ((MR_tag((MR_Word) Expr_35)) == (MR_Integer) 1);
    if (succeeded)
    {
      Exprs_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_35, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_5, VarSet_10, Var_46, Exprs_66);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_5, VarSet_10, Var_46, Expr_35);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ForeignExportDefn_6)
{
  {
    MR_bool succeeded;
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_6, (MR_Integer) 0))));
    MR_Word VarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_6, (MR_Integer) 1))));
    MR_Word Clause_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_6, (MR_Integer) 2))));
    MR_Word Pattern_33;
    MR_Word Expr_34;
    MR_Word Var_38;
    MR_Integer Var_45;
    MR_Word Exprs_65;

    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__output_atom_3_p_0(Name_8);
    Pattern_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_10, (MR_Integer) 0))));
    Expr_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_10, (MR_Integer) 1))));
    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Pattern_33, (MR_String) ", ", Var_38);
    mercury__io__write_string_3_p_0((MR_String) ") -> ");
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1));
    Var_45 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
    succeeded = ((MR_tag((MR_Word) Expr_34)) == (MR_Integer) 1);
    if (succeeded)
    {
      Exprs_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_34, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_5, VarSet_9, Var_45, Exprs_65);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_5, VarSet_9, Var_45, Expr_34);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6)
{
  {
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(ModuleInfo_5, PredProcId_6);
    mercury__io__write_string_3_p_0((MR_String) "(),");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0(
  MR_String SourceFileName_6,
  MR_Word ForeignBody_7,
  MR_Word * Res_8)
{
  {
    MR_Word LiteralOrInclude_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBody_7, (MR_Integer) 1))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignBody_7, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) LiteralOrInclude_11)) == (MR_Integer) 1))
    {
      MR_String IncludeFileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_11, (MR_Integer) 0))));
      MR_String FileName_36;
      MR_Box conv0_STATE_VARIABLE_IO_12_42;

      parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_6, IncludeFileName_24, &FileName_36);
      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[7]), FileName_36, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_42);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__io__write_int_3_p_0((MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
      libs__file_util__write_include_file_contents_cur_stream_4_p_0(FileName_36, Res_8);
    }
    else
    {
      MR_String Code_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_11, (MR_Integer) 0))));
      MR_String FileName_61 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 0))));
      MR_Integer LineNr_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_12, (MR_Integer) 1))));
      MR_Box conv1_STATE_VARIABLE_IO_12_67;

      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[8]), FileName_61, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12_67);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__io__write_int_3_p_0(LineNr_62);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
      mercury__io__write_string_3_p_0(Code_23);
      *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0(
  MR_String SourceFileName_6,
  MR_Word ForeignDecl_7,
  MR_Word * Res_8)
{
  {
    MR_Word LiteralOrInclude_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDecl_7, (MR_Integer) 1))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDecl_7, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) LiteralOrInclude_12)) == (MR_Integer) 1))
    {
      MR_String IncludeFileName_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), LiteralOrInclude_12, (MR_Integer) 0))));
      MR_String FileName_37;
      MR_Box conv0_STATE_VARIABLE_IO_12_43;

      parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_6, IncludeFileName_25, &FileName_37);
      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[5]), FileName_37, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_43);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__io__write_int_3_p_0((MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
      libs__file_util__write_include_file_contents_cur_stream_4_p_0(FileName_37, Res_8);
    }
    else
    {
      MR_String Code_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), LiteralOrInclude_12, (MR_Integer) 0))));
      MR_String FileName_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_13, (MR_Integer) 0))));
      MR_Integer LineNr_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_13, (MR_Integer) 1))));
      MR_Box conv1_STATE_VARIABLE_IO_12_68;

      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[6]), FileName_62, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12_68);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__io__write_int_3_p_0(LineNr_63);
      mercury__io__write_string_3_p_0((MR_String) ").\n");
      mercury__io__write_string_3_p_0(Code_24);
      *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
  MR_Word Globals_5,
  MR_Word Import_6)
{
  {
    MR_String HeaderFile_8;
    MR_Box conv0_STATE_VARIABLE_IO_16_16;

    parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_5, (MR_String) ".hrl", Import_6, &HeaderFile_8);
    mercury__io__write_string_3_p_0((MR_String) "-include(\"");
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[4]), HeaderFile_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_16_16);
    mercury__io__write_string_3_p_0((MR_String) "\").\n");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
  MR_String EnvVarName_4)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_11_11;

    mercury__io__write_string_3_p_0((MR_String) "% ENVVAR ");
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[3]), EnvVarName_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11_11);
    mercury__io__nl_2_p_0();
  }
}

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
  MR_Word ProcDefn_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcDefn_3, (MR_Integer) 3))));

    return HeadVar__2_2;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ForeignExportDefn_8,
  MR_Word STATE_VARIABLE_NeedComma_0_15,
  MR_Word * STATE_VARIABLE_NeedComma_16)
{
  {
    MR_Word RttiId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_8, (MR_Integer) 0))));
    MR_Word IsExported_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_8, (MR_Integer) 1))) & (MR_Integer) 1);

    switch (IsExported_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_NeedComma_16 = STATE_VARIABLE_NeedComma_0_15;
        break;
      case (MR_Integer) 1:
        {
          switch (STATE_VARIABLE_NeedComma_0_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__write_char_3_p_0((MR_Char) 44);
              break;
          }
          mercury__io__nl_2_p_0();
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(ModuleInfo_7, RttiId_11);
          mercury__io__write_char_3_p_0((MR_Char) 47);
          mercury__io__write_int_3_p_0((MR_Integer) 0);
          *STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
  MR_Word ForeignExportDefn_6,
  MR_Word NeedComma_7,
  MR_Word * HeadVar__3_3)
{
  {
    MR_String ExportedName_9;
    MR_Word Clause_11;
    MR_Integer Var_20;

    *HeadVar__3_3 = (MR_Integer) 1;
    ExportedName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_6, (MR_Integer) 0))));
    Clause_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignExportDefn_6, (MR_Integer) 2))));
    switch (NeedComma_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mercury__io__write_char_3_p_0((MR_Char) 44);
        break;
    }
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    erl_backend__elds_to_erlang__output_atom_3_p_0(ExportedName_9);
    mercury__io__write_char_3_p_0((MR_Char) 47);
    Var_20 = erl_backend__elds__elds_clause_arity_1_f_0(Clause_11);
    mercury__io__write_int_3_p_0(Var_20);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Defn_8,
  MR_Word STATE_VARIABLE_NeedComma_0_18,
  MR_Word * STATE_VARIABLE_NeedComma_19)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_8, (MR_Integer) 0))));
    MR_Word Body_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_8, (MR_Integer) 2))));
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 0))));
    MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 1))));
    MR_Word PredInfo_17;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_15, &PredInfo_17);
    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_17, ProcId_16);
    if (succeeded)
    {
      MR_Integer Var_28;

      switch (STATE_VARIABLE_NeedComma_0_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mercury__io__write_char_3_p_0((MR_Char) 44);
          break;
      }
      mercury__io__nl_2_p_0();
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
      erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(ModuleInfo_7, PredProcId_11);
      mercury__io__write_char_3_p_0((MR_Char) 47);
      Var_28 = erl_backend__elds__elds_body_arity_1_f_0(Body_13);
      mercury__io__write_int_3_p_0(Var_28);
      *STATE_VARIABLE_NeedComma_19 = (MR_Integer) 1;
    }
    else
      *STATE_VARIABLE_NeedComma_19 = STATE_VARIABLE_NeedComma_0_18;
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv19_HeadVar__2_2;

    succeeded = libs__compiler_util__maybe_is_error_2_p_0(((MR_Word) (wrapper_arg_1)), &conv19_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv19_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
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
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_Res_8;

    erl_backend__elds_to_erlang__output_foreign_body_code_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv13_Res_8);
    *wrapper_arg_2 = ((MR_Box) (conv13_Res_8));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_Res_8;

    erl_backend__elds_to_erlang__output_foreign_decl_code_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_Res_8);
    *wrapper_arg_2 = ((MR_Box) (conv10_Res_8));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_NeedComma_16;

    erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_NeedComma_16);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_NeedComma_16));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_NeedComma_19;

    erl_backend__elds_to_erlang__output_export_ann_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NeedComma_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NeedComma_19));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ELDS_8,
  MR_String SourceFileName_9,
  MR_Word * Errors_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 0))));
    MR_Word Imports_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 1))));
    MR_Word ForeignDecls_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 2))));
    MR_Word ForeignBodies_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 3))));
    MR_Word ProcDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 4))));
    MR_Word ForeignExportDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 5))));
    MR_Word RttiDefns_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 6))));
    MR_Word InitPreds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 7))));
    MR_Word FinalPreds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_8, (MR_Integer) 8))));
    MR_Word AddMainWrapper_21;
    MR_Word NeedComma0_22;
    MR_Word NeedComma1_23;
    MR_Word Globals_25;
    MR_Word ForeignDeclResults_26;
    MR_String ErlangModuleNameStr_27;
    MR_Word EnvVarNames_32;
    MR_Word ForeignCodeResults_33;
    MR_Word ForeignDeclErrors_34;
    MR_Word ForeignCodeErrors_35;
    MR_String Var_41;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_77;
    MR_Word Var_85;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Box conv2_NeedComma0_22;
    MR_Box conv1_STATE_VARIABLE_IO_49_49;
    MR_Box conv5_NeedComma1_23;
    MR_Box conv4_STATE_VARIABLE_IO_51_51;
    MR_Box conv8__NeedComma_24;
    MR_Box conv7_STATE_VARIABLE_IO_53_53;
    MR_Box conv9_STATE_VARIABLE_IO_60_60;
    MR_Box conv11_STATE_VARIABLE_IO_62_62;
    MR_Box conv12_STATE_VARIABLE_IO_74_74;
    MR_Box conv14_STATE_VARIABLE_IO_78_78;
    MR_Box conv15_STATE_VARIABLE_IO_86_86;
    MR_Box conv16_STATE_VARIABLE_IO_88_88;
    MR_Box conv17_STATE_VARIABLE_IO_37;

    AddMainWrapper_21 = erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(ModuleInfo_7);
    erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(SourceFileName_9);
    mercury__io__write_string_3_p_0((MR_String) "-module(");
    Var_41 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(ModuleName_12);
    erl_backend__elds_to_erlang__output_atom_3_p_0(Var_41);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
    mercury__io__write_string_3_p_0((MR_String) "-export([");
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[5]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, ProcDefns_16, ((MR_Box) ((MR_Integer) 0)), &conv2_NeedComma0_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_49_49);
    NeedComma0_22 = ((MR_Word) (conv2_NeedComma0_22));
    mercury__list__foldl2_6_p_2((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[3]), ForeignExportDefns_17, ((MR_Box) (NeedComma0_22)), &conv5_NeedComma1_23, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_51_51);
    NeedComma1_23 = ((MR_Word) (conv5_NeedComma1_23));
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[6]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_52, RttiDefns_18, ((MR_Box) (NeedComma1_23)), &conv8__NeedComma_24, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_53_53);
    erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(AddMainWrapper_21, InitPreds_19, FinalPreds_20);
    mercury__io__write_string_3_p_0((MR_String) "]).\n");
    mercury__io__write_string_3_p_0((MR_String) "% -compile(export_all).\n");
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_25);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Globals_25));
    }
    mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_59, Imports_13, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_60_60);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_5));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (SourceFileName_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, ForeignDecls_14, &ForeignDeclResults_26, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_62_62);
    ErlangModuleNameStr_27 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(ModuleName_12);
    if (!((InitPreds_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_INIT ");
      erl_backend__elds_to_erlang__output_atom_3_p_0(ErlangModuleNameStr_27);
      mercury__io__write_string_3_p_0((MR_String) ":mercury__required_init\n");
    }
    if (!((FinalPreds_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_FINAL ");
      erl_backend__elds_to_erlang__output_atom_3_p_0(ErlangModuleNameStr_27);
      mercury__io__write_string_3_p_0((MR_String) ":mercury__required_final\n");
    }
    EnvVarNames_32 = erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(ProcDefns_16);
    mercury__set__fold_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[4]), EnvVarNames_32, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_74_74);
    mercury__io__write_string_3_p_0((MR_String) "% ENDINIT\n");
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_10[2]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_7));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (SourceFileName_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, ForeignBodies_15, &ForeignCodeResults_33, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_78_78);
    switch (AddMainWrapper_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_79;

          Var_79 = erl_backend__elds_to_erlang__main_wrapper_code_0_f_0();
          mercury__io__write_string_3_p_0(Var_79);
        }
        break;
    }
    erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(ModuleInfo_7, (MR_String) "mercury__required_init", InitPreds_19);
    erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(ModuleInfo_7, (MR_String) "mercury__required_final", FinalPreds_20);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_8));
      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_85, ProcDefns_16, ((MR_Box) ((MR_Integer) 0)), &conv15_STATE_VARIABLE_IO_86_86);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_9));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_87, ForeignExportDefns_17, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_88_88);
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_6_p_0_10));
      MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (ModuleInfo_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_89, RttiDefns_18, ((MR_Box) ((MR_Integer) 0)), &conv17_STATE_VARIABLE_IO_37);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[5]), ForeignDeclResults_26, &ForeignDeclErrors_34);
    mercury__list__filter_map_3_p_0((MR_Word) (&mercury__maybe__maybe__type_ctor_info_maybe_error_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[6]), ForeignCodeResults_33, &ForeignCodeErrors_35);
    *Errors_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignDeclErrors_34, ForeignCodeErrors_35);
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_String String_4;
    MR_Word ErlangModuleName_5;

    ErlangModuleName_5 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(ModuleName_3);
    String_4 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_5, (MR_String) "__");
    return String_4;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
  MR_Word ModuleInfo_6,
  MR_String Name_7,
  MR_Word PredProcIds_8)
{
  if (!((PredProcIds_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_19;
    MR_Box conv0_STATE_VARIABLE_IO_20_20;

    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 0);
    mercury__io__write_string_3_p_0(Name_7);
    mercury__io__write_string_3_p_0((MR_String) "() ->");
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, PredProcIds_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20_20);
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    mercury__io__write_string_3_p_0((MR_String) "void.\n");
  }
}

static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
  MR_Word ProcDefns_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = mercury__list__map_2_f_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_1[0]), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[2]), ProcDefns_3);
    HeadVar__2_2 = mercury__set__union_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_4);
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void)
{
  return (MR_String) "\n\n    % This function is called in place of main_2_p_0 by the shell script that\n    % we generate for this program, if linking against the standard library.\n   " " % Otherwise main_2_p_0 will be called.\n\n    mercury__main_wrapper() ->\n        mercury__startup(),\n        InitModule = list_to_atom(atom_to_list(\?MODULE) ++ \"" "_init\"),\n        try\n            InitModule:init_env_vars(),\n            InitModule:init_modules(),\n            InitModule:init_modules_required(),\n            " "main_2_p_0(),\n            InitModule:final_modules_required()\n        catch\n            {\'ML_exception\', Excp} ->\n                StackTrace = erlang:get_stackt" "race(),\n                mercury__exception:\'ML_report_uncaught_exception\'(Excp),\n                mercury__maybe_dump_stacktrace(StackTrace),\n                mer" "cury__shutdown(true)\n        end,\n        mercury__shutdown(false).\n\n    mercury__startup() ->\n        mercury__erlang_builtin:\'ML_start_global_server\'(),\n     " "   mercury__library:\'ML_std_library_init\'().\n\n    mercury__shutdown(ForceBadExit) ->\n        mercury__library:\'ML_std_library_finalize\'(),\n        \'ML_erlang_gl" "obal_server\' ! {get_exit_status, self()},\n        receive\n            {get_exit_status_ack, ExitStatus0} ->\n                void\n        end,\n        if\n       " "     ExitStatus0 =:= 0 andalso ForceBadExit ->\n                ExitStatus = 1;\n            true ->\n                ExitStatus = ExitStatus0\n        end,\n       " " mercury__erlang_builtin:\'ML_stop_global_server\'(),\n        % init:stop is preferred to calling halt but there seems\n        % to be no way to choose the exit c" "ode otherwise.\n        case ExitStatus of\n            0 -> void;\n            _ -> halt(ExitStatus)\n        end.\n\n    mercury__maybe_dump_stacktrace(StackTrace) " "->\n        case os:getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") of\n            false ->\n                io:put_chars(\"Stack dump follows:\\n\"),\n                mercury" "__dump_stacktrace(StackTrace);\n            _ ->\n                void\n        end.\n\n    mercury__dump_stacktrace([]) -> void;\n    mercury__dump_stacktrace([St | " "Sts]) ->\n        {Module, Function, ArityOrArgs} = St,\n        io:format(\"\\t~s:~s\", [Module, Function]),\n        if\n            is_integer(ArityOrArgs) ->\n     " "           io:format(\"/~B~n\", [ArityOrArgs]);\n            true ->\n                io:format(\"~p~n\", [ArityOrArgs])\n        end,\n        % Don\'t show stack frame" "s below main.\n        case St of\n            {\?MODULE, mercury__main_wrapper, _} ->\n                void;\n            _ ->\n                mercury__dump_stacktr" "ace(Sts)\n        end.\n";
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
  void * env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
  void * env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7 = ((MR_Word) ((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7));
    erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(env_ptr);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
  void * env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) (env_ptr_arg);

    hlds__hlds_module__module_info_pred_info_3_p_0((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7, &(env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8);
    hlds__hlds_pred__pred_info_get_status_2_p_0((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8, &(env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9);
    (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__Var_12 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9);
    (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = ((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__Var_12 == (MR_Integer) 1);
    if ((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
      erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(env_ptr);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
  void * env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &(env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7, (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6, erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3, env_ptr);
        (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
  MR_Word ModuleInfo_3)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s env;

    (env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3 = ModuleInfo_3;
    {
      MR_Word AddMainWrapper_4;
      MR_Word PredTable_5;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0((env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, &PredTable_5);
      hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(PredTable_5, (MR_String) "main", (MR_Integer) 2, &(env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6);
      erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(&env);
      if ((env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
        AddMainWrapper_4 = (MR_Integer) 1;
      else
        AddMainWrapper_4 = (MR_Integer) 0;
      return AddMainWrapper_4;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
  MR_Word AddMainWrapper_6,
  MR_Word InitPreds_7,
  MR_Word FinalPreds_8)
{
  {
    switch (AddMainWrapper_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_char_3_p_0((MR_Char) 44);
          mercury__io__nl_2_p_0();
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__main_wrapper");
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
        break;
    }
    if (!((InitPreds_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_char_3_p_0((MR_Char) 44);
      mercury__io__nl_2_p_0();
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
      erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_init");
      mercury__io__write_string_3_p_0((MR_String) "/0");
    }
    if (!((FinalPreds_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_char_3_p_0((MR_Char) 44);
      mercury__io__nl_2_p_0();
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
      erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_final");
      mercury__io__write_string_3_p_0((MR_String) "/0");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
  MR_String SourceFileName_4)
{
  {
    MR_String Version_6;
    MR_String Fullarch_7;
    MR_Word Var_10;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_27;

    mercury__library__version_2_p_0(&Version_6, &Fullarch_7);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Fullarch_7));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) ((MR_String) "% configured for "));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Version_6));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "% version "));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (SourceFileName_4));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) ((MR_String) "%\n"));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_13));
    }
    mercury__io__write_strings_3_p_0(Var_10);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Defn_6)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_6, (MR_Integer) 0))));
    MR_Word VarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_6, (MR_Integer) 1))));
    MR_Word Body_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_6, (MR_Integer) 2))));

    if (((MR_tag((MR_Word) Body_10)) == (MR_Integer) 0))
    {
      MR_Word Clause_12 = (MR_Word) ((MR_Word) (Body_10));
      MR_Word Context_20;
      MR_Word ClauseBody_14;
      MR_Word Fun_15;
      MR_Word FunBody_18;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      mercury__io__nl_2_p_0();
      ClauseBody_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_12, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) ClauseBody_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ClauseBody_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ClauseBody_14, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 1);
        if (succeeded)
        {
          Fun_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Fun_15)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_29 = (MR_Word) ((MR_Word) (Fun_15));
            FunBody_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) FunBody_18)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunBody_18, (MR_Integer) 0))));
              succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
                Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) Var_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_31, (MR_Integer) 2))));
                  succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                    succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Integer LineNr_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Context_20, (MR_Integer) 1))));
        MR_String FileName_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), Context_20, (MR_Integer) 0))));
        MR_Integer LineNr_46 = (MR_Integer) ((MR_Unsigned) LineNr_23 - (MR_Unsigned) 3);
        MR_Box conv0_STATE_VARIABLE_IO_12_51;

        mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[2]), FileName_45, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_51);
        mercury__io__write_string_3_p_0((MR_String) "\", ");
        mercury__io__write_int_3_p_0(LineNr_46);
        mercury__io__write_string_3_p_0((MR_String) ").\n");
        erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(ModuleInfo_5, PredProcId_8);
        erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(ModuleInfo_5, VarSet_9, Clause_12);
        erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
      }
      else
      {
        erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(ModuleInfo_5, PredProcId_8);
        erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(ModuleInfo_5, VarSet_9, Clause_12);
      }
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarSet_7,
  MR_Word Clause_8)
{
  {
    MR_bool succeeded;
    MR_Word Pattern_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_8, (MR_Integer) 0))));
    MR_Word Expr_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_8, (MR_Integer) 1))));
    MR_Word Var_28;
    MR_Integer Var_35;
    MR_Word Exprs_55;

    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (VarSet_7));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Pattern_23, (MR_String) ", ", Var_28);
    mercury__io__write_string_3_p_0((MR_String) ") -> ");
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1));
    Var_35 = (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1);
    succeeded = ((MR_tag((MR_Word) Expr_24)) == (MR_Integer) 1);
    if (succeeded)
    {
      Exprs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_24, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_6, VarSet_7, Var_35, Exprs_55);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_6, VarSet_7, Var_35, Expr_24);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Catch_10)
{
  {
    MR_bool succeeded;
    MR_Word PatternA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch_10, (MR_Integer) 0))));
    MR_Word PatternB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch_10, (MR_Integer) 1))));
    MR_Word CatchExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Catch_10, (MR_Integer) 2))));
    MR_Integer Var_23;
    MR_Integer Var_26;
    MR_Word Exprs_42;

    erl_backend__elds_to_erlang__output_term_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, PatternA_12);
    mercury__io__write_char_3_p_0((MR_Char) 58);
    erl_backend__elds_to_erlang__output_term_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, PatternB_13);
    mercury__io__write_string_3_p_0((MR_String) "->");
    Var_23 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0(Var_23);
    Var_26 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    succeeded = ((MR_tag((MR_Word) CatchExpr_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      Exprs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CatchExpr_14, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_7, VarSet_8, Var_26, Exprs_42);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Var_26, CatchExpr_14);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Expr_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Expr_10)) == (MR_Integer) 1);
    MR_Word Exprs_12;

    if (succeeded)
    {
      Exprs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_10, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Exprs_12);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Expr_10);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Clause_10)
{
  {
    MR_bool succeeded;
    MR_Word Pattern_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_10, (MR_Integer) 0))));
    MR_Word Expr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_10, (MR_Integer) 1))));
    MR_Word Var_19;
    MR_Integer Var_23;
    MR_Integer Var_26;
    MR_Word Exprs_46;

    mercury__io__write_string_3_p_0((MR_String) "(");
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[4]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_clause_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (VarSet_8));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (Indent_9));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0), Pattern_12, (MR_String) ", ", Var_19);
    mercury__io__write_string_3_p_0((MR_String) ") -> ");
    Var_23 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0(Var_23);
    Var_26 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    succeeded = ((MR_tag((MR_Word) Expr_13)) == (MR_Integer) 1);
    if (succeeded)
    {
      Exprs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_13, (MR_Integer) 0))));
      erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_7, VarSet_8, Var_26, Exprs_46);
    }
    else
      erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Var_26, Expr_13);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Expr_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Expr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Clause_25 = (MR_Word) ((MR_Word) (Expr_10));

          mercury__io__write_string_3_p_0((MR_String) "(fun");
          erl_backend__elds_to_erlang__output_clause_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Clause_25);
          erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
          mercury__io__write_string_3_p_0((MR_String) "end)");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_191 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_10, (MR_Integer) 0))));

          if ((Var_191 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.elds_to_erlang.output_expr\'/6", (MR_String) "empty elds_block");
              return;
            }
          else
          {
            MR_Integer Var_157;
            MR_Integer Var_160;

            mercury__io__write_string_3_p_0((MR_String) "(begin");
            Var_157 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Var_157);
            Var_160 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(ModuleInfo_7, VarSet_8, Var_160, Var_191);
            erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
            mercury__io__write_string_3_p_0((MR_String) "end)");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_10, (MR_Integer) 0))));

          erl_backend__elds_to_erlang__output_term_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Term_15);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ExprA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));
              MR_Word ExprB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
              MR_Word next_value_of_Expr_10;

              erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, ExprA_16);
              mercury__io__write_string_3_p_0((MR_String) "= ");
              // direct tailcall eliminated
              ;
              next_value_of_Expr_10 = ExprB_17;
              Expr_10 = next_value_of_Expr_10;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Unop_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Var_146;
              MR_Word ExprA_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
              MR_Word next_value_of_Expr_10;

              Var_146 = erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(Unop_18);
              mercury__io__write_string_3_p_0(Var_146);
              // direct tailcall eliminated
              ;
              next_value_of_Expr_10 = ExprA_169;
              Expr_10 = next_value_of_Expr_10;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Binop_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))) & (MR_Integer) 31);
              MR_Word ExprA_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
              MR_Word ExprB_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 3))));
              MR_Word next_value_of_Expr_10;

              erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, ExprA_170);
              erl_backend__elds_to_erlang__output_elds_binop_3_p_0(Binop_19);
              // direct tailcall eliminated
              ;
              next_value_of_Expr_10 = ExprB_171;
              Expr_10 = next_value_of_Expr_10;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CallTarget_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));
              MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) CallTarget_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word PredProcId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallTarget_20, (MR_Integer) 0))));

                    erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(ModuleInfo_7, PredProcId_22);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Closure_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallTarget_20, (MR_Integer) 0))));

                    erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Closure_23);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String FunName_24 = ((MR_String) ((MR_hl_field(MR_mktag(2), CallTarget_20, (MR_Integer) 0))));

                    erl_backend__elds_to_erlang__output_atom_3_p_0(FunName_24);
                  }
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "(");
              erl_backend__elds_to_erlang__output_exprs_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Args_21);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word RttiId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) RttiId_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "fun ");
                    erl_backend__elds_to_erlang__output_rtti_id_4_p_0(ModuleInfo_7, RttiId_33);
                    mercury__io__write_string_3_p_0((MR_String) "/0 ");
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    erl_backend__elds_to_erlang__output_rtti_id_4_p_0(ModuleInfo_7, RttiId_33);
                    mercury__io__write_string_3_p_0((MR_String) "()");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Cases_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
              MR_Integer Var_112;
              MR_Integer Var_115;
              MR_Word Var_122;
              MR_Integer Var_124;
              MR_Word ExprA_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "(case");
              Var_112 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Var_112);
              Var_115 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Var_115, ExprA_172);
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "of");
              Var_124 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[3]));
                MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_122, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_122, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_122, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(MR_mktag(0), Var_122, 5) = ((MR_Box) (Var_124));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), Cases_26, (MR_String) ";", Var_122);
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "end)");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word MaybeCatch_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 3))));
              MR_Word MaybeAfter_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 4))));
              MR_Integer Var_75;
              MR_Integer Var_78;
              MR_Word ExprA_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));
              MR_Word Cases_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "(try");
              Var_75 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Var_75);
              Var_78 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              erl_backend__elds_to_erlang__output_block_expr_6_p_0(ModuleInfo_7, VarSet_8, Var_78, ExprA_173);
              if (!((Cases_174 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_85;
                MR_Integer Var_87;

                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "of");
                Var_87 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[3]));
                  MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (VarSet_8));
                  MR_hl_field(MR_mktag(0), Var_85, 5) = ((MR_Box) (Var_87));
                }
                mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), Cases_174, (MR_String) ";", Var_85);
              }
              if (!((MaybeCatch_27 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Catch_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatch_27, (MR_Integer) 0))));
                MR_Integer Var_92;
                MR_Integer Var_95;

                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "catch");
                Var_92 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Var_92);
                Var_95 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                erl_backend__elds_to_erlang__output_catch_6_p_0(ModuleInfo_7, VarSet_8, Var_95, Catch_31);
              }
              if (!((MaybeAfter_28 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word After_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAfter_28, (MR_Integer) 0))));
                MR_Integer Var_101;
                MR_Integer Var_104;

                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
                mercury__io__write_string_3_p_0((MR_String) "after");
                Var_101 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Var_101);
                Var_104 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Var_104, After_32);
              }
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "end)");
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ExprA_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "throw(");
              erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, ExprA_175);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Code_40 = ((MR_String) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0(Code_40);
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ExprA_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));
              MR_Word ExprB_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 2))));
              MR_Word next_value_of_Expr_10;

              erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, ExprA_176);
              mercury__io__write_string_3_p_0((MR_String) " ! ");
              // direct tailcall eliminated
              ;
              next_value_of_Expr_10 = ExprB_177;
              Expr_10 = next_value_of_Expr_10;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Var_47;
              MR_Integer Var_49;
              MR_Word Cases_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "(receive");
              Var_49 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[3]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleInfo_7));
                MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (VarSet_8));
                MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (Var_49));
              }
              mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0), Cases_178, (MR_String) ";", Var_47);
              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(Indent_9);
              mercury__io__write_string_3_p_0((MR_String) "end)");
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Term_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Term_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) "_ ");
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Term_10, (MR_Integer) 0)));
          MR_Integer Int_88;

          Int_88 = mercury__char__to_int_1_f_0(Char_24);
          succeeded = mercury__char__is_alnum_1_p_0(Char_24);
          if (succeeded)
          {
            mercury__io__write_char_3_p_0((MR_Char) 36);
            mercury__io__write_char_3_p_0(Char_24);
          }
          else
          {
            MR_String Esc_25;

            switch (Int_88) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  Esc_25 = (MR_String) "\\^a";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  Esc_25 = (MR_String) "\\^b";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  Esc_25 = (MR_String) "\\^c";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  Esc_25 = (MR_String) "\\^d";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  Esc_25 = (MR_String) "\\^e";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  Esc_25 = (MR_String) "\\^f";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  Esc_25 = (MR_String) "\\^g";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  Esc_25 = (MR_String) "\\b";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 9:
                {
                  Esc_25 = (MR_String) "\\t";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  Esc_25 = (MR_String) "\\n";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 11:
                {
                  Esc_25 = (MR_String) "\\v";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 12:
                {
                  Esc_25 = (MR_String) "\\f";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 13:
                {
                  Esc_25 = (MR_String) "\\r";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 14:
                {
                  Esc_25 = (MR_String) "\\^n";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 15:
                {
                  Esc_25 = (MR_String) "\\^o";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 16:
                {
                  Esc_25 = (MR_String) "\\^p";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 17:
                {
                  Esc_25 = (MR_String) "\\^q";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 18:
                {
                  Esc_25 = (MR_String) "\\^r";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 19:
                {
                  Esc_25 = (MR_String) "\\^s";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 20:
                {
                  Esc_25 = (MR_String) "\\^t";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 21:
                {
                  Esc_25 = (MR_String) "\\^u";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 22:
                {
                  Esc_25 = (MR_String) "\\^v";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 23:
                {
                  Esc_25 = (MR_String) "\\^w";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 24:
                {
                  Esc_25 = (MR_String) "\\^x";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 25:
                {
                  Esc_25 = (MR_String) "\\^y";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 26:
                {
                  Esc_25 = (MR_String) "\\^z";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 27:
                {
                  Esc_25 = (MR_String) "\\e";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 32:
                {
                  Esc_25 = (MR_String) "\\s";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 34:
                {
                  Esc_25 = (MR_String) "\\\"";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 39:
                {
                  Esc_25 = (MR_String) "\\\'";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 92:
                {
                  Esc_25 = (MR_String) "\\\\";
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 127:
                {
                  Esc_25 = (MR_String) "\\d";
                  succeeded = MR_TRUE;
                }
                break;
            }
            if (succeeded)
            {
              mercury__io__write_char_3_p_0((MR_Char) 36);
              mercury__io__write_string_3_p_0(Esc_25);
            }
            else
              mercury__io__write_int_3_p_0(Int_88);
          }
          erl_backend__elds_to_erlang__space_2_p_0();
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Int_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Term_10, (MR_Integer) 0))));

          mercury__io__write_int_3_p_0(Int_12);
          erl_backend__elds_to_erlang__space_2_p_0();
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned UInt_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              mercury__io__write_uint_3_p_0(UInt_13);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t Int8_14 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_int8_3_p_0(Int8_14);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t UInt8_15 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_uint8_3_p_0(UInt8_15);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t Int16_16 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_int16_3_p_0(Int16_16);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t UInt16_17 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_uint16_3_p_0(UInt16_17);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t Int32_18 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_int32_3_p_0(Int32_18);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t UInt32_19 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_uint32_3_p_0(UInt32_19);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t Int64_21 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_int64_3_p_0(Int64_21);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t UInt64_22 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              mercury__io__write_uint64_3_p_0(UInt64_22);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Float Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1)));

              erl_backend__elds_to_erlang__output_float_3_p_0(Float_20);
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String String_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "<<\"");
              erl_backend__elds_to_erlang__write_with_escaping_4_p_0((MR_Integer) 0, String_23);
              mercury__io__write_string_3_p_0((MR_String) "\">>");
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String String_87 = ((MR_String) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\"");
              erl_backend__elds_to_erlang__write_with_escaping_4_p_0((MR_Integer) 0, String_87);
              mercury__io__write_string_3_p_0((MR_String) "\"");
              erl_backend__elds_to_erlang__space_2_p_0();
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String Atom_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              erl_backend__elds_to_erlang__output_atom_3_p_0(Atom_26);
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));
              MR_String Var_38;

              Var_38 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_27);
              erl_backend__elds_to_erlang__output_atom_3_p_0(Var_38);
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Args_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              erl_backend__elds_to_erlang__output_tuple_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, Args_28);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              erl_backend__elds_to_erlang__output_var_4_p_0(VarSet_8, Var_29);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_String Name_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), Term_10, (MR_Integer) 1))));

              erl_backend__elds_to_erlang__output_var_string_3_p_0(Name_30);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Expr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Exprs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));

      erl_backend__elds_to_erlang__output_expr_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Expr_16);
      if (!((Exprs_17 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word Expr_43;
        MR_Word Exprs_44;

        mercury__io__write_char_3_p_0((MR_Char) 44);
        mercury__io__nl_2_p_0();
        erl_backend__elds_to_erlang__indent_line_3_p_0(HeadVar__3_3);
        Expr_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Exprs_17, (MR_Integer) 0))));
        Exprs_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Exprs_17, (MR_Integer) 1))));
        erl_backend__elds_to_erlang__output_expr_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Expr_43);
        if (!((Exprs_44 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__4_4;

          mercury__io__write_char_3_p_0((MR_Char) 44);
          mercury__io__nl_2_p_0();
          erl_backend__elds_to_erlang__indent_line_3_p_0(HeadVar__3_3);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = Exprs_44;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Args_10)
{
  {
    MR_bool succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word SymName_12;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_String Var_21;

    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
      succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_18, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
            Var_21 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
            succeeded = (strcmp(Var_21, (MR_String) "[]") == 0);
          }
        }
      }
    }
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "[] ");
    else
    {
      MR_Word A_13;
      MR_Word B_14;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_String Var_29;
      MR_Word SymName_49;

      succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_24, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            SymName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 1))));
            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              A_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
              succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                B_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
                Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
                succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_29 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_49);
                  succeeded = (strcmp(Var_29, (MR_String) "[|]") == 0);
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        mercury__io__write_char_3_p_0((MR_Char) 91);
        erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, A_13);
        mercury__io__write_string_3_p_0((MR_String) "| ");
        erl_backend__elds_to_erlang__output_expr_6_p_0(ModuleInfo_7, VarSet_8, Indent_9, B_14);
        mercury__io__write_string_3_p_0((MR_String) "] ");
      }
      else
      {
        MR_Word Args1_15;
        MR_Word Var_38;
        MR_Word Var_51;

        succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
          Args1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
          Var_51 = (MR_Word) (MR_mkword(MR_mktag(2), &erl_backend__elds_to_erlang_scalar_common_8[1]));
          succeeded = erl_backend__elds____Unify____elds_expr_0_0(Var_38, Var_51);
        }
        if (succeeded)
        {
          MR_Word Var_64;

          mercury__io__write_char_3_p_0((MR_Char) 123);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[2]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (ModuleInfo_7));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (VarSet_8));
            MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (Indent_9));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Args1_15, (MR_String) ", ", Var_64);
          mercury__io__write_string_3_p_0((MR_String) "} ");
        }
        else
        {
          MR_Word Var_78;

          mercury__io__write_char_3_p_0((MR_Char) 123);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[2]));
            MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ModuleInfo_7));
            MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (VarSet_8));
            MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (Indent_9));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Args_10, (MR_String) ", ", Var_78);
          mercury__io__write_string_3_p_0((MR_String) "} ");
        }
      }
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
  MR_Integer N_4)
{
  {
    mercury__io__nl_2_p_0();
    erl_backend__elds_to_erlang__indent_line_3_p_0(N_4);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
  MR_Word Binop_4)
{
  {
    MR_String Var_8 = ((&erl_backend__elds_to_erlang_vector_common_7[4 + Binop_4]))->erl_backend__elds_to_erlang__vector_common_type_7_0__vct_7_f_0;

    mercury__io__write_string_3_p_0(Var_8);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&erl_backend__elds_to_erlang_vector_common_7[0 + HeadVar__1_1]))->erl_backend__elds_to_erlang__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RttiId_6)
{
  {
    MR_bool succeeded;
    MR_Word CurModuleName_8;
    MR_Word InstanceModule_13;
    MR_String Atom1_15;
    MR_String Atom_28;
    MR_Integer Var_65;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &CurModuleName_8);
    switch (MR_tag((MR_Word) RttiId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiTypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiId_6, (MR_Integer) 0))));
          MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiTypeCtor_9, (MR_Integer) 0))));
          MR_Word CRttiId_14;
          MR_String Var_50;

          succeeded = ((MR_tag((MR_Word) ModuleName_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_10, (MR_Integer) 0))));
            succeeded = (strcmp(Var_50, (MR_String) "") == 0);
          }
          if (succeeded)
            InstanceModule_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          else
            InstanceModule_13 = ModuleName_10;
          {
            CRttiId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CRttiId_14, 0) = ((MR_Box) (RttiTypeCtor_9));
            MR_hl_field(MR_mktag(0), CRttiId_14, 1) = ((MR_Box) ((MR_Unsigned) 44U));
          }
          backend_libs__rtti__id_to_c_identifier_2_p_0(CRttiId_14, &Atom1_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RttiId_6, (MR_Integer) 0))));
          MR_String Atom0_17;
          MR_String Var_47;

          InstanceModule_13 = CurModuleName_8;
          Var_47 = backend_libs__rtti__type_info_to_string_1_f_0(TypeInfo_16);
          Atom0_17 = mercury__string__f_43_43_2_f_0((MR_String) "ti_", Var_47);
          Atom1_15 = mercury__string__replace_all_3_f_0(Atom0_17, (MR_String) "type_ctor_info", (MR_String) "tci");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PseudoTypeInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RttiId_6, (MR_Integer) 0))));
          MR_String Prefix_20;
          MR_String Var_43;
          MR_String Atom0_57;

          succeeded = ((MR_tag((MR_Word) PseudoTypeInfo_18)) == (MR_Integer) 3);
          if (succeeded)
            Prefix_20 = (MR_String) "type_var_";
          else
            Prefix_20 = (MR_String) "pti_";
          InstanceModule_13 = CurModuleName_8;
          Var_43 = backend_libs__rtti__pseudo_type_info_to_string_1_f_0(PseudoTypeInfo_18);
          Atom0_57 = mercury__string__f_43_43_2_f_0(Prefix_20, Var_43);
          Atom1_15 = mercury__string__replace_all_3_f_0(Atom0_57, (MR_String) "type_ctor_info", (MR_String) "tci");
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TCName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RttiId_6, (MR_Integer) 0))));
          MR_String InstanceStr_22;
          MR_Word ClassModuleName_23;
          MR_String ClassName_24;
          MR_Integer ClassArity_25;
          MR_Word QClassName_26;
          MR_String QClassNameStr_27;
          MR_Word Var_32;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_37;
          MR_String Var_38;
          MR_Word Var_39;
          MR_Word Var_41;

          InstanceModule_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RttiId_6, (MR_Integer) 1))));
          InstanceStr_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), RttiId_6, (MR_Integer) 2))));
          ClassModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCName_21, (MR_Integer) 0))));
          ClassName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), TCName_21, (MR_Integer) 1))));
          ClassArity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TCName_21, (MR_Integer) 2))));
          {
            QClassName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), QClassName_26, 0) = ((MR_Box) (ClassModuleName_23));
            MR_hl_field(MR_mktag(1), QClassName_26, 1) = ((MR_Box) (ClassName_24));
          }
          QClassNameStr_27 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(QClassName_26, (MR_String) "__");
          Var_38 = mercury__string__from_int_1_f_0(ClassArity_25);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (InstanceStr_22));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "__"));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "__arity"));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (QClassNameStr_27));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "BaseTypeclassInfo_"));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
          }
          Atom1_15 = mercury__string__append_list_1_f_0(Var_32);
        }
        break;
    }
    Var_65 = mercury__string__length_1_f_0(Atom1_15);
    succeeded = (Var_65 <= (MR_Integer) 200);
    if (succeeded)
      Atom_28 = Atom1_15;
    else
    {
      MR_Integer Hash_61;
      MR_String Left_62;
      MR_String Right_63;
      MR_String Middle_64;
      MR_Integer Var_67;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_78;

      Var_67 = mercury__string__hash_1_f_0(Atom1_15);
      Hash_61 = (Var_67 & (MR_Integer) 4294967295);
      Left_62 = mercury__string__left_2_f_0(Atom1_15, (MR_Integer) 64);
      Right_63 = mercury__string__right_2_f_0(Atom1_15, (MR_Integer) 64);
      Middle_64 = mercury__string__int_to_base_string_2_f_0(Hash_61, (MR_Integer) 16);
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Right_63));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_String) "..."));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Middle_64));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) ((MR_String) "..."));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Left_62));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
      }
      Atom_28 = mercury__string__append_list_1_f_0(Var_72);
    }
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CurModuleName_8, InstanceModule_13);
    if (!(succeeded))
    {
      MR_String Var_52;
      MR_Word ErlangModuleName_82;

      ErlangModuleName_82 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(InstanceModule_13);
      Var_52 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_82, (MR_String) "__");
      erl_backend__elds_to_erlang__output_atom_3_p_0(Var_52);
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
    erl_backend__elds_to_erlang__output_atom_3_p_0(Atom_28);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExtModule_8;
    MR_String Name_9;
    MR_String ShortName_11;
    MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    MR_Word RttiProcName_24;
    MR_Word PredOrFunc_25;
    MR_Word ThisModule_26;
    MR_Word PredModule_27;
    MR_String PredName_28;
    MR_Integer PredArity_29;
    MR_Word PredIsImported0_36;
    MR_Word Origin_38;
    MR_Word PredInfo_41;
    MR_Word PredStatus_42;
    MR_Word PredIsImported_44;
    MR_Word Var_47;
    MR_Word SpecialPredId_45;
    MR_Word TypeCtor_46;

    RttiProcName_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_22, ProcId_23);
    PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 0))) & (MR_Integer) 1);
    ThisModule_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 1))));
    PredModule_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 2))));
    PredName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 3))));
    PredArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 4))));
    PredIsImported0_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    Origin_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcName_24, (MR_Integer) 11))));
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_22, &PredInfo_41);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_41, &PredStatus_42);
    Var_47 = (MR_Word) (PredStatus_42);
    succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
    if (succeeded)
      PredIsImported_44 = (MR_Integer) 0;
    else
      PredIsImported_44 = PredIsImported0_36;
    succeeded = ((MR_tag((MR_Word) Origin_38)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecialPredId_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_38, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_38, (MR_Integer) 1))));
      {
        MR_Integer TypeArity_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_46, (MR_Integer) 1))));
        MR_String TypeName_57;
        MR_Word TypeModule_58;
        MR_Word TypeCtorSymName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_46, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TypeCtorSymName_55)) == (MR_Integer) 1))
        {
          TypeModule_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_55, (MR_Integer) 0))));
          TypeName_57 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_55, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        {
          TypeName_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_55, (MR_Integer) 0))));
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_46);
          if (succeeded)
          {
            TypeModule_58 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_String ProcNameStr0_59;
          MR_String TypeModuleStr_60;
          MR_String ProcNameStr1_61;
          MR_Integer ModeNum_62;
          MR_String Var_64;
          MR_String Var_65;
          MR_String Var_67;
          MR_String Var_68;
          MR_String Var_69;
          MR_String Var_71;
          MR_Word ErlangModuleName_81;
          MR_Integer Var_75;

          ProcNameStr0_59 = mercury__string__f_43_43_2_f_0(PredName_28, (MR_String) "__");
          ErlangModuleName_81 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(TypeModule_58);
          TypeModuleStr_60 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_81, (MR_String) "__");
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_26, TypeModule_58);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = (SpecialPredId_45 == (MR_Integer) 0);
            if (succeeded)
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_75);
              succeeded = (ProcId_23 != Var_75);
            }
          }
          if (succeeded)
          {
            ProcNameStr1_61 = mercury__string__f_43_43_2_f_0(ProcNameStr0_59, TypeModuleStr_60);
            MaybeExtModule_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            ProcNameStr1_61 = ProcNameStr0_59;
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeModule_58, ThisModule_26);
            succeeded = !(succeeded);
            if (succeeded)
              {
                MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeExtModule_8, 0) = ((MR_Box) (TypeModuleStr_60));
              }
            else
              MaybeExtModule_8 = (MR_Word) ((MR_Unsigned) 0U);
          }
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_23, &ModeNum_62);
          Var_68 = mercury__string__from_int_1_f_0(TypeArity_56);
          Var_71 = mercury__string__from_int_1_f_0(ModeNum_62);
          Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_71);
          Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_69);
          Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_67);
          Var_64 = mercury__string__f_43_43_2_f_0(TypeName_57, Var_65);
          Name_9 = mercury__string__f_43_43_2_f_0(ProcNameStr1_61, Var_64);
        }
        else
        {
          MR_String Var_73;

          Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred ", PredName_28);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140erl_backend.elds_to_erlang.erlang_special_proc_name\'/7", Var_73);
            return;
          }
        }
      }
    }
    else
      erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(ThisModule_26, PredModule_27, PredName_28, PredOrFunc_25, PredArity_29, ProcId_23, PredIsImported_44, &MaybeExtModule_8, &Name_9);
    if (!((MaybeExtModule_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String ExtModule_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExtModule_8, (MR_Integer) 0))));

      erl_backend__elds_to_erlang__output_atom_3_p_0(ExtModule_10);
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
    ShortName_11 = erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(Name_9);
    erl_backend__elds_to_erlang__output_atom_3_p_0(ShortName_11);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
  MR_Word ThisModule_10,
  MR_Word PredModule_11,
  MR_String PredName_12,
  MR_Word PredOrFunc_13,
  MR_Integer PredArity_14,
  MR_Integer ProcId_15,
  MR_Word PredIsImported_16,
  MR_Word * MaybeExtModule_17,
  MR_String * ProcNameStr_18)
{
  {
    MR_bool succeeded;
    MR_String Suffix_19;
    MR_Integer OrigArity_20;
    MR_String PredLabelStr0_21;
    MR_String PredLabelStr_22;
    MR_Integer ModeNum_23;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_35;
    MR_String Var_37;

    switch (PredIsImported_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeExtModule_17 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_24;
          MR_Word ErlangModuleName_41;

          ErlangModuleName_41 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(PredModule_11);
          Var_24 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_41, (MR_String) "__");
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeExtModule_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
          }
        }
        break;
    }
    switch (PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_19 = (MR_String) "f";
          OrigArity_20 = (MR_Integer) ((MR_Unsigned) PredArity_14 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_19 = (MR_String) "p";
          OrigArity_20 = PredArity_14;
        }
        break;
    }
    Var_29 = mercury__string__from_int_1_f_0(OrigArity_20);
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_19);
    Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_28);
    PredLabelStr0_21 = mercury__string__f_43_43_2_f_0(PredName_12, Var_26);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_10, PredModule_11);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = (PredIsImported_16 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String Var_32;
      MR_String Var_34;
      MR_Word ErlangModuleName_45;

      ErlangModuleName_45 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(PredModule_11);
      Var_34 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_45, (MR_String) "__");
      Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", Var_34);
      PredLabelStr_22 = mercury__string__f_43_43_2_f_0(PredLabelStr0_21, Var_32);
    }
    else
      PredLabelStr_22 = PredLabelStr0_21;
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ModeNum_23);
    Var_37 = mercury__string__from_int_1_f_0(ModeNum_23);
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_37);
    *ProcNameStr_18 = mercury__string__f_43_43_2_f_0(PredLabelStr_22, Var_35);
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
  MR_String Name0_3)
{
  {
    MR_bool succeeded;
    MR_String Name_4;
    MR_Integer Var_9;

    Var_9 = mercury__string__length_1_f_0(Name0_3);
    succeeded = (Var_9 <= (MR_Integer) 200);
    if (succeeded)
      Name_4 = Name0_3;
    else
    {
      MR_Integer Hash_5;
      MR_String Left_6;
      MR_String Right_7;
      MR_String Middle_8;
      MR_Integer Var_11;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_22;

      Var_11 = mercury__string__hash_1_f_0(Name0_3);
      Hash_5 = (Var_11 & (MR_Integer) 4294967295);
      Left_6 = mercury__string__left_2_f_0(Name0_3, (MR_Integer) 64);
      Right_7 = mercury__string__right_2_f_0(Name0_3, (MR_Integer) 64);
      Middle_8 = mercury__string__int_to_base_string_2_f_0(Hash_5, (MR_Integer) 16);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Right_7));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "..."));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Middle_8));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) "..."));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Left_6));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
      }
      Name_4 = mercury__string__append_list_1_f_0(Var_16);
    }
    return Name_4;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void)
{
  mercury__io__write_char_3_p_0((MR_Char) 32);
}

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
  MR_Word StringOrAtom_5,
  MR_String String_6)
{
  {
    MR_Word Var_10;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (StringOrAtom_5));
    }
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_10, String_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
  MR_String String_4)
{
  {
    MR_bool succeeded;
    MR_Char FirstChar_6;

    succeeded = mercury__string__index_3_p_0(String_4, (MR_Integer) 0, &FirstChar_6);
    if (succeeded)
    {
      succeeded = mercury__char__is_lower_1_p_0(FirstChar_6);
      if (succeeded)
      {
        succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(String_4);
        if (succeeded)
        {
          {
            MR_Integer case_num_0 = (MR_Integer) -1;

            switch (MR_nth_code_unit(String_4, 0)) {
              case (MR_Integer) 97:
                switch (MR_nth_code_unit(String_4, 1)) {
                  case (MR_Integer) 102:
                    if (MR_offset_streq(2, String_4, (MR_String) "after"))
                      case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 110:
                    if (((MR_nth_code_unit(String_4, 2)) == (MR_Integer) 100))
                      switch (MR_nth_code_unit(String_4, 3)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 97:
                          if (MR_offset_streq(4, String_4, (MR_String) "andalso"))
                            case_num_0 = (MR_Integer) 2;
                          break;
                      }
                    break;
                }
                break;
              case (MR_Integer) 98:
                switch (MR_nth_code_unit(String_4, 1)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(2, String_4, (MR_String) "band"))
                      case_num_0 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(2, String_4, (MR_String) "begin"))
                      case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 110:
                    if (MR_offset_streq(2, String_4, (MR_String) "bnot"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(2, String_4, (MR_String) "bor"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 115:
                    switch (MR_nth_code_unit(String_4, 2)) {
                      case (MR_Integer) 108:
                        if (MR_offset_streq(3, String_4, (MR_String) "bsl"))
                          case_num_0 = (MR_Integer) 7;
                        break;
                      case (MR_Integer) 114:
                        if (MR_offset_streq(3, String_4, (MR_String) "bsr"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                    }
                    break;
                  case (MR_Integer) 120:
                    if (MR_offset_streq(2, String_4, (MR_String) "bxor"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                }
                break;
              case (MR_Integer) 99:
                switch (MR_nth_code_unit(String_4, 1)) {
                  case (MR_Integer) 97:
                    switch (MR_nth_code_unit(String_4, 2)) {
                      case (MR_Integer) 115:
                        if (MR_offset_streq(3, String_4, (MR_String) "case"))
                          case_num_0 = (MR_Integer) 10;
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(3, String_4, (MR_String) "catch"))
                          case_num_0 = (MR_Integer) 11;
                        break;
                    }
                    break;
                  case (MR_Integer) 111:
                    if (MR_offset_streq(2, String_4, (MR_String) "cond"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                }
                break;
              case (MR_Integer) 100:
                if (MR_offset_streq(1, String_4, (MR_String) "div"))
                  case_num_0 = (MR_Integer) 13;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(1, String_4, (MR_String) "end"))
                  case_num_0 = (MR_Integer) 14;
                break;
              case (MR_Integer) 102:
                if (MR_offset_streq(1, String_4, (MR_String) "fun"))
                  case_num_0 = (MR_Integer) 15;
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(1, String_4, (MR_String) "if"))
                  case_num_0 = (MR_Integer) 16;
                break;
              case (MR_Integer) 108:
                if (MR_offset_streq(1, String_4, (MR_String) "let"))
                  case_num_0 = (MR_Integer) 17;
                break;
              case (MR_Integer) 110:
                if (MR_offset_streq(1, String_4, (MR_String) "not"))
                  case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 111:
                switch (MR_nth_code_unit(String_4, 1)) {
                  case (MR_Integer) 102:
                    if (MR_offset_streq(2, String_4, (MR_String) "of"))
                      case_num_0 = (MR_Integer) 19;
                    break;
                  case (MR_Integer) 114:
                    switch (MR_nth_code_unit(String_4, 2)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 20;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(3, String_4, (MR_String) "orelse"))
                          case_num_0 = (MR_Integer) 21;
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 113:
                if (MR_offset_streq(1, String_4, (MR_String) "query"))
                  case_num_0 = (MR_Integer) 22;
                break;
              case (MR_Integer) 114:
                if (((MR_nth_code_unit(String_4, 1)) == (MR_Integer) 101))
                  switch (MR_nth_code_unit(String_4, 2)) {
                    case (MR_Integer) 99:
                      if (MR_offset_streq(3, String_4, (MR_String) "receive"))
                        case_num_0 = (MR_Integer) 23;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(3, String_4, (MR_String) "rem"))
                        case_num_0 = (MR_Integer) 24;
                      break;
                  }
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(1, String_4, (MR_String) "try"))
                  case_num_0 = (MR_Integer) 25;
                break;
              case (MR_Integer) 119:
                if (MR_offset_streq(1, String_4, (MR_String) "when"))
                  case_num_0 = (MR_Integer) 26;
                break;
              case (MR_Integer) 120:
                if (MR_offset_streq(1, String_4, (MR_String) "xor"))
                  case_num_0 = (MR_Integer) 27;
                break;
            }
            if ((case_num_0 < (MR_Integer) 0))
              succeeded = MR_FALSE;
            else
            {
              // we found a match; look up the results
              ;
              succeeded = MR_TRUE;
            }
          }
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
      mercury__io__write_string_3_p_0(String_4);
    else
    {
      MR_Box conv0_STATE_VARIABLE_IO_14_14;

      mercury__io__write_char_3_p_0((MR_Char) 39);
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[1]), String_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
      mercury__io__write_char_3_p_0((MR_Char) 39);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
  MR_String String_4)
{
  {
    MR_Box conv0_STATE_VARIABLE_IO_9_9;

    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[1]), String_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9_9);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
  MR_Word VarSet_5,
  MR_Word Var_6)
{
  {
    MR_String VarName_8;
    MR_Integer VarNumber_9;
    MR_String Var_12;
    MR_String Var_14;
    MR_String Var_16;
    MR_Box conv0_STATE_VARIABLE_IO_9_23;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, Var_6, &VarName_8);
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, &VarNumber_9);
    Var_16 = mercury__string__from_int_1_f_0(VarNumber_9);
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_16);
    Var_12 = mercury__string__f_43_43_2_f_0(VarName_8, Var_14);
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_6[0]), Var_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9_23);
    mercury__io__write_char_3_p_0((MR_Char) 32);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
  MR_Float Float_4)
{
  {
    MR_bool succeeded;
    MR_String S_6;
    MR_Integer Pos_7;

    S_6 = mercury__string__from_float_1_f_0(Float_4);
    succeeded = erl_backend__elds_to_erlang__digit_then_e_4_p_0(S_6, (MR_Integer) 0, (MR_Integer) 0, &Pos_7);
    if (succeeded)
    {
      MR_String Var_12;
      MR_String Var_17;
      MR_Integer Var_19;

      Var_12 = mercury__string__between_3_f_0(S_6, (MR_Integer) 0, Pos_7);
      mercury__io__write_string_3_p_0(Var_12);
      mercury__io__write_string_3_p_0((MR_String) ".0");
      Var_19 = mercury__string__length_1_f_0(S_6);
      Var_17 = mercury__string__between_3_f_0(S_6, Pos_7, Var_19);
      mercury__io__write_string_3_p_0(Var_17);
    }
    else
      mercury__io__write_string_3_p_0(S_6);
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
  MR_String String_5,
  MR_Word PrevDigit_6,
  MR_Integer Pos0_7,
  MR_Integer * Pos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Pos1_9;
    MR_Char Char_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(String_5, Pos0_7, &Pos1_9, &Char_10);
    if (succeeded)
    {
      succeeded = (Char_10 != (MR_Char) 46);
      if (succeeded)
      {
        switch (Char_10) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Char) 69:
            succeeded = MR_TRUE;
            break;
          case (MR_Char) 101:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          succeeded = (PrevDigit_6 == (MR_Integer) 1);
          if (succeeded)
          {
            *Pos_8 = Pos0_7;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          succeeded = mercury__char__is_digit_1_p_0(Char_10);
          if (succeeded)
          {
            MR_Integer next_value_of_Pos0_7 = Pos1_9;

            // direct tailcall eliminated
            ;
            PrevDigit_6 = (MR_Integer) 1;
            Pos0_7 = next_value_of_Pos0_7;
            continue;
          }
          else
          {
            MR_Integer next_value_of_Pos0_7 = Pos1_9;

            // direct tailcall eliminated
            ;
            PrevDigit_6 = (MR_Integer) 0;
            Pos0_7 = next_value_of_Pos0_7;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarSet_8,
  MR_Integer Indent_9,
  MR_Word Exprs_10)
{
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_exprs_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (VarSet_8));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (Indent_9));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0), Exprs_10, (MR_String) ", ", Var_15);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
  MR_Integer N_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_11;
      MR_Integer next_value_of_N_4;

      mercury__io__write_string_3_p_0((MR_String) "  ");
      Var_11 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_4 = Var_11;
      N_4 = next_value_of_N_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void)
{
  {
    MR_String FileName_14;
    MR_Integer LineNr_15;
    MR_Box conv0_STATE_VARIABLE_IO_12_20;

    mercury__io__output_stream_name_3_p_0(&FileName_14);
    mercury__io__get_output_line_number_3_p_0(&LineNr_15);
    mercury__io__write_string_3_p_0((MR_String) "-file(\"");
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&erl_backend__elds_to_erlang_scalar_common_4[0]), FileName_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12_20);
    mercury__io__write_string_3_p_0((MR_String) "\", ");
    mercury__io__write_int_3_p_0(LineNr_15);
    mercury__io__write_string_3_p_0((MR_String) ").\n");
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Errors_10;

    erl_backend__elds_to_erlang__output_hrl_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv1_Errors_10);
    *wrapper_arg_1 = ((MR_Box) (conv1_Errors_10));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Errors_10;

    erl_backend__elds_to_erlang__output_erl_file_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv0_Errors_10);
    *wrapper_arg_1 = ((MR_Box) (conv0_Errors_10));
  }
}

void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ELDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ELDS_7, (MR_Integer) 0))));
    MR_Word Globals_11;
    MR_String SourceFileName_12;
    MR_String TargetFileName_13;
    MR_String HeaderFileName_14;
    MR_Word TargetCodeSucceeded_15;
    MR_Word Var_26;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
    parse_tree__file_names__module_source_filename_5_p_0(Globals_11, Name_10, &SourceFileName_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_11, (MR_Integer) 0, (MR_String) ".erl", Name_10, &TargetFileName_13);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_11, (MR_Integer) 0, (MR_String) ".hrl", Name_10, &HeaderFileName_14);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (ELDS_7));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (SourceFileName_12));
    }
    libs__file_util__output_to_file_6_p_0(Globals_11, TargetFileName_13, Var_26, &TargetCodeSucceeded_15);
    switch (TargetCodeSucceeded_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Succeeded_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String TmpHeaderFileName_16;
          MR_Word Var_29;

          TmpHeaderFileName_16 = mercury__string__f_43_43_2_f_0(HeaderFileName_14, (MR_String) ".tmp");
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Name_10));
            MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (ELDS_7));
            MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (SourceFileName_12));
          }
          libs__file_util__output_to_file_6_p_0(Globals_11, TmpHeaderFileName_16, Var_29, Succeeded_8);
          switch (*Succeeded_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              parse_tree__module_cmds__update_interface_4_p_0(Globals_11, HeaderFileName_14);
              break;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds_to_erlang____Unify____indent_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds_to_erlang____Compare____indent_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__erl_backend__elds_to_erlang__init(void)
{
}

void mercury__erl_backend__elds_to_erlang__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_indent_0);
	MR_register_type_ctor_info(&erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0);
}

void mercury__erl_backend__elds_to_erlang__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__erl_backend__elds_to_erlang__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module erl_backend.elds_to_erlang.
