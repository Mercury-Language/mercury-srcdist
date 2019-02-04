/*
** Automatically generated from `elds_to_erlang.m'
** by the Mercury compiler,
** version rotd-2017-06-22
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module erl_backend.elds_to_erlang. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "erl_backend.elds.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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


static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0;

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1;

static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2];

static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2];

static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2];

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2);

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2);

static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void);

static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
  MR_Integer erl_backend__elds_to_erlang__N_4);

static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
  MR_Integer erl_backend__elds_to_erlang__N_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
  MR_Char erl_backend__elds_to_erlang__Char_6);

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
  MR_String erl_backend__elds_to_erlang__String_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
  MR_Word erl_backend__elds_to_erlang__Binop_4);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1);

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
  MR_String erl_backend__elds_to_erlang__String_4);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ModuleName_3);

static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
  MR_String erl_backend__elds_to_erlang__PredName_12,
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
  MR_String erl_backend__elds_to_erlang__Name0_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__RttiId_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
  MR_Char erl_backend__elds_to_erlang__C_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
  MR_String erl_backend__elds_to_erlang__String_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
  MR_Word erl_backend__elds_to_erlang__Var_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Args_10);

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
  MR_String erl_backend__elds_to_erlang__String_5,
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
  MR_Integer * erl_backend__elds_to_erlang__Pos_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
  MR_Float erl_backend__elds_to_erlang__Float_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Term_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Catch_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Expr_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Expr_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Exprs_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Clause_10);

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
  MR_Word erl_backend__elds_to_erlang__Clause_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_String erl_backend__elds_to_erlang__Name_7,
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8);

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
  MR_Word erl_backend__elds_to_erlang__Globals_5,
  MR_Word erl_backend__elds_to_erlang__Import_6);

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
  MR_String erl_backend__elds_to_erlang__EnvVarName_4);

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3);

static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1);

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3);

static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
  void * erl_backend__elds_to_erlang__env_ptr_arg);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
  void * erl_backend__elds_to_erlang__env_ptr_arg);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
  void * erl_backend__elds_to_erlang__env_ptr_arg);

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
  void * erl_backend__elds_to_erlang__env_ptr_arg);

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16);

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__Defn_8,
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19);

static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_4);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2);

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2);


static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_1[7][2];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_2[3][8];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_3[8][7];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_4[10][4];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_5[5][9];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_6[5][3];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_7[2][6];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_8[1][5];

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_9[2][1];


/* sealed */ struct erl_backend__elds_to_erlang__vector_common_type_10_0_s {
  const MR_String erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct erl_backend__elds_to_erlang__vector_common_type_10_0_s erl_backend__elds_to_erlang_vector_common_10[23];



static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_9[0]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ", 1).\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_2[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_3[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_4[10][4] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_term_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_atom_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_5[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_6[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[2])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_7[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_8[0])),
    ((MR_Box) (erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_7[1])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_var_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_7[1])),
    ((MR_Box) (erl_backend__elds_to_erlang__output_var_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0)),
    ((MR_Box) (&erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box erl_backend__elds_to_erlang_scalar_common_9[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &erl_backend__elds_to_erlang_scalar_common_1[5])))
  },
};


static /* final */ const struct erl_backend__elds_to_erlang__vector_common_type_10_0_s erl_backend__elds_to_erlang_vector_common_10[23] = {
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (erl_backend__elds_to_erlang____Unify____indent_0_0_10001)),
  ((MR_Box) (erl_backend__elds_to_erlang____Compare____indent_0_0_10001)),
  (MR_String) "erl_backend.elds_to_erlang",
  (MR_String) "indent",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0 = {
  (MR_String) "in_string",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1 = {
  (MR_String) "in_atom",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001)),
  ((MR_Box) (erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001)),
  (MR_String) "erl_backend.elds_to_erlang",
  (MR_String) "string_or_atom",
  {     erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0 },
  {     erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0
};

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    {
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____indent_0_0(((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
    return erl_backend__elds_to_erlang__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

    {
      erl_backend__elds_to_erlang____Compare____indent_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    {
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
    return erl_backend__elds_to_erlang__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

    {
      erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__2_2;
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__HeadVar__2_1 == erl_backend__elds_to_erlang__HeadVar__2_2);

    return erl_backend__elds_to_erlang__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = erl_backend__elds_to_erlang__HeadVar__2_2;
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = erl_backend__elds_to_erlang__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_3 = erl_backend__elds_to_erlang__HeadVar__1_1;
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_4 = erl_backend__elds_to_erlang__HeadVar__2_2;

    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Cast_HeadVar1_3 == erl_backend__elds_to_erlang__Cast_HeadVar2_4);
    return erl_backend__elds_to_erlang__succeeded;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
  MR_Integer erl_backend__elds_to_erlang__N_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__N_4 <= (MR_Integer) 0);

        if (erl_backend__elds_to_erlang__succeeded)
          {
          }
        else
          {
            MR_Integer erl_backend__elds_to_erlang__Var_11;

            {
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
            erl_backend__elds_to_erlang__Var_11 = (erl_backend__elds_to_erlang__N_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer erl_backend__elds_to_erlang__next_value_of_N_4 = erl_backend__elds_to_erlang__Var_11;

              erl_backend__elds_to_erlang__N_4 = erl_backend__elds_to_erlang__next_value_of_N_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
  MR_Integer erl_backend__elds_to_erlang__N_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__N_4);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__IsLocal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));

    switch (erl_backend__elds_to_erlang__IsLocal_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__ForeignDecl_6);
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__MangledModuleName_10;
    MR_String erl_backend__elds_to_erlang__UppercaseModuleName_11;
    MR_String erl_backend__elds_to_erlang__GuardMacroName_12;
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_13;
    MR_Word erl_backend__elds_to_erlang__Var_18;
    MR_Word erl_backend__elds_to_erlang__Var_21;
    MR_Word erl_backend__elds_to_erlang__Var_22;
    MR_Word erl_backend__elds_to_erlang__Var_24;
    MR_Word erl_backend__elds_to_erlang__Var_26;
    MR_Word erl_backend__elds_to_erlang__Var_30;
    MR_String erl_backend__elds_to_erlang__Version_51;
    MR_String erl_backend__elds_to_erlang__Fullarch_52;
    MR_Word erl_backend__elds_to_erlang__Var_53;
    MR_Word erl_backend__elds_to_erlang__Var_56;
    MR_Word erl_backend__elds_to_erlang__Var_58;
    MR_Word erl_backend__elds_to_erlang__Var_59;
    MR_Word erl_backend__elds_to_erlang__Var_61;
    MR_Word erl_backend__elds_to_erlang__Var_63;
    MR_Word erl_backend__elds_to_erlang__Var_65;
    MR_Word erl_backend__elds_to_erlang__Var_66;
    MR_Word erl_backend__elds_to_erlang__Var_68;
    MR_Word erl_backend__elds_to_erlang__Var_70;
    MR_Word erl_backend__elds_to_erlang__Var_34;
    MR_Word erl_backend__elds_to_erlang__Var_35;
    MR_Word erl_backend__elds_to_erlang__Var_36;
    MR_Word erl_backend__elds_to_erlang__Var_37;
    MR_Word erl_backend__elds_to_erlang__Var_38;
    MR_Word erl_backend__elds_to_erlang__Var_39;
    MR_Word erl_backend__elds_to_erlang__Var_40;
    MR_Word erl_backend__elds_to_erlang__Var_41;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31;

    {
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_51, &erl_backend__elds_to_erlang__Fullarch_52);
    }
    {
      erl_backend__elds_to_erlang__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_70, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_52));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
    }
    {
      erl_backend__elds_to_erlang__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_68, 0) = ((MR_Box) ((MR_String) "% configured for "));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_68, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_70));
    }
    {
      erl_backend__elds_to_erlang__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_66, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_66, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_68));
    }
    {
      erl_backend__elds_to_erlang__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_65, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_51));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_65, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_66));
    }
    {
      erl_backend__elds_to_erlang__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_63, 0) = ((MR_Box) ((MR_String) "% version "));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_63, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_65));
    }
    {
      erl_backend__elds_to_erlang__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_61, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_61, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_63));
    }
    {
      erl_backend__elds_to_erlang__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_59, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_59, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_61));
    }
    {
      erl_backend__elds_to_erlang__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_58, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_58, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_59));
    }
    {
      erl_backend__elds_to_erlang__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_56, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_56, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_58));
    }
    {
      erl_backend__elds_to_erlang__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_53, 0) = ((MR_Box) ((MR_String) "%\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_56));
    }
    {
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__Var_53);
    }
    {
      erl_backend__elds_to_erlang__MangledModuleName_10 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(erl_backend__elds_to_erlang__ModuleName_6);
    }
    {
      mercury__string__to_upper_2_p_0(erl_backend__elds_to_erlang__MangledModuleName_10, &erl_backend__elds_to_erlang__UppercaseModuleName_11);
    }
    {
      mercury__string__append_3_p_2(erl_backend__elds_to_erlang__UppercaseModuleName_11, (MR_String) "_HRL", &erl_backend__elds_to_erlang__GuardMacroName_12);
    }
    {
      erl_backend__elds_to_erlang__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[6])));
    }
    {
      erl_backend__elds_to_erlang__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_24, 0) = ((MR_Box) ((MR_String) "-define("));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_24, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_26));
    }
    {
      erl_backend__elds_to_erlang__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_22, 0) = ((MR_Box) ((MR_String) ").\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_24));
    }
    {
      erl_backend__elds_to_erlang__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_21, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_21, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_22));
    }
    {
      erl_backend__elds_to_erlang__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_18, 0) = ((MR_Box) ((MR_String) "-ifndef("));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_21));
    }
    {
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__Var_18);
    }
    erl_backend__elds_to_erlang__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
    erl_backend__elds_to_erlang__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
    erl_backend__elds_to_erlang__ForeignDecls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
    erl_backend__elds_to_erlang__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
    erl_backend__elds_to_erlang__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
    erl_backend__elds_to_erlang__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
    erl_backend__elds_to_erlang__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
    erl_backend__elds_to_erlang__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
    erl_backend__elds_to_erlang__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
    {
      erl_backend__elds_to_erlang__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_30, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_30, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_30, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__Var_30, erl_backend__elds_to_erlang__ForeignDecls_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "-endif.\n");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
  MR_Char erl_backend__elds_to_erlang__Char_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Integer erl_backend__elds_to_erlang__Int_8;

    {
      mercury__char__to_int_2_p_0(erl_backend__elds_to_erlang__Char_6, &erl_backend__elds_to_erlang__Int_8);
    }
    erl_backend__elds_to_erlang__succeeded = ((MR_Integer) 32 <= erl_backend__elds_to_erlang__Int_8);
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 92);
        erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
        if (erl_backend__elds_to_erlang__succeeded)
          switch (erl_backend__elds_to_erlang__StringOrAtom_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 39);
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
              }
              break;
            case (MR_Integer) 0:
              {
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 34);
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
              }
              break;
          }
      }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_6);
      }
    else
      {
        MR_String erl_backend__elds_to_erlang__Esc_9;

        switch (erl_backend__elds_to_erlang__Int_8) {
          default:
            erl_backend__elds_to_erlang__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^a";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^b";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^c";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 4:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^d";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^e";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^f";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^g";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\b";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\t";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\n";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\v";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\f";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\r";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 14:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^n";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^o";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 16:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^p";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^q";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 18:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^r";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 19:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^s";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 20:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^t";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 21:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^u";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 22:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^v";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 23:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^w";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 24:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^x";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 25:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^y";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 26:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^z";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 27:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\e";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 32:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\s";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 34:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\"";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 39:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\'";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 92:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\\";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 127:
            {
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\d";
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
            break;
        }
        if (erl_backend__elds_to_erlang__succeeded)
          {
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_9);
          }
        else
          {
            MR_String erl_backend__elds_to_erlang__OctalString_10;

            {
              mercury__string__int_to_base_string_3_p_0(erl_backend__elds_to_erlang__Int_8, (MR_Integer) 8, &erl_backend__elds_to_erlang__OctalString_10);
            }
            {
              mercury__io__write_char_3_p_0((MR_Char) 92);
            }
            {
              mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__OctalString_10);
            }
          }
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
  MR_String erl_backend__elds_to_erlang__String_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__Var_10;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9;

    {
      erl_backend__elds_to_erlang__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_10, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_10, 3) = ((MR_Box) (erl_backend__elds_to_erlang__StringOrAtom_5));
    }
    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__Var_10, erl_backend__elds_to_erlang__String_6, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
  MR_Word erl_backend__elds_to_erlang__Binop_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__Var_8 = ((&erl_backend__elds_to_erlang_vector_common_10[4 + erl_backend__elds_to_erlang__Binop_4]))->erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;

    {
      mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Var_8);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__HeadVar__2_2 = ((&erl_backend__elds_to_erlang_vector_common_10[0 + erl_backend__elds_to_erlang__HeadVar__1_1]))->erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;

    return erl_backend__elds_to_erlang__HeadVar__2_2;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
  MR_String erl_backend__elds_to_erlang__String_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Char erl_backend__elds_to_erlang__FirstChar_6;

    {
      erl_backend__elds_to_erlang__succeeded = mercury__string__index_3_p_0(erl_backend__elds_to_erlang__String_4, (MR_Integer) 0, &erl_backend__elds_to_erlang__FirstChar_6);
    }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        {
          erl_backend__elds_to_erlang__succeeded = mercury__char__is_lower_1_p_0(erl_backend__elds_to_erlang__FirstChar_6);
        }
        if (erl_backend__elds_to_erlang__succeeded)
          {
            {
              erl_backend__elds_to_erlang__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__String_4);
            }
            if (erl_backend__elds_to_erlang__succeeded)
              {
                {
                  MR_Integer erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) -1;

                  switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 0)) {
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
                        case (MR_Integer) 102:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "after"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 110:
                          if (((MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) == (MR_Integer) 100))
                            switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 3)) {
                              case (MR_Integer) 0:
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 1;
                                break;
                              case (MR_Integer) 97:
                                if (MR_offset_streq(4, erl_backend__elds_to_erlang__String_4, (MR_String) "andalso"))
                                  erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 2;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "band"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "begin"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bnot"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 5;
                          break;
                        case (MR_Integer) 111:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bor"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
                            case (MR_Integer) 108:
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "bsl"))
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 7;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "bsr"))
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 8;
                              break;
                          }
                          break;
                        case (MR_Integer) 120:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bxor"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 9;
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
                        case (MR_Integer) 97:
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
                            case (MR_Integer) 115:
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "case"))
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 116:
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "catch"))
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 11;
                              break;
                          }
                          break;
                        case (MR_Integer) 111:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "cond"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 12;
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "div"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 13;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "end"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 14;
                      break;
                    case (MR_Integer) 102:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "fun"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 15;
                      break;
                    case (MR_Integer) 105:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "if"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 16;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "let"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 17;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "not"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 18;
                      break;
                    case (MR_Integer) 111:
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
                        case (MR_Integer) 102:
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "of"))
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 19;
                          break;
                        case (MR_Integer) 114:
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
                            case (MR_Integer) 0:
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 20;
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "orelse"))
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 21;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 113:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "query"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 22;
                      break;
                    case (MR_Integer) 114:
                      if (((MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) == (MR_Integer) 101))
                        switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "receive"))
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 23;
                            break;
                          case (MR_Integer) 109:
                            if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "rem"))
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 24;
                            break;
                        }
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "try"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 25;
                      break;
                    case (MR_Integer) 119:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "when"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 120:
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "xor"))
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 27;
                      break;
                  }
                  if ((erl_backend__elds_to_erlang__case_num_0 < (MR_Integer) 0))
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
                  else
                    {
                      /* we found a match; look up the results */
                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                    }
                }
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
              }
          }
      }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__String_4);
      }
    else
      {
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14;

        {
          mercury__io__write_char_3_p_0((MR_Char) 39);
        }
        {
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[9], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 39);
        }
      }
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ModuleName_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__String_4;
    MR_Word erl_backend__elds_to_erlang__ErlangModuleName_5;

    {
      erl_backend__elds_to_erlang__ErlangModuleName_5 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__ModuleName_3);
    }
    {
      erl_backend__elds_to_erlang__String_4 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_5, (MR_String) "__");
    }
    return erl_backend__elds_to_erlang__String_4;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
  MR_String erl_backend__elds_to_erlang__PredName_12,
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__Suffix_19;
    MR_Integer erl_backend__elds_to_erlang__OrigArity_20;
    MR_String erl_backend__elds_to_erlang__PredLabelStr0_21;
    MR_String erl_backend__elds_to_erlang__PredLabelStr_22;
    MR_Integer erl_backend__elds_to_erlang__ModeNum_23;
    MR_String erl_backend__elds_to_erlang__Var_26;
    MR_String erl_backend__elds_to_erlang__Var_28;
    MR_String erl_backend__elds_to_erlang__Var_29;
    MR_String erl_backend__elds_to_erlang__Var_30;
    MR_String erl_backend__elds_to_erlang__Var_35;
    MR_String erl_backend__elds_to_erlang__Var_37;

    switch (erl_backend__elds_to_erlang__PredIsImported_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *erl_backend__elds_to_erlang__MaybeExtModule_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String erl_backend__elds_to_erlang__Var_24;
          MR_Word erl_backend__elds_to_erlang__ErlangModuleName_41;

          {
            erl_backend__elds_to_erlang__ErlangModuleName_41 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
          }
          {
            erl_backend__elds_to_erlang__Var_24 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_41, (MR_String) "__");
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *erl_backend__elds_to_erlang__MaybeExtModule_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Var_24));
          }
        }
        break;
    }
    switch (erl_backend__elds_to_erlang__PredOrFunc_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "f";
          erl_backend__elds_to_erlang__OrigArity_20 = (erl_backend__elds_to_erlang__PredArity_14 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "p";
          erl_backend__elds_to_erlang__OrigArity_20 = erl_backend__elds_to_erlang__PredArity_14;
        }
        break;
    }
    {
      erl_backend__elds_to_erlang__Var_29 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__OrigArity_20);
    }
    {
      erl_backend__elds_to_erlang__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Suffix_19);
    }
    {
      erl_backend__elds_to_erlang__Var_28 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__Var_29, erl_backend__elds_to_erlang__Var_30);
    }
    {
      erl_backend__elds_to_erlang__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Var_28);
    }
    {
      erl_backend__elds_to_erlang__PredLabelStr0_21 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_12, erl_backend__elds_to_erlang__Var_26);
    }
    {
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_10, erl_backend__elds_to_erlang__PredModule_11);
    }
    erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
    if (erl_backend__elds_to_erlang__succeeded)
      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PredIsImported_16 == (MR_Integer) 0);
    if (erl_backend__elds_to_erlang__succeeded)
      {
        MR_String erl_backend__elds_to_erlang__Var_32;
        MR_String erl_backend__elds_to_erlang__Var_34;
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_45;

        {
          erl_backend__elds_to_erlang__ErlangModuleName_45 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
        }
        {
          erl_backend__elds_to_erlang__Var_34 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_45, (MR_String) "__");
        }
        {
          erl_backend__elds_to_erlang__Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", erl_backend__elds_to_erlang__Var_34);
        }
        {
          erl_backend__elds_to_erlang__PredLabelStr_22 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr0_21, erl_backend__elds_to_erlang__Var_32);
        }
      }
    else
      erl_backend__elds_to_erlang__PredLabelStr_22 = erl_backend__elds_to_erlang__PredLabelStr0_21;
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_15, &erl_backend__elds_to_erlang__ModeNum_23);
    }
    {
      erl_backend__elds_to_erlang__Var_37 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_23);
    }
    {
      erl_backend__elds_to_erlang__Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Var_37);
    }
    {
      *erl_backend__elds_to_erlang__ProcNameStr_18 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr_22, erl_backend__elds_to_erlang__Var_35);
    }
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
  MR_String erl_backend__elds_to_erlang__Name0_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__Name_4;
    MR_Integer erl_backend__elds_to_erlang__Var_9;

    {
      erl_backend__elds_to_erlang__Var_9 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Name0_3);
    }
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Var_9 <= (MR_Integer) 200);
    if (erl_backend__elds_to_erlang__succeeded)
      erl_backend__elds_to_erlang__Name_4 = erl_backend__elds_to_erlang__Name0_3;
    else
      {
        MR_Integer erl_backend__elds_to_erlang__Hash_5;
        MR_String erl_backend__elds_to_erlang__Left_6;
        MR_String erl_backend__elds_to_erlang__Right_7;
        MR_String erl_backend__elds_to_erlang__Middle_8;
        MR_Integer erl_backend__elds_to_erlang__Var_11;
        MR_Word erl_backend__elds_to_erlang__Var_16;
        MR_Word erl_backend__elds_to_erlang__Var_17;
        MR_Word erl_backend__elds_to_erlang__Var_19;
        MR_Word erl_backend__elds_to_erlang__Var_20;
        MR_Word erl_backend__elds_to_erlang__Var_22;

        {
          erl_backend__elds_to_erlang__Var_11 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Name0_3);
        }
        erl_backend__elds_to_erlang__Hash_5 = (erl_backend__elds_to_erlang__Var_11 & (MR_Integer) 4294967295);
        {
          erl_backend__elds_to_erlang__Left_6 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
        {
          erl_backend__elds_to_erlang__Right_7 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
        {
          erl_backend__elds_to_erlang__Middle_8 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_5, (MR_Integer) 16);
        }
        {
          erl_backend__elds_to_erlang__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_7));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__elds_to_erlang__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_20, 0) = ((MR_Box) ((MR_String) "..."));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_22));
        }
        {
          erl_backend__elds_to_erlang__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_19, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_8));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_20));
        }
        {
          erl_backend__elds_to_erlang__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_17, 0) = ((MR_Box) ((MR_String) "..."));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_17, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_19));
        }
        {
          erl_backend__elds_to_erlang__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_16, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_6));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_17));
        }
        {
          erl_backend__elds_to_erlang__Name_4 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__Var_16);
        }
      }
    return erl_backend__elds_to_erlang__Name_4;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__RttiId_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__CurModuleName_8;
    MR_Word erl_backend__elds_to_erlang__InstanceModule_13;
    MR_String erl_backend__elds_to_erlang__Atom1_15;
    MR_String erl_backend__elds_to_erlang__Atom_28;
    MR_Integer erl_backend__elds_to_erlang__Var_65;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, &erl_backend__elds_to_erlang__CurModuleName_8);
    }
    switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word erl_backend__elds_to_erlang__RttiTypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
          MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 0)));
          MR_Word erl_backend__elds_to_erlang__CRttiId_14;
          MR_String erl_backend__elds_to_erlang__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 1)));
          MR_Integer erl_backend__elds_to_erlang__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 2)));
          MR_String erl_backend__elds_to_erlang__Var_50;

          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__ModuleName_10)) == (MR_mktag((MR_Integer) 0)));
          if (erl_backend__elds_to_erlang__succeeded)
            {
              erl_backend__elds_to_erlang__Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ModuleName_10, (MR_Integer) 0)));
              erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__Var_50, (MR_String) "") == 0);
            }
          if (erl_backend__elds_to_erlang__succeeded)
            {
              erl_backend__elds_to_erlang__InstanceModule_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
          else
            erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__ModuleName_10;
          {
            erl_backend__elds_to_erlang__CRttiId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 0) = ((MR_Box) (erl_backend__elds_to_erlang__RttiTypeCtor_9));
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
          }
          {
            backend_libs__rtti__id_to_c_identifier_2_p_0(erl_backend__elds_to_erlang__CRttiId_14, &erl_backend__elds_to_erlang__Atom1_15);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word erl_backend__elds_to_erlang__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
          MR_String erl_backend__elds_to_erlang__Atom0_17;
          MR_String erl_backend__elds_to_erlang__Var_47;

          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
          {
            erl_backend__elds_to_erlang__Var_47 = backend_libs__rtti__type_info_to_string_1_f_0(erl_backend__elds_to_erlang__TypeInfo_16);
          }
          {
            erl_backend__elds_to_erlang__Atom0_17 = mercury__string__f_43_43_2_f_0((MR_String) "ti_", erl_backend__elds_to_erlang__Var_47);
          }
          {
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_17, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word erl_backend__elds_to_erlang__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
          MR_String erl_backend__elds_to_erlang__Prefix_20;
          MR_String erl_backend__elds_to_erlang__Var_43;
          MR_String erl_backend__elds_to_erlang__Atom0_57;
          MR_Integer erl_backend__elds_to_erlang__Var_19;

          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3)));
          if (erl_backend__elds_to_erlang__succeeded)
            {
              erl_backend__elds_to_erlang__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__PseudoTypeInfo_18, (MR_Integer) 0)));
              erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "type_var_";
            }
          else
            erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "pti_";
          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
          {
            erl_backend__elds_to_erlang__Var_43 = backend_libs__rtti__pseudo_type_info_to_string_1_f_0(erl_backend__elds_to_erlang__PseudoTypeInfo_18);
          }
          {
            erl_backend__elds_to_erlang__Atom0_57 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__Prefix_20, erl_backend__elds_to_erlang__Var_43);
          }
          {
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_57, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word erl_backend__elds_to_erlang__TCName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
          MR_String erl_backend__elds_to_erlang__InstanceStr_22;
          MR_Word erl_backend__elds_to_erlang__ClassModuleName_23;
          MR_String erl_backend__elds_to_erlang__ClassName_24;
          MR_Integer erl_backend__elds_to_erlang__ClassArity_25;
          MR_Word erl_backend__elds_to_erlang__QClassName_26;
          MR_String erl_backend__elds_to_erlang__QClassNameStr_27;
          MR_Word erl_backend__elds_to_erlang__Var_32;
          MR_Word erl_backend__elds_to_erlang__Var_34;
          MR_Word erl_backend__elds_to_erlang__Var_35;
          MR_Word erl_backend__elds_to_erlang__Var_37;
          MR_String erl_backend__elds_to_erlang__Var_38;
          MR_Word erl_backend__elds_to_erlang__Var_39;
          MR_Word erl_backend__elds_to_erlang__Var_41;

          erl_backend__elds_to_erlang__InstanceModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 1)));
          erl_backend__elds_to_erlang__InstanceStr_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 2)));
          erl_backend__elds_to_erlang__ClassModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 0)));
          erl_backend__elds_to_erlang__ClassName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 1)));
          erl_backend__elds_to_erlang__ClassArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 2)));
          {
            erl_backend__elds_to_erlang__QClassName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__ClassModuleName_23));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__ClassName_24));
          }
          {
            erl_backend__elds_to_erlang__QClassNameStr_27 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__QClassName_26, (MR_String) "__");
          }
          {
            erl_backend__elds_to_erlang__Var_38 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ClassArity_25);
          }
          {
            erl_backend__elds_to_erlang__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_41, 0) = ((MR_Box) (erl_backend__elds_to_erlang__InstanceStr_22));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            erl_backend__elds_to_erlang__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_39, 0) = ((MR_Box) ((MR_String) "__"));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_41));
          }
          {
            erl_backend__elds_to_erlang__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_37, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Var_38));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_37, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_39));
          }
          {
            erl_backend__elds_to_erlang__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_35, 0) = ((MR_Box) ((MR_String) "__arity"));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_35, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_37));
          }
          {
            erl_backend__elds_to_erlang__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_34, 0) = ((MR_Box) (erl_backend__elds_to_erlang__QClassNameStr_27));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_34, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_35));
          }
          {
            erl_backend__elds_to_erlang__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_32, 0) = ((MR_Box) ((MR_String) "BaseTypeclassInfo_"));
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_32, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_34));
          }
          {
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__Var_32);
          }
        }
        break;
    }
    {
      erl_backend__elds_to_erlang__Var_65 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
    }
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Var_65 <= (MR_Integer) 200);
    if (erl_backend__elds_to_erlang__succeeded)
      erl_backend__elds_to_erlang__Atom_28 = erl_backend__elds_to_erlang__Atom1_15;
    else
      {
        MR_Integer erl_backend__elds_to_erlang__Hash_61;
        MR_String erl_backend__elds_to_erlang__Left_62;
        MR_String erl_backend__elds_to_erlang__Right_63;
        MR_String erl_backend__elds_to_erlang__Middle_64;
        MR_Integer erl_backend__elds_to_erlang__Var_67;
        MR_Word erl_backend__elds_to_erlang__Var_72;
        MR_Word erl_backend__elds_to_erlang__Var_73;
        MR_Word erl_backend__elds_to_erlang__Var_75;
        MR_Word erl_backend__elds_to_erlang__Var_76;
        MR_Word erl_backend__elds_to_erlang__Var_78;

        {
          erl_backend__elds_to_erlang__Var_67 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
        }
        erl_backend__elds_to_erlang__Hash_61 = (erl_backend__elds_to_erlang__Var_67 & (MR_Integer) 4294967295);
        {
          erl_backend__elds_to_erlang__Left_62 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
        {
          erl_backend__elds_to_erlang__Right_63 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
        {
          erl_backend__elds_to_erlang__Middle_64 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_61, (MR_Integer) 16);
        }
        {
          erl_backend__elds_to_erlang__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_78, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_63));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          erl_backend__elds_to_erlang__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_76, 0) = ((MR_Box) ((MR_String) "..."));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_76, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_78));
        }
        {
          erl_backend__elds_to_erlang__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_75, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_64));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_75, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_76));
        }
        {
          erl_backend__elds_to_erlang__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_73, 0) = ((MR_Box) ((MR_String) "..."));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_73, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_75));
        }
        {
          erl_backend__elds_to_erlang__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_72, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_62));
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_72, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_73));
        }
        {
          erl_backend__elds_to_erlang__Atom_28 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__Var_72);
        }
      }
    {
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__CurModuleName_8, erl_backend__elds_to_erlang__InstanceModule_13);
    }
    if (erl_backend__elds_to_erlang__succeeded)
      {
      }
    else
      {
        MR_String erl_backend__elds_to_erlang__Var_52;
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_82;

        {
          erl_backend__elds_to_erlang__ErlangModuleName_82 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__InstanceModule_13);
        }
        {
          erl_backend__elds_to_erlang__Var_52 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_82, (MR_String) "__");
        }
        {
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Var_52);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
      }
    {
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_28);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__MaybeExtModule_8;
    MR_String erl_backend__elds_to_erlang__Name_9;
    MR_String erl_backend__elds_to_erlang__ShortName_11;
    MR_Word erl_backend__elds_to_erlang__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 0)));
    MR_Integer erl_backend__elds_to_erlang__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__RttiProcName_24;
    MR_Word erl_backend__elds_to_erlang__PredOrFunc_25;
    MR_Word erl_backend__elds_to_erlang__ThisModule_26;
    MR_Word erl_backend__elds_to_erlang__PredModule_27;
    MR_String erl_backend__elds_to_erlang__PredName_28;
    MR_Integer erl_backend__elds_to_erlang__PredArity_29;
    MR_Word erl_backend__elds_to_erlang__PredIsImported0_36;
    MR_Word erl_backend__elds_to_erlang__Origin_38;
    MR_Word erl_backend__elds_to_erlang__PredInfo_41;
    MR_Word erl_backend__elds_to_erlang__PredStatus_42;
    MR_Word erl_backend__elds_to_erlang__PredIsImported_44;
    MR_Word erl_backend__elds_to_erlang___ArgTypes_30;
    MR_Word erl_backend__elds_to_erlang___PredId_31;
    MR_Integer erl_backend__elds_to_erlang___ProcId_32;
    MR_Word erl_backend__elds_to_erlang___HeadVarsWithNames_33;
    MR_Word erl_backend__elds_to_erlang___ArgModes_34;
    MR_Word erl_backend__elds_to_erlang___Detism_35;
    MR_Word erl_backend__elds_to_erlang___PredIsPseudoImported_37;
    MR_Word erl_backend__elds_to_erlang___ProcIsExported_39;
    MR_Word erl_backend__elds_to_erlang___ProcIsImported_40;
    MR_Word erl_backend__elds_to_erlang__Var_47;
    MR_Word erl_backend__elds_to_erlang__Var_43;
    MR_Word erl_backend__elds_to_erlang__SpecialPredId_45;
    MR_Word erl_backend__elds_to_erlang__TypeCtor_46;

    {
      erl_backend__elds_to_erlang__RttiProcName_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, erl_backend__elds_to_erlang__ProcId_23);
    }
    erl_backend__elds_to_erlang__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 0)));
    erl_backend__elds_to_erlang__ThisModule_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 1)));
    erl_backend__elds_to_erlang__PredModule_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 2)));
    erl_backend__elds_to_erlang__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 3)));
    erl_backend__elds_to_erlang__PredArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 4)));
    erl_backend__elds_to_erlang___ArgTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 5)));
    erl_backend__elds_to_erlang___PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 6)));
    erl_backend__elds_to_erlang___ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 7)));
    erl_backend__elds_to_erlang___HeadVarsWithNames_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 8)));
    erl_backend__elds_to_erlang___ArgModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 9)));
    erl_backend__elds_to_erlang___Detism_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) & (MR_Integer) 7);
    erl_backend__elds_to_erlang__PredIsImported0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    erl_backend__elds_to_erlang___PredIsPseudoImported_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    erl_backend__elds_to_erlang__Origin_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 11)));
    erl_backend__elds_to_erlang___ProcIsExported_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) & (MR_Integer) 1);
    erl_backend__elds_to_erlang___ProcIsImported_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, &erl_backend__elds_to_erlang__PredInfo_41);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__elds_to_erlang__PredInfo_41, &erl_backend__elds_to_erlang__PredStatus_42);
    }
    erl_backend__elds_to_erlang__Var_47 = (MR_Word) erl_backend__elds_to_erlang__PredStatus_42;
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_47)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_47, (MR_Integer) 0)));
        erl_backend__elds_to_erlang__PredIsImported_44 = (MR_Integer) 0;
      }
    else
      erl_backend__elds_to_erlang__PredIsImported_44 = erl_backend__elds_to_erlang__PredIsImported0_36;
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Origin_38)) == (MR_mktag((MR_Integer) 0)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__SpecialPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Origin_38, (MR_Integer) 0)));
        erl_backend__elds_to_erlang__TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Origin_38, (MR_Integer) 1)));
        {
          MR_Integer erl_backend__elds_to_erlang__TypeArity_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_46, (MR_Integer) 1)));
          MR_String erl_backend__elds_to_erlang__TypeName_57;
          MR_Word erl_backend__elds_to_erlang__TypeModule_58;
          MR_Word erl_backend__elds_to_erlang__TypeCtorSymName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_46, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__TypeCtorSymName_55)) == (MR_mktag((MR_Integer) 1))))
            {
              erl_backend__elds_to_erlang__TypeModule_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_55, (MR_Integer) 0)));
              erl_backend__elds_to_erlang__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_55, (MR_Integer) 1)));
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
            }
          else
            {
              erl_backend__elds_to_erlang__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtorSymName_55, (MR_Integer) 0)));
              {
                erl_backend__elds_to_erlang__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(erl_backend__elds_to_erlang__TypeCtor_46);
              }
              if (erl_backend__elds_to_erlang__succeeded)
                {
                  {
                    erl_backend__elds_to_erlang__TypeModule_58 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                }
            }
          if (erl_backend__elds_to_erlang__succeeded)
            {
              MR_String erl_backend__elds_to_erlang__ProcNameStr0_59;
              MR_String erl_backend__elds_to_erlang__TypeModuleStr_60;
              MR_String erl_backend__elds_to_erlang__ProcNameStr1_61;
              MR_Integer erl_backend__elds_to_erlang__ModeNum_62;
              MR_String erl_backend__elds_to_erlang__Var_64;
              MR_String erl_backend__elds_to_erlang__Var_65;
              MR_String erl_backend__elds_to_erlang__Var_67;
              MR_String erl_backend__elds_to_erlang__Var_68;
              MR_String erl_backend__elds_to_erlang__Var_69;
              MR_String erl_backend__elds_to_erlang__Var_71;
              MR_Word erl_backend__elds_to_erlang__ErlangModuleName_81;
              MR_Integer erl_backend__elds_to_erlang__Var_76;

              {
                erl_backend__elds_to_erlang__ProcNameStr0_59 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_28, (MR_String) "__");
              }
              {
                erl_backend__elds_to_erlang__ErlangModuleName_81 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__TypeModule_58);
              }
              {
                erl_backend__elds_to_erlang__TypeModuleStr_60 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_81, (MR_String) "__");
              }
              {
                erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__TypeModule_58);
              }
              erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
              if (erl_backend__elds_to_erlang__succeeded)
                {
                  erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__SpecialPredId_45 == (MR_Integer) 0);
                  if (erl_backend__elds_to_erlang__succeeded)
                    {
                      {
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__elds_to_erlang__Var_76);
                      }
                      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__ProcId_23 == erl_backend__elds_to_erlang__Var_76);
                      erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
                    }
                }
              if (erl_backend__elds_to_erlang__succeeded)
                {
                  {
                    erl_backend__elds_to_erlang__ProcNameStr1_61 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr0_59, erl_backend__elds_to_erlang__TypeModuleStr_60);
                  }
                  erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  erl_backend__elds_to_erlang__ProcNameStr1_61 = erl_backend__elds_to_erlang__ProcNameStr0_59;
                  {
                    erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__TypeModule_58, erl_backend__elds_to_erlang__ThisModule_26);
                  }
                  erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
                  if (erl_backend__elds_to_erlang__succeeded)
                    {
                      erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, 0) = ((MR_Box) (erl_backend__elds_to_erlang__TypeModuleStr_60));
                    }
                  else
                    erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              {
                hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_23, &erl_backend__elds_to_erlang__ModeNum_62);
              }
              {
                erl_backend__elds_to_erlang__Var_68 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__TypeArity_56);
              }
              {
                erl_backend__elds_to_erlang__Var_71 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_62);
              }
              {
                erl_backend__elds_to_erlang__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Var_71);
              }
              {
                erl_backend__elds_to_erlang__Var_67 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__Var_68, erl_backend__elds_to_erlang__Var_69);
              }
              {
                erl_backend__elds_to_erlang__Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Var_67);
              }
              {
                erl_backend__elds_to_erlang__Var_64 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__TypeName_57, erl_backend__elds_to_erlang__Var_65);
              }
              {
                erl_backend__elds_to_erlang__Name_9 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr1_61, erl_backend__elds_to_erlang__Var_64);
              }
            }
          else
            {
              MR_String erl_backend__elds_to_erlang__Var_74;

              {
                erl_backend__elds_to_erlang__Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred ", erl_backend__elds_to_erlang__PredName_28);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.erlang_special_proc_name\'/7", erl_backend__elds_to_erlang__Var_74);
                return;
              }
            }
        }
      }
    else
      {
        erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__PredModule_27, erl_backend__elds_to_erlang__PredName_28, erl_backend__elds_to_erlang__PredOrFunc_25, erl_backend__elds_to_erlang__PredArity_29, erl_backend__elds_to_erlang__ProcId_23, erl_backend__elds_to_erlang__PredIsImported_44, &erl_backend__elds_to_erlang__MaybeExtModule_8, &erl_backend__elds_to_erlang__Name_9);
      }
    if ((erl_backend__elds_to_erlang__MaybeExtModule_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_String erl_backend__elds_to_erlang__ExtModule_10 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, (MR_Integer) 0)));

        {
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExtModule_10);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
      }
    {
      erl_backend__elds_to_erlang__ShortName_11 = erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(erl_backend__elds_to_erlang__Name_9);
    }
    {
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ShortName_11);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
  MR_Char erl_backend__elds_to_erlang__C_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    {
      erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__C_4);
    }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__C_4);
      }
    else
      {
        MR_Integer erl_backend__elds_to_erlang__Var_9;

        {
          erl_backend__elds_to_erlang__Var_9 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__C_4);
        }
        {
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Var_9);
        }
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
  MR_String erl_backend__elds_to_erlang__String_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9;

    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[4], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
  MR_Word erl_backend__elds_to_erlang__Var_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_String erl_backend__elds_to_erlang__VarName_8;
    MR_Integer erl_backend__elds_to_erlang__VarNumber_9;
    MR_String erl_backend__elds_to_erlang__Var_12;
    MR_String erl_backend__elds_to_erlang__Var_14;
    MR_String erl_backend__elds_to_erlang__Var_16;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23;

    {
      mercury__varset__lookup_name_3_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__VarSet_5, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarName_8);
    }
    {
      mercury__term__var_to_int_2_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarNumber_9);
    }
    {
      erl_backend__elds_to_erlang__Var_16 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__VarNumber_9);
    }
    {
      erl_backend__elds_to_erlang__Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Var_16);
    }
    {
      erl_backend__elds_to_erlang__Var_12 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__VarName_8, erl_backend__elds_to_erlang__Var_14);
    }
    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[3], erl_backend__elds_to_erlang__Var_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Args_10)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__SymName_12;
    MR_Word erl_backend__elds_to_erlang__Var_18;
    MR_Word erl_backend__elds_to_erlang__Var_19;
    MR_Word erl_backend__elds_to_erlang__Var_20;
    MR_String erl_backend__elds_to_erlang__Var_21;

    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
        erl_backend__elds_to_erlang__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Var_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (erl_backend__elds_to_erlang__succeeded)
          {
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_18)) == (MR_mktag((MR_Integer) 2)));
            if (erl_backend__elds_to_erlang__succeeded)
              {
                erl_backend__elds_to_erlang__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Var_18, (MR_Integer) 0)));
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (erl_backend__elds_to_erlang__succeeded)
                  {
                    erl_backend__elds_to_erlang__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_19, (MR_Integer) 1)));
                    {
                      erl_backend__elds_to_erlang__Var_21 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_12);
                    }
                    erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__Var_21, (MR_String) "[]") == 0);
                  }
              }
          }
      }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "[] ");
        }
      }
    else
      {
        MR_Word erl_backend__elds_to_erlang__A_13;
        MR_Word erl_backend__elds_to_erlang__B_14;
        MR_Word erl_backend__elds_to_erlang__Var_24;
        MR_Word erl_backend__elds_to_erlang__Var_25;
        MR_Word erl_backend__elds_to_erlang__Var_26;
        MR_Word erl_backend__elds_to_erlang__Var_27;
        MR_Word erl_backend__elds_to_erlang__Var_28;
        MR_String erl_backend__elds_to_erlang__Var_29;
        MR_Word erl_backend__elds_to_erlang__SymName_49;

        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
        if (erl_backend__elds_to_erlang__succeeded)
          {
            erl_backend__elds_to_erlang__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
            erl_backend__elds_to_erlang__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_24)) == (MR_mktag((MR_Integer) 2)));
            if (erl_backend__elds_to_erlang__succeeded)
              {
                erl_backend__elds_to_erlang__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Var_24, (MR_Integer) 0)));
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_25, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (erl_backend__elds_to_erlang__succeeded)
                  {
                    erl_backend__elds_to_erlang__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_25, (MR_Integer) 1)));
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_26)) == (MR_mktag((MR_Integer) 1)));
                    if (erl_backend__elds_to_erlang__succeeded)
                      {
                        erl_backend__elds_to_erlang__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_26, (MR_Integer) 0)));
                        erl_backend__elds_to_erlang__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_26, (MR_Integer) 1)));
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_27)) == (MR_mktag((MR_Integer) 1)));
                        if (erl_backend__elds_to_erlang__succeeded)
                          {
                            erl_backend__elds_to_erlang__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_27, (MR_Integer) 0)));
                            erl_backend__elds_to_erlang__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_27, (MR_Integer) 1)));
                            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (erl_backend__elds_to_erlang__succeeded)
                              {
                                {
                                  erl_backend__elds_to_erlang__Var_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_49);
                                }
                                erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__Var_29, (MR_String) "[|]") == 0);
                              }
                          }
                      }
                  }
              }
          }
        if (erl_backend__elds_to_erlang__succeeded)
          {
            {
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
            {
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__A_13);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "| ");
            }
            {
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__B_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "] ");
            }
          }
        else
          {
            MR_Word erl_backend__elds_to_erlang__Args1_15;
            MR_Word erl_backend__elds_to_erlang__Var_38;
            MR_Word erl_backend__elds_to_erlang__Var_51;
            MR_Word erl_backend__elds_to_erlang__Var_53;
            MR_Word erl_backend__elds_to_erlang__Var_54;
            MR_String erl_backend__elds_to_erlang__Var_55;

            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__elds_to_erlang__succeeded)
              {
                erl_backend__elds_to_erlang__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
                erl_backend__elds_to_erlang__Args1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
                erl_backend__elds_to_erlang__Var_55 = (MR_String) "{}";
                erl_backend__elds_to_erlang__Var_54 = (MR_Word) &erl_backend__elds_to_erlang_scalar_common_9[0];
                erl_backend__elds_to_erlang__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_to_erlang_scalar_common_1[5]);
                erl_backend__elds_to_erlang__Var_51 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_to_erlang_scalar_common_9[1]);
                {
                  erl_backend__elds_to_erlang__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds_to_erlang__Var_38, erl_backend__elds_to_erlang__Var_51);
                }
              }
            if (erl_backend__elds_to_erlang__succeeded)
              {
                MR_Word erl_backend__elds_to_erlang__Var_64;

                {
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
                {
                  erl_backend__elds_to_erlang__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_64, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_64, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_1));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_64, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_64, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_64, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
                }
                {
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args1_15, (MR_String) ", ", erl_backend__elds_to_erlang__Var_64);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "} ");
                }
              }
            else
              {
                MR_Word erl_backend__elds_to_erlang__Var_78;

                {
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
                {
                  erl_backend__elds_to_erlang__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_78, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_78, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_2));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_78, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_78, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_78, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
                }
                {
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args_10, (MR_String) ", ", erl_backend__elds_to_erlang__Var_78);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "} ");
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
  MR_String erl_backend__elds_to_erlang__String_5,
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
  MR_Integer * erl_backend__elds_to_erlang__Pos_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__elds_to_erlang__succeeded;
        MR_Integer erl_backend__elds_to_erlang__Pos1_9;
        MR_Char erl_backend__elds_to_erlang__Char_10;

        {
          erl_backend__elds_to_erlang__succeeded = mercury__string__unsafe_index_next_4_p_0(erl_backend__elds_to_erlang__String_5, erl_backend__elds_to_erlang__Pos0_7, &erl_backend__elds_to_erlang__Pos1_9, &erl_backend__elds_to_erlang__Char_10);
        }
        if (erl_backend__elds_to_erlang__succeeded)
          {
            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_10 == (MR_Char) 46);
            erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
            if (erl_backend__elds_to_erlang__succeeded)
              {
                switch (erl_backend__elds_to_erlang__Char_10) {
                  default:
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
                    break;
                  case (MR_Char) 69:
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                    break;
                  case (MR_Char) 101:
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                    break;
                }
                if (erl_backend__elds_to_erlang__succeeded)
                  {
                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PrevDigit_6 == (MR_Integer) 1);
                    if (erl_backend__elds_to_erlang__succeeded)
                      {
                        *erl_backend__elds_to_erlang__Pos_8 = erl_backend__elds_to_erlang__Pos0_7;
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                      }
                  }
                else
                  {
                    {
                      erl_backend__elds_to_erlang__succeeded = mercury__char__is_digit_1_p_0(erl_backend__elds_to_erlang__Char_10);
                    }
                    if (erl_backend__elds_to_erlang__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Integer erl_backend__elds_to_erlang__next_value_of_Pos0_7 = erl_backend__elds_to_erlang__Pos1_9;

                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__next_value_of_Pos0_7;
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 1;
                        }
                        continue;
                      }
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Integer erl_backend__elds_to_erlang__next_value_of_Pos0_7 = erl_backend__elds_to_erlang__Pos1_9;

                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__next_value_of_Pos0_7;
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 0;
                        }
                        continue;
                      }
                  }
              }
          }
        return erl_backend__elds_to_erlang__succeeded;
      }
      break;
    }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
  MR_Float erl_backend__elds_to_erlang__Float_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__S_6;
    MR_Integer erl_backend__elds_to_erlang__Pos_7;

    {
      erl_backend__elds_to_erlang__S_6 = mercury__string__from_float_1_f_0(erl_backend__elds_to_erlang__Float_4);
    }
    {
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang__digit_then_e_4_p_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, (MR_Integer) 0, &erl_backend__elds_to_erlang__Pos_7);
    }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        MR_String erl_backend__elds_to_erlang__Var_12;
        MR_String erl_backend__elds_to_erlang__Var_17;
        MR_Integer erl_backend__elds_to_erlang__Var_19;

        {
          erl_backend__elds_to_erlang__Var_12 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, erl_backend__elds_to_erlang__Pos_7);
        }
        {
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Var_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".0");
        }
        {
          erl_backend__elds_to_erlang__Var_19 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__S_6);
        }
        {
          erl_backend__elds_to_erlang__Var_17 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, erl_backend__elds_to_erlang__Pos_7, erl_backend__elds_to_erlang__Var_19);
        }
        {
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Var_17);
        }
      }
    else
      {
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__S_6);
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Term_10)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "_ ");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char erl_backend__elds_to_erlang__Char_16 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));
          MR_Integer erl_backend__elds_to_erlang__Int_64;

          {
            erl_backend__elds_to_erlang__Int_64 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__Char_16);
          }
          {
            erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_1_p_0(erl_backend__elds_to_erlang__Char_16);
          }
          if (erl_backend__elds_to_erlang__succeeded)
            {
              {
                mercury__io__write_char_3_p_0((MR_Char) 36);
              }
              {
                mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_16);
              }
            }
          else
            {
              MR_String erl_backend__elds_to_erlang__Esc_17;

              switch (erl_backend__elds_to_erlang__Int_64) {
                default:
                  erl_backend__elds_to_erlang__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^a";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^b";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^c";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^d";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^e";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^f";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^g";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\b";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\t";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\n";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\v";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\f";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\r";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^n";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^o";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 16:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^p";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 17:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^q";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 18:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^r";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 19:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^s";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 20:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^t";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 21:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^u";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 22:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^v";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 23:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^w";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 24:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^x";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 25:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^y";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 26:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\^z";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 27:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\e";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 32:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\s";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 34:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\\"";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 39:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\\'";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 92:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\\\";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 127:
                  {
                    erl_backend__elds_to_erlang__Esc_17 = (MR_String) "\\d";
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
                  }
                  break;
              }
              if (erl_backend__elds_to_erlang__succeeded)
                {
                  {
                    mercury__io__write_char_3_p_0((MR_Char) 36);
                  }
                  {
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_17);
                  }
                }
              else
                {
                  mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_64);
                }
            }
          {
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer erl_backend__elds_to_erlang__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));

          {
            mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_12);
          }
          {
            erl_backend__elds_to_erlang__space_2_p_0();
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned erl_backend__elds_to_erlang__UInt_13 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                mercury__io__write_uint_3_p_0(erl_backend__elds_to_erlang__UInt_13);
              }
              {
                erl_backend__elds_to_erlang__space_2_p_0();
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float erl_backend__elds_to_erlang__Float_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                erl_backend__elds_to_erlang__output_float_3_p_0(erl_backend__elds_to_erlang__Float_14);
              }
              {
                erl_backend__elds_to_erlang__space_2_p_0();
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String erl_backend__elds_to_erlang__String_15 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
              MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_53_53;

              {
                mercury__io__write_string_3_p_0((MR_String) "<<\"");
              }
              {
                mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[8], erl_backend__elds_to_erlang__String_15, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_53_53);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\">>");
              }
              {
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String erl_backend__elds_to_erlang__String_63 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                erl_backend__elds_to_erlang__write_with_escaping_4_p_0((MR_Integer) 0, erl_backend__elds_to_erlang__String_63);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
              {
                erl_backend__elds_to_erlang__space_2_p_0();
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String erl_backend__elds_to_erlang__Atom_18 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_18);
              }
              {
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word erl_backend__elds_to_erlang__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
              MR_String erl_backend__elds_to_erlang__Var_30;

              {
                erl_backend__elds_to_erlang__Var_30 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_19);
              }
              {
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Var_30);
              }
              {
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word erl_backend__elds_to_erlang__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                erl_backend__elds_to_erlang__output_tuple_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_20);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word erl_backend__elds_to_erlang__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                erl_backend__elds_to_erlang__output_var_4_p_0(erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_21);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String erl_backend__elds_to_erlang__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

              {
                erl_backend__elds_to_erlang__output_var_string_3_p_0(erl_backend__elds_to_erlang__Name_22);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Catch_10)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__PatternA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__PatternB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__CatchExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 2)));
    MR_Integer erl_backend__elds_to_erlang__Var_23;
    MR_Integer erl_backend__elds_to_erlang__Var_26;
    MR_Word erl_backend__elds_to_erlang__Exprs_42;

    {
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternA_12);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
    {
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternB_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
    erl_backend__elds_to_erlang__Var_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Var_23);
    }
    erl_backend__elds_to_erlang__Var_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__CatchExpr_14)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CatchExpr_14, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_26, erl_backend__elds_to_erlang__Exprs_42);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_26, erl_backend__elds_to_erlang__CatchExpr_14);
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Expr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));
    MR_Integer erl_backend__elds_to_erlang__Var_19;
    MR_Integer erl_backend__elds_to_erlang__Var_22;
    MR_Word erl_backend__elds_to_erlang__Exprs_44;

    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
    }
    {
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Pattern_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
    erl_backend__elds_to_erlang__Var_19 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Var_19);
    }
    erl_backend__elds_to_erlang__Var_22 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_11)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_11, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_22, erl_backend__elds_to_erlang__Exprs_44);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_22, erl_backend__elds_to_erlang__Expr_11);
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Expr_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__elds_to_erlang__succeeded;

        switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word erl_backend__elds_to_erlang__Clause_25 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Expr_10), (MR_Integer) 0);

              {
                mercury__io__write_string_3_p_0((MR_String) "(fun");
              }
              {
                erl_backend__elds_to_erlang__output_clause_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Clause_25);
              }
              {
                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "end)");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word erl_backend__elds_to_erlang__Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

              if ((erl_backend__elds_to_erlang__Var_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.output_expr\'/6", (MR_String) "empty elds_block");
                    return;
                  }
                }
              else
                {
                  MR_Integer erl_backend__elds_to_erlang__Var_157;
                  MR_Integer erl_backend__elds_to_erlang__Var_160;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(begin");
                  }
                  erl_backend__elds_to_erlang__Var_157 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Var_157);
                  }
                  erl_backend__elds_to_erlang__Var_160 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_160, erl_backend__elds_to_erlang__Var_192);
                  }
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word erl_backend__elds_to_erlang__Term_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

              {
                erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Term_15);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word erl_backend__elds_to_erlang__ExprA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__elds_to_erlang__ExprB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

                  {
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_16);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "= ");
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__elds_to_erlang__next_value_of_Expr_10 = erl_backend__elds_to_erlang__ExprB_17;

                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__next_value_of_Expr_10;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word erl_backend__elds_to_erlang__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_String erl_backend__elds_to_erlang__Var_146;
                  MR_Word erl_backend__elds_to_erlang__ExprA_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

                  {
                    erl_backend__elds_to_erlang__Var_146 = erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(erl_backend__elds_to_erlang__Unop_18);
                  }
                  {
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Var_146);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__elds_to_erlang__next_value_of_Expr_10 = erl_backend__elds_to_erlang__ExprA_170;

                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__next_value_of_Expr_10;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word erl_backend__elds_to_erlang__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__elds_to_erlang__ExprA_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
                  MR_Word erl_backend__elds_to_erlang__ExprB_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));

                  {
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_171);
                  }
                  {
                    erl_backend__elds_to_erlang__output_elds_binop_3_p_0(erl_backend__elds_to_erlang__Binop_19);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__elds_to_erlang__next_value_of_Expr_10 = erl_backend__elds_to_erlang__ExprB_172;

                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__next_value_of_Expr_10;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word erl_backend__elds_to_erlang__CallTarget_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__elds_to_erlang__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

                  switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__CallTarget_20)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word erl_backend__elds_to_erlang__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

                        {
                          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_22);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word erl_backend__elds_to_erlang__Closure_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

                        {
                          erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Closure_23);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String erl_backend__elds_to_erlang__FunName_24 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

                        {
                          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__FunName_24);
                        }
                      }
                      break;
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
                  {
                    erl_backend__elds_to_erlang__output_exprs_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_21);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word erl_backend__elds_to_erlang__RttiId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_33)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "fun ");
                        }
                        {
                          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "/0 ");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        {
                          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "()");
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word erl_backend__elds_to_erlang__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
                  MR_Integer erl_backend__elds_to_erlang__Var_112;
                  MR_Integer erl_backend__elds_to_erlang__Var_115;
                  MR_Word erl_backend__elds_to_erlang__Var_122;
                  MR_Integer erl_backend__elds_to_erlang__Var_124;
                  MR_Word erl_backend__elds_to_erlang__ExprA_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(case");
                  }
                  erl_backend__elds_to_erlang__Var_112 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Var_112);
                  }
                  erl_backend__elds_to_erlang__Var_115 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_115, erl_backend__elds_to_erlang__ExprA_173);
                  }
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "of");
                  }
                  erl_backend__elds_to_erlang__Var_124 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_122, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_122, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_1));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_122, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_122, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_122, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Var_124));
                  }
                  {
                    mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_26, (MR_String) ";", erl_backend__elds_to_erlang__Var_122);
                  }
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word erl_backend__elds_to_erlang__MaybeCatch_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));
                  MR_Word erl_backend__elds_to_erlang__MaybeAfter_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 4)));
                  MR_Integer erl_backend__elds_to_erlang__Var_75;
                  MR_Integer erl_backend__elds_to_erlang__Var_78;
                  MR_Word erl_backend__elds_to_erlang__ExprA_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__elds_to_erlang__Cases_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(try");
                  }
                  erl_backend__elds_to_erlang__Var_75 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Var_75);
                  }
                  erl_backend__elds_to_erlang__Var_78 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_78, erl_backend__elds_to_erlang__ExprA_174);
                  }
                  if ((erl_backend__elds_to_erlang__Cases_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word erl_backend__elds_to_erlang__Var_85;
                      MR_Integer erl_backend__elds_to_erlang__Var_87;

                      {
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "of");
                      }
                      erl_backend__elds_to_erlang__Var_87 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                      {
                        erl_backend__elds_to_erlang__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_85, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_85, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_3));
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_85, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_85, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_85, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Var_87));
                      }
                      {
                        mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_175, (MR_String) ";", erl_backend__elds_to_erlang__Var_85);
                      }
                    }
                  if ((erl_backend__elds_to_erlang__MaybeCatch_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word erl_backend__elds_to_erlang__Catch_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeCatch_27, (MR_Integer) 0)));
                      MR_Integer erl_backend__elds_to_erlang__Var_92;
                      MR_Integer erl_backend__elds_to_erlang__Var_95;

                      {
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "catch");
                      }
                      erl_backend__elds_to_erlang__Var_92 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                      {
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Var_92);
                      }
                      erl_backend__elds_to_erlang__Var_95 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                      {
                        erl_backend__elds_to_erlang__output_catch_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_95, erl_backend__elds_to_erlang__Catch_31);
                      }
                    }
                  if ((erl_backend__elds_to_erlang__MaybeAfter_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word erl_backend__elds_to_erlang__After_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeAfter_28, (MR_Integer) 0)));
                      MR_Integer erl_backend__elds_to_erlang__Var_101;
                      MR_Integer erl_backend__elds_to_erlang__Var_104;

                      {
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "after");
                      }
                      erl_backend__elds_to_erlang__Var_101 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                      {
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Var_101);
                      }
                      erl_backend__elds_to_erlang__Var_104 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                      {
                        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_104, erl_backend__elds_to_erlang__After_32);
                      }
                    }
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word erl_backend__elds_to_erlang__ExprA_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "throw(");
                  }
                  {
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_176);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_String erl_backend__elds_to_erlang__Code_40 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__elds_to_erlang___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

                  {
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_40);
                  }
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word erl_backend__elds_to_erlang__ExprA_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
                  MR_Word erl_backend__elds_to_erlang__ExprB_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

                  {
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_177);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) " ! ");
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word erl_backend__elds_to_erlang__next_value_of_Expr_10 = erl_backend__elds_to_erlang__ExprB_178;

                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__next_value_of_Expr_10;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word erl_backend__elds_to_erlang__Var_47;
                  MR_Integer erl_backend__elds_to_erlang__Var_49;
                  MR_Word erl_backend__elds_to_erlang__Cases_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "(receive");
                  }
                  erl_backend__elds_to_erlang__Var_49 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
                  {
                    erl_backend__elds_to_erlang__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_47, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_47, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_2));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_47, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_47, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_47, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Var_49));
                  }
                  {
                    mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_179, (MR_String) ";", erl_backend__elds_to_erlang__Var_47);
                  }
                  {
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Expr_10)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Exprs_12;

    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Exprs_12);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Expr_10);
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Exprs_10)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__Var_15;

    {
      erl_backend__elds_to_erlang__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_15, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_exprs_6_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_15, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_15, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_15, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Exprs_10, (MR_String) ", ", erl_backend__elds_to_erlang__Var_15);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool erl_backend__elds_to_erlang__succeeded;

        if ((erl_backend__elds_to_erlang__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word erl_backend__elds_to_erlang__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word erl_backend__elds_to_erlang__Exprs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));

            {
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_16);
            }
            if ((erl_backend__elds_to_erlang__Exprs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word erl_backend__elds_to_erlang__Expr_43;
                MR_Word erl_backend__elds_to_erlang__Exprs_44;

                {
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
                {
                  mercury__io__nl_2_p_0();
                }
                {
                  erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                }
                erl_backend__elds_to_erlang__Expr_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 0)));
                erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 1)));
                {
                  erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_43);
                }
                if ((erl_backend__elds_to_erlang__Exprs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                  }
                else
                  {
                    {
                      mercury__io__write_char_3_p_0((MR_Char) 44);
                    }
                    {
                      mercury__io__nl_2_p_0();
                    }
                    {
                      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word erl_backend__elds_to_erlang__next_value_of_HeadVar__4_4 = erl_backend__elds_to_erlang__Exprs_44;

                      erl_backend__elds_to_erlang__HeadVar__4_4 = erl_backend__elds_to_erlang__next_value_of_HeadVar__4_4;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
  MR_Word erl_backend__elds_to_erlang__Clause_10)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__Pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Expr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Var_19;
    MR_Integer erl_backend__elds_to_erlang__Var_23;
    MR_Integer erl_backend__elds_to_erlang__Var_26;
    MR_Word erl_backend__elds_to_erlang__Exprs_46;

    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      erl_backend__elds_to_erlang__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_clause_6_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_12, (MR_String) ", ", erl_backend__elds_to_erlang__Var_19);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
    erl_backend__elds_to_erlang__Var_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Var_23);
    }
    erl_backend__elds_to_erlang__Var_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_13)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_13, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_26, erl_backend__elds_to_erlang__Exprs_46);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_26, erl_backend__elds_to_erlang__Expr_13);
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
  MR_Word erl_backend__elds_to_erlang__Clause_8)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__Pattern_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Expr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Var_28;
    MR_Integer erl_backend__elds_to_erlang__Var_35;
    MR_Word erl_backend__elds_to_erlang__Exprs_55;

    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      erl_backend__elds_to_erlang__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_28, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_28, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_28, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_28, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_7));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_28, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_23, (MR_String) ", ", erl_backend__elds_to_erlang__Var_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
    erl_backend__elds_to_erlang__Var_35 = ((MR_Integer) 0 + (MR_Integer) 1);
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_24)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_24, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, erl_backend__elds_to_erlang__VarSet_7, erl_backend__elds_to_erlang__Var_35, erl_backend__elds_to_erlang__Exprs_55);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, erl_backend__elds_to_erlang__VarSet_7, erl_backend__elds_to_erlang__Var_35, erl_backend__elds_to_erlang__Expr_24);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__RttiId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 3)));
    MR_Word erl_backend__elds_to_erlang__Pattern_34;
    MR_Word erl_backend__elds_to_erlang__Expr_35;
    MR_Word erl_backend__elds_to_erlang__Var_39;
    MR_Integer erl_backend__elds_to_erlang__Var_46;
    MR_Word erl_backend__elds_to_erlang___IsExported_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Exprs_66;

    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__RttiId_8);
    }
    erl_backend__elds_to_erlang__Pattern_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 0)));
    erl_backend__elds_to_erlang__Expr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      erl_backend__elds_to_erlang__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_39, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_39, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_39, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_10));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_39, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_34, (MR_String) ", ", erl_backend__elds_to_erlang__Var_39);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
    erl_backend__elds_to_erlang__Var_46 = ((MR_Integer) 0 + (MR_Integer) 1);
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_35)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_35, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_10, erl_backend__elds_to_erlang__Var_46, erl_backend__elds_to_erlang__Exprs_66);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_10, erl_backend__elds_to_erlang__Var_46, erl_backend__elds_to_erlang__Expr_35);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Clause_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__Pattern_33;
    MR_Word erl_backend__elds_to_erlang__Expr_34;
    MR_Word erl_backend__elds_to_erlang__Var_38;
    MR_Integer erl_backend__elds_to_erlang__Var_45;
    MR_Word erl_backend__elds_to_erlang__Exprs_65;

    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Name_8);
    }
    erl_backend__elds_to_erlang__Pattern_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
    erl_backend__elds_to_erlang__Expr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      erl_backend__elds_to_erlang__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_38, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_38, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_38, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_38, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_9));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_38, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_33, (MR_String) ", ", erl_backend__elds_to_erlang__Var_38);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
    erl_backend__elds_to_erlang__Var_45 = ((MR_Integer) 0 + (MR_Integer) 1);
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_34)) == (MR_mktag((MR_Integer) 1)));
    if (erl_backend__elds_to_erlang__succeeded)
      {
        erl_backend__elds_to_erlang__Exprs_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_34, (MR_Integer) 0)));
        {
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Var_45, erl_backend__elds_to_erlang__Exprs_65);
        }
      }
    else
      {
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Var_45, erl_backend__elds_to_erlang__Expr_34);
      }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
    {
      erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(),");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_String erl_backend__elds_to_erlang__Name_7,
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    if ((erl_backend__elds_to_erlang__PredProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word erl_backend__elds_to_erlang__Var_19;
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20;

        {
          mercury__io__nl_2_p_0();
        }
        {
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 0);
        }
        {
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Name_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "() ->");
        }
        {
          erl_backend__elds_to_erlang__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[7]));
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1));
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
        }
        {
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__Var_19, erl_backend__elds_to_erlang__PredProcIds_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "void.\n");
        }
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__FileName_14;
    MR_Integer erl_backend__elds_to_erlang__LineNr_15;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20;

    {
      mercury__io__output_stream_name_3_p_0(&erl_backend__elds_to_erlang__FileName_14);
    }
    {
      mercury__io__get_output_line_number_3_p_0(&erl_backend__elds_to_erlang__LineNr_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
    }
    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[7], erl_backend__elds_to_erlang__FileName_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
    {
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_15);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 0)));

    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String erl_backend__elds_to_erlang__IncludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
        MR_String erl_backend__elds_to_erlang__FileName_33;
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39;

        {
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_21, &erl_backend__elds_to_erlang__FileName_33);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
        {
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[5], erl_backend__elds_to_erlang__FileName_33, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
        {
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
        {
          libs__file_util__write_include_file_contents_cur_stream_3_p_0(erl_backend__elds_to_erlang__FileName_33);
        }
      }
    else
      {
        MR_String erl_backend__elds_to_erlang__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
        MR_String erl_backend__elds_to_erlang__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 0)));
        MR_Integer erl_backend__elds_to_erlang__LineNr_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 1)));
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64;

        {
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
        {
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[6], erl_backend__elds_to_erlang__FileName_58, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
        {
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_59);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
        {
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_20);
        }
      }
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang___IsLocal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String erl_backend__elds_to_erlang__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
        MR_String erl_backend__elds_to_erlang__FileName_34;
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40;

        {
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_22, &erl_backend__elds_to_erlang__FileName_34);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
        {
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[3], erl_backend__elds_to_erlang__FileName_34, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
        {
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
        {
          libs__file_util__write_include_file_contents_cur_stream_3_p_0(erl_backend__elds_to_erlang__FileName_34);
        }
      }
    else
      {
        MR_String erl_backend__elds_to_erlang__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
        MR_String erl_backend__elds_to_erlang__FileName_59 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 0)));
        MR_Integer erl_backend__elds_to_erlang__LineNr_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 1)));
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65;

        {
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
        {
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[4], erl_backend__elds_to_erlang__FileName_59, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
        {
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_60);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
        {
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_21);
        }
      }
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
  MR_Word erl_backend__elds_to_erlang__Globals_5,
  MR_Word erl_backend__elds_to_erlang__Import_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__HeaderFile_8;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16;

    {
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(erl_backend__elds_to_erlang__Globals_5, (MR_String) ".hrl", erl_backend__elds_to_erlang__Import_6, &erl_backend__elds_to_erlang__HeaderFile_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "-include(\"");
    }
    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[2], erl_backend__elds_to_erlang__HeaderFile_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\").\n");
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
  MR_String erl_backend__elds_to_erlang__EnvVarName_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11;

    {
      mercury__io__write_string_3_p_0((MR_String) "% ENVVAR ");
    }
    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[1], erl_backend__elds_to_erlang__EnvVarName_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 3)));
    MR_Word erl_backend__elds_to_erlang__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 2)));

    return erl_backend__elds_to_erlang__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1)
{
  {
    MR_Box erl_backend__elds_to_erlang__wrapper_arg_2;
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__2_2;

    {
      erl_backend__elds_to_erlang__conv0_HeadVar__2_2 = erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
    erl_backend__elds_to_erlang__wrapper_arg_2 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__2_2));
    return erl_backend__elds_to_erlang__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2;
    MR_Word erl_backend__elds_to_erlang__Var_4;

    {
      erl_backend__elds_to_erlang__Var_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_1[0], (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[2], erl_backend__elds_to_erlang__ProcDefns_3);
    }
    {
      erl_backend__elds_to_erlang__HeadVar__2_2 = mercury__set__union_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__Var_4);
    }
    return erl_backend__elds_to_erlang__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    return (MR_String) "\n\n    % This function is called in place of main_2_p_0 by the shell script that\n    % we generate for this program, if linking against the standard library.\n   " " % Otherwise main_2_p_0 will be called.\n\n    mercury__main_wrapper() ->\n        mercury__startup(),\n        InitModule = list_to_atom(atom_to_list(\?MODULE) ++ \"" "_init\"),\n        try\n            InitModule:init_env_vars(),\n            InitModule:init_modules(),\n            InitModule:init_modules_required(),\n            " "main_2_p_0(),\n            InitModule:final_modules_required()\n        catch\n            {\'ML_exception\', Excp} ->\n                StackTrace = erlang:get_stackt" "race(),\n                mercury__exception:\'ML_report_uncaught_exception\'(Excp),\n                mercury__maybe_dump_stacktrace(StackTrace),\n                mer" "cury__shutdown(true)\n        end,\n        mercury__shutdown(false).\n\n    mercury__startup() ->\n        mercury__erlang_builtin:\'ML_start_global_server\'(),\n     " "   mercury__library:\'ML_std_library_init\'().\n\n    mercury__shutdown(ForceBadExit) ->\n        mercury__library:\'ML_std_library_finalize\'(),\n        \'ML_erlang_gl" "obal_server\' ! {get_exit_status, self()},\n        receive\n            {get_exit_status_ack, ExitStatus0} ->\n                void\n        end,\n        if\n       " "     ExitStatus0 =:= 0 andalso ForceBadExit ->\n                ExitStatus = 1;\n            true ->\n                ExitStatus = ExitStatus0\n        end,\n       " " mercury__erlang_builtin:\'ML_stop_global_server\'(),\n        % init:stop is preferred to calling halt but there seems\n        % to be no way to choose the exit c" "ode otherwise.\n        case ExitStatus of\n            0 -> void;\n            _ -> halt(ExitStatus)\n        end.\n\n    mercury__maybe_dump_stacktrace(StackTrace) " "->\n        case os:getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") of\n            false ->\n                io:put_chars(\"Stack dump follows:\\n\"),\n                mercury" "__dump_stacktrace(StackTrace);\n            _ ->\n                void\n        end.\n\n    mercury__dump_stacktrace([]) -> void;\n    mercury__dump_stacktrace([St | " "Sts]) ->\n        {Module, Function, ArityOrArgs} = St,\n        io:format(\"\\t~s:~s\", [Module, Function]),\n        if\n            is_integer(ArityOrArgs) ->\n     " "           io:format(\"/~B~n\", [ArityOrArgs]);\n            true ->\n                io:format(\"~p~n\", [ArityOrArgs])\n        end,\n        % Don\'t show stack frame" "s below main.\n        case St of\n            {\?MODULE, mercury__main_wrapper, _} ->\n                void;\n            _ ->\n                mercury__dump_stacktr" "ace(Sts)\n        end.\n";
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
  void * erl_backend__elds_to_erlang__env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

    MR_builtin_longjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
  void * erl_backend__elds_to_erlang__env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7 = ((MR_Word) (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7);
    {
      erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(erl_backend__elds_to_erlang__env_ptr);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
  void * erl_backend__elds_to_erlang__env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9);
    }
    {
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__Var_12 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9);
    }
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__Var_12 == (MR_Integer) 1);
    if ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
      {
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(erl_backend__elds_to_erlang__env_ptr);
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
  void * erl_backend__elds_to_erlang__env_ptr_arg)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

    if (MR_builtin_setjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6, erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3, erl_backend__elds_to_erlang__env_ptr);
          }
        }
        (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3)
{
  {
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s erl_backend__elds_to_erlang__env;

    (erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3 = erl_backend__elds_to_erlang__ModuleInfo_3;
    {
      MR_Word erl_backend__elds_to_erlang__AddMainWrapper_4;
      MR_Word erl_backend__elds_to_erlang__PredTable_5;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, &erl_backend__elds_to_erlang__PredTable_5);
      }
      {
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(erl_backend__elds_to_erlang__PredTable_5, (MR_String) "main", (MR_Integer) 2, &(erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6);
      }
      {
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(&erl_backend__elds_to_erlang__env);
      }
      if ((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 1;
      else
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 0;
      return erl_backend__elds_to_erlang__AddMainWrapper_4;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;

    switch (erl_backend__elds_to_erlang__AddMainWrapper_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_char_3_p_0((MR_Char) 44);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          }
          {
            erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__main_wrapper");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "/0");
          }
        }
        break;
    }
    if ((erl_backend__elds_to_erlang__InitPreds_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
        {
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_init");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
      }
    if ((erl_backend__elds_to_erlang__FinalPreds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
        {
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_final");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__RttiId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__IsExported_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang___VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang___Clause_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 3)));

    switch (erl_backend__elds_to_erlang__IsExported_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15;
        break;
      case (MR_Integer) 1:
        {
          switch (erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
              }
              break;
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          }
          {
            erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_11);
          }
          {
            mercury__io__write_char_3_p_0((MR_Char) 47);
          }
          {
            mercury__io__write_int_3_p_0((MR_Integer) 0);
          }
          *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
        }
        break;
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__ExportedName_9;
    MR_Word erl_backend__elds_to_erlang__Clause_11;
    MR_Integer erl_backend__elds_to_erlang__Var_20;
    MR_Word erl_backend__elds_to_erlang__Var_10;

    *erl_backend__elds_to_erlang__HeadVar__3_3 = (MR_Integer) 1;
    erl_backend__elds_to_erlang__ExportedName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
    erl_backend__elds_to_erlang__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
    erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
    switch (erl_backend__elds_to_erlang__NeedComma_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_char_3_p_0((MR_Char) 44);
          }
        }
        break;
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
    {
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExportedName_9);
    }
    {
      mercury__io__write_char_3_p_0((MR_Char) 47);
    }
    {
      erl_backend__elds_to_erlang__Var_20 = erl_backend__elds__elds_clause_arity_1_f_0(erl_backend__elds_to_erlang__Clause_11);
    }
    {
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Var_20);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
  MR_Word erl_backend__elds_to_erlang__Defn_8,
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Body_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 0)));
    MR_Integer erl_backend__elds_to_erlang__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__PredInfo_17;
    MR_Word erl_backend__elds_to_erlang__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 3)));

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredId_15, &erl_backend__elds_to_erlang__PredInfo_17);
    }
    {
      erl_backend__elds_to_erlang__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredInfo_17, erl_backend__elds_to_erlang__ProcId_16);
    }
    if (erl_backend__elds_to_erlang__succeeded)
      {
        MR_Integer erl_backend__elds_to_erlang__Var_28;

        switch (erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_char_3_p_0((MR_Char) 44);
              }
            }
            break;
        }
        {
          mercury__io__nl_2_p_0();
        }
        {
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
        {
          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_11);
        }
        {
          mercury__io__write_char_3_p_0((MR_Char) 47);
        }
        {
          erl_backend__elds_to_erlang__Var_28 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__elds_to_erlang__Body_13);
        }
        {
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Var_28);
        }
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = (MR_Integer) 1;
      }
    else
      *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18;
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
  MR_String erl_backend__elds_to_erlang__SourceFileName_4)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_String erl_backend__elds_to_erlang__Version_6;
    MR_String erl_backend__elds_to_erlang__Fullarch_7;
    MR_Word erl_backend__elds_to_erlang__Var_10;
    MR_Word erl_backend__elds_to_erlang__Var_13;
    MR_Word erl_backend__elds_to_erlang__Var_15;
    MR_Word erl_backend__elds_to_erlang__Var_16;
    MR_Word erl_backend__elds_to_erlang__Var_18;
    MR_Word erl_backend__elds_to_erlang__Var_20;
    MR_Word erl_backend__elds_to_erlang__Var_22;
    MR_Word erl_backend__elds_to_erlang__Var_23;
    MR_Word erl_backend__elds_to_erlang__Var_25;
    MR_Word erl_backend__elds_to_erlang__Var_27;

    {
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_6, &erl_backend__elds_to_erlang__Fullarch_7);
    }
    {
      erl_backend__elds_to_erlang__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_27, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_7));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
    }
    {
      erl_backend__elds_to_erlang__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_25, 0) = ((MR_Box) ((MR_String) "% configured for "));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_25, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_27));
    }
    {
      erl_backend__elds_to_erlang__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_23, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_23, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_25));
    }
    {
      erl_backend__elds_to_erlang__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_6));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_23));
    }
    {
      erl_backend__elds_to_erlang__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_20, 0) = ((MR_Box) ((MR_String) "% version "));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_22));
    }
    {
      erl_backend__elds_to_erlang__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_18, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_20));
    }
    {
      erl_backend__elds_to_erlang__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_16, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_18));
    }
    {
      erl_backend__elds_to_erlang__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_15, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_4));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_16));
    }
    {
      erl_backend__elds_to_erlang__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_13, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_13, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_15));
    }
    {
      erl_backend__elds_to_erlang__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_10, 0) = ((MR_Box) ((MR_String) "%\n"));
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__Var_13));
    }
    {
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__Var_10);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(((MR_String) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
    MR_Word erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16;

    {
      erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16);
    }
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
    MR_Word erl_backend__elds_to_erlang__conv3_HeadVar__3_3;

    {
      erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv3_HeadVar__3_3);
    }
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
    MR_Word erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19;

    {
      erl_backend__elds_to_erlang__output_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19);
    }
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19));
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_90_90;
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_91_91;
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_92_92;
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_98_98;
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_104_104;
    MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Imports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__ForeignBodies_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
    MR_Word erl_backend__elds_to_erlang__ProcDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
    MR_Word erl_backend__elds_to_erlang__ForeignExportDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
    MR_Word erl_backend__elds_to_erlang__RttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
    MR_Word erl_backend__elds_to_erlang__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
    MR_Word erl_backend__elds_to_erlang__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
    MR_Word erl_backend__elds_to_erlang__AddMainWrapper_19;
    MR_Word erl_backend__elds_to_erlang__NeedComma0_20;
    MR_Word erl_backend__elds_to_erlang__NeedComma1_21;
    MR_Word erl_backend__elds_to_erlang__Globals_23;
    MR_String erl_backend__elds_to_erlang__ErlangModuleNameStr_24;
    MR_Word erl_backend__elds_to_erlang__EnvVarNames_29;
    MR_String erl_backend__elds_to_erlang__Var_35;
    MR_Word erl_backend__elds_to_erlang__Var_41;
    MR_Word erl_backend__elds_to_erlang__Var_46;
    MR_Word erl_backend__elds_to_erlang__Var_53;
    MR_Word erl_backend__elds_to_erlang__Var_55;
    MR_Word erl_backend__elds_to_erlang__Var_71;
    MR_Word erl_backend__elds_to_erlang__Var_79;
    MR_Word erl_backend__elds_to_erlang__Var_81;
    MR_Word erl_backend__elds_to_erlang__Var_83;
    MR_Box erl_backend__elds_to_erlang__conv2_NeedComma0_20;
    MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43;
    MR_Box erl_backend__elds_to_erlang__conv5_NeedComma1_21;
    MR_Box erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45;
    MR_Word erl_backend__elds_to_erlang___NeedComma_22;
    MR_Box erl_backend__elds_to_erlang__conv8__NeedComma_22;
    MR_Box erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47;
    MR_Box erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54;
    MR_Box erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56;
    MR_Box erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68;
    MR_Box erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72;
    MR_Box erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80;
    MR_Box erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82;
    MR_Box erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31;

    {
      erl_backend__elds_to_erlang__AddMainWrapper_19 = erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(erl_backend__elds_to_erlang__ModuleInfo_6);
    }
    {
      erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(erl_backend__elds_to_erlang__SourceFileName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "-module(");
    }
    {
      erl_backend__elds_to_erlang__Var_35 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
    {
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Var_35);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "-export([");
    }
    {
      erl_backend__elds_to_erlang__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_41, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_41, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_41, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
    }
    erl_backend__elds_to_erlang__TypeCtorInfo_90_90 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0;
    erl_backend__elds_to_erlang__TypeCtorInfo_91_91 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
    erl_backend__elds_to_erlang__TypeCtorInfo_92_92 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_41, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv2_NeedComma0_20, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43);
    }
    erl_backend__elds_to_erlang__NeedComma0_20 = ((MR_Word) erl_backend__elds_to_erlang__conv2_NeedComma0_20);
    erl_backend__elds_to_erlang__TypeCtorInfo_98_98 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;
    {
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[0], erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma0_20)), &erl_backend__elds_to_erlang__conv5_NeedComma1_21, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45);
    }
    erl_backend__elds_to_erlang__NeedComma1_21 = ((MR_Word) erl_backend__elds_to_erlang__conv5_NeedComma1_21);
    {
      erl_backend__elds_to_erlang__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_46, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_46, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_46, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
    }
    erl_backend__elds_to_erlang__TypeCtorInfo_104_104 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
    {
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_46, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma1_21)), &erl_backend__elds_to_erlang__conv8__NeedComma_22, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47);
    }
    erl_backend__elds_to_erlang___NeedComma_22 = ((MR_Word) erl_backend__elds_to_erlang__conv8__NeedComma_22);
    {
      erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(erl_backend__elds_to_erlang__AddMainWrapper_19, erl_backend__elds_to_erlang__InitPreds_17, erl_backend__elds_to_erlang__FinalPreds_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% -compile(export_all).\n");
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_23);
    }
    {
      erl_backend__elds_to_erlang__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_53, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_4));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_53, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Globals_23));
    }
    {
      mercury__set__fold_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_53, erl_backend__elds_to_erlang__Imports_11, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54);
    }
    {
      erl_backend__elds_to_erlang__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_55, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_55, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_5));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_55, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_55, erl_backend__elds_to_erlang__ForeignDecls_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56);
    }
    {
      erl_backend__elds_to_erlang__ErlangModuleNameStr_24 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
    if ((erl_backend__elds_to_erlang__InitPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_INIT ");
        }
        {
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_init\n");
        }
      }
    if ((erl_backend__elds_to_erlang__FinalPreds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_FINAL ");
        }
        {
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_final\n");
        }
      }
    {
      erl_backend__elds_to_erlang__EnvVarNames_29 = erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(erl_backend__elds_to_erlang__ProcDefns_14);
    }
    {
      mercury__set__fold_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[1], erl_backend__elds_to_erlang__EnvVarNames_29, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ENDINIT\n");
    }
    {
      erl_backend__elds_to_erlang__Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_71, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_71, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_7));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_71, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_71, erl_backend__elds_to_erlang__ForeignBodies_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72);
    }
    switch (erl_backend__elds_to_erlang__AddMainWrapper_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String erl_backend__elds_to_erlang__Var_73;

          {
            erl_backend__elds_to_erlang__Var_73 = erl_backend__elds_to_erlang__main_wrapper_code_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Var_73);
          }
        }
        break;
    }
    {
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_init", erl_backend__elds_to_erlang__InitPreds_17);
    }
    {
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_final", erl_backend__elds_to_erlang__FinalPreds_18);
    }
    {
      erl_backend__elds_to_erlang__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_79, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_79, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_8));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_79, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
    }
    {
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_79, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80);
    }
    {
      erl_backend__elds_to_erlang__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_81, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_81, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_9));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_81, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
    }
    {
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_81, erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82);
    }
    {
      erl_backend__elds_to_erlang__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_83, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_83, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_10));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_83, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
    }
    {
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__Var_83, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31);
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
  }
}

void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
  MR_Word erl_backend__elds_to_erlang__Defn_6)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang___EnvVarNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 3)));

    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Body_10)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word erl_backend__elds_to_erlang__Clause_12 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Body_10), (MR_Integer) 0);
        MR_Word erl_backend__elds_to_erlang__Context_20;
        MR_Word erl_backend__elds_to_erlang__ClauseBody_14;
        MR_Word erl_backend__elds_to_erlang__Fun_15;
        MR_Word erl_backend__elds_to_erlang__FunBody_18;
        MR_Word erl_backend__elds_to_erlang__Var_28;
        MR_Word erl_backend__elds_to_erlang__Var_29;
        MR_Word erl_backend__elds_to_erlang__Var_30;
        MR_Word erl_backend__elds_to_erlang__Var_31;
        MR_Word erl_backend__elds_to_erlang__Var_32;
        MR_Word erl_backend__elds_to_erlang__Var_33;
        MR_Word erl_backend__elds_to_erlang___HeadVars_13;
        MR_Word erl_backend__elds_to_erlang___CallArgs_16;
        MR_Word erl_backend__elds_to_erlang___FunVars_17;
        MR_String erl_backend__elds_to_erlang___Code_19;
        MR_Word erl_backend__elds_to_erlang___PlaceOutputs_21;

        {
          mercury__io__nl_2_p_0();
        }
        erl_backend__elds_to_erlang___HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 0)));
        erl_backend__elds_to_erlang__ClauseBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 1)));
        erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__ClauseBody_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (erl_backend__elds_to_erlang__succeeded)
          {
            erl_backend__elds_to_erlang__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 1)));
            erl_backend__elds_to_erlang___CallArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 2)));
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_28)) == (MR_mktag((MR_Integer) 1)));
            if (erl_backend__elds_to_erlang__succeeded)
              {
                erl_backend__elds_to_erlang__Fun_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_28, (MR_Integer) 0)));
                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Fun_15)) == (MR_mktag((MR_Integer) 0)));
                if (erl_backend__elds_to_erlang__succeeded)
                  {
                    erl_backend__elds_to_erlang__Var_29 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Fun_15), (MR_Integer) 0);
                    erl_backend__elds_to_erlang___FunVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, (MR_Integer) 0)));
                    erl_backend__elds_to_erlang__FunBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, (MR_Integer) 1)));
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__FunBody_18)) == (MR_mktag((MR_Integer) 1)));
                    if (erl_backend__elds_to_erlang__succeeded)
                      {
                        erl_backend__elds_to_erlang__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__FunBody_18, (MR_Integer) 0)));
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_30)) == (MR_mktag((MR_Integer) 1)));
                        if (erl_backend__elds_to_erlang__succeeded)
                          {
                            erl_backend__elds_to_erlang__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_30, (MR_Integer) 0)));
                            erl_backend__elds_to_erlang__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_30, (MR_Integer) 1)));
                            erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_31, (MR_Integer) 0)))) == (MR_Integer) 8)));
                            if (erl_backend__elds_to_erlang__succeeded)
                              {
                                erl_backend__elds_to_erlang___Code_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_31, (MR_Integer) 1)));
                                erl_backend__elds_to_erlang__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Var_31, (MR_Integer) 2)));
                                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Var_32)) == (MR_mktag((MR_Integer) 1)));
                                if (erl_backend__elds_to_erlang__succeeded)
                                  {
                                    erl_backend__elds_to_erlang___PlaceOutputs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_32, (MR_Integer) 0)));
                                    erl_backend__elds_to_erlang__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Var_32, (MR_Integer) 1)));
                                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Var_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (erl_backend__elds_to_erlang__succeeded)
          {
            MR_Integer erl_backend__elds_to_erlang__LineNr_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 1)));
            MR_String erl_backend__elds_to_erlang__FileName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 0)));
            MR_Integer erl_backend__elds_to_erlang__LineNr_46 = (erl_backend__elds_to_erlang__LineNr_23 - (MR_Integer) 3);
            MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51;

            {
              mercury__io__write_string_3_p_0((MR_String) "-file(\"");
            }
            {
              mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[0], erl_backend__elds_to_erlang__FileName_45, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
            {
              mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_46);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ").\n");
            }
            {
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
            {
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
            }
            {
              erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
            }
          }
        else
          {
            {
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
            {
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
            }
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_hrl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
    }
  }
}

static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
  MR_Box erl_backend__elds_to_erlang__closure_arg,
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
{
  {
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

    {
      erl_backend__elds_to_erlang__output_erl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
    }
  }
}

void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0(
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
  MR_Word * erl_backend__elds_to_erlang__Succeeded_8)
{
  {
    MR_bool erl_backend__elds_to_erlang__succeeded;
    MR_Word erl_backend__elds_to_erlang__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
    MR_Word erl_backend__elds_to_erlang__Globals_11;
    MR_String erl_backend__elds_to_erlang__SourceFileName_12;
    MR_String erl_backend__elds_to_erlang__TargetFileName_13;
    MR_String erl_backend__elds_to_erlang__HeaderFileName_14;
    MR_Word erl_backend__elds_to_erlang__TargetCodeSucceeded_15;
    MR_Word erl_backend__elds_to_erlang__Var_26;
    MR_Word erl_backend__elds_to_erlang__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
    MR_Word erl_backend__elds_to_erlang__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
    MR_Word erl_backend__elds_to_erlang__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
    MR_Word erl_backend__elds_to_erlang__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
    MR_Word erl_backend__elds_to_erlang__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
    MR_Word erl_backend__elds_to_erlang__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
    MR_Word erl_backend__elds_to_erlang__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
    MR_Word erl_backend__elds_to_erlang__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_11);
    }
    {
      parse_tree__file_names__module_source_filename_5_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, &erl_backend__elds_to_erlang__SourceFileName_12);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, (MR_Integer) 0, (MR_String) ".erl", erl_backend__elds_to_erlang__Name_10, &erl_backend__elds_to_erlang__TargetFileName_13);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, (MR_Integer) 0, (MR_String) ".hrl", erl_backend__elds_to_erlang__Name_10, &erl_backend__elds_to_erlang__HeaderFileName_14);
    }
    {
      erl_backend__elds_to_erlang__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_26, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_1));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_26, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_26, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_26, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
    }
    {
      libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TargetFileName_13, erl_backend__elds_to_erlang__Var_26, &erl_backend__elds_to_erlang__TargetCodeSucceeded_15);
    }
    switch (erl_backend__elds_to_erlang__TargetCodeSucceeded_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *erl_backend__elds_to_erlang__Succeeded_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_String erl_backend__elds_to_erlang__TmpHeaderFileName_16;
          MR_Word erl_backend__elds_to_erlang__Var_29;

          {
            erl_backend__elds_to_erlang__TmpHeaderFileName_16 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__HeaderFileName_14, (MR_String) ".tmp");
          }
          {
            erl_backend__elds_to_erlang__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_2));
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Name_10));
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Var_29, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
          }
          {
            libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TmpHeaderFileName_16, erl_backend__elds_to_erlang__Var_29, erl_backend__elds_to_erlang__Succeeded_8);
          }
          switch (*erl_backend__elds_to_erlang__Succeeded_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                parse_tree__module_cmds__update_interface_4_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__HeaderFileName_14);
              }
              break;
          }
        }
        break;
    }
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

/* :- end_module erl_backend.elds_to_erlang. */
