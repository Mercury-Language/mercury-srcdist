/*
** Automatically generated from `elds_to_erlang.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 285 "elds_to_erlang.m"
struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s {
#line 285 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3;
#line 287 "elds_to_erlang.m"
  MR_bool erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded;
#line 287 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6;
#line 291 "elds_to_erlang.m"
  jmp_buf erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0;
#line 291 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7;
#line 291 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8;
#line 291 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ImportStatus_9;
#line 291 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12;
#line 291 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7;
#line 285 "elds_to_erlang.m"
};


#line 165 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 168 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0;

#line 174 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1;

#line 177 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2];

#line 180 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2];

#line 183 "erl_backend.elds_to_erlang.c"
static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2];

#line 186 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
#line 189 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 191 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

#line 194 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
#line 197 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 199 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 201 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

#line 204 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
#line 207 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 209 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

#line 212 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
#line 215 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 217 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 219 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1233 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
#line 1233 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3);

#line 1233 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1350 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
#line 1350 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3);

#line 1350 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1370 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void);

#line 1358 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
#line 1358 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4);

#line 1352 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
#line 1352 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4);

#line 1335 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
#line 1335 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 1335 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

#line 1330 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
#line 1330 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1330 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1330 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1330 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1315 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
#line 1315 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
#line 1315 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 1315 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

#line 1243 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
#line 1243 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1243 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__Char_6);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1237 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
#line 1237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1237 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_6);

#line 1203 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
#line 1203 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Binop_4);

#line 1196 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
#line 1196 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1147 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
#line 1147 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4);

#line 1139 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
#line 1139 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_3);

#line 1050 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
#line 1050 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__PredName_12,
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
#line 1050 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
#line 1050 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
#line 1050 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
#line 1050 "elds_to_erlang.m"
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18);

#line 994 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
#line 994 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name0_3);

#line 931 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
#line 931 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 931 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiId_6);

#line 916 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
#line 916 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 916 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

#line 907 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
#line 907 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__C_4);

#line 904 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 904 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 898 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
#line 898 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4);

#line 904 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 904 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 891 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
#line 891 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
#line 891 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Var_6);

#line 586 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 586 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 586 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 586 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 857 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
#line 857 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 857 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 857 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 857 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Args_10);

#line 838 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
#line 838 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_5,
#line 838 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
#line 838 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
#line 838 "elds_to_erlang.m"
  MR_Integer * erl_backend__elds_to_erlang__Pos_8);

#line 826 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
#line 826 "elds_to_erlang.m"
  MR_Float erl_backend__elds_to_erlang__Float_4);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 767 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
#line 767 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 767 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 767 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 767 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Term_10);

#line 753 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
#line 753 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 753 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 753 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 753 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Catch_10);

#line 743 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
#line 743 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 743 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 743 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 743 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

#line 673 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
#line 673 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 673 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 673 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 673 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 738 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
#line 738 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 738 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 738 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 738 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 658 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
#line 658 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 658 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 658 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 658 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 598 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
#line 598 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 598 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 598 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 598 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10);

#line 588 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
#line 588 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 588 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 588 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 588 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10);

#line 586 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 586 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 581 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
#line 581 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 581 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 581 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 581 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Exprs_10);

#line 566 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
#line 566 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
#line 566 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 566 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
#line 566 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 549 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
#line 549 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 549 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 549 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 549 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_10);

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 541 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
#line 541 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 541 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
#line 541 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_8);

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 532 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
#line 532 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 532 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6);

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 523 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
#line 523 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 523 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6);

#line 480 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
#line 480 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 480 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

#line 475 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
#line 475 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 475 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 475 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 475 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 464 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
#line 464 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 464 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name_7,
#line 464 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 455 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 420 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
#line 420 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 420 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 411 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
#line 411 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 411 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 400 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
#line 400 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Globals_5,
#line 400 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Import_6);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 391 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
#line 391 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__EnvVarName_4);

#line 387 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
#line 387 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3);

#line 385 "elds_to_erlang.m"
static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
#line 385 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 385 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1);

#line 382 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
#line 382 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3);

#line 301 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void);

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 285 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
#line 285 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3);

#line 250 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
#line 250 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
#line 250 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
#line 250 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8);

#line 233 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
#line 233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
#line 233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
#line 233 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16);

#line 222 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
#line 222 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
#line 222 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
#line 222 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3);

#line 204 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
#line 204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_8,
#line 204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
#line 204 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19);

#line 187 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
#line 187 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_4);

#line 185 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
#line 185 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 185 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 185 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 185 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 183 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 183 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 182 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
#line 182 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 182 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 182 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 182 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 166 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
#line 166 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 166 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 166 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 166 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 160 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
#line 160 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 160 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 160 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 160 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 139 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
#line 139 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 139 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 139 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 139 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 136 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
#line 136 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 136 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 136 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 136 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 126 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 126 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 126 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 124 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 124 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 124 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 123 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 123 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 123 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 106 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
#line 106 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 106 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 106 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 93 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
#line 93 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 93 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 93 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2);

#line 86 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
#line 86 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 86 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 86 "elds_to_erlang.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1574 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1582 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1590 "erl_backend.elds_to_erlang.c"
const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (erl_backend__elds_to_erlang____Unify____indent_0_0_10001)),
  ((MR_Box) (erl_backend__elds_to_erlang____Compare____indent_0_0_10001)),
  (MR_String) "erl_backend.elds_to_erlang",
  (MR_String) "indent",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1611 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0 = {
  (MR_String) "in_string",
  (MR_Integer) 0
};

#line 1617 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1 = {
  (MR_String) "in_atom",
  (MR_Integer) 1
};

#line 1623 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1
};

#line 1629 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0
};

#line 1635 "erl_backend.elds_to_erlang.c"
static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1641 "erl_backend.elds_to_erlang.c"
const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001)),
  ((MR_Box) (erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001)),
  (MR_String) "erl_backend.elds_to_erlang",
  (MR_String) "string_or_atom",
  {
    erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0
  },
  {
    erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0
};

#line 1662 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
#line 1665 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1667 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
#line 1669 "erl_backend.elds_to_erlang.c"
{
#line 1671 "erl_backend.elds_to_erlang.c"
  {
#line 1673 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1676 "erl_backend.elds_to_erlang.c"
    {
#line 1678 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____indent_0_0(((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
#line 1681 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1683 "erl_backend.elds_to_erlang.c"
  }
#line 1685 "erl_backend.elds_to_erlang.c"
}

#line 1688 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
#line 1691 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1693 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1695 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1697 "erl_backend.elds_to_erlang.c"
{
#line 1699 "erl_backend.elds_to_erlang.c"
  {
#line 1701 "erl_backend.elds_to_erlang.c"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

#line 1704 "erl_backend.elds_to_erlang.c"
    {
#line 1706 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang____Compare____indent_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
#line 1709 "erl_backend.elds_to_erlang.c"
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
#line 1711 "erl_backend.elds_to_erlang.c"
  }
#line 1713 "erl_backend.elds_to_erlang.c"
}

#line 1716 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
#line 1719 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1721 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
#line 1723 "erl_backend.elds_to_erlang.c"
{
#line 1725 "erl_backend.elds_to_erlang.c"
  {
#line 1727 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1730 "erl_backend.elds_to_erlang.c"
    {
#line 1732 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
#line 1735 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1737 "erl_backend.elds_to_erlang.c"
  }
#line 1739 "erl_backend.elds_to_erlang.c"
}

#line 1742 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
#line 1745 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1747 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1749 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1751 "erl_backend.elds_to_erlang.c"
{
#line 1753 "erl_backend.elds_to_erlang.c"
  {
#line 1755 "erl_backend.elds_to_erlang.c"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

#line 1758 "erl_backend.elds_to_erlang.c"
    {
#line 1760 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
#line 1763 "erl_backend.elds_to_erlang.c"
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
#line 1765 "erl_backend.elds_to_erlang.c"
  }
#line 1767 "erl_backend.elds_to_erlang.c"
}

#line 1233 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
#line 1233 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3)
#line 1233 "elds_to_erlang.m"
{
#line 1233 "elds_to_erlang.m"
  {
#line 1233 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1233 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1233 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__3_3;

#line 1233 "elds_to_erlang.m"
    {
#line 1233 "elds_to_erlang.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
#line 1233 "elds_to_erlang.m"
      return;
    }
#line 1233 "elds_to_erlang.m"
  }
#line 1233 "elds_to_erlang.m"
}

#line 1233 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
#line 1233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2)
#line 1233 "elds_to_erlang.m"
{
#line 1811 "erl_backend.elds_to_erlang.c"
  {
#line 1813 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__HeadVar__2_1 == erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1816 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1818 "erl_backend.elds_to_erlang.c"
  }
#line 1233 "elds_to_erlang.m"
}

#line 1350 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
#line 1350 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3)
#line 1350 "elds_to_erlang.m"
{
#line 1350 "elds_to_erlang.m"
  {
#line 1350 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1350 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1350 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = erl_backend__elds_to_erlang__HeadVar__3_3;

#line 1350 "elds_to_erlang.m"
    {
#line 1350 "elds_to_erlang.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
#line 1350 "elds_to_erlang.m"
      return;
    }
#line 1350 "elds_to_erlang.m"
  }
#line 1350 "elds_to_erlang.m"
}

#line 1350 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1350 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2)
#line 1350 "elds_to_erlang.m"
{
#line 1350 "elds_to_erlang.m"
  {
#line 1350 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1350 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_3 = erl_backend__elds_to_erlang__HeadVar__1_1;
#line 1350 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_4 = erl_backend__elds_to_erlang__HeadVar__2_2;

#line 1350 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Cast_HeadVar1_3 == erl_backend__elds_to_erlang__Cast_HeadVar2_4);
#line 1350 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__succeeded;
#line 1350 "elds_to_erlang.m"
  }
#line 1350 "elds_to_erlang.m"
}

#line 1370 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void)
#line 1370 "elds_to_erlang.m"
{
#line 1372 "elds_to_erlang.m"
  {
#line 1372 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1373 "elds_to_erlang.m"
    {
#line 1373 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
      return;
    }
#line 1372 "elds_to_erlang.m"
  }
#line 1370 "elds_to_erlang.m"
}

#line 1358 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
#line 1358 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4)
#line 1358 "elds_to_erlang.m"
{
#line 1363 "elds_to_erlang.m"
  while (MR_TRUE)
#line 1363 "elds_to_erlang.m"
    {
#line 1363 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 1363 "elds_to_erlang.m"
      {
#line 1363 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__N_4 <= (MR_Integer) 0);

#line 1363 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1361 "elds_to_erlang.m"
          {
#line 1361 "elds_to_erlang.m"
          }
#line 1363 "elds_to_erlang.m"
        else
#line 1364 "elds_to_erlang.m"
          {
#line 1364 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__V_11_11;

#line 1364 "elds_to_erlang.m"
            {
#line 1364 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1365 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_11_11 = (erl_backend__elds_to_erlang__N_4 - (MR_Integer) 1);
#line 1365 "elds_to_erlang.m"
            /* direct tailcall eliminated */
#line 1365 "elds_to_erlang.m"
            {
#line 1365 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__N__tmp_copy_4 = erl_backend__elds_to_erlang__V_11_11;

#line 1365 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__N_4 = erl_backend__elds_to_erlang__N__tmp_copy_4;
#line 1365 "elds_to_erlang.m"
            }
#line 1365 "elds_to_erlang.m"
            continue;
#line 1364 "elds_to_erlang.m"
          }
#line 1363 "elds_to_erlang.m"
      }
#line 1363 "elds_to_erlang.m"
      break;
#line 1363 "elds_to_erlang.m"
    }
#line 1358 "elds_to_erlang.m"
}

#line 1352 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
#line 1352 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4)
#line 1352 "elds_to_erlang.m"
{
#line 1354 "elds_to_erlang.m"
  {
#line 1354 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__N_4);
#line 1356 "elds_to_erlang.m"
      return;
    }
#line 1354 "elds_to_erlang.m"
  }
#line 1352 "elds_to_erlang.m"
}

#line 1335 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
#line 1335 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 1335 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
#line 1335 "elds_to_erlang.m"
{
#line 1338 "elds_to_erlang.m"
  {
#line 1338 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1338 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__IsLocal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));
#line 1339 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
#line 1339 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
#line 1339 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));

#line 1342 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__IsLocal_8 == (MR_Integer) 1))
#line 1344 "elds_to_erlang.m"
      {
#line 1344 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__ForeignDecl_6);
#line 1344 "elds_to_erlang.m"
        return;
      }
#line 1342 "elds_to_erlang.m"
    else
#line 1341 "elds_to_erlang.m"
      {
#line 1341 "elds_to_erlang.m"
      }
#line 1338 "elds_to_erlang.m"
  }
#line 1335 "elds_to_erlang.m"
}

#line 1330 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
#line 1330 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1330 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1330 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1330 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1330 "elds_to_erlang.m"
{
#line 1330 "elds_to_erlang.m"
  {
#line 1330 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1330 "elds_to_erlang.m"
    {
#line 1330 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1330 "elds_to_erlang.m"
      return;
    }
#line 1330 "elds_to_erlang.m"
  }
#line 1330 "elds_to_erlang.m"
}

#line 1315 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
#line 1315 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
#line 1315 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 1315 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
#line 1315 "elds_to_erlang.m"
{
#line 1318 "elds_to_erlang.m"
  {
#line 1318 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1318 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__MangledModuleName_10;
#line 1318 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__UppercaseModuleName_11;
#line 1318 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__GuardMacroName_12;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_13;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_21_21;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_22_22;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_24_24;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_30_30;
#line 1318 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Version_51;
#line 1318 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Fullarch_52;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_56_56;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_58_58;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_59_59;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_61_61;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_63_63;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_65_65;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_66_66;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_68_68;
#line 1318 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_70_70;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_34_34;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_35_35;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_36_36;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_37_37;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_40_40;
#line 1329 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_41_41;
#line 1330 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31;

#line 190 "elds_to_erlang.m"
    {
#line 190 "elds_to_erlang.m"
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_51, &erl_backend__elds_to_erlang__Fullarch_52);
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_70_70, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_52));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
#line 196 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_68_68, 0) = ((MR_Box) ((MR_String) "% configured for "));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_68_68, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_70_70));
#line 196 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_66_66, 0) = ((MR_Box) ((MR_String) "\n"));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_66_66, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_68_68));
#line 195 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_65_65, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_51));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_65_65, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_66_66));
#line 195 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_63_63, 0) = ((MR_Box) ((MR_String) "% version "));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_63_63, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_65_65));
#line 195 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_61_61, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_61_61, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_63_63));
#line 194 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_59_59, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_59_59, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_61_61));
#line 193 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_58_58, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_58_58, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_59_59));
#line 193 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_56_56, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_56_56, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_58_58));
#line 193 "elds_to_erlang.m"
    }
#line 192 "elds_to_erlang.m"
    {
#line 192 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_53_53, 0) = ((MR_Box) ((MR_String) "%\n"));
#line 192 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_53_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_56_56));
#line 192 "elds_to_erlang.m"
    }
#line 191 "elds_to_erlang.m"
    {
#line 191 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_53_53);
    }
#line 1321 "elds_to_erlang.m"
    {
#line 1321 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__MangledModuleName_10 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(erl_backend__elds_to_erlang__ModuleName_6);
    }
#line 1322 "elds_to_erlang.m"
    {
#line 1322 "elds_to_erlang.m"
      mercury__string__to_upper_2_p_0(erl_backend__elds_to_erlang__MangledModuleName_10, &erl_backend__elds_to_erlang__UppercaseModuleName_11);
    }
#line 1323 "elds_to_erlang.m"
    {
#line 1323 "elds_to_erlang.m"
      mercury__string__append_3_p_2(erl_backend__elds_to_erlang__UppercaseModuleName_11, (MR_String) "_HRL", &erl_backend__elds_to_erlang__GuardMacroName_12);
    }
#line 1326 "elds_to_erlang.m"
    {
#line 1326 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[6])));
#line 1326 "elds_to_erlang.m"
    }
#line 1326 "elds_to_erlang.m"
    {
#line 1326 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_24_24, 0) = ((MR_Box) ((MR_String) "-define("));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_24_24, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_26_26));
#line 1326 "elds_to_erlang.m"
    }
#line 1325 "elds_to_erlang.m"
    {
#line 1325 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) ((MR_String) ").\n"));
#line 1325 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_24_24));
#line 1325 "elds_to_erlang.m"
    }
#line 1325 "elds_to_erlang.m"
    {
#line 1325 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_21_21, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
#line 1325 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_21_21, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 1325 "elds_to_erlang.m"
    }
#line 1325 "elds_to_erlang.m"
    {
#line 1325 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 0) = ((MR_Box) ((MR_String) "-ifndef("));
#line 1325 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_21_21));
#line 1325 "elds_to_erlang.m"
    }
#line 1324 "elds_to_erlang.m"
    {
#line 1324 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_18_18);
    }
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ForeignDecls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 1329 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
#line 1330 "elds_to_erlang.m"
    {
#line 1330 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 1330 "elds_to_erlang.m"
    }
#line 1330 "elds_to_erlang.m"
    {
#line 1330 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_30_30, erl_backend__elds_to_erlang__ForeignDecls_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31);
    }
#line 1333 "elds_to_erlang.m"
    {
#line 1333 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-endif.\n");
#line 1333 "elds_to_erlang.m"
      return;
    }
#line 1318 "elds_to_erlang.m"
  }
#line 1315 "elds_to_erlang.m"
}

#line 1243 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
#line 1243 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1243 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__Char_6)
#line 1243 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1246 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Int_8;

#line 1247 "elds_to_erlang.m"
    {
#line 1247 "elds_to_erlang.m"
      mercury__char__to_int_2_p_0(erl_backend__elds_to_erlang__Char_6, &erl_backend__elds_to_erlang__Int_8);
    }
#line 1249 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_Integer) 32 <= erl_backend__elds_to_erlang__Int_8);
#line 1249 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1249 "elds_to_erlang.m"
      {
#line 1250 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 92);
#line 1250 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1249 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1254 "elds_to_erlang.m"
          {
#line 1254 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__StringOrAtom_5 == (MR_Integer) 1))
#line 1256 "elds_to_erlang.m"
              {
#line 1256 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 39);
#line 1256 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1256 "elds_to_erlang.m"
              }
#line 1254 "elds_to_erlang.m"
            else
#line 1253 "elds_to_erlang.m"
              {
#line 1253 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 34);
#line 1253 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1253 "elds_to_erlang.m"
              }
#line 1254 "elds_to_erlang.m"
          }
#line 1249 "elds_to_erlang.m"
      }
#line 1260 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1259 "elds_to_erlang.m"
      {
#line 1259 "elds_to_erlang.m"
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_6);
#line 1259 "elds_to_erlang.m"
        return;
      }
#line 1260 "elds_to_erlang.m"
    else
#line 1264 "elds_to_erlang.m"
      {
#line 1264 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Esc_9;

#line 1273 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 1))
#line 1282 "elds_to_erlang.m"
          {
#line 1282 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^a";
#line 1282 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1282 "elds_to_erlang.m"
          }
#line 1273 "elds_to_erlang.m"
        else
#line 1273 "elds_to_erlang.m"
          if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 2))
#line 1283 "elds_to_erlang.m"
            {
#line 1283 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^b";
#line 1283 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1283 "elds_to_erlang.m"
            }
#line 1273 "elds_to_erlang.m"
          else
#line 1273 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 3))
#line 1284 "elds_to_erlang.m"
              {
#line 1284 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^c";
#line 1284 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1284 "elds_to_erlang.m"
              }
#line 1273 "elds_to_erlang.m"
            else
#line 1273 "elds_to_erlang.m"
              if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 4))
#line 1285 "elds_to_erlang.m"
                {
#line 1285 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^d";
#line 1285 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1285 "elds_to_erlang.m"
                }
#line 1273 "elds_to_erlang.m"
              else
#line 1273 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 5))
#line 1286 "elds_to_erlang.m"
                  {
#line 1286 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^e";
#line 1286 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1286 "elds_to_erlang.m"
                  }
#line 1273 "elds_to_erlang.m"
                else
#line 1273 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 6))
#line 1287 "elds_to_erlang.m"
                    {
#line 1287 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^f";
#line 1287 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1287 "elds_to_erlang.m"
                    }
#line 1273 "elds_to_erlang.m"
                  else
#line 1273 "elds_to_erlang.m"
                    if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 7))
#line 1288 "elds_to_erlang.m"
                      {
#line 1288 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^g";
#line 1288 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1288 "elds_to_erlang.m"
                      }
#line 1273 "elds_to_erlang.m"
                    else
#line 1273 "elds_to_erlang.m"
                      if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 8))
#line 1273 "elds_to_erlang.m"
                        {
#line 1273 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\b";
#line 1273 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1273 "elds_to_erlang.m"
                        }
#line 1273 "elds_to_erlang.m"
                      else
#line 1273 "elds_to_erlang.m"
                        if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 9))
#line 1280 "elds_to_erlang.m"
                          {
#line 1280 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\t";
#line 1280 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1280 "elds_to_erlang.m"
                          }
#line 1273 "elds_to_erlang.m"
                        else
#line 1273 "elds_to_erlang.m"
                          if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 10))
#line 1277 "elds_to_erlang.m"
                            {
#line 1277 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\n";
#line 1277 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1277 "elds_to_erlang.m"
                            }
#line 1273 "elds_to_erlang.m"
                          else
#line 1273 "elds_to_erlang.m"
                            if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 11))
#line 1281 "elds_to_erlang.m"
                              {
#line 1281 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\v";
#line 1281 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1281 "elds_to_erlang.m"
                              }
#line 1273 "elds_to_erlang.m"
                            else
#line 1273 "elds_to_erlang.m"
                              if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 12))
#line 1276 "elds_to_erlang.m"
                                {
#line 1276 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\f";
#line 1276 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1276 "elds_to_erlang.m"
                                }
#line 1273 "elds_to_erlang.m"
                              else
#line 1273 "elds_to_erlang.m"
                                if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 13))
#line 1278 "elds_to_erlang.m"
                                  {
#line 1278 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\r";
#line 1278 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1278 "elds_to_erlang.m"
                                  }
#line 1273 "elds_to_erlang.m"
                                else
#line 1273 "elds_to_erlang.m"
                                  if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 14))
#line 1295 "elds_to_erlang.m"
                                    {
#line 1295 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^n";
#line 1295 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1295 "elds_to_erlang.m"
                                    }
#line 1273 "elds_to_erlang.m"
                                  else
#line 1273 "elds_to_erlang.m"
                                    if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 15))
#line 1296 "elds_to_erlang.m"
                                      {
#line 1296 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^o";
#line 1296 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1296 "elds_to_erlang.m"
                                      }
#line 1273 "elds_to_erlang.m"
                                    else
#line 1273 "elds_to_erlang.m"
                                      if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 16))
#line 1297 "elds_to_erlang.m"
                                        {
#line 1297 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^p";
#line 1297 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1297 "elds_to_erlang.m"
                                        }
#line 1273 "elds_to_erlang.m"
                                      else
#line 1273 "elds_to_erlang.m"
                                        if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 17))
#line 1298 "elds_to_erlang.m"
                                          {
#line 1298 "elds_to_erlang.m"
                                            erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^q";
#line 1298 "elds_to_erlang.m"
                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1298 "elds_to_erlang.m"
                                          }
#line 1273 "elds_to_erlang.m"
                                        else
#line 1273 "elds_to_erlang.m"
                                          if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 18))
#line 1299 "elds_to_erlang.m"
                                            {
#line 1299 "elds_to_erlang.m"
                                              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^r";
#line 1299 "elds_to_erlang.m"
                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1299 "elds_to_erlang.m"
                                            }
#line 1273 "elds_to_erlang.m"
                                          else
#line 1273 "elds_to_erlang.m"
                                            if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 19))
#line 1300 "elds_to_erlang.m"
                                              {
#line 1300 "elds_to_erlang.m"
                                                erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^s";
#line 1300 "elds_to_erlang.m"
                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1300 "elds_to_erlang.m"
                                              }
#line 1273 "elds_to_erlang.m"
                                            else
#line 1273 "elds_to_erlang.m"
                                              if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 20))
#line 1301 "elds_to_erlang.m"
                                                {
#line 1301 "elds_to_erlang.m"
                                                  erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^t";
#line 1301 "elds_to_erlang.m"
                                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1301 "elds_to_erlang.m"
                                                }
#line 1273 "elds_to_erlang.m"
                                              else
#line 1273 "elds_to_erlang.m"
                                                if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 21))
#line 1302 "elds_to_erlang.m"
                                                  {
#line 1302 "elds_to_erlang.m"
                                                    erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^u";
#line 1302 "elds_to_erlang.m"
                                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1302 "elds_to_erlang.m"
                                                  }
#line 1273 "elds_to_erlang.m"
                                                else
#line 1273 "elds_to_erlang.m"
                                                  if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 22))
#line 1303 "elds_to_erlang.m"
                                                    {
#line 1303 "elds_to_erlang.m"
                                                      erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^v";
#line 1303 "elds_to_erlang.m"
                                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1303 "elds_to_erlang.m"
                                                    }
#line 1273 "elds_to_erlang.m"
                                                  else
#line 1273 "elds_to_erlang.m"
                                                    if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 23))
#line 1304 "elds_to_erlang.m"
                                                      {
#line 1304 "elds_to_erlang.m"
                                                        erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^w";
#line 1304 "elds_to_erlang.m"
                                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1304 "elds_to_erlang.m"
                                                      }
#line 1273 "elds_to_erlang.m"
                                                    else
#line 1273 "elds_to_erlang.m"
                                                      if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 24))
#line 1305 "elds_to_erlang.m"
                                                        {
#line 1305 "elds_to_erlang.m"
                                                          erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^x";
#line 1305 "elds_to_erlang.m"
                                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1305 "elds_to_erlang.m"
                                                        }
#line 1273 "elds_to_erlang.m"
                                                      else
#line 1273 "elds_to_erlang.m"
                                                        if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 25))
#line 1306 "elds_to_erlang.m"
                                                          {
#line 1306 "elds_to_erlang.m"
                                                            erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^y";
#line 1306 "elds_to_erlang.m"
                                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1306 "elds_to_erlang.m"
                                                          }
#line 1273 "elds_to_erlang.m"
                                                        else
#line 1273 "elds_to_erlang.m"
                                                          if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 26))
#line 1307 "elds_to_erlang.m"
                                                            {
#line 1307 "elds_to_erlang.m"
                                                              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^z";
#line 1307 "elds_to_erlang.m"
                                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1307 "elds_to_erlang.m"
                                                            }
#line 1273 "elds_to_erlang.m"
                                                          else
#line 1273 "elds_to_erlang.m"
                                                            if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 27))
#line 1275 "elds_to_erlang.m"
                                                              {
#line 1275 "elds_to_erlang.m"
                                                                erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\e";
#line 1275 "elds_to_erlang.m"
                                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1275 "elds_to_erlang.m"
                                                              }
#line 1273 "elds_to_erlang.m"
                                                            else
#line 1273 "elds_to_erlang.m"
                                                              if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 32))
#line 1279 "elds_to_erlang.m"
                                                                {
#line 1279 "elds_to_erlang.m"
                                                                  erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\s";
#line 1279 "elds_to_erlang.m"
                                                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1279 "elds_to_erlang.m"
                                                                }
#line 1273 "elds_to_erlang.m"
                                                              else
#line 1273 "elds_to_erlang.m"
                                                                if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 34))
#line 1309 "elds_to_erlang.m"
                                                                  {
#line 1309 "elds_to_erlang.m"
                                                                    erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\"";
#line 1309 "elds_to_erlang.m"
                                                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1309 "elds_to_erlang.m"
                                                                  }
#line 1273 "elds_to_erlang.m"
                                                                else
#line 1273 "elds_to_erlang.m"
                                                                  if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 39))
#line 1308 "elds_to_erlang.m"
                                                                    {
#line 1308 "elds_to_erlang.m"
                                                                      erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\'";
#line 1308 "elds_to_erlang.m"
                                                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1308 "elds_to_erlang.m"
                                                                    }
#line 1273 "elds_to_erlang.m"
                                                                  else
#line 1273 "elds_to_erlang.m"
                                                                    if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 92))
#line 1310 "elds_to_erlang.m"
                                                                      {
#line 1310 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\\";
#line 1310 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1310 "elds_to_erlang.m"
                                                                      }
#line 1273 "elds_to_erlang.m"
                                                                    else
#line 1273 "elds_to_erlang.m"
                                                                      if ((erl_backend__elds_to_erlang__Int_8 == (MR_Integer) 127))
#line 1274 "elds_to_erlang.m"
                                                                        {
#line 1274 "elds_to_erlang.m"
                                                                          erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\d";
#line 1274 "elds_to_erlang.m"
                                                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1274 "elds_to_erlang.m"
                                                                        }
#line 1273 "elds_to_erlang.m"
                                                                      else
#line 1273 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1264 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1263 "elds_to_erlang.m"
          {
#line 1263 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_9);
#line 1263 "elds_to_erlang.m"
            return;
          }
#line 1264 "elds_to_erlang.m"
        else
#line 1265 "elds_to_erlang.m"
          {
#line 1265 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__OctalString_10;

#line 1265 "elds_to_erlang.m"
            {
#line 1265 "elds_to_erlang.m"
              mercury__string__int_to_base_string_3_p_0(erl_backend__elds_to_erlang__Int_8, (MR_Integer) 8, &erl_backend__elds_to_erlang__OctalString_10);
            }
#line 1266 "elds_to_erlang.m"
            {
#line 1266 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 92);
            }
#line 1267 "elds_to_erlang.m"
            {
#line 1267 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__OctalString_10);
#line 1267 "elds_to_erlang.m"
              return;
            }
#line 1265 "elds_to_erlang.m"
          }
#line 1264 "elds_to_erlang.m"
      }
#line 1246 "elds_to_erlang.m"
  }
#line 1243 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 1237 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
#line 1237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1237 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_6)
#line 1237 "elds_to_erlang.m"
{
#line 1240 "elds_to_erlang.m"
  {
#line 1240 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1240 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0]));
#line 1241 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1));
#line 1241 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1241 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 3) = ((MR_Box) (erl_backend__elds_to_erlang__StringOrAtom_5));
#line 1241 "elds_to_erlang.m"
    }
#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_10_10, erl_backend__elds_to_erlang__String_6, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9);
    }
#line 1240 "elds_to_erlang.m"
  }
#line 1237 "elds_to_erlang.m"
}

#line 1203 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
#line 1203 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Binop_4)
#line 1203 "elds_to_erlang.m"
{
#line 1205 "elds_to_erlang.m"
  {
#line 1205 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1205 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_8_8;

#line 1211 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 12))
#line 1223 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_8_8 = (MR_String) "<";
#line 1211 "elds_to_erlang.m"
    else
#line 1211 "elds_to_erlang.m"
      if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 16))
#line 1227 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_8_8 = (MR_String) "=/=";
#line 1211 "elds_to_erlang.m"
      else
#line 1211 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 15))
#line 1226 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_8_8 = (MR_String) "=:=";
#line 1211 "elds_to_erlang.m"
        else
#line 1211 "elds_to_erlang.m"
          if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 11))
#line 1222 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_8_8 = (MR_String) "=<";
#line 1211 "elds_to_erlang.m"
          else
#line 1211 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 14))
#line 1225 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_8_8 = (MR_String) ">";
#line 1211 "elds_to_erlang.m"
            else
#line 1211 "elds_to_erlang.m"
              if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 13))
#line 1224 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_8_8 = (MR_String) ">=";
#line 1211 "elds_to_erlang.m"
              else
#line 1211 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 5))
#line 1216 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_8_8 = (MR_String) "+";
#line 1211 "elds_to_erlang.m"
                else
#line 1211 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 17))
#line 1228 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_8_8 = (MR_String) "andalso";
#line 1211 "elds_to_erlang.m"
                  else
#line 1211 "elds_to_erlang.m"
                    if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 4))
#line 1215 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_8_8 = (MR_String) "band";
#line 1211 "elds_to_erlang.m"
                    else
#line 1211 "elds_to_erlang.m"
                      if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 7))
#line 1218 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_8_8 = (MR_String) "bor";
#line 1211 "elds_to_erlang.m"
                      else
#line 1211 "elds_to_erlang.m"
                        if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 9))
#line 1220 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__V_8_8 = (MR_String) "bsl";
#line 1211 "elds_to_erlang.m"
                        else
#line 1211 "elds_to_erlang.m"
                          if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 10))
#line 1221 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_8_8 = (MR_String) "bsr";
#line 1211 "elds_to_erlang.m"
                          else
#line 1211 "elds_to_erlang.m"
                            if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 8))
#line 1219 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__V_8_8 = (MR_String) "bxor";
#line 1211 "elds_to_erlang.m"
                            else
#line 1211 "elds_to_erlang.m"
                              if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 1))
#line 1212 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__V_8_8 = (MR_String) "/";
#line 1211 "elds_to_erlang.m"
                              else
#line 1211 "elds_to_erlang.m"
                                if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 2))
#line 1213 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__V_8_8 = (MR_String) "div";
#line 1211 "elds_to_erlang.m"
                                else
#line 1211 "elds_to_erlang.m"
                                  if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 0))
#line 1211 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__V_8_8 = (MR_String) "*";
#line 1211 "elds_to_erlang.m"
                                  else
#line 1211 "elds_to_erlang.m"
                                    if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 18))
#line 1229 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__V_8_8 = (MR_String) "orelse";
#line 1211 "elds_to_erlang.m"
                                    else
#line 1211 "elds_to_erlang.m"
                                      if ((erl_backend__elds_to_erlang__Binop_4 == (MR_Integer) 3))
#line 1214 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_8_8 = (MR_String) "rem";
#line 1211 "elds_to_erlang.m"
                                      else
#line 1217 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_8_8 = (MR_String) "-";
#line 1206 "elds_to_erlang.m"
    {
#line 1206 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_8_8);
    }
#line 1373 "elds_to_erlang.m"
    {
#line 1373 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
      return;
    }
#line 1205 "elds_to_erlang.m"
  }
#line 1203 "elds_to_erlang.m"
}

#line 1196 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
#line 1196 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1)
#line 1196 "elds_to_erlang.m"
{
#line 1198 "elds_to_erlang.m"
  {
#line 1198 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1198 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeadVar__2_2;

#line 1198 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__HeadVar__1_1 == (MR_Integer) 2))
#line 1200 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__HeadVar__2_2 = (MR_String) "bnot ";
#line 1198 "elds_to_erlang.m"
    else
#line 1198 "elds_to_erlang.m"
      if ((erl_backend__elds_to_erlang__HeadVar__1_1 == (MR_Integer) 3))
#line 1201 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__HeadVar__2_2 = (MR_String) "not ";
#line 1198 "elds_to_erlang.m"
      else
#line 1198 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__HeadVar__1_1 == (MR_Integer) 1))
#line 1199 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__HeadVar__2_2 = (MR_String) "-";
#line 1198 "elds_to_erlang.m"
        else
#line 1198 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__HeadVar__2_2 = (MR_String) "+";
#line 1198 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1198 "elds_to_erlang.m"
  }
#line 1196 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 1147 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
#line 1147 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4)
#line 1147 "elds_to_erlang.m"
{
#line 1157 "elds_to_erlang.m"
  {
#line 1157 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1151 "elds_to_erlang.m"
    MR_Char erl_backend__elds_to_erlang__FirstChar_6;

#line 1151 "elds_to_erlang.m"
    {
#line 1151 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mercury__string__index_3_p_0(erl_backend__elds_to_erlang__String_4, (MR_Integer) 0, &erl_backend__elds_to_erlang__FirstChar_6);
    }
#line 1151 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1151 "elds_to_erlang.m"
      {
#line 1152 "elds_to_erlang.m"
        {
#line 1152 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = mercury__char__is_lower_1_p_0(erl_backend__elds_to_erlang__FirstChar_6);
        }
#line 1151 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1151 "elds_to_erlang.m"
          {
#line 1153 "elds_to_erlang.m"
            {
#line 1153 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__String_4);
            }
#line 1151 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 1151 "elds_to_erlang.m"
              {
#line 1165 "elds_to_erlang.m"
                if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "if") == 0))
#line 1181 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                else
#line 1165 "elds_to_erlang.m"
                  if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "of") == 0))
#line 1184 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                  else
#line 1165 "elds_to_erlang.m"
                    if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "or") == 0))
#line 1185 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                    else
#line 1165 "elds_to_erlang.m"
                      if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "and") == 0))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                      else
#line 1165 "elds_to_erlang.m"
                        if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "bor") == 0))
#line 1171 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                        else
#line 1165 "elds_to_erlang.m"
                          if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "bsl") == 0))
#line 1172 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                          else
#line 1165 "elds_to_erlang.m"
                            if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "bsr") == 0))
#line 1173 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                            else
#line 1165 "elds_to_erlang.m"
                              if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "div") == 0))
#line 1178 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                              else
#line 1165 "elds_to_erlang.m"
                                if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "end") == 0))
#line 1179 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                else
#line 1165 "elds_to_erlang.m"
                                  if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "fun") == 0))
#line 1180 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                  else
#line 1165 "elds_to_erlang.m"
                                    if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "let") == 0))
#line 1182 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                    else
#line 1165 "elds_to_erlang.m"
                                      if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "not") == 0))
#line 1183 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                      else
#line 1165 "elds_to_erlang.m"
                                        if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "rem") == 0))
#line 1189 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                        else
#line 1165 "elds_to_erlang.m"
                                          if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "try") == 0))
#line 1190 "elds_to_erlang.m"
                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                          else
#line 1165 "elds_to_erlang.m"
                                            if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "xor") == 0))
#line 1192 "elds_to_erlang.m"
                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                            else
#line 1165 "elds_to_erlang.m"
                                              if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "band") == 0))
#line 1168 "elds_to_erlang.m"
                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                              else
#line 1165 "elds_to_erlang.m"
                                                if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "bnot") == 0))
#line 1170 "elds_to_erlang.m"
                                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                else
#line 1165 "elds_to_erlang.m"
                                                  if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "bxor") == 0))
#line 1174 "elds_to_erlang.m"
                                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                  else
#line 1165 "elds_to_erlang.m"
                                                    if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "case") == 0))
#line 1175 "elds_to_erlang.m"
                                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                    else
#line 1165 "elds_to_erlang.m"
                                                      if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "cond") == 0))
#line 1177 "elds_to_erlang.m"
                                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                      else
#line 1165 "elds_to_erlang.m"
                                                        if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "when") == 0))
#line 1191 "elds_to_erlang.m"
                                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                        else
#line 1165 "elds_to_erlang.m"
                                                          if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "after") == 0))
#line 1165 "elds_to_erlang.m"
                                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                          else
#line 1165 "elds_to_erlang.m"
                                                            if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "begin") == 0))
#line 1169 "elds_to_erlang.m"
                                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                            else
#line 1165 "elds_to_erlang.m"
                                                              if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "catch") == 0))
#line 1176 "elds_to_erlang.m"
                                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                              else
#line 1165 "elds_to_erlang.m"
                                                                if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "query") == 0))
#line 1187 "elds_to_erlang.m"
                                                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                                else
#line 1165 "elds_to_erlang.m"
                                                                  if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "orelse") == 0))
#line 1186 "elds_to_erlang.m"
                                                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                                  else
#line 1165 "elds_to_erlang.m"
                                                                    if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "andalso") == 0))
#line 1167 "elds_to_erlang.m"
                                                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                                    else
#line 1165 "elds_to_erlang.m"
                                                                      if ((strcmp(erl_backend__elds_to_erlang__String_4, (MR_String) "receive") == 0))
#line 1188 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1165 "elds_to_erlang.m"
                                                                      else
#line 1165 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1154 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1151 "elds_to_erlang.m"
              }
#line 1151 "elds_to_erlang.m"
          }
#line 1151 "elds_to_erlang.m"
      }
#line 1157 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1156 "elds_to_erlang.m"
      {
#line 1156 "elds_to_erlang.m"
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__String_4);
#line 1156 "elds_to_erlang.m"
        return;
      }
#line 1157 "elds_to_erlang.m"
    else
#line 1158 "elds_to_erlang.m"
      {
#line 1241 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14;

#line 1158 "elds_to_erlang.m"
        {
#line 1158 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 39);
        }
#line 1241 "elds_to_erlang.m"
        {
#line 1241 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[9], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14);
        }
#line 1160 "elds_to_erlang.m"
        {
#line 1160 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 39);
#line 1160 "elds_to_erlang.m"
          return;
        }
#line 1158 "elds_to_erlang.m"
      }
#line 1157 "elds_to_erlang.m"
  }
#line 1147 "elds_to_erlang.m"
}

#line 1139 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
#line 1139 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_3)
#line 1139 "elds_to_erlang.m"
{
#line 1141 "elds_to_erlang.m"
  {
#line 1141 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1141 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__String_4;
#line 1141 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ErlangModuleName_5;

#line 1142 "elds_to_erlang.m"
    {
#line 1142 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ErlangModuleName_5 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__ModuleName_3);
    }
#line 1143 "elds_to_erlang.m"
    {
#line 1143 "elds_to_erlang.m"
      return erl_backend__elds_to_erlang__String_4 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_5, (MR_String) "__");
    }
#line 1141 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__String_4;
#line 1141 "elds_to_erlang.m"
  }
#line 1139 "elds_to_erlang.m"
}

#line 1050 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
#line 1050 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__PredName_12,
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
#line 1050 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
#line 1050 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
#line 1050 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
#line 1050 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
#line 1050 "elds_to_erlang.m"
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18)
#line 1050 "elds_to_erlang.m"
{
#line 1055 "elds_to_erlang.m"
  {
#line 1055 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Suffix_19;
#line 1055 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__OrigArity_20;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredLabelStr0_21;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredLabelStr_22;
#line 1055 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ModeNum_23;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_26_26;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_28_28;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_29_29;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_30_30;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_35_35;
#line 1055 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_37_37;

#line 1060 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__PredIsImported_16 == (MR_Integer) 0))
#line 1062 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__MaybeExtModule_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1060 "elds_to_erlang.m"
    else
#line 1058 "elds_to_erlang.m"
      {
#line 1058 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_24_24;
#line 1058 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_41;

#line 1142 "elds_to_erlang.m"
        {
#line 1142 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_41 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
        }
#line 1143 "elds_to_erlang.m"
        {
#line 1143 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_24_24 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_41, (MR_String) "__");
        }
#line 1059 "elds_to_erlang.m"
        {
#line 1059 "elds_to_erlang.m"
          MR_Word base;
#line 1059 "elds_to_erlang.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "elds_to_erlang.m"
          *erl_backend__elds_to_erlang__MaybeExtModule_17 = base;
#line 1059 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__elds_to_erlang__V_24_24));
#line 1059 "elds_to_erlang.m"
        }
#line 1058 "elds_to_erlang.m"
      }
#line 1069 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__PredOrFunc_13 == (MR_Integer) 1))
#line 1070 "elds_to_erlang.m"
      {
#line 1071 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "f";
#line 1072 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__OrigArity_20 = (erl_backend__elds_to_erlang__PredArity_14 - (MR_Integer) 1);
#line 1070 "elds_to_erlang.m"
      }
#line 1069 "elds_to_erlang.m"
    else
#line 1066 "elds_to_erlang.m"
      {
#line 1067 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "p";
#line 1068 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__OrigArity_20 = erl_backend__elds_to_erlang__PredArity_14;
#line 1066 "elds_to_erlang.m"
      }
#line 1075 "elds_to_erlang.m"
    {
#line 1075 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_29_29 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__OrigArity_20);
    }
#line 1076 "elds_to_erlang.m"
    {
#line 1076 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Suffix_19);
    }
#line 1075 "elds_to_erlang.m"
    {
#line 1075 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_28_28 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__V_29_29, erl_backend__elds_to_erlang__V_30_30);
    }
#line 1075 "elds_to_erlang.m"
    {
#line 1075 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_28_28);
    }
#line 1075 "elds_to_erlang.m"
    {
#line 1075 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredLabelStr0_21 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_12, erl_backend__elds_to_erlang__V_26_26);
    }
#line 1079 "elds_to_erlang.m"
    {
#line 1079 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_10, erl_backend__elds_to_erlang__PredModule_11);
    }
#line 1079 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1079 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1080 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PredIsImported_16 == (MR_Integer) 0);
#line 1085 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1083 "elds_to_erlang.m"
      {
#line 1083 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_32_32;
#line 1083 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_34_34;
#line 1083 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_45;

#line 1142 "elds_to_erlang.m"
        {
#line 1142 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_45 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
        }
#line 1143 "elds_to_erlang.m"
        {
#line 1143 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_34_34 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_45, (MR_String) "__");
        }
#line 1083 "elds_to_erlang.m"
        {
#line 1083 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", erl_backend__elds_to_erlang__V_34_34);
        }
#line 1083 "elds_to_erlang.m"
        {
#line 1083 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__PredLabelStr_22 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr0_21, erl_backend__elds_to_erlang__V_32_32);
        }
#line 1083 "elds_to_erlang.m"
      }
#line 1085 "elds_to_erlang.m"
    else
#line 1087 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredLabelStr_22 = erl_backend__elds_to_erlang__PredLabelStr0_21;
#line 1090 "elds_to_erlang.m"
    {
#line 1090 "elds_to_erlang.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_15, &erl_backend__elds_to_erlang__ModeNum_23);
    }
#line 1091 "elds_to_erlang.m"
    {
#line 1091 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_37_37 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_23);
    }
#line 1091 "elds_to_erlang.m"
    {
#line 1091 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_37_37);
    }
#line 1091 "elds_to_erlang.m"
    {
#line 1091 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__ProcNameStr_18 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr_22, erl_backend__elds_to_erlang__V_35_35);
    }
#line 1055 "elds_to_erlang.m"
  }
#line 1050 "elds_to_erlang.m"
}

#line 994 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
#line 994 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name0_3)
#line 994 "elds_to_erlang.m"
{
#line 1003 "elds_to_erlang.m"
  {
#line 1003 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1003 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_4;
#line 1001 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_9_9;

#line 1001 "elds_to_erlang.m"
    {
#line 1001 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_9_9 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Name0_3);
    }
#line 1001 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_9_9 <= (MR_Integer) 200);
#line 1003 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1002 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__Name_4 = erl_backend__elds_to_erlang__Name0_3;
#line 1003 "elds_to_erlang.m"
    else
#line 1011 "elds_to_erlang.m"
      {
#line 1011 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Hash_5;
#line 1011 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Left_6;
#line 1011 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Right_7;
#line 1011 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Middle_8;
#line 1011 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_11_11;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_16_16;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_17_17;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_22_22;

#line 1011 "elds_to_erlang.m"
        {
#line 1011 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_11_11 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Name0_3);
        }
#line 1011 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Hash_5 = (erl_backend__elds_to_erlang__V_11_11 & (MR_Integer) 4294967295);
#line 1012 "elds_to_erlang.m"
        {
#line 1012 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Left_6 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
#line 1013 "elds_to_erlang.m"
        {
#line 1013 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Right_7 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
#line 1014 "elds_to_erlang.m"
        {
#line 1014 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Middle_8 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_5, (MR_Integer) 16);
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_7));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 0) = ((MR_Box) ((MR_String) "..."));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_8));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_20_20));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_17_17, 0) = ((MR_Box) ((MR_String) "..."));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_17_17, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_19_19));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_6));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_17_17));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          return erl_backend__elds_to_erlang__Name_4 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_16_16);
        }
#line 1011 "elds_to_erlang.m"
      }
#line 1003 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__Name_4;
#line 1003 "elds_to_erlang.m"
  }
#line 994 "elds_to_erlang.m"
}

#line 931 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
#line 931 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 931 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiId_6)
#line 931 "elds_to_erlang.m"
{
#line 934 "elds_to_erlang.m"
  {
#line 934 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 934 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__CurModuleName_8;
#line 934 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__InstanceModule_13;
#line 934 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Atom1_15;
#line 934 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Atom_28;
#line 1001 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_65_65;

#line 935 "elds_to_erlang.m"
    {
#line 935 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, &erl_backend__elds_to_erlang__CurModuleName_8);
    }
#line 949 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_6)) == (MR_mktag((MR_Integer) 3))))
#line 974 "elds_to_erlang.m"
      {
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__TCName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 974 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__InstanceStr_22;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ClassModuleName_23;
#line 974 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__ClassName_24;
#line 974 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__ClassArity_25;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__QClassName_26;
#line 974 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__QClassNameStr_27;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_32_32;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_34_34;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_35_35;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_37_37;
#line 974 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_38_38;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 974 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_41_41;

#line 973 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__InstanceModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 1)));
#line 973 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__InstanceStr_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 2)));
#line 975 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__ClassModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 0)));
#line 975 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__ClassName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 1)));
#line 975 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__ClassArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 2)));
#line 976 "elds_to_erlang.m"
        {
#line 976 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__QClassName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__ClassModuleName_23));
#line 976 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__ClassName_24));
#line 976 "elds_to_erlang.m"
        }
#line 977 "elds_to_erlang.m"
        {
#line 977 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__QClassNameStr_27 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__QClassName_26, (MR_String) "__");
        }
#line 979 "elds_to_erlang.m"
        {
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_38_38 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ClassArity_25);
        }
#line 979 "elds_to_erlang.m"
        {
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_41_41, 0) = ((MR_Box) (erl_backend__elds_to_erlang__InstanceStr_22));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 979 "elds_to_erlang.m"
        }
#line 979 "elds_to_erlang.m"
        {
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_39_39, 0) = ((MR_Box) ((MR_String) "__"));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_39_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_41_41));
#line 979 "elds_to_erlang.m"
        }
#line 979 "elds_to_erlang.m"
        {
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_37_37, 0) = ((MR_Box) (erl_backend__elds_to_erlang__V_38_38));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_37_37, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_39_39));
#line 979 "elds_to_erlang.m"
        }
#line 979 "elds_to_erlang.m"
        {
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_35_35, 0) = ((MR_Box) ((MR_String) "__arity"));
#line 979 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_35_35, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_37_37));
#line 979 "elds_to_erlang.m"
        }
#line 978 "elds_to_erlang.m"
        {
#line 978 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_34_34, 0) = ((MR_Box) (erl_backend__elds_to_erlang__QClassNameStr_27));
#line 978 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_34_34, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_35_35));
#line 978 "elds_to_erlang.m"
        }
#line 978 "elds_to_erlang.m"
        {
#line 978 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, 0) = ((MR_Box) ((MR_String) "BaseTypeclassInfo_"));
#line 978 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_34_34));
#line 978 "elds_to_erlang.m"
        }
#line 978 "elds_to_erlang.m"
        {
#line 978 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Atom1_15 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_32_32);
        }
#line 974 "elds_to_erlang.m"
      }
#line 949 "elds_to_erlang.m"
    else
#line 949 "elds_to_erlang.m"
      if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_6)) == (MR_mktag((MR_Integer) 2))))
#line 959 "elds_to_erlang.m"
        {
#line 959 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 959 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Prefix_20;
#line 959 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_43_43;
#line 959 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Atom0_57;
#line 960 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__V_19_19;

#line 960 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3)));
#line 960 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 960 "elds_to_erlang.m"
            {
#line 960 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__PseudoTypeInfo_18, (MR_Integer) 0)));
#line 961 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "type_var_";
#line 960 "elds_to_erlang.m"
            }
#line 960 "elds_to_erlang.m"
          else
#line 963 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "pti_";
#line 967 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
#line 968 "elds_to_erlang.m"
          {
#line 968 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_43_43 = backend_libs__rtti__pseudo_type_info_to_string_1_f_0(erl_backend__elds_to_erlang__PseudoTypeInfo_18);
          }
#line 968 "elds_to_erlang.m"
          {
#line 968 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom0_57 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__Prefix_20, erl_backend__elds_to_erlang__V_43_43);
          }
#line 971 "elds_to_erlang.m"
          {
#line 971 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_57, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
#line 959 "elds_to_erlang.m"
        }
#line 949 "elds_to_erlang.m"
      else
#line 949 "elds_to_erlang.m"
        if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_6)) == (MR_mktag((MR_Integer) 0))))
#line 937 "elds_to_erlang.m"
          {
#line 937 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__RttiTypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 937 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 0)));
#line 937 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__CRttiId_14;
#line 938 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 1)));
#line 938 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 2)));
#line 941 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__V_50_50;

#line 941 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__ModuleName_10)) == (MR_mktag((MR_Integer) 0)));
#line 941 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 941 "elds_to_erlang.m"
              {
#line 941 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ModuleName_10, (MR_Integer) 0)));
#line 941 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_50_50, (MR_String) "") == 0);
#line 941 "elds_to_erlang.m"
              }
#line 943 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 942 "elds_to_erlang.m"
              {
#line 942 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__InstanceModule_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 943 "elds_to_erlang.m"
            else
#line 944 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__ModuleName_10;
#line 947 "elds_to_erlang.m"
            {
#line 947 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__CRttiId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 947 "elds_to_erlang.m"
              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 0) = ((MR_Box) (erl_backend__elds_to_erlang__RttiTypeCtor_9));
#line 947 "elds_to_erlang.m"
              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 947 "elds_to_erlang.m"
            }
#line 948 "elds_to_erlang.m"
            {
#line 948 "elds_to_erlang.m"
              backend_libs__rtti__id_to_c_identifier_2_p_0(erl_backend__elds_to_erlang__CRttiId_14, &erl_backend__elds_to_erlang__Atom1_15);
            }
#line 937 "elds_to_erlang.m"
          }
#line 949 "elds_to_erlang.m"
        else
#line 950 "elds_to_erlang.m"
          {
#line 950 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 950 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__Atom0_17;
#line 950 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__V_47_47;

#line 953 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
#line 954 "elds_to_erlang.m"
            {
#line 954 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_47_47 = backend_libs__rtti__type_info_to_string_1_f_0(erl_backend__elds_to_erlang__TypeInfo_16);
            }
#line 954 "elds_to_erlang.m"
            {
#line 954 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Atom0_17 = mercury__string__f_43_43_2_f_0((MR_String) "ti_", erl_backend__elds_to_erlang__V_47_47);
            }
#line 957 "elds_to_erlang.m"
            {
#line 957 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_17, (MR_String) "type_ctor_info", (MR_String) "tci");
            }
#line 950 "elds_to_erlang.m"
          }
#line 1001 "elds_to_erlang.m"
    {
#line 1001 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_65_65 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
    }
#line 1001 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_65_65 <= (MR_Integer) 200);
#line 1003 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1002 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__Atom_28 = erl_backend__elds_to_erlang__Atom1_15;
#line 1003 "elds_to_erlang.m"
    else
#line 1011 "elds_to_erlang.m"
      {
#line 1011 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Hash_61;
#line 1011 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Left_62;
#line 1011 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Right_63;
#line 1011 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Middle_64;
#line 1011 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_67_67;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_72_72;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_73_73;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_75_75;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_76_76;
#line 1011 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_78_78;

#line 1011 "elds_to_erlang.m"
        {
#line 1011 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_67_67 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
        }
#line 1011 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Hash_61 = (erl_backend__elds_to_erlang__V_67_67 & (MR_Integer) 4294967295);
#line 1012 "elds_to_erlang.m"
        {
#line 1012 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Left_62 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
#line 1013 "elds_to_erlang.m"
        {
#line 1013 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Right_63 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
#line 1014 "elds_to_erlang.m"
        {
#line 1014 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Middle_64 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_61, (MR_Integer) 16);
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_78_78, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_63));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_76_76, 0) = ((MR_Box) ((MR_String) "..."));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_76_76, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_78_78));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_75_75, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_64));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_75_75, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_76_76));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_73_73, 0) = ((MR_Box) ((MR_String) "..."));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_73_73, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_75_75));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_72_72, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_62));
#line 1015 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_72_72, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_73_73));
#line 1015 "elds_to_erlang.m"
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Atom_28 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_72_72);
        }
#line 1011 "elds_to_erlang.m"
      }
#line 982 "elds_to_erlang.m"
    {
#line 982 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__CurModuleName_8, erl_backend__elds_to_erlang__InstanceModule_13);
    }
#line 982 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 985 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 983 "elds_to_erlang.m"
      {
#line 983 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_52_52;
#line 983 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_82;

#line 1142 "elds_to_erlang.m"
        {
#line 1142 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_82 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__InstanceModule_13);
        }
#line 1143 "elds_to_erlang.m"
        {
#line 1143 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_52_52 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_82, (MR_String) "__");
        }
#line 983 "elds_to_erlang.m"
        {
#line 983 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_52_52);
        }
#line 984 "elds_to_erlang.m"
        {
#line 984 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 983 "elds_to_erlang.m"
      }
#line 985 "elds_to_erlang.m"
    else
#line 984 "elds_to_erlang.m"
      {
#line 984 "elds_to_erlang.m"
      }
#line 988 "elds_to_erlang.m"
    {
#line 988 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_28);
#line 988 "elds_to_erlang.m"
      return;
    }
#line 934 "elds_to_erlang.m"
  }
#line 931 "elds_to_erlang.m"
}

#line 916 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
#line 916 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 916 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
#line 916 "elds_to_erlang.m"
{
#line 919 "elds_to_erlang.m"
  {
#line 919 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__MaybeExtModule_8;
#line 919 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_9;
#line 919 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ShortName_11;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 0)));
#line 919 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 1)));
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiProcName_24;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredOrFunc_25;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ThisModule_26;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredModule_27;
#line 919 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredName_28;
#line 919 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__PredArity_29;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredIsImported0_36;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Origin_38;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredInfo_41;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ImportStatus_42;
#line 919 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredIsImported_44;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ArgTypes_30;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___PredId_31;
#line 1026 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang___ProcId_32;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___HeadVarsWithNames_33;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ArgModes_34;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Detism_35;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___PredIsPseudoImported_37;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ProcIsExported_39;
#line 1026 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ProcIsImported_40;
#line 1034 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_43_43;
#line 1044 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__SpecialPred_45;

#line 1025 "elds_to_erlang.m"
    {
#line 1025 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__RttiProcName_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, erl_backend__elds_to_erlang__ProcId_23);
    }
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 0)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ThisModule_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 1)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredModule_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 2)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 3)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 4)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ArgTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 5)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 6)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 7)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___HeadVarsWithNames_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 8)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ArgModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 9)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___Detism_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredIsImported0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___PredIsPseudoImported_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Origin_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 11)));
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcIsExported_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1026 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcIsImported_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1032 "elds_to_erlang.m"
    {
#line 1032 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, &erl_backend__elds_to_erlang__PredInfo_41);
    }
#line 1033 "elds_to_erlang.m"
    {
#line 1033 "elds_to_erlang.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(erl_backend__elds_to_erlang__PredInfo_41, &erl_backend__elds_to_erlang__ImportStatus_42);
    }
#line 1034 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__ImportStatus_42)) == (MR_mktag((MR_Integer) 1)));
#line 1034 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1034 "elds_to_erlang.m"
      {
#line 1034 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__ImportStatus_42, (MR_Integer) 0)));
#line 1036 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__PredIsImported_44 = (MR_Integer) 0;
#line 1034 "elds_to_erlang.m"
      }
#line 1034 "elds_to_erlang.m"
    else
#line 1038 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredIsImported_44 = erl_backend__elds_to_erlang__PredIsImported0_36;
#line 1041 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Origin_38)) == (MR_mktag((MR_Integer) 0)));
#line 1041 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1041 "elds_to_erlang.m"
      {
#line 1041 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__SpecialPred_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Origin_38, (MR_Integer) 0)));
#line 1097 "elds_to_erlang.m"
        {
#line 1097 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__SpecialPred_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__SpecialPred_45, (MR_Integer) 0)));
#line 1097 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeCtor_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__SpecialPred_45, (MR_Integer) 1)));
#line 1134 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__TypeArity_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_52, (MR_Integer) 1)));
#line 1134 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__TypeName_55;
#line 1134 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeModule_56;
#line 1101 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeCtorSymName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_52, (MR_Integer) 0)));

#line 1106 "elds_to_erlang.m"
          if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__TypeCtorSymName_53)) == (MR_mktag((MR_Integer) 1))))
#line 1107 "elds_to_erlang.m"
            {
#line 1107 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeModule_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_53, (MR_Integer) 0)));
#line 1107 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeName_55 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_53, (MR_Integer) 1)));
#line 1107 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1107 "elds_to_erlang.m"
            }
#line 1106 "elds_to_erlang.m"
          else
#line 1103 "elds_to_erlang.m"
            {
#line 1103 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeName_55 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtorSymName_53, (MR_Integer) 0)));
#line 1104 "elds_to_erlang.m"
              {
#line 1104 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(erl_backend__elds_to_erlang__TypeCtor_52);
              }
#line 1103 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1103 "elds_to_erlang.m"
                {
#line 1105 "elds_to_erlang.m"
                  {
#line 1105 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__TypeModule_56 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
#line 1105 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1103 "elds_to_erlang.m"
                }
#line 1103 "elds_to_erlang.m"
            }
#line 1134 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 1110 "elds_to_erlang.m"
            {
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__ProcNameStr0_57;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__TypeModuleStr_58;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__ProcNameStr1_59;
#line 1110 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__ModeNum_60;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_62_62;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_63_63;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_65_65;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_66_66;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_67_67;
#line 1110 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_69_69;
#line 1110 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__ErlangModuleName_80;
#line 1115 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__V_74_74;

#line 1110 "elds_to_erlang.m"
              {
#line 1110 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__ProcNameStr0_57 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_28, (MR_String) "__");
              }
#line 1142 "elds_to_erlang.m"
              {
#line 1142 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__ErlangModuleName_80 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__TypeModule_56);
              }
#line 1143 "elds_to_erlang.m"
              {
#line 1143 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__TypeModuleStr_58 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_80, (MR_String) "__");
              }
#line 1113 "elds_to_erlang.m"
              {
#line 1113 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__TypeModule_56);
              }
#line 1113 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1113 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1113 "elds_to_erlang.m"
                {
#line 1114 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__SpecialPred_51 == (MR_Integer) 0);
#line 1113 "elds_to_erlang.m"
                  if (erl_backend__elds_to_erlang__succeeded)
#line 1113 "elds_to_erlang.m"
                    {
#line 1115 "elds_to_erlang.m"
                      {
#line 1115 "elds_to_erlang.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__elds_to_erlang__V_74_74);
                      }
#line 1115 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__ProcId_23 == erl_backend__elds_to_erlang__V_74_74);
#line 1115 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1113 "elds_to_erlang.m"
                    }
#line 1113 "elds_to_erlang.m"
                }
#line 1121 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1119 "elds_to_erlang.m"
                {
#line 1119 "elds_to_erlang.m"
                  {
#line 1119 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__ProcNameStr1_59 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr0_57, erl_backend__elds_to_erlang__TypeModuleStr_58);
                  }
#line 1120 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1119 "elds_to_erlang.m"
                }
#line 1121 "elds_to_erlang.m"
              else
#line 1124 "elds_to_erlang.m"
                {
#line 1124 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__ProcNameStr1_59 = erl_backend__elds_to_erlang__ProcNameStr0_57;
#line 1125 "elds_to_erlang.m"
                  {
#line 1125 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__TypeModule_56, erl_backend__elds_to_erlang__ThisModule_26);
                  }
#line 1125 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1127 "elds_to_erlang.m"
                  if (erl_backend__elds_to_erlang__succeeded)
#line 1126 "elds_to_erlang.m"
                    {
#line 1126 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "elds_to_erlang.m"
                      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, 0) = ((MR_Box) (erl_backend__elds_to_erlang__TypeModuleStr_58));
#line 1126 "elds_to_erlang.m"
                    }
#line 1127 "elds_to_erlang.m"
                  else
#line 1128 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1124 "elds_to_erlang.m"
                }
#line 1131 "elds_to_erlang.m"
              {
#line 1131 "elds_to_erlang.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_23, &erl_backend__elds_to_erlang__ModeNum_60);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_66_66 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__TypeArity_54);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_69_69 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_60);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_69_69);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_65_65 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__V_66_66, erl_backend__elds_to_erlang__V_67_67);
              }
#line 1132 "elds_to_erlang.m"
              {
#line 1132 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_65_65);
              }
#line 1132 "elds_to_erlang.m"
              {
#line 1132 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_62_62 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__TypeName_55, erl_backend__elds_to_erlang__V_63_63);
              }
#line 1132 "elds_to_erlang.m"
              {
#line 1132 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Name_9 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr1_59, erl_backend__elds_to_erlang__V_62_62);
              }
#line 1110 "elds_to_erlang.m"
            }
#line 1134 "elds_to_erlang.m"
          else
#line 1135 "elds_to_erlang.m"
            {
#line 1135 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_72_72;

#line 1136 "elds_to_erlang.m"
              {
#line 1136 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred ", erl_backend__elds_to_erlang__PredName_28);
              }
#line 1135 "elds_to_erlang.m"
              {
#line 1135 "elds_to_erlang.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.erlang_special_proc_name\'/6", erl_backend__elds_to_erlang__V_72_72);
#line 1135 "elds_to_erlang.m"
                return;
              }
#line 1135 "elds_to_erlang.m"
            }
#line 1097 "elds_to_erlang.m"
        }
#line 1041 "elds_to_erlang.m"
      }
#line 1041 "elds_to_erlang.m"
    else
#line 1045 "elds_to_erlang.m"
      {
#line 1045 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__PredModule_27, erl_backend__elds_to_erlang__PredName_28, erl_backend__elds_to_erlang__PredOrFunc_25, erl_backend__elds_to_erlang__PredArity_29, erl_backend__elds_to_erlang__ProcId_23, erl_backend__elds_to_erlang__PredIsImported_44, &erl_backend__elds_to_erlang__MaybeExtModule_8, &erl_backend__elds_to_erlang__Name_9);
      }
#line 925 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__MaybeExtModule_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 926 "elds_to_erlang.m"
      {
#line 926 "elds_to_erlang.m"
      }
#line 925 "elds_to_erlang.m"
    else
#line 922 "elds_to_erlang.m"
      {
#line 922 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__ExtModule_10 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, (MR_Integer) 0)));

#line 923 "elds_to_erlang.m"
        {
#line 923 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExtModule_10);
        }
#line 924 "elds_to_erlang.m"
        {
#line 924 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 922 "elds_to_erlang.m"
      }
#line 928 "elds_to_erlang.m"
    {
#line 928 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ShortName_11 = erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(erl_backend__elds_to_erlang__Name_9);
    }
#line 929 "elds_to_erlang.m"
    {
#line 929 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ShortName_11);
#line 929 "elds_to_erlang.m"
      return;
    }
#line 919 "elds_to_erlang.m"
  }
#line 916 "elds_to_erlang.m"
}

#line 907 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
#line 907 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__C_4)
#line 907 "elds_to_erlang.m"
{
#line 912 "elds_to_erlang.m"
  {
#line 912 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 910 "elds_to_erlang.m"
    {
#line 910 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__C_4);
    }
#line 912 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 911 "elds_to_erlang.m"
      {
#line 911 "elds_to_erlang.m"
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__C_4);
#line 911 "elds_to_erlang.m"
        return;
      }
#line 912 "elds_to_erlang.m"
    else
#line 913 "elds_to_erlang.m"
      {
#line 913 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_9_9;

#line 913 "elds_to_erlang.m"
        {
#line 913 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_9_9 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__C_4);
        }
#line 913 "elds_to_erlang.m"
        {
#line 913 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_9_9);
#line 913 "elds_to_erlang.m"
          return;
        }
#line 913 "elds_to_erlang.m"
      }
#line 912 "elds_to_erlang.m"
  }
#line 907 "elds_to_erlang.m"
}

#line 904 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 904 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 904 "elds_to_erlang.m"
{
#line 904 "elds_to_erlang.m"
  {
#line 904 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 904 "elds_to_erlang.m"
    {
#line 904 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 904 "elds_to_erlang.m"
      return;
    }
#line 904 "elds_to_erlang.m"
  }
#line 904 "elds_to_erlang.m"
}

#line 898 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
#line 898 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4)
#line 898 "elds_to_erlang.m"
{
#line 900 "elds_to_erlang.m"
  {
#line 900 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 904 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9;

#line 904 "elds_to_erlang.m"
    {
#line 904 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[4], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9);
    }
#line 1373 "elds_to_erlang.m"
    {
#line 1373 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
      return;
    }
#line 900 "elds_to_erlang.m"
  }
#line 898 "elds_to_erlang.m"
}

#line 904 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 904 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 904 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 904 "elds_to_erlang.m"
{
#line 904 "elds_to_erlang.m"
  {
#line 904 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 904 "elds_to_erlang.m"
    {
#line 904 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 904 "elds_to_erlang.m"
      return;
    }
#line 904 "elds_to_erlang.m"
  }
#line 904 "elds_to_erlang.m"
}

#line 891 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
#line 891 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
#line 891 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Var_6)
#line 891 "elds_to_erlang.m"
{
#line 893 "elds_to_erlang.m"
  {
#line 893 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 893 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 893 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__VarName_8;
#line 893 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__VarNumber_9;
#line 893 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_12_12;
#line 893 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_14_14;
#line 893 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_16_16;
#line 904 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23;

#line 894 "elds_to_erlang.m"
    {
#line 894 "elds_to_erlang.m"
      mercury__varset__lookup_name_3_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__VarSet_5, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarName_8);
    }
#line 895 "elds_to_erlang.m"
    {
#line 895 "elds_to_erlang.m"
      mercury__term__var_to_int_2_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarNumber_9);
    }
#line 896 "elds_to_erlang.m"
    {
#line 896 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_16_16 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__VarNumber_9);
    }
#line 896 "elds_to_erlang.m"
    {
#line 896 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_16_16);
    }
#line 896 "elds_to_erlang.m"
    {
#line 896 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_12_12 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__VarName_8, erl_backend__elds_to_erlang__V_14_14);
    }
#line 904 "elds_to_erlang.m"
    {
#line 904 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[3], erl_backend__elds_to_erlang__V_12_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23);
    }
#line 1373 "elds_to_erlang.m"
    {
#line 1373 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
      return;
    }
#line 893 "elds_to_erlang.m"
  }
#line 891 "elds_to_erlang.m"
}

#line 586 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 586 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 586 "elds_to_erlang.m"
{
#line 586 "elds_to_erlang.m"
  {
#line 586 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 586 "elds_to_erlang.m"
    {
#line 586 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 586 "elds_to_erlang.m"
      return;
    }
#line 586 "elds_to_erlang.m"
  }
#line 586 "elds_to_erlang.m"
}

#line 586 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 586 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 586 "elds_to_erlang.m"
{
#line 586 "elds_to_erlang.m"
  {
#line 586 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 586 "elds_to_erlang.m"
    {
#line 586 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 586 "elds_to_erlang.m"
      return;
    }
#line 586 "elds_to_erlang.m"
  }
#line 586 "elds_to_erlang.m"
}

#line 857 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
#line 857 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 857 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 857 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 857 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Args_10)
#line 857 "elds_to_erlang.m"
{
#line 867 "elds_to_erlang.m"
  {
#line 867 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 863 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__SymName_12;
#line 863 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 863 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 863 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 863 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_21_21;

#line 863 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 863 "elds_to_erlang.m"
      {
#line 863 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 863 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 863 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 863 "elds_to_erlang.m"
          {
#line 863 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 863 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 863 "elds_to_erlang.m"
              {
#line 863 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__V_18_18, (MR_Integer) 0)));
#line 863 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 863 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 863 "elds_to_erlang.m"
                  {
#line 863 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_19_19, (MR_Integer) 1)));
#line 864 "elds_to_erlang.m"
                    {
#line 864 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_21_21 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_12);
                    }
#line 864 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_21_21, (MR_String) "[]") == 0);
#line 863 "elds_to_erlang.m"
                  }
#line 863 "elds_to_erlang.m"
              }
#line 863 "elds_to_erlang.m"
          }
#line 863 "elds_to_erlang.m"
      }
#line 867 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 866 "elds_to_erlang.m"
      {
#line 866 "elds_to_erlang.m"
        {
#line 866 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "[] ");
#line 866 "elds_to_erlang.m"
          return;
        }
#line 866 "elds_to_erlang.m"
      }
#line 867 "elds_to_erlang.m"
    else
#line 876 "elds_to_erlang.m"
      {
#line 876 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__A_13;
#line 876 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__B_14;
#line 868 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_24_24;
#line 868 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_25_25;
#line 868 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 868 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_27_27;
#line 868 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_28_28;
#line 868 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_29_29;
#line 868 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__SymName_49;

#line 868 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 868 "elds_to_erlang.m"
          {
#line 868 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 868 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_24_24)) == (MR_mktag((MR_Integer) 2)));
#line 868 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 868 "elds_to_erlang.m"
              {
#line 868 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__V_24_24, (MR_Integer) 0)));
#line 868 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 868 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 868 "elds_to_erlang.m"
                  {
#line 868 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_25_25, (MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 868 "elds_to_erlang.m"
                      {
#line 868 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, (MR_Integer) 0)));
#line 868 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, (MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
                        if (erl_backend__elds_to_erlang__succeeded)
#line 868 "elds_to_erlang.m"
                          {
#line 868 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, (MR_Integer) 0)));
#line 868 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, (MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "elds_to_erlang.m"
                            if (erl_backend__elds_to_erlang__succeeded)
#line 868 "elds_to_erlang.m"
                              {
#line 869 "elds_to_erlang.m"
                                {
#line 869 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_49);
                                }
#line 869 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_29_29, (MR_String) "[|]") == 0);
#line 868 "elds_to_erlang.m"
                              }
#line 868 "elds_to_erlang.m"
                          }
#line 868 "elds_to_erlang.m"
                      }
#line 868 "elds_to_erlang.m"
                  }
#line 868 "elds_to_erlang.m"
              }
#line 868 "elds_to_erlang.m"
          }
#line 876 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 871 "elds_to_erlang.m"
          {
#line 871 "elds_to_erlang.m"
            {
#line 871 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
#line 872 "elds_to_erlang.m"
            {
#line 872 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__A_13);
            }
#line 873 "elds_to_erlang.m"
            {
#line 873 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "| ");
            }
#line 874 "elds_to_erlang.m"
            {
#line 874 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__B_14);
            }
#line 875 "elds_to_erlang.m"
            {
#line 875 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "] ");
#line 875 "elds_to_erlang.m"
              return;
            }
#line 871 "elds_to_erlang.m"
          }
#line 876 "elds_to_erlang.m"
        else
#line 882 "elds_to_erlang.m"
          {
#line 882 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Args1_15;
#line 877 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_38_38;
#line 877 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_51_51;
#line 877 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 877 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_54_54;
#line 877 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__V_55_55;

#line 877 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 877 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 877 "elds_to_erlang.m"
              {
#line 877 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 877 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Args1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 889 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_55_55 = (MR_String) "{}";
#line 889 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_54_54 = (MR_Word) &erl_backend__elds_to_erlang_scalar_common_9[0];
#line 889 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_to_erlang_scalar_common_1[5]);
#line 889 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_to_erlang_scalar_common_9[1]);
#line 877 "elds_to_erlang.m"
                {
#line 877 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds_to_erlang__V_38_38, erl_backend__elds_to_erlang__V_51_51);
                }
#line 877 "elds_to_erlang.m"
              }
#line 882 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 879 "elds_to_erlang.m"
              {
#line 879 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__V_64_64;

#line 879 "elds_to_erlang.m"
                {
#line 879 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
#line 586 "elds_to_erlang.m"
                {
#line 586 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_1));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 586 "elds_to_erlang.m"
                }
#line 585 "elds_to_erlang.m"
                {
#line 585 "elds_to_erlang.m"
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args1_15, (MR_String) ", ", erl_backend__elds_to_erlang__V_64_64);
                }
#line 881 "elds_to_erlang.m"
                {
#line 881 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "} ");
#line 881 "elds_to_erlang.m"
                  return;
                }
#line 879 "elds_to_erlang.m"
              }
#line 882 "elds_to_erlang.m"
            else
#line 883 "elds_to_erlang.m"
              {
#line 883 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__V_78_78;

#line 883 "elds_to_erlang.m"
                {
#line 883 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
#line 586 "elds_to_erlang.m"
                {
#line 586 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_2));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 586 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 586 "elds_to_erlang.m"
                }
#line 585 "elds_to_erlang.m"
                {
#line 585 "elds_to_erlang.m"
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args_10, (MR_String) ", ", erl_backend__elds_to_erlang__V_78_78);
                }
#line 885 "elds_to_erlang.m"
                {
#line 885 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "} ");
#line 885 "elds_to_erlang.m"
                  return;
                }
#line 883 "elds_to_erlang.m"
              }
#line 882 "elds_to_erlang.m"
          }
#line 876 "elds_to_erlang.m"
      }
#line 867 "elds_to_erlang.m"
  }
#line 857 "elds_to_erlang.m"
}

#line 838 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
#line 838 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_5,
#line 838 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
#line 838 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
#line 838 "elds_to_erlang.m"
  MR_Integer * erl_backend__elds_to_erlang__Pos_8)
#line 838 "elds_to_erlang.m"
{
#line 840 "elds_to_erlang.m"
  while (MR_TRUE)
#line 840 "elds_to_erlang.m"
    {
#line 840 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 840 "elds_to_erlang.m"
      {
#line 840 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;
#line 840 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Pos1_9;
#line 840 "elds_to_erlang.m"
        MR_Char erl_backend__elds_to_erlang__Char_10;

#line 841 "elds_to_erlang.m"
        {
#line 841 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = mercury__string__unsafe_index_next_4_p_0(erl_backend__elds_to_erlang__String_5, erl_backend__elds_to_erlang__Pos0_7, &erl_backend__elds_to_erlang__Pos1_9, &erl_backend__elds_to_erlang__Char_10);
        }
#line 840 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 840 "elds_to_erlang.m"
          {
#line 842 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_10 == (MR_Char) 46);
#line 842 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 840 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 840 "elds_to_erlang.m"
              {
#line 854 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Char_10 == (MR_Char) 69))
#line 855 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 854 "elds_to_erlang.m"
                else
#line 854 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__Char_10 == (MR_Char) 101))
#line 854 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 854 "elds_to_erlang.m"
                  else
#line 854 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 846 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 844 "elds_to_erlang.m"
                  {
#line 844 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PrevDigit_6 == (MR_Integer) 1);
#line 844 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 844 "elds_to_erlang.m"
                      {
#line 845 "elds_to_erlang.m"
                        *erl_backend__elds_to_erlang__Pos_8 = erl_backend__elds_to_erlang__Pos0_7;
#line 845 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 844 "elds_to_erlang.m"
                      }
#line 844 "elds_to_erlang.m"
                  }
#line 846 "elds_to_erlang.m"
                else
#line 848 "elds_to_erlang.m"
                  {
#line 846 "elds_to_erlang.m"
                    {
#line 846 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = mercury__char__is_digit_1_p_0(erl_backend__elds_to_erlang__Char_10);
                    }
#line 848 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 847 "elds_to_erlang.m"
                      {
#line 847 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 847 "elds_to_erlang.m"
                        {
#line 847 "elds_to_erlang.m"
                          MR_Integer erl_backend__elds_to_erlang__Pos0__tmp_copy_7 = erl_backend__elds_to_erlang__Pos1_9;

#line 847 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__Pos0__tmp_copy_7;
#line 847 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 1;
#line 847 "elds_to_erlang.m"
                        }
#line 847 "elds_to_erlang.m"
                        continue;
#line 847 "elds_to_erlang.m"
                      }
#line 848 "elds_to_erlang.m"
                    else
#line 849 "elds_to_erlang.m"
                      {
#line 849 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 849 "elds_to_erlang.m"
                        {
#line 849 "elds_to_erlang.m"
                          MR_Integer erl_backend__elds_to_erlang__Pos0__tmp_copy_7 = erl_backend__elds_to_erlang__Pos1_9;

#line 849 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__Pos0__tmp_copy_7;
#line 849 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 0;
#line 849 "elds_to_erlang.m"
                        }
#line 849 "elds_to_erlang.m"
                        continue;
#line 849 "elds_to_erlang.m"
                      }
#line 848 "elds_to_erlang.m"
                  }
#line 840 "elds_to_erlang.m"
              }
#line 840 "elds_to_erlang.m"
          }
#line 840 "elds_to_erlang.m"
        return erl_backend__elds_to_erlang__succeeded;
#line 840 "elds_to_erlang.m"
      }
#line 840 "elds_to_erlang.m"
      break;
#line 840 "elds_to_erlang.m"
    }
#line 838 "elds_to_erlang.m"
}

#line 826 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
#line 826 "elds_to_erlang.m"
  MR_Float erl_backend__elds_to_erlang__Float_4)
#line 826 "elds_to_erlang.m"
{
#line 828 "elds_to_erlang.m"
  {
#line 828 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 828 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__S_6;
#line 834 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Pos_7;

#line 829 "elds_to_erlang.m"
    {
#line 829 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__S_6 = mercury__string__from_float_1_f_0(erl_backend__elds_to_erlang__Float_4);
    }
#line 830 "elds_to_erlang.m"
    {
#line 830 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang__digit_then_e_4_p_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, (MR_Integer) 0, &erl_backend__elds_to_erlang__Pos_7);
    }
#line 834 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 831 "elds_to_erlang.m"
      {
#line 831 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_12_12;
#line 831 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_17_17;
#line 831 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_19_19;

#line 831 "elds_to_erlang.m"
        {
#line 831 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_12_12 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, erl_backend__elds_to_erlang__Pos_7);
        }
#line 831 "elds_to_erlang.m"
        {
#line 831 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_12_12);
        }
#line 832 "elds_to_erlang.m"
        {
#line 832 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ".0");
        }
#line 833 "elds_to_erlang.m"
        {
#line 833 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__S_6);
        }
#line 833 "elds_to_erlang.m"
        {
#line 833 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_17_17 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, erl_backend__elds_to_erlang__Pos_7, erl_backend__elds_to_erlang__V_19_19);
        }
#line 833 "elds_to_erlang.m"
        {
#line 833 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_17_17);
#line 833 "elds_to_erlang.m"
          return;
        }
#line 831 "elds_to_erlang.m"
      }
#line 834 "elds_to_erlang.m"
    else
#line 835 "elds_to_erlang.m"
      {
#line 835 "elds_to_erlang.m"
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__S_6);
#line 835 "elds_to_erlang.m"
        return;
      }
#line 828 "elds_to_erlang.m"
  }
#line 826 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 767 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
#line 767 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 767 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 767 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 767 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Term_10)
#line 767 "elds_to_erlang.m"
{
#line 772 "elds_to_erlang.m"
  {
#line 772 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 772 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__Term_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "elds_to_erlang.m"
      {
#line 820 "elds_to_erlang.m"
        {
#line 820 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "_ ");
#line 820 "elds_to_erlang.m"
          return;
        }
#line 819 "elds_to_erlang.m"
      }
#line 772 "elds_to_erlang.m"
    else
#line 772 "elds_to_erlang.m"
      if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 1))))
#line 792 "elds_to_erlang.m"
        {
#line 792 "elds_to_erlang.m"
          MR_Char erl_backend__elds_to_erlang__Char_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));
#line 792 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__Int_61;

#line 793 "elds_to_erlang.m"
          {
#line 793 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Int_61 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__Char_15);
          }
#line 794 "elds_to_erlang.m"
          {
#line 794 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_1_p_0(erl_backend__elds_to_erlang__Char_15);
          }
#line 797 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 795 "elds_to_erlang.m"
            {
#line 795 "elds_to_erlang.m"
              {
#line 795 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 36);
              }
#line 796 "elds_to_erlang.m"
              {
#line 796 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_15);
              }
#line 795 "elds_to_erlang.m"
            }
#line 797 "elds_to_erlang.m"
          else
#line 800 "elds_to_erlang.m"
            {
#line 800 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Esc_16;

#line 1273 "elds_to_erlang.m"
              if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 1))
#line 1282 "elds_to_erlang.m"
                {
#line 1282 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^a";
#line 1282 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1282 "elds_to_erlang.m"
                }
#line 1273 "elds_to_erlang.m"
              else
#line 1273 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 2))
#line 1283 "elds_to_erlang.m"
                  {
#line 1283 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^b";
#line 1283 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1283 "elds_to_erlang.m"
                  }
#line 1273 "elds_to_erlang.m"
                else
#line 1273 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 3))
#line 1284 "elds_to_erlang.m"
                    {
#line 1284 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^c";
#line 1284 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1284 "elds_to_erlang.m"
                    }
#line 1273 "elds_to_erlang.m"
                  else
#line 1273 "elds_to_erlang.m"
                    if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 4))
#line 1285 "elds_to_erlang.m"
                      {
#line 1285 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^d";
#line 1285 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1285 "elds_to_erlang.m"
                      }
#line 1273 "elds_to_erlang.m"
                    else
#line 1273 "elds_to_erlang.m"
                      if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 5))
#line 1286 "elds_to_erlang.m"
                        {
#line 1286 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^e";
#line 1286 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1286 "elds_to_erlang.m"
                        }
#line 1273 "elds_to_erlang.m"
                      else
#line 1273 "elds_to_erlang.m"
                        if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 6))
#line 1287 "elds_to_erlang.m"
                          {
#line 1287 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^f";
#line 1287 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1287 "elds_to_erlang.m"
                          }
#line 1273 "elds_to_erlang.m"
                        else
#line 1273 "elds_to_erlang.m"
                          if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 7))
#line 1288 "elds_to_erlang.m"
                            {
#line 1288 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^g";
#line 1288 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1288 "elds_to_erlang.m"
                            }
#line 1273 "elds_to_erlang.m"
                          else
#line 1273 "elds_to_erlang.m"
                            if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 8))
#line 1273 "elds_to_erlang.m"
                              {
#line 1273 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\b";
#line 1273 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1273 "elds_to_erlang.m"
                              }
#line 1273 "elds_to_erlang.m"
                            else
#line 1273 "elds_to_erlang.m"
                              if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 9))
#line 1280 "elds_to_erlang.m"
                                {
#line 1280 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\t";
#line 1280 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1280 "elds_to_erlang.m"
                                }
#line 1273 "elds_to_erlang.m"
                              else
#line 1273 "elds_to_erlang.m"
                                if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 10))
#line 1277 "elds_to_erlang.m"
                                  {
#line 1277 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\n";
#line 1277 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1277 "elds_to_erlang.m"
                                  }
#line 1273 "elds_to_erlang.m"
                                else
#line 1273 "elds_to_erlang.m"
                                  if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 11))
#line 1281 "elds_to_erlang.m"
                                    {
#line 1281 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\v";
#line 1281 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1281 "elds_to_erlang.m"
                                    }
#line 1273 "elds_to_erlang.m"
                                  else
#line 1273 "elds_to_erlang.m"
                                    if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 12))
#line 1276 "elds_to_erlang.m"
                                      {
#line 1276 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\f";
#line 1276 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1276 "elds_to_erlang.m"
                                      }
#line 1273 "elds_to_erlang.m"
                                    else
#line 1273 "elds_to_erlang.m"
                                      if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 13))
#line 1278 "elds_to_erlang.m"
                                        {
#line 1278 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\r";
#line 1278 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1278 "elds_to_erlang.m"
                                        }
#line 1273 "elds_to_erlang.m"
                                      else
#line 1273 "elds_to_erlang.m"
                                        if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 14))
#line 1295 "elds_to_erlang.m"
                                          {
#line 1295 "elds_to_erlang.m"
                                            erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^n";
#line 1295 "elds_to_erlang.m"
                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1295 "elds_to_erlang.m"
                                          }
#line 1273 "elds_to_erlang.m"
                                        else
#line 1273 "elds_to_erlang.m"
                                          if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 15))
#line 1296 "elds_to_erlang.m"
                                            {
#line 1296 "elds_to_erlang.m"
                                              erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^o";
#line 1296 "elds_to_erlang.m"
                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1296 "elds_to_erlang.m"
                                            }
#line 1273 "elds_to_erlang.m"
                                          else
#line 1273 "elds_to_erlang.m"
                                            if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 16))
#line 1297 "elds_to_erlang.m"
                                              {
#line 1297 "elds_to_erlang.m"
                                                erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^p";
#line 1297 "elds_to_erlang.m"
                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1297 "elds_to_erlang.m"
                                              }
#line 1273 "elds_to_erlang.m"
                                            else
#line 1273 "elds_to_erlang.m"
                                              if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 17))
#line 1298 "elds_to_erlang.m"
                                                {
#line 1298 "elds_to_erlang.m"
                                                  erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^q";
#line 1298 "elds_to_erlang.m"
                                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1298 "elds_to_erlang.m"
                                                }
#line 1273 "elds_to_erlang.m"
                                              else
#line 1273 "elds_to_erlang.m"
                                                if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 18))
#line 1299 "elds_to_erlang.m"
                                                  {
#line 1299 "elds_to_erlang.m"
                                                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^r";
#line 1299 "elds_to_erlang.m"
                                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1299 "elds_to_erlang.m"
                                                  }
#line 1273 "elds_to_erlang.m"
                                                else
#line 1273 "elds_to_erlang.m"
                                                  if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 19))
#line 1300 "elds_to_erlang.m"
                                                    {
#line 1300 "elds_to_erlang.m"
                                                      erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^s";
#line 1300 "elds_to_erlang.m"
                                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1300 "elds_to_erlang.m"
                                                    }
#line 1273 "elds_to_erlang.m"
                                                  else
#line 1273 "elds_to_erlang.m"
                                                    if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 20))
#line 1301 "elds_to_erlang.m"
                                                      {
#line 1301 "elds_to_erlang.m"
                                                        erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^t";
#line 1301 "elds_to_erlang.m"
                                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1301 "elds_to_erlang.m"
                                                      }
#line 1273 "elds_to_erlang.m"
                                                    else
#line 1273 "elds_to_erlang.m"
                                                      if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 21))
#line 1302 "elds_to_erlang.m"
                                                        {
#line 1302 "elds_to_erlang.m"
                                                          erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^u";
#line 1302 "elds_to_erlang.m"
                                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1302 "elds_to_erlang.m"
                                                        }
#line 1273 "elds_to_erlang.m"
                                                      else
#line 1273 "elds_to_erlang.m"
                                                        if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 22))
#line 1303 "elds_to_erlang.m"
                                                          {
#line 1303 "elds_to_erlang.m"
                                                            erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^v";
#line 1303 "elds_to_erlang.m"
                                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1303 "elds_to_erlang.m"
                                                          }
#line 1273 "elds_to_erlang.m"
                                                        else
#line 1273 "elds_to_erlang.m"
                                                          if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 23))
#line 1304 "elds_to_erlang.m"
                                                            {
#line 1304 "elds_to_erlang.m"
                                                              erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^w";
#line 1304 "elds_to_erlang.m"
                                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1304 "elds_to_erlang.m"
                                                            }
#line 1273 "elds_to_erlang.m"
                                                          else
#line 1273 "elds_to_erlang.m"
                                                            if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 24))
#line 1305 "elds_to_erlang.m"
                                                              {
#line 1305 "elds_to_erlang.m"
                                                                erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^x";
#line 1305 "elds_to_erlang.m"
                                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1305 "elds_to_erlang.m"
                                                              }
#line 1273 "elds_to_erlang.m"
                                                            else
#line 1273 "elds_to_erlang.m"
                                                              if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 25))
#line 1306 "elds_to_erlang.m"
                                                                {
#line 1306 "elds_to_erlang.m"
                                                                  erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^y";
#line 1306 "elds_to_erlang.m"
                                                                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1306 "elds_to_erlang.m"
                                                                }
#line 1273 "elds_to_erlang.m"
                                                              else
#line 1273 "elds_to_erlang.m"
                                                                if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 26))
#line 1307 "elds_to_erlang.m"
                                                                  {
#line 1307 "elds_to_erlang.m"
                                                                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^z";
#line 1307 "elds_to_erlang.m"
                                                                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1307 "elds_to_erlang.m"
                                                                  }
#line 1273 "elds_to_erlang.m"
                                                                else
#line 1273 "elds_to_erlang.m"
                                                                  if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 27))
#line 1275 "elds_to_erlang.m"
                                                                    {
#line 1275 "elds_to_erlang.m"
                                                                      erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\e";
#line 1275 "elds_to_erlang.m"
                                                                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1275 "elds_to_erlang.m"
                                                                    }
#line 1273 "elds_to_erlang.m"
                                                                  else
#line 1273 "elds_to_erlang.m"
                                                                    if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 32))
#line 1279 "elds_to_erlang.m"
                                                                      {
#line 1279 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\s";
#line 1279 "elds_to_erlang.m"
                                                                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1279 "elds_to_erlang.m"
                                                                      }
#line 1273 "elds_to_erlang.m"
                                                                    else
#line 1273 "elds_to_erlang.m"
                                                                      if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 34))
#line 1309 "elds_to_erlang.m"
                                                                        {
#line 1309 "elds_to_erlang.m"
                                                                          erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\"";
#line 1309 "elds_to_erlang.m"
                                                                          erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1309 "elds_to_erlang.m"
                                                                        }
#line 1273 "elds_to_erlang.m"
                                                                      else
#line 1273 "elds_to_erlang.m"
                                                                        if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 39))
#line 1308 "elds_to_erlang.m"
                                                                          {
#line 1308 "elds_to_erlang.m"
                                                                            erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\'";
#line 1308 "elds_to_erlang.m"
                                                                            erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1308 "elds_to_erlang.m"
                                                                          }
#line 1273 "elds_to_erlang.m"
                                                                        else
#line 1273 "elds_to_erlang.m"
                                                                          if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 92))
#line 1310 "elds_to_erlang.m"
                                                                            {
#line 1310 "elds_to_erlang.m"
                                                                              erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\\";
#line 1310 "elds_to_erlang.m"
                                                                              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1310 "elds_to_erlang.m"
                                                                            }
#line 1273 "elds_to_erlang.m"
                                                                          else
#line 1273 "elds_to_erlang.m"
                                                                            if ((erl_backend__elds_to_erlang__Int_61 == (MR_Integer) 127))
#line 1274 "elds_to_erlang.m"
                                                                              {
#line 1274 "elds_to_erlang.m"
                                                                                erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\d";
#line 1274 "elds_to_erlang.m"
                                                                                erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1274 "elds_to_erlang.m"
                                                                              }
#line 1273 "elds_to_erlang.m"
                                                                            else
#line 1273 "elds_to_erlang.m"
                                                                              erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 800 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 798 "elds_to_erlang.m"
                {
#line 798 "elds_to_erlang.m"
                  {
#line 798 "elds_to_erlang.m"
                    mercury__io__write_char_3_p_0((MR_Char) 36);
                  }
#line 799 "elds_to_erlang.m"
                  {
#line 799 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_16);
                  }
#line 798 "elds_to_erlang.m"
                }
#line 800 "elds_to_erlang.m"
              else
#line 801 "elds_to_erlang.m"
                {
#line 801 "elds_to_erlang.m"
                  mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_61);
                }
#line 800 "elds_to_erlang.m"
            }
#line 1373 "elds_to_erlang.m"
          {
#line 1373 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
            return;
          }
#line 792 "elds_to_erlang.m"
        }
#line 772 "elds_to_erlang.m"
      else
#line 772 "elds_to_erlang.m"
        if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 2))))
#line 772 "elds_to_erlang.m"
          {
#line 772 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));

#line 773 "elds_to_erlang.m"
            {
#line 773 "elds_to_erlang.m"
              mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_12);
            }
#line 774 "elds_to_erlang.m"
            {
#line 774 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__space_2_p_0();
#line 774 "elds_to_erlang.m"
              return;
            }
#line 772 "elds_to_erlang.m"
          }
#line 772 "elds_to_erlang.m"
        else
#line 772 "elds_to_erlang.m"
          if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 809 "elds_to_erlang.m"
            {
#line 809 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
#line 809 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_29_29;

#line 810 "elds_to_erlang.m"
              {
#line 810 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_18);
              }
#line 810 "elds_to_erlang.m"
              {
#line 810 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_29_29);
              }
#line 1373 "elds_to_erlang.m"
              {
#line 1373 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
                return;
              }
#line 809 "elds_to_erlang.m"
            }
#line 772 "elds_to_erlang.m"
          else
#line 772 "elds_to_erlang.m"
            if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 805 "elds_to_erlang.m"
              {
#line 805 "elds_to_erlang.m"
                MR_String erl_backend__elds_to_erlang__Atom_17 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 806 "elds_to_erlang.m"
                {
#line 806 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_17);
                }
#line 1373 "elds_to_erlang.m"
                {
#line 1373 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
                  return;
                }
#line 805 "elds_to_erlang.m"
              }
#line 772 "elds_to_erlang.m"
            else
#line 772 "elds_to_erlang.m"
              if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 780 "elds_to_erlang.m"
                {
#line 780 "elds_to_erlang.m"
                  MR_String erl_backend__elds_to_erlang__String_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
#line 1241 "elds_to_erlang.m"
                  MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_52_52;

#line 781 "elds_to_erlang.m"
                  {
#line 781 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "<<\"");
                  }
#line 1241 "elds_to_erlang.m"
                  {
#line 1241 "elds_to_erlang.m"
                    mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[8], erl_backend__elds_to_erlang__String_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_52_52);
                  }
#line 783 "elds_to_erlang.m"
                  {
#line 783 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "\">>");
                  }
#line 1373 "elds_to_erlang.m"
                  {
#line 1373 "elds_to_erlang.m"
                    mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
                    return;
                  }
#line 780 "elds_to_erlang.m"
                }
#line 772 "elds_to_erlang.m"
              else
#line 772 "elds_to_erlang.m"
                if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 822 "elds_to_erlang.m"
                  {
#line 822 "elds_to_erlang.m"
                    MR_String erl_backend__elds_to_erlang__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 823 "elds_to_erlang.m"
                    {
#line 823 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__output_var_string_3_p_0(erl_backend__elds_to_erlang__Name_21);
#line 823 "elds_to_erlang.m"
                      return;
                    }
#line 822 "elds_to_erlang.m"
                  }
#line 772 "elds_to_erlang.m"
                else
#line 772 "elds_to_erlang.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 776 "elds_to_erlang.m"
                    {
#line 776 "elds_to_erlang.m"
                      MR_Float erl_backend__elds_to_erlang__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 777 "elds_to_erlang.m"
                      {
#line 777 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__output_float_3_p_0(erl_backend__elds_to_erlang__Float_13);
                      }
#line 1373 "elds_to_erlang.m"
                      {
#line 1373 "elds_to_erlang.m"
                        mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1373 "elds_to_erlang.m"
                        return;
                      }
#line 776 "elds_to_erlang.m"
                    }
#line 772 "elds_to_erlang.m"
                  else
#line 772 "elds_to_erlang.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 786 "elds_to_erlang.m"
                      {
#line 786 "elds_to_erlang.m"
                        MR_String erl_backend__elds_to_erlang__String_60 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 787 "elds_to_erlang.m"
                        {
#line 787 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "\"");
                        }
#line 788 "elds_to_erlang.m"
                        {
#line 788 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__write_with_escaping_4_p_0((MR_Integer) 0, erl_backend__elds_to_erlang__String_60);
                        }
#line 789 "elds_to_erlang.m"
                        {
#line 789 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "\"");
                        }
#line 790 "elds_to_erlang.m"
                        {
#line 790 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__space_2_p_0();
#line 790 "elds_to_erlang.m"
                          return;
                        }
#line 786 "elds_to_erlang.m"
                      }
#line 772 "elds_to_erlang.m"
                    else
#line 772 "elds_to_erlang.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 813 "elds_to_erlang.m"
                        {
#line 813 "elds_to_erlang.m"
                          MR_Word erl_backend__elds_to_erlang__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 814 "elds_to_erlang.m"
                          {
#line 814 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__output_tuple_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_19);
#line 814 "elds_to_erlang.m"
                            return;
                          }
#line 813 "elds_to_erlang.m"
                        }
#line 772 "elds_to_erlang.m"
                      else
#line 816 "elds_to_erlang.m"
                        {
#line 816 "elds_to_erlang.m"
                          MR_Word erl_backend__elds_to_erlang__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 817 "elds_to_erlang.m"
                          {
#line 817 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__output_var_4_p_0(erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_20);
#line 817 "elds_to_erlang.m"
                            return;
                          }
#line 816 "elds_to_erlang.m"
                        }
#line 772 "elds_to_erlang.m"
  }
#line 767 "elds_to_erlang.m"
}

#line 753 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
#line 753 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 753 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 753 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 753 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Catch_10)
#line 753 "elds_to_erlang.m"
{
#line 756 "elds_to_erlang.m"
  {
#line 756 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 756 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PatternA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 0)));
#line 756 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PatternB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 1)));
#line 756 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__CatchExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 2)));
#line 756 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_23_23;
#line 756 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_26_26;
#line 594 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_42;

#line 758 "elds_to_erlang.m"
    {
#line 758 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternA_12);
    }
#line 759 "elds_to_erlang.m"
    {
#line 759 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
#line 760 "elds_to_erlang.m"
    {
#line 760 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternB_13);
    }
#line 761 "elds_to_erlang.m"
    {
#line 761 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
#line 762 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_23_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_23_23);
    }
#line 763 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_26_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 592 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__CatchExpr_14)) == (MR_mktag((MR_Integer) 1)));
#line 592 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 592 "elds_to_erlang.m"
      {
#line 592 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CatchExpr_14, (MR_Integer) 0)));
#line 593 "elds_to_erlang.m"
        {
#line 593 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__Exprs_42);
#line 593 "elds_to_erlang.m"
          return;
        }
#line 592 "elds_to_erlang.m"
      }
#line 592 "elds_to_erlang.m"
    else
#line 595 "elds_to_erlang.m"
      {
#line 595 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__CatchExpr_14);
#line 595 "elds_to_erlang.m"
        return;
      }
#line 756 "elds_to_erlang.m"
  }
#line 753 "elds_to_erlang.m"
}

#line 743 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
#line 743 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 743 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 743 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 743 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
#line 743 "elds_to_erlang.m"
{
#line 746 "elds_to_erlang.m"
  {
#line 746 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 746 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
#line 746 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));
#line 746 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_19_19;
#line 746 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_22_22;
#line 594 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_44;

#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
    }
#line 748 "elds_to_erlang.m"
    {
#line 748 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Pattern_10);
    }
#line 749 "elds_to_erlang.m"
    {
#line 749 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
#line 750 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_19_19 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_19_19);
    }
#line 751 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_22_22 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 592 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_11)) == (MR_mktag((MR_Integer) 1)));
#line 592 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 592 "elds_to_erlang.m"
      {
#line 592 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_11, (MR_Integer) 0)));
#line 593 "elds_to_erlang.m"
        {
#line 593 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_22_22, erl_backend__elds_to_erlang__Exprs_44);
#line 593 "elds_to_erlang.m"
          return;
        }
#line 592 "elds_to_erlang.m"
      }
#line 592 "elds_to_erlang.m"
    else
#line 595 "elds_to_erlang.m"
      {
#line 595 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_22_22, erl_backend__elds_to_erlang__Expr_11);
#line 595 "elds_to_erlang.m"
        return;
      }
#line 746 "elds_to_erlang.m"
  }
#line 743 "elds_to_erlang.m"
}

#line 673 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
#line 673 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 673 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 673 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 673 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 673 "elds_to_erlang.m"
{
#line 673 "elds_to_erlang.m"
  {
#line 673 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 673 "elds_to_erlang.m"
    {
#line 673 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 673 "elds_to_erlang.m"
      return;
    }
#line 673 "elds_to_erlang.m"
  }
#line 673 "elds_to_erlang.m"
}

#line 738 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
#line 738 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 738 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 738 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 738 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 738 "elds_to_erlang.m"
{
#line 738 "elds_to_erlang.m"
  {
#line 738 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 738 "elds_to_erlang.m"
    {
#line 738 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 738 "elds_to_erlang.m"
      return;
    }
#line 738 "elds_to_erlang.m"
  }
#line 738 "elds_to_erlang.m"
}

#line 658 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
#line 658 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 658 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 658 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 658 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 658 "elds_to_erlang.m"
{
#line 658 "elds_to_erlang.m"
  {
#line 658 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 658 "elds_to_erlang.m"
    {
#line 658 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 658 "elds_to_erlang.m"
      return;
    }
#line 658 "elds_to_erlang.m"
  }
#line 658 "elds_to_erlang.m"
}

#line 598 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
#line 598 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 598 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 598 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 598 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10)
#line 598 "elds_to_erlang.m"
{
#line 603 "elds_to_erlang.m"
  while (MR_TRUE)
#line 603 "elds_to_erlang.m"
    {
#line 603 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 603 "elds_to_erlang.m"
      {
#line 603 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;

#line 603 "elds_to_erlang.m"
        if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 1))))
#line 603 "elds_to_erlang.m"
          {
#line 603 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

#line 603 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "elds_to_erlang.m"
              {
#line 604 "elds_to_erlang.m"
                {
#line 604 "elds_to_erlang.m"
                  mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.output_expr\'/6", (MR_String) "empty elds_block");
#line 604 "elds_to_erlang.m"
                  return;
                }
#line 603 "elds_to_erlang.m"
              }
#line 603 "elds_to_erlang.m"
            else
#line 606 "elds_to_erlang.m"
              {
#line 606 "elds_to_erlang.m"
                MR_Integer erl_backend__elds_to_erlang__V_157_157;
#line 606 "elds_to_erlang.m"
                MR_Integer erl_backend__elds_to_erlang__V_160_160;

#line 607 "elds_to_erlang.m"
                {
#line 607 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "(begin");
                }
#line 608 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_157_157 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 608 "elds_to_erlang.m"
                {
#line 608 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_157_157);
                }
#line 609 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_160_160 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 609 "elds_to_erlang.m"
                {
#line 609 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_160_160, erl_backend__elds_to_erlang__V_192_192);
                }
#line 610 "elds_to_erlang.m"
                {
#line 610 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                }
#line 611 "elds_to_erlang.m"
                {
#line 611 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "end)");
#line 611 "elds_to_erlang.m"
                  return;
                }
#line 606 "elds_to_erlang.m"
              }
#line 603 "elds_to_erlang.m"
          }
#line 603 "elds_to_erlang.m"
        else
#line 603 "elds_to_erlang.m"
          if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 0))))
#line 645 "elds_to_erlang.m"
            {
#line 645 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Clause_25 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Expr_10), (MR_Integer) 0);

#line 646 "elds_to_erlang.m"
              {
#line 646 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "(fun");
              }
#line 647 "elds_to_erlang.m"
              {
#line 647 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_clause_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Clause_25);
              }
#line 648 "elds_to_erlang.m"
              {
#line 648 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
              }
#line 649 "elds_to_erlang.m"
              {
#line 649 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "end)");
#line 649 "elds_to_erlang.m"
                return;
              }
#line 645 "elds_to_erlang.m"
            }
#line 603 "elds_to_erlang.m"
          else
#line 603 "elds_to_erlang.m"
            if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 2))))
#line 613 "elds_to_erlang.m"
              {
#line 613 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Term_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

#line 614 "elds_to_erlang.m"
                {
#line 614 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Term_15);
#line 614 "elds_to_erlang.m"
                  return;
                }
#line 613 "elds_to_erlang.m"
              }
#line 603 "elds_to_erlang.m"
            else
#line 603 "elds_to_erlang.m"
              if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 625 "elds_to_erlang.m"
                {
#line 625 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 625 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
#line 625 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));

#line 626 "elds_to_erlang.m"
                  {
#line 626 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_171);
                  }
#line 627 "elds_to_erlang.m"
                  {
#line 627 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_elds_binop_3_p_0(erl_backend__elds_to_erlang__Binop_19);
                  }
#line 628 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 628 "elds_to_erlang.m"
                  {
#line 628 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_172;

#line 628 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 628 "elds_to_erlang.m"
                  }
#line 628 "elds_to_erlang.m"
                  continue;
#line 625 "elds_to_erlang.m"
                }
#line 603 "elds_to_erlang.m"
              else
#line 603 "elds_to_erlang.m"
                if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 630 "elds_to_erlang.m"
                  {
#line 630 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__CallTarget_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 630 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 634 "elds_to_erlang.m"
                    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__CallTarget_20)) == (MR_mktag((MR_Integer) 2))))
#line 638 "elds_to_erlang.m"
                      {
#line 638 "elds_to_erlang.m"
                        MR_String erl_backend__elds_to_erlang__FunName_24 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 639 "elds_to_erlang.m"
                        {
#line 639 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__FunName_24);
                        }
#line 638 "elds_to_erlang.m"
                      }
#line 634 "elds_to_erlang.m"
                    else
#line 634 "elds_to_erlang.m"
                      if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__CallTarget_20)) == (MR_mktag((MR_Integer) 1))))
#line 635 "elds_to_erlang.m"
                        {
#line 635 "elds_to_erlang.m"
                          MR_Word erl_backend__elds_to_erlang__Closure_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 636 "elds_to_erlang.m"
                          {
#line 636 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Closure_23);
                          }
#line 635 "elds_to_erlang.m"
                        }
#line 634 "elds_to_erlang.m"
                      else
#line 632 "elds_to_erlang.m"
                        {
#line 632 "elds_to_erlang.m"
                          MR_Word erl_backend__elds_to_erlang__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 633 "elds_to_erlang.m"
                          {
#line 633 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_22);
                          }
#line 632 "elds_to_erlang.m"
                        }
#line 641 "elds_to_erlang.m"
                    {
#line 641 "elds_to_erlang.m"
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
#line 642 "elds_to_erlang.m"
                    {
#line 642 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__output_exprs_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_21);
                    }
#line 643 "elds_to_erlang.m"
                    {
#line 643 "elds_to_erlang.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
#line 643 "elds_to_erlang.m"
                      return;
                    }
#line 630 "elds_to_erlang.m"
                  }
#line 603 "elds_to_erlang.m"
                else
#line 603 "elds_to_erlang.m"
                  if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 651 "elds_to_erlang.m"
                    {
#line 651 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
#line 651 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_112_112;
#line 651 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_115_115;
#line 651 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__V_122_122;
#line 651 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_124_124;
#line 651 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__ExprA_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 652 "elds_to_erlang.m"
                      {
#line 652 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "(case");
                      }
#line 653 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_112_112 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 653 "elds_to_erlang.m"
                      {
#line 653 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_112_112);
                      }
#line 654 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_115_115 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 654 "elds_to_erlang.m"
                      {
#line 654 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_115_115, erl_backend__elds_to_erlang__ExprA_173);
                      }
#line 655 "elds_to_erlang.m"
                      {
#line 655 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 656 "elds_to_erlang.m"
                      {
#line 656 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "of");
                      }
#line 658 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_124_124 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 658 "elds_to_erlang.m"
                      {
#line 658 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 658 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 658 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_1));
#line 658 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 658 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 658 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 658 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_124_124));
#line 658 "elds_to_erlang.m"
                      }
#line 657 "elds_to_erlang.m"
                      {
#line 657 "elds_to_erlang.m"
                        mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_26, (MR_String) ";", erl_backend__elds_to_erlang__V_122_122);
                      }
#line 659 "elds_to_erlang.m"
                      {
#line 659 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 660 "elds_to_erlang.m"
                      {
#line 660 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "end)");
#line 660 "elds_to_erlang.m"
                        return;
                      }
#line 651 "elds_to_erlang.m"
                    }
#line 603 "elds_to_erlang.m"
                  else
#line 603 "elds_to_erlang.m"
                    if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 616 "elds_to_erlang.m"
                      {
#line 616 "elds_to_erlang.m"
                        MR_Word erl_backend__elds_to_erlang__ExprA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 616 "elds_to_erlang.m"
                        MR_Word erl_backend__elds_to_erlang__ExprB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 617 "elds_to_erlang.m"
                        {
#line 617 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_16);
                        }
#line 618 "elds_to_erlang.m"
                        {
#line 618 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "= ");
                        }
#line 619 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 619 "elds_to_erlang.m"
                        {
#line 619 "elds_to_erlang.m"
                          MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_17;

#line 619 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 619 "elds_to_erlang.m"
                        }
#line 619 "elds_to_erlang.m"
                        continue;
#line 616 "elds_to_erlang.m"
                      }
#line 603 "elds_to_erlang.m"
                    else
#line 603 "elds_to_erlang.m"
                      if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 726 "elds_to_erlang.m"
                        {
#line 726 "elds_to_erlang.m"
                          MR_String erl_backend__elds_to_erlang__Code_40 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 726 "elds_to_erlang.m"
                          MR_Word erl_backend__elds_to_erlang___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 727 "elds_to_erlang.m"
                          {
#line 727 "elds_to_erlang.m"
                            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_40);
                          }
#line 728 "elds_to_erlang.m"
                          {
#line 728 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
#line 728 "elds_to_erlang.m"
                            return;
                          }
#line 726 "elds_to_erlang.m"
                        }
#line 603 "elds_to_erlang.m"
                      else
#line 603 "elds_to_erlang.m"
                        if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 735 "elds_to_erlang.m"
                          {
#line 735 "elds_to_erlang.m"
                            MR_Word erl_backend__elds_to_erlang__V_47_47;
#line 735 "elds_to_erlang.m"
                            MR_Integer erl_backend__elds_to_erlang__V_49_49;
#line 735 "elds_to_erlang.m"
                            MR_Word erl_backend__elds_to_erlang__Cases_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 736 "elds_to_erlang.m"
                            {
#line 736 "elds_to_erlang.m"
                              mercury__io__write_string_3_p_0((MR_String) "(receive");
                            }
#line 738 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_49_49 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 738 "elds_to_erlang.m"
                            {
#line 738 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 738 "elds_to_erlang.m"
                              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 738 "elds_to_erlang.m"
                              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_2));
#line 738 "elds_to_erlang.m"
                              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 738 "elds_to_erlang.m"
                              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 738 "elds_to_erlang.m"
                              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 738 "elds_to_erlang.m"
                              MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_49_49));
#line 738 "elds_to_erlang.m"
                            }
#line 737 "elds_to_erlang.m"
                            {
#line 737 "elds_to_erlang.m"
                              mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_179, (MR_String) ";", erl_backend__elds_to_erlang__V_47_47);
                            }
#line 739 "elds_to_erlang.m"
                            {
#line 739 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                            }
#line 740 "elds_to_erlang.m"
                            {
#line 740 "elds_to_erlang.m"
                              mercury__io__write_string_3_p_0((MR_String) "end)");
#line 740 "elds_to_erlang.m"
                              return;
                            }
#line 735 "elds_to_erlang.m"
                          }
#line 603 "elds_to_erlang.m"
                        else
#line 603 "elds_to_erlang.m"
                          if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 701 "elds_to_erlang.m"
                            {
#line 701 "elds_to_erlang.m"
                              MR_Word erl_backend__elds_to_erlang__RttiId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 717 "elds_to_erlang.m"
                              if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_33)) == (MR_mktag((MR_Integer) 0))))
#line 703 "elds_to_erlang.m"
                                {
#line 714 "elds_to_erlang.m"
                                  {
#line 714 "elds_to_erlang.m"
                                    mercury__io__write_string_3_p_0((MR_String) "fun ");
                                  }
#line 715 "elds_to_erlang.m"
                                  {
#line 715 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                                  }
#line 716 "elds_to_erlang.m"
                                  {
#line 716 "elds_to_erlang.m"
                                    mercury__io__write_string_3_p_0((MR_String) "/0 ");
#line 716 "elds_to_erlang.m"
                                    return;
                                  }
#line 703 "elds_to_erlang.m"
                                }
#line 717 "elds_to_erlang.m"
                              else
#line 721 "elds_to_erlang.m"
                                {
#line 722 "elds_to_erlang.m"
                                  {
#line 722 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                                  }
#line 723 "elds_to_erlang.m"
                                  {
#line 723 "elds_to_erlang.m"
                                    mercury__io__write_string_3_p_0((MR_String) "()");
#line 723 "elds_to_erlang.m"
                                    return;
                                  }
#line 721 "elds_to_erlang.m"
                                }
#line 701 "elds_to_erlang.m"
                            }
#line 603 "elds_to_erlang.m"
                          else
#line 603 "elds_to_erlang.m"
                            if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 730 "elds_to_erlang.m"
                              {
#line 730 "elds_to_erlang.m"
                                MR_Word erl_backend__elds_to_erlang__ExprA_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 730 "elds_to_erlang.m"
                                MR_Word erl_backend__elds_to_erlang__ExprB_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 731 "elds_to_erlang.m"
                                {
#line 731 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_177);
                                }
#line 732 "elds_to_erlang.m"
                                {
#line 732 "elds_to_erlang.m"
                                  mercury__io__write_string_3_p_0((MR_String) " ! ");
                                }
#line 733 "elds_to_erlang.m"
                                /* direct tailcall eliminated */
#line 733 "elds_to_erlang.m"
                                {
#line 733 "elds_to_erlang.m"
                                  MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_178;

#line 733 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 733 "elds_to_erlang.m"
                                }
#line 733 "elds_to_erlang.m"
                                continue;
#line 730 "elds_to_erlang.m"
                              }
#line 603 "elds_to_erlang.m"
                            else
#line 603 "elds_to_erlang.m"
                              if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 696 "elds_to_erlang.m"
                                {
#line 696 "elds_to_erlang.m"
                                  MR_Word erl_backend__elds_to_erlang__ExprA_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 697 "elds_to_erlang.m"
                                  {
#line 697 "elds_to_erlang.m"
                                    mercury__io__write_string_3_p_0((MR_String) "throw(");
                                  }
#line 698 "elds_to_erlang.m"
                                  {
#line 698 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_176);
                                  }
#line 699 "elds_to_erlang.m"
                                  {
#line 699 "elds_to_erlang.m"
                                    mercury__io__write_string_3_p_0((MR_String) ")");
#line 699 "elds_to_erlang.m"
                                    return;
                                  }
#line 696 "elds_to_erlang.m"
                                }
#line 603 "elds_to_erlang.m"
                              else
#line 603 "elds_to_erlang.m"
                                if (((((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 662 "elds_to_erlang.m"
                                  {
#line 662 "elds_to_erlang.m"
                                    MR_Word erl_backend__elds_to_erlang__MaybeCatch_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));
#line 662 "elds_to_erlang.m"
                                    MR_Word erl_backend__elds_to_erlang__MaybeAfter_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 4)));
#line 662 "elds_to_erlang.m"
                                    MR_Integer erl_backend__elds_to_erlang__V_75_75;
#line 662 "elds_to_erlang.m"
                                    MR_Integer erl_backend__elds_to_erlang__V_78_78;
#line 662 "elds_to_erlang.m"
                                    MR_Word erl_backend__elds_to_erlang__ExprA_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 662 "elds_to_erlang.m"
                                    MR_Word erl_backend__elds_to_erlang__Cases_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 663 "elds_to_erlang.m"
                                    {
#line 663 "elds_to_erlang.m"
                                      mercury__io__write_string_3_p_0((MR_String) "(try");
                                    }
#line 664 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__V_75_75 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 664 "elds_to_erlang.m"
                                    {
#line 664 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_75_75);
                                    }
#line 665 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__V_78_78 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 665 "elds_to_erlang.m"
                                    {
#line 665 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_78_78, erl_backend__elds_to_erlang__ExprA_174);
                                    }
#line 668 "elds_to_erlang.m"
                                    if ((erl_backend__elds_to_erlang__Cases_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 667 "elds_to_erlang.m"
                                      {
#line 667 "elds_to_erlang.m"
                                      }
#line 668 "elds_to_erlang.m"
                                    else
#line 669 "elds_to_erlang.m"
                                      {
#line 669 "elds_to_erlang.m"
                                        MR_Word erl_backend__elds_to_erlang__V_85_85;
#line 669 "elds_to_erlang.m"
                                        MR_Integer erl_backend__elds_to_erlang__V_87_87;

#line 670 "elds_to_erlang.m"
                                        {
#line 670 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                                        }
#line 671 "elds_to_erlang.m"
                                        {
#line 671 "elds_to_erlang.m"
                                          mercury__io__write_string_3_p_0((MR_String) "of");
                                        }
#line 673 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_87_87 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 673 "elds_to_erlang.m"
                                        {
#line 673 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 673 "elds_to_erlang.m"
                                          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 673 "elds_to_erlang.m"
                                          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_3));
#line 673 "elds_to_erlang.m"
                                          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 673 "elds_to_erlang.m"
                                          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 673 "elds_to_erlang.m"
                                          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 673 "elds_to_erlang.m"
                                          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_87_87));
#line 673 "elds_to_erlang.m"
                                        }
#line 672 "elds_to_erlang.m"
                                        {
#line 672 "elds_to_erlang.m"
                                          mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_175, (MR_String) ";", erl_backend__elds_to_erlang__V_85_85);
                                        }
#line 669 "elds_to_erlang.m"
                                      }
#line 681 "elds_to_erlang.m"
                                    if ((erl_backend__elds_to_erlang__MaybeCatch_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "elds_to_erlang.m"
                                      {
#line 682 "elds_to_erlang.m"
                                      }
#line 681 "elds_to_erlang.m"
                                    else
#line 676 "elds_to_erlang.m"
                                      {
#line 676 "elds_to_erlang.m"
                                        MR_Word erl_backend__elds_to_erlang__Catch_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeCatch_27, (MR_Integer) 0)));
#line 676 "elds_to_erlang.m"
                                        MR_Integer erl_backend__elds_to_erlang__V_92_92;
#line 676 "elds_to_erlang.m"
                                        MR_Integer erl_backend__elds_to_erlang__V_95_95;

#line 677 "elds_to_erlang.m"
                                        {
#line 677 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                                        }
#line 678 "elds_to_erlang.m"
                                        {
#line 678 "elds_to_erlang.m"
                                          mercury__io__write_string_3_p_0((MR_String) "catch");
                                        }
#line 679 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_92_92 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 679 "elds_to_erlang.m"
                                        {
#line 679 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_92_92);
                                        }
#line 680 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_95_95 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 680 "elds_to_erlang.m"
                                        {
#line 680 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__output_catch_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_95_95, erl_backend__elds_to_erlang__Catch_31);
                                        }
#line 676 "elds_to_erlang.m"
                                      }
#line 690 "elds_to_erlang.m"
                                    if ((erl_backend__elds_to_erlang__MaybeAfter_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "elds_to_erlang.m"
                                      {
#line 691 "elds_to_erlang.m"
                                      }
#line 690 "elds_to_erlang.m"
                                    else
#line 685 "elds_to_erlang.m"
                                      {
#line 685 "elds_to_erlang.m"
                                        MR_Word erl_backend__elds_to_erlang__After_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeAfter_28, (MR_Integer) 0)));
#line 685 "elds_to_erlang.m"
                                        MR_Integer erl_backend__elds_to_erlang__V_101_101;
#line 685 "elds_to_erlang.m"
                                        MR_Integer erl_backend__elds_to_erlang__V_104_104;

#line 686 "elds_to_erlang.m"
                                        {
#line 686 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                                        }
#line 687 "elds_to_erlang.m"
                                        {
#line 687 "elds_to_erlang.m"
                                          mercury__io__write_string_3_p_0((MR_String) "after");
                                        }
#line 688 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_101_101 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 688 "elds_to_erlang.m"
                                        {
#line 688 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_101_101);
                                        }
#line 689 "elds_to_erlang.m"
                                        erl_backend__elds_to_erlang__V_104_104 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 689 "elds_to_erlang.m"
                                        {
#line 689 "elds_to_erlang.m"
                                          erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_104_104, erl_backend__elds_to_erlang__After_32);
                                        }
#line 685 "elds_to_erlang.m"
                                      }
#line 693 "elds_to_erlang.m"
                                    {
#line 693 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                                    }
#line 694 "elds_to_erlang.m"
                                    {
#line 694 "elds_to_erlang.m"
                                      mercury__io__write_string_3_p_0((MR_String) "end)");
#line 694 "elds_to_erlang.m"
                                      return;
                                    }
#line 662 "elds_to_erlang.m"
                                  }
#line 603 "elds_to_erlang.m"
                                else
#line 621 "elds_to_erlang.m"
                                  {
#line 621 "elds_to_erlang.m"
                                    MR_Word erl_backend__elds_to_erlang__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 621 "elds_to_erlang.m"
                                    MR_String erl_backend__elds_to_erlang__V_146_146;
#line 621 "elds_to_erlang.m"
                                    MR_Word erl_backend__elds_to_erlang__ExprA_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 622 "elds_to_erlang.m"
                                    {
#line 622 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__V_146_146 = erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(erl_backend__elds_to_erlang__Unop_18);
                                    }
#line 622 "elds_to_erlang.m"
                                    {
#line 622 "elds_to_erlang.m"
                                      mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_146_146);
                                    }
#line 623 "elds_to_erlang.m"
                                    /* direct tailcall eliminated */
#line 623 "elds_to_erlang.m"
                                    {
#line 623 "elds_to_erlang.m"
                                      MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprA_170;

#line 623 "elds_to_erlang.m"
                                      erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 623 "elds_to_erlang.m"
                                    }
#line 623 "elds_to_erlang.m"
                                    continue;
#line 621 "elds_to_erlang.m"
                                  }
#line 603 "elds_to_erlang.m"
      }
#line 603 "elds_to_erlang.m"
      break;
#line 603 "elds_to_erlang.m"
    }
#line 598 "elds_to_erlang.m"
}

#line 588 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
#line 588 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 588 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 588 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 588 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10)
#line 588 "elds_to_erlang.m"
{
#line 594 "elds_to_erlang.m"
  {
#line 594 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 1)));
#line 594 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_12;

#line 592 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 592 "elds_to_erlang.m"
      {
#line 592 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));
#line 593 "elds_to_erlang.m"
        {
#line 593 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Exprs_12);
#line 593 "elds_to_erlang.m"
          return;
        }
#line 592 "elds_to_erlang.m"
      }
#line 592 "elds_to_erlang.m"
    else
#line 595 "elds_to_erlang.m"
      {
#line 595 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Expr_10);
#line 595 "elds_to_erlang.m"
        return;
      }
#line 594 "elds_to_erlang.m"
  }
#line 588 "elds_to_erlang.m"
}

#line 586 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 586 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 586 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 586 "elds_to_erlang.m"
{
#line 586 "elds_to_erlang.m"
  {
#line 586 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 586 "elds_to_erlang.m"
    {
#line 586 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 586 "elds_to_erlang.m"
      return;
    }
#line 586 "elds_to_erlang.m"
  }
#line 586 "elds_to_erlang.m"
}

#line 581 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
#line 581 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 581 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 581 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 581 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Exprs_10)
#line 581 "elds_to_erlang.m"
{
#line 584 "elds_to_erlang.m"
  {
#line 584 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 584 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_15_15;

#line 586 "elds_to_erlang.m"
    {
#line 586 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 586 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 586 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_exprs_6_p_0_1));
#line 586 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 586 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 586 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 586 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 586 "elds_to_erlang.m"
    }
#line 585 "elds_to_erlang.m"
    {
#line 585 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Exprs_10, (MR_String) ", ", erl_backend__elds_to_erlang__V_15_15);
#line 585 "elds_to_erlang.m"
      return;
    }
#line 584 "elds_to_erlang.m"
  }
#line 581 "elds_to_erlang.m"
}

#line 566 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
#line 566 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
#line 566 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 566 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
#line 566 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
#line 566 "elds_to_erlang.m"
{
#line 569 "elds_to_erlang.m"
  while (MR_TRUE)
#line 569 "elds_to_erlang.m"
    {
#line 569 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 569 "elds_to_erlang.m"
      {
#line 569 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;

#line 569 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "elds_to_erlang.m"
          {
#line 569 "elds_to_erlang.m"
          }
#line 569 "elds_to_erlang.m"
        else
#line 570 "elds_to_erlang.m"
          {
#line 570 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
#line 570 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Exprs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));

#line 571 "elds_to_erlang.m"
            {
#line 571 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_16);
            }
#line 574 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__Exprs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "elds_to_erlang.m"
              {
#line 573 "elds_to_erlang.m"
              }
#line 574 "elds_to_erlang.m"
            else
#line 575 "elds_to_erlang.m"
              {
#line 575 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Expr_43;
#line 575 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Exprs_44;

#line 576 "elds_to_erlang.m"
                {
#line 576 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
#line 1355 "elds_to_erlang.m"
                {
#line 1355 "elds_to_erlang.m"
                  mercury__io__nl_2_p_0();
                }
#line 1356 "elds_to_erlang.m"
                {
#line 1356 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                }
#line 570 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Expr_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 0)));
#line 570 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 1)));
#line 571 "elds_to_erlang.m"
                {
#line 571 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_43);
                }
#line 574 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Exprs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "elds_to_erlang.m"
                  {
#line 573 "elds_to_erlang.m"
                  }
#line 574 "elds_to_erlang.m"
                else
#line 575 "elds_to_erlang.m"
                  {
#line 576 "elds_to_erlang.m"
                    {
#line 576 "elds_to_erlang.m"
                      mercury__io__write_char_3_p_0((MR_Char) 44);
                    }
#line 1355 "elds_to_erlang.m"
                    {
#line 1355 "elds_to_erlang.m"
                      mercury__io__nl_2_p_0();
                    }
#line 1356 "elds_to_erlang.m"
                    {
#line 1356 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                    }
#line 578 "elds_to_erlang.m"
                    /* direct tailcall eliminated */
#line 578 "elds_to_erlang.m"
                    {
#line 578 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__HeadVar__4__tmp_copy_4 = erl_backend__elds_to_erlang__Exprs_44;

#line 578 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__HeadVar__4_4 = erl_backend__elds_to_erlang__HeadVar__4__tmp_copy_4;
#line 578 "elds_to_erlang.m"
                    }
#line 578 "elds_to_erlang.m"
                    continue;
#line 575 "elds_to_erlang.m"
                  }
#line 575 "elds_to_erlang.m"
              }
#line 570 "elds_to_erlang.m"
          }
#line 569 "elds_to_erlang.m"
      }
#line 569 "elds_to_erlang.m"
      break;
#line 569 "elds_to_erlang.m"
    }
#line 566 "elds_to_erlang.m"
}

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 556 "elds_to_erlang.m"
{
#line 556 "elds_to_erlang.m"
  {
#line 556 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 556 "elds_to_erlang.m"
      return;
    }
#line 556 "elds_to_erlang.m"
  }
#line 556 "elds_to_erlang.m"
}

#line 549 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
#line 549 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 549 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 549 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 549 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_10)
#line 549 "elds_to_erlang.m"
{
#line 552 "elds_to_erlang.m"
  {
#line 552 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 552 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
#line 552 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
#line 552 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 552 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_23_23;
#line 552 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_26_26;

#line 554 "elds_to_erlang.m"
    {
#line 554 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_clause_6_p_0_1));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 556 "elds_to_erlang.m"
    }
#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_12, (MR_String) ", ", erl_backend__elds_to_erlang__V_19_19);
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 558 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_23_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_23_23);
    }
#line 559 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_26_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__Expr_13);
#line 559 "elds_to_erlang.m"
      return;
    }
#line 552 "elds_to_erlang.m"
  }
#line 549 "elds_to_erlang.m"
}

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 556 "elds_to_erlang.m"
{
#line 556 "elds_to_erlang.m"
  {
#line 556 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 556 "elds_to_erlang.m"
      return;
    }
#line 556 "elds_to_erlang.m"
  }
#line 556 "elds_to_erlang.m"
}

#line 541 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
#line 541 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 541 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
#line 541 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_8)
#line 541 "elds_to_erlang.m"
{
#line 544 "elds_to_erlang.m"
  {
#line 544 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 544 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 0)));
#line 544 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 1)));
#line 544 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_28_28;

#line 554 "elds_to_erlang.m"
    {
#line 554 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_7));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 5) = ((MR_Box) ((MR_Integer) 0));
#line 556 "elds_to_erlang.m"
    }
#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_23, (MR_String) ", ", erl_backend__elds_to_erlang__V_28_28);
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, erl_backend__elds_to_erlang__VarSet_7, (MR_Integer) 1, erl_backend__elds_to_erlang__Expr_24);
    }
#line 547 "elds_to_erlang.m"
    {
#line 547 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 547 "elds_to_erlang.m"
      return;
    }
#line 544 "elds_to_erlang.m"
  }
#line 541 "elds_to_erlang.m"
}

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 556 "elds_to_erlang.m"
{
#line 556 "elds_to_erlang.m"
  {
#line 556 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 556 "elds_to_erlang.m"
      return;
    }
#line 556 "elds_to_erlang.m"
  }
#line 556 "elds_to_erlang.m"
}

#line 532 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
#line 532 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 532 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6)
#line 532 "elds_to_erlang.m"
{
#line 535 "elds_to_erlang.m"
  {
#line 535 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 535 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 0)));
#line 535 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 2)));
#line 535 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 3)));
#line 535 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_34;
#line 535 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_35;
#line 535 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___IsExported_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 1)));

#line 537 "elds_to_erlang.m"
    {
#line 537 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 538 "elds_to_erlang.m"
    {
#line 538 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__RttiId_8);
    }
#line 553 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Pattern_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 0)));
#line 553 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Expr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 1)));
#line 554 "elds_to_erlang.m"
    {
#line 554 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_10));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 556 "elds_to_erlang.m"
    }
#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_34, (MR_String) ", ", erl_backend__elds_to_erlang__V_39_39);
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_10, (MR_Integer) 1, erl_backend__elds_to_erlang__Expr_35);
    }
#line 547 "elds_to_erlang.m"
    {
#line 547 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 547 "elds_to_erlang.m"
      return;
    }
#line 535 "elds_to_erlang.m"
  }
#line 532 "elds_to_erlang.m"
}

#line 556 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 556 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 556 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 556 "elds_to_erlang.m"
{
#line 556 "elds_to_erlang.m"
  {
#line 556 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 556 "elds_to_erlang.m"
      return;
    }
#line 556 "elds_to_erlang.m"
  }
#line 556 "elds_to_erlang.m"
}

#line 523 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
#line 523 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 523 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6)
#line 523 "elds_to_erlang.m"
{
#line 526 "elds_to_erlang.m"
  {
#line 526 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 526 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
#line 526 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
#line 526 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
#line 526 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_33;
#line 526 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_34;
#line 526 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38;

#line 528 "elds_to_erlang.m"
    {
#line 528 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 529 "elds_to_erlang.m"
    {
#line 529 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Name_8);
    }
#line 553 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Pattern_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
#line 553 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Expr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
#line 554 "elds_to_erlang.m"
    {
#line 554 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_9));
#line 556 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 5) = ((MR_Box) ((MR_Integer) 0));
#line 556 "elds_to_erlang.m"
    }
#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_33, (MR_String) ", ", erl_backend__elds_to_erlang__V_38_38);
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, (MR_Integer) 1, erl_backend__elds_to_erlang__Expr_34);
    }
#line 547 "elds_to_erlang.m"
    {
#line 547 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 547 "elds_to_erlang.m"
      return;
    }
#line 526 "elds_to_erlang.m"
  }
#line 523 "elds_to_erlang.m"
}

#line 480 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
#line 480 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 480 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
#line 480 "elds_to_erlang.m"
{
#line 483 "elds_to_erlang.m"
  {
#line 483 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 485 "elds_to_erlang.m"
    {
#line 485 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_6);
    }
#line 486 "elds_to_erlang.m"
    {
#line 486 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(),");
#line 486 "elds_to_erlang.m"
      return;
    }
#line 483 "elds_to_erlang.m"
  }
#line 480 "elds_to_erlang.m"
}

#line 475 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
#line 475 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 475 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 475 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 475 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 475 "elds_to_erlang.m"
{
#line 475 "elds_to_erlang.m"
  {
#line 475 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 475 "elds_to_erlang.m"
    {
#line 475 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 475 "elds_to_erlang.m"
      return;
    }
#line 475 "elds_to_erlang.m"
  }
#line 475 "elds_to_erlang.m"
}

#line 464 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
#line 464 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 464 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name_7,
#line 464 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8)
#line 464 "elds_to_erlang.m"
{
#line 469 "elds_to_erlang.m"
  {
#line 469 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 469 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__PredProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "elds_to_erlang.m"
      {
#line 469 "elds_to_erlang.m"
      }
#line 469 "elds_to_erlang.m"
    else
#line 471 "elds_to_erlang.m"
      {
#line 471 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 475 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20;

#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 0);
        }
#line 473 "elds_to_erlang.m"
        {
#line 473 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Name_7);
        }
#line 474 "elds_to_erlang.m"
        {
#line 474 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "() ->");
        }
#line 475 "elds_to_erlang.m"
        {
#line 475 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 475 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[7]));
#line 475 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1));
#line 475 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 475 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 475 "elds_to_erlang.m"
        }
#line 475 "elds_to_erlang.m"
        {
#line 475 "elds_to_erlang.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_19_19, erl_backend__elds_to_erlang__PredProcIds_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20);
        }
#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 477 "elds_to_erlang.m"
        {
#line 477 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "void.\n");
#line 477 "elds_to_erlang.m"
          return;
        }
#line 471 "elds_to_erlang.m"
      }
#line 469 "elds_to_erlang.m"
  }
#line 464 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 455 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void)
#line 455 "elds_to_erlang.m"
{
#line 457 "elds_to_erlang.m"
  {
#line 457 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 457 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__FileName_14;
#line 457 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__LineNr_15;
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20;

#line 458 "elds_to_erlang.m"
    {
#line 458 "elds_to_erlang.m"
      mercury__io__output_stream_name_3_p_0(&erl_backend__elds_to_erlang__FileName_14);
    }
#line 459 "elds_to_erlang.m"
    {
#line 459 "elds_to_erlang.m"
      mercury__io__get_output_line_number_3_p_0(&erl_backend__elds_to_erlang__LineNr_15);
    }
#line 449 "elds_to_erlang.m"
    {
#line 449 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
    }
#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[7], erl_backend__elds_to_erlang__FileName_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20);
    }
#line 451 "elds_to_erlang.m"
    {
#line 451 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
#line 452 "elds_to_erlang.m"
    {
#line 452 "elds_to_erlang.m"
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_15);
    }
#line 453 "elds_to_erlang.m"
    {
#line 453 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 453 "elds_to_erlang.m"
      return;
    }
#line 457 "elds_to_erlang.m"
  }
#line 455 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 420 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
#line 420 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 420 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6)
#line 420 "elds_to_erlang.m"
{
#line 423 "elds_to_erlang.m"
  {
#line 423 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 423 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 1)));
#line 423 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 2)));
#line 424 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 0)));

#line 437 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_9)) == (MR_mktag((MR_Integer) 1))))
#line 438 "elds_to_erlang.m"
      {
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__IncludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_33;
#line 1241 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39;

#line 439 "elds_to_erlang.m"
        {
#line 439 "elds_to_erlang.m"
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_21, &erl_backend__elds_to_erlang__FileName_33);
        }
#line 449 "elds_to_erlang.m"
        {
#line 449 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1241 "elds_to_erlang.m"
        {
#line 1241 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[5], erl_backend__elds_to_erlang__FileName_33, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39);
        }
#line 451 "elds_to_erlang.m"
        {
#line 451 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 441 "elds_to_erlang.m"
        {
#line 441 "elds_to_erlang.m"
          libs__file_util__write_include_file_contents_3_p_0(erl_backend__elds_to_erlang__FileName_33);
        }
#line 438 "elds_to_erlang.m"
      }
#line 437 "elds_to_erlang.m"
    else
#line 434 "elds_to_erlang.m"
      {
#line 434 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
#line 434 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 0)));
#line 434 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__LineNr_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 1)));
#line 1241 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64;

#line 449 "elds_to_erlang.m"
        {
#line 449 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1241 "elds_to_erlang.m"
        {
#line 1241 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[6], erl_backend__elds_to_erlang__FileName_58, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64);
        }
#line 451 "elds_to_erlang.m"
        {
#line 451 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_59);
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 436 "elds_to_erlang.m"
        {
#line 436 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_20);
        }
#line 434 "elds_to_erlang.m"
      }
#line 443 "elds_to_erlang.m"
    {
#line 443 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 444 "elds_to_erlang.m"
    {
#line 444 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
#line 444 "elds_to_erlang.m"
      return;
    }
#line 423 "elds_to_erlang.m"
  }
#line 420 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 411 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
#line 411 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 411 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
#line 411 "elds_to_erlang.m"
{
#line 414 "elds_to_erlang.m"
  {
#line 414 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 414 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
#line 414 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));
#line 415 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
#line 415 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___IsLocal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));

#line 437 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_10)) == (MR_mktag((MR_Integer) 1))))
#line 438 "elds_to_erlang.m"
      {
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_34;
#line 1241 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40;

#line 439 "elds_to_erlang.m"
        {
#line 439 "elds_to_erlang.m"
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_22, &erl_backend__elds_to_erlang__FileName_34);
        }
#line 449 "elds_to_erlang.m"
        {
#line 449 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1241 "elds_to_erlang.m"
        {
#line 1241 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[3], erl_backend__elds_to_erlang__FileName_34, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40);
        }
#line 451 "elds_to_erlang.m"
        {
#line 451 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 441 "elds_to_erlang.m"
        {
#line 441 "elds_to_erlang.m"
          libs__file_util__write_include_file_contents_3_p_0(erl_backend__elds_to_erlang__FileName_34);
        }
#line 438 "elds_to_erlang.m"
      }
#line 437 "elds_to_erlang.m"
    else
#line 434 "elds_to_erlang.m"
      {
#line 434 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
#line 434 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_59 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 0)));
#line 434 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__LineNr_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 1)));
#line 1241 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65;

#line 449 "elds_to_erlang.m"
        {
#line 449 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1241 "elds_to_erlang.m"
        {
#line 1241 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[4], erl_backend__elds_to_erlang__FileName_59, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65);
        }
#line 451 "elds_to_erlang.m"
        {
#line 451 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_60);
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 436 "elds_to_erlang.m"
        {
#line 436 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_21);
        }
#line 434 "elds_to_erlang.m"
      }
#line 443 "elds_to_erlang.m"
    {
#line 443 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 444 "elds_to_erlang.m"
    {
#line 444 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
#line 444 "elds_to_erlang.m"
      return;
    }
#line 414 "elds_to_erlang.m"
  }
#line 411 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 400 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
#line 400 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Globals_5,
#line 400 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Import_6)
#line 400 "elds_to_erlang.m"
{
#line 403 "elds_to_erlang.m"
  {
#line 403 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 403 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeaderFile_8;
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16;

#line 404 "elds_to_erlang.m"
    {
#line 404 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(erl_backend__elds_to_erlang__Globals_5, erl_backend__elds_to_erlang__Import_6, (MR_String) ".hrl", &erl_backend__elds_to_erlang__HeaderFile_8);
    }
#line 405 "elds_to_erlang.m"
    {
#line 405 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-include(\"");
    }
#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[2], erl_backend__elds_to_erlang__HeaderFile_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 407 "elds_to_erlang.m"
    {
#line 407 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "\").\n");
#line 407 "elds_to_erlang.m"
      return;
    }
#line 403 "elds_to_erlang.m"
  }
#line 400 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 391 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
#line 391 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__EnvVarName_4)
#line 391 "elds_to_erlang.m"
{
#line 393 "elds_to_erlang.m"
  {
#line 393 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11;

#line 394 "elds_to_erlang.m"
    {
#line 394 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% ENVVAR ");
    }
#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[1], erl_backend__elds_to_erlang__EnvVarName_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11);
    }
#line 396 "elds_to_erlang.m"
    {
#line 396 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
#line 396 "elds_to_erlang.m"
      return;
    }
#line 393 "elds_to_erlang.m"
  }
#line 391 "elds_to_erlang.m"
}

#line 387 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
#line 387 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3)
#line 387 "elds_to_erlang.m"
{
#line 389 "elds_to_erlang.m"
  {
#line 389 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 389 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 3)));
#line 389 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 0)));
#line 389 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 1)));
#line 389 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 2)));

#line 389 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 389 "elds_to_erlang.m"
  }
#line 387 "elds_to_erlang.m"
}

#line 385 "elds_to_erlang.m"
static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
#line 385 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 385 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1)
#line 385 "elds_to_erlang.m"
{
#line 385 "elds_to_erlang.m"
  {
#line 385 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__wrapper_arg_2;
#line 385 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 385 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__2_2;

#line 385 "elds_to_erlang.m"
    {
#line 385 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__conv0_HeadVar__2_2 = erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 385 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__wrapper_arg_2 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__2_2));
#line 385 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__wrapper_arg_2;
#line 385 "elds_to_erlang.m"
  }
#line 385 "elds_to_erlang.m"
}

#line 382 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
#line 382 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3)
#line 382 "elds_to_erlang.m"
{
#line 384 "elds_to_erlang.m"
  {
#line 384 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 384 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2;
#line 384 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_4_4;

#line 385 "elds_to_erlang.m"
    {
#line 385 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_1[0], (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[2], erl_backend__elds_to_erlang__ProcDefns_3);
    }
#line 385 "elds_to_erlang.m"
    {
#line 385 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__HeadVar__2_2 = mercury__set__union_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__V_4_4);
    }
#line 384 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 384 "elds_to_erlang.m"
  }
#line 382 "elds_to_erlang.m"
}

#line 301 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void)
#line 301 "elds_to_erlang.m"
{
#line 303 "elds_to_erlang.m"
  {
#line 303 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 303 "elds_to_erlang.m"
    return (MR_String) "\n\n    % This function is called in place of main_2_p_0 by the shell script that\n    % we generate for this program, if linking against the standard library.\n   " " % Otherwise main_2_p_0 will be called.\n\n    mercury__main_wrapper() ->\n        mercury__startup(),\n        InitModule = list_to_atom(atom_to_list(\?MODULE) ++ \"" "_init\"),\n        try\n            InitModule:init_env_vars(),\n            InitModule:init_modules(),\n            InitModule:init_modules_required(),\n            " "main_2_p_0(),\n            InitModule:final_modules_required()\n        catch\n            {\'ML_exception\', Excp} ->\n                StackTrace = erlang:get_stackt" "race(),\n                mercury__exception:\'ML_report_uncaught_exception\'(Excp),\n                mercury__maybe_dump_stacktrace(StackTrace),\n                mer" "cury__shutdown(true)\n        end,\n        mercury__shutdown(false).\n\n    mercury__startup() ->\n        mercury__erlang_builtin:\'ML_start_global_server\'(),\n     " "   mercury__library:\'ML_std_library_init\'().\n\n    mercury__shutdown(ForceBadExit) ->\n        mercury__library:\'ML_std_library_finalize\'(),\n        \'ML_erlang_gl" "obal_server\' ! {get_exit_status, self()},\n        receive\n            {get_exit_status_ack, ExitStatus0} ->\n                void\n        end,\n        if\n       " "     ExitStatus0 =:= 0 andalso ForceBadExit ->\n                ExitStatus = 1;\n            true ->\n                ExitStatus = ExitStatus0\n        end,\n       " " mercury__erlang_builtin:\'ML_stop_global_server\'(),\n        % init:stop is preferred to calling halt but there seems\n        % to be no way to choose the exit c" "ode otherwise.\n        case ExitStatus of\n            0 -> void;\n            _ -> halt(ExitStatus)\n        end.\n\n    mercury__maybe_dump_stacktrace(StackTrace) " "->\n        case os:getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") of\n            false ->\n                io:put_chars(\"Stack dump follows:\\n\"),\n                mercury" "__dump_stacktrace(StackTrace);\n            _ ->\n                void\n        end.\n\n    mercury__dump_stacktrace([]) -> void;\n    mercury__dump_stacktrace([St | " "Sts]) ->\n        {Module, Function, ArityOrArgs} = St,\n        io:format(\"\\t~s:~s\", [Module, Function]),\n        if\n            is_integer(ArityOrArgs) ->\n     " "           io:format(\"/~B~n\", [ArityOrArgs]);\n            true ->\n                io:format(\"~p~n\", [ArityOrArgs])\n        end,\n        % Don\'t show stack frame" "s below main.\n        case St of\n            {\?MODULE, mercury__main_wrapper, _} ->\n                void;\n            _ ->\n                mercury__dump_stacktr" "ace(Sts)\n        end.\n";
#line 303 "elds_to_erlang.m"
  }
#line 301 "elds_to_erlang.m"
}

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 291 "elds_to_erlang.m"
{
#line 291 "elds_to_erlang.m"
  {
#line 291 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 291 "elds_to_erlang.m"
    MR_builtin_longjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0, 1);
#line 291 "elds_to_erlang.m"
  }
#line 291 "elds_to_erlang.m"
}

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 291 "elds_to_erlang.m"
{
#line 291 "elds_to_erlang.m"
  {
#line 291 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 291 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7 = ((MR_Word) (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7);
#line 291 "elds_to_erlang.m"
    {
#line 291 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(erl_backend__elds_to_erlang__env_ptr);
#line 291 "elds_to_erlang.m"
      return;
    }
#line 291 "elds_to_erlang.m"
  }
#line 291 "elds_to_erlang.m"
}

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 291 "elds_to_erlang.m"
{
#line 291 "elds_to_erlang.m"
  {
#line 291 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 292 "elds_to_erlang.m"
    {
#line 292 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8);
    }
#line 293 "elds_to_erlang.m"
    {
#line 293 "elds_to_erlang.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ImportStatus_9);
    }
#line 294 "elds_to_erlang.m"
    {
#line 294 "elds_to_erlang.m"
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ImportStatus_9);
    }
#line 294 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12 == (MR_Integer) 1);
#line 294 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
#line 294 "elds_to_erlang.m"
      {
#line 294 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(erl_backend__elds_to_erlang__env_ptr);
#line 294 "elds_to_erlang.m"
        return;
      }
#line 291 "elds_to_erlang.m"
  }
#line 291 "elds_to_erlang.m"
}

#line 291 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
#line 291 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 291 "elds_to_erlang.m"
{
#line 291 "elds_to_erlang.m"
  {
#line 291 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 291 "elds_to_erlang.m"
    if (MR_builtin_setjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0) == 0)
#line 291 "elds_to_erlang.m"
      {
#line 291 "elds_to_erlang.m"
        {
#line 291 "elds_to_erlang.m"
          {
#line 291 "elds_to_erlang.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6, erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3, erl_backend__elds_to_erlang__env_ptr);
          }
#line 291 "elds_to_erlang.m"
        }
#line 291 "elds_to_erlang.m"
        (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_FALSE;
#line 291 "elds_to_erlang.m"
      }
#line 291 "elds_to_erlang.m"
    else
#line 291 "elds_to_erlang.m"
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_TRUE;
#line 291 "elds_to_erlang.m"
  }
#line 291 "elds_to_erlang.m"
}

#line 285 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
#line 285 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3)
#line 285 "elds_to_erlang.m"
{
#line 285 "elds_to_erlang.m"
  {
#line 285 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s erl_backend__elds_to_erlang__env;

#line 285 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3 = erl_backend__elds_to_erlang__ModuleInfo_3;
#line 287 "elds_to_erlang.m"
    {
#line 287 "elds_to_erlang.m"
      MR_Word erl_backend__elds_to_erlang__AddMainWrapper_4;
#line 287 "elds_to_erlang.m"
      MR_Word erl_backend__elds_to_erlang__PredTable_5;

#line 288 "elds_to_erlang.m"
      {
#line 288 "elds_to_erlang.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, &erl_backend__elds_to_erlang__PredTable_5);
      }
#line 289 "elds_to_erlang.m"
      {
#line 289 "elds_to_erlang.m"
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(erl_backend__elds_to_erlang__PredTable_5, (MR_String) "main", (MR_Integer) 2, &(erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6);
      }
#line 291 "elds_to_erlang.m"
      {
#line 291 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(&erl_backend__elds_to_erlang__env);
      }
#line 297 "elds_to_erlang.m"
      if ((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
#line 296 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 1;
#line 297 "elds_to_erlang.m"
      else
#line 298 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 0;
#line 287 "elds_to_erlang.m"
      return erl_backend__elds_to_erlang__AddMainWrapper_4;
#line 287 "elds_to_erlang.m"
    }
#line 285 "elds_to_erlang.m"
  }
#line 285 "elds_to_erlang.m"
}

#line 250 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
#line 250 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
#line 250 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
#line 250 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8)
#line 250 "elds_to_erlang.m"
{
#line 254 "elds_to_erlang.m"
  {
#line 254 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 261 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__AddMainWrapper_6 == (MR_Integer) 0))
#line 262 "elds_to_erlang.m"
      {
#line 262 "elds_to_erlang.m"
      }
#line 261 "elds_to_erlang.m"
    else
#line 256 "elds_to_erlang.m"
      {
#line 1378 "elds_to_erlang.m"
        {
#line 1378 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 259 "elds_to_erlang.m"
        {
#line 259 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__main_wrapper");
        }
#line 260 "elds_to_erlang.m"
        {
#line 260 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
#line 256 "elds_to_erlang.m"
      }
#line 266 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__InitPreds_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "elds_to_erlang.m"
      {
#line 265 "elds_to_erlang.m"
      }
#line 266 "elds_to_erlang.m"
    else
#line 267 "elds_to_erlang.m"
      {
#line 1378 "elds_to_erlang.m"
        {
#line 1378 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 270 "elds_to_erlang.m"
        {
#line 270 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_init");
        }
#line 271 "elds_to_erlang.m"
        {
#line 271 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
#line 267 "elds_to_erlang.m"
      }
#line 275 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__FinalPreds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "elds_to_erlang.m"
      {
#line 274 "elds_to_erlang.m"
      }
#line 275 "elds_to_erlang.m"
    else
#line 276 "elds_to_erlang.m"
      {
#line 1378 "elds_to_erlang.m"
        {
#line 1378 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 279 "elds_to_erlang.m"
        {
#line 279 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_final");
        }
#line 280 "elds_to_erlang.m"
        {
#line 280 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
#line 280 "elds_to_erlang.m"
          return;
        }
#line 276 "elds_to_erlang.m"
      }
#line 254 "elds_to_erlang.m"
  }
#line 250 "elds_to_erlang.m"
}

#line 233 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
#line 233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
#line 233 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
#line 233 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16)
#line 233 "elds_to_erlang.m"
{
#line 236 "elds_to_erlang.m"
  {
#line 236 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 236 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 0)));
#line 236 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__IsExported_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 1)));
#line 237 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 2)));
#line 237 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Clause_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 3)));

#line 246 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__IsExported_12 == (MR_Integer) 0))
#line 247 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15;
#line 246 "elds_to_erlang.m"
    else
#line 239 "elds_to_erlang.m"
      {
#line 1382 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15 == (MR_Integer) 0))
#line 1382 "elds_to_erlang.m"
          {
#line 1382 "elds_to_erlang.m"
          }
#line 1382 "elds_to_erlang.m"
        else
#line 1377 "elds_to_erlang.m"
          {
#line 1378 "elds_to_erlang.m"
            {
#line 1378 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 44);
            }
#line 1377 "elds_to_erlang.m"
          }
#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 242 "elds_to_erlang.m"
        {
#line 242 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_11);
        }
#line 243 "elds_to_erlang.m"
        {
#line 243 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 47);
        }
#line 244 "elds_to_erlang.m"
        {
#line 244 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 0);
        }
#line 245 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
#line 239 "elds_to_erlang.m"
      }
#line 236 "elds_to_erlang.m"
  }
#line 233 "elds_to_erlang.m"
}

#line 222 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
#line 222 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
#line 222 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
#line 222 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3)
#line 222 "elds_to_erlang.m"
{
#line 225 "elds_to_erlang.m"
  {
#line 225 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 225 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ExportedName_9;
#line 225 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_11;
#line 225 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_20_20;
#line 226 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;

#line 225 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__HeadVar__3_3 = (MR_Integer) 1;
#line 226 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ExportedName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
#line 226 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
#line 226 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
#line 1382 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__NeedComma_7 == (MR_Integer) 0))
#line 1382 "elds_to_erlang.m"
      {
#line 1382 "elds_to_erlang.m"
      }
#line 1382 "elds_to_erlang.m"
    else
#line 1377 "elds_to_erlang.m"
      {
#line 1378 "elds_to_erlang.m"
        {
#line 1378 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1377 "elds_to_erlang.m"
      }
#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 229 "elds_to_erlang.m"
    {
#line 229 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExportedName_9);
    }
#line 230 "elds_to_erlang.m"
    {
#line 230 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 47);
    }
#line 231 "elds_to_erlang.m"
    {
#line 231 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_20_20 = erl_backend__elds__elds_clause_arity_1_f_0(erl_backend__elds_to_erlang__Clause_11);
    }
#line 231 "elds_to_erlang.m"
    {
#line 231 "elds_to_erlang.m"
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_20_20);
#line 231 "elds_to_erlang.m"
      return;
    }
#line 225 "elds_to_erlang.m"
  }
#line 222 "elds_to_erlang.m"
}

#line 204 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
#line 204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_8,
#line 204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
#line 204 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19)
#line 204 "elds_to_erlang.m"
{
#line 207 "elds_to_erlang.m"
  {
#line 207 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 207 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 0)));
#line 207 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Body_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 2)));
#line 207 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 0)));
#line 207 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 1)));
#line 207 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredInfo_17;
#line 208 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 1)));
#line 208 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 3)));

#line 210 "elds_to_erlang.m"
    {
#line 210 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredId_15, &erl_backend__elds_to_erlang__PredInfo_17);
    }
#line 211 "elds_to_erlang.m"
    {
#line 211 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredInfo_17, erl_backend__elds_to_erlang__ProcId_16);
    }
#line 218 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 212 "elds_to_erlang.m"
      {
#line 212 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_28_28;

#line 1382 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18 == (MR_Integer) 0))
#line 1382 "elds_to_erlang.m"
          {
#line 1382 "elds_to_erlang.m"
          }
#line 1382 "elds_to_erlang.m"
        else
#line 1377 "elds_to_erlang.m"
          {
#line 1378 "elds_to_erlang.m"
            {
#line 1378 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 44);
            }
#line 1377 "elds_to_erlang.m"
          }
#line 1355 "elds_to_erlang.m"
        {
#line 1355 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 214 "elds_to_erlang.m"
        {
#line 214 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_11);
        }
#line 215 "elds_to_erlang.m"
        {
#line 215 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 47);
        }
#line 216 "elds_to_erlang.m"
        {
#line 216 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_28_28 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__elds_to_erlang__Body_13);
        }
#line 216 "elds_to_erlang.m"
        {
#line 216 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_28_28);
        }
#line 217 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = (MR_Integer) 1;
#line 212 "elds_to_erlang.m"
      }
#line 218 "elds_to_erlang.m"
    else
#line 219 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18;
#line 207 "elds_to_erlang.m"
  }
#line 204 "elds_to_erlang.m"
}

#line 187 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
#line 187 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_4)
#line 187 "elds_to_erlang.m"
{
#line 189 "elds_to_erlang.m"
  {
#line 189 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 189 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Version_6;
#line 189 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Fullarch_7;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_13_13;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_15_15;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_16_16;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_22_22;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_23_23;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_25_25;
#line 189 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_27_27;

#line 190 "elds_to_erlang.m"
    {
#line 190 "elds_to_erlang.m"
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_6, &erl_backend__elds_to_erlang__Fullarch_7);
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_7));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
#line 196 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_25_25, 0) = ((MR_Box) ((MR_String) "% configured for "));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_25_25, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_27_27));
#line 196 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_23_23, 0) = ((MR_Box) ((MR_String) "\n"));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_23_23, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_25_25));
#line 195 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_6));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_23_23));
#line 195 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 0) = ((MR_Box) ((MR_String) "% version "));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 195 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_20_20));
#line 194 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_18_18));
#line 193 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_15_15, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_4));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_15_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_16_16));
#line 193 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_13_13, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_13_13, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_15_15));
#line 193 "elds_to_erlang.m"
    }
#line 192 "elds_to_erlang.m"
    {
#line 192 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_10_10, 0) = ((MR_Box) ((MR_String) "%\n"));
#line 192 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_10_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_13_13));
#line 192 "elds_to_erlang.m"
    }
#line 191 "elds_to_erlang.m"
    {
#line 191 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_10_10);
#line 191 "elds_to_erlang.m"
      return;
    }
#line 189 "elds_to_erlang.m"
  }
#line 187 "elds_to_erlang.m"
}

#line 185 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
#line 185 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 185 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 185 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 185 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 185 "elds_to_erlang.m"
{
#line 185 "elds_to_erlang.m"
  {
#line 185 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 185 "elds_to_erlang.m"
    {
#line 185 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 185 "elds_to_erlang.m"
      return;
    }
#line 185 "elds_to_erlang.m"
  }
#line 185 "elds_to_erlang.m"
}

#line 183 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 183 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 183 "elds_to_erlang.m"
{
#line 183 "elds_to_erlang.m"
  {
#line 183 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 183 "elds_to_erlang.m"
    {
#line 183 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 183 "elds_to_erlang.m"
      return;
    }
#line 183 "elds_to_erlang.m"
  }
#line 183 "elds_to_erlang.m"
}

#line 182 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
#line 182 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 182 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 182 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 182 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 182 "elds_to_erlang.m"
{
#line 182 "elds_to_erlang.m"
  {
#line 182 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 182 "elds_to_erlang.m"
    {
#line 182 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 182 "elds_to_erlang.m"
      return;
    }
#line 182 "elds_to_erlang.m"
  }
#line 182 "elds_to_erlang.m"
}

#line 166 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
#line 166 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 166 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 166 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 166 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 166 "elds_to_erlang.m"
{
#line 166 "elds_to_erlang.m"
  {
#line 166 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 166 "elds_to_erlang.m"
    {
#line 166 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 166 "elds_to_erlang.m"
      return;
    }
#line 166 "elds_to_erlang.m"
  }
#line 166 "elds_to_erlang.m"
}

#line 160 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
#line 160 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 160 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 160 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 160 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 160 "elds_to_erlang.m"
{
#line 160 "elds_to_erlang.m"
  {
#line 160 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 160 "elds_to_erlang.m"
    {
#line 160 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(((MR_String) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 160 "elds_to_erlang.m"
      return;
    }
#line 160 "elds_to_erlang.m"
  }
#line 160 "elds_to_erlang.m"
}

#line 139 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
#line 139 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 139 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 139 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 139 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 139 "elds_to_erlang.m"
{
#line 139 "elds_to_erlang.m"
  {
#line 139 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 139 "elds_to_erlang.m"
    {
#line 139 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 139 "elds_to_erlang.m"
      return;
    }
#line 139 "elds_to_erlang.m"
  }
#line 139 "elds_to_erlang.m"
}

#line 136 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
#line 136 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 136 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 136 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 136 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 136 "elds_to_erlang.m"
{
#line 136 "elds_to_erlang.m"
  {
#line 136 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 136 "elds_to_erlang.m"
    {
#line 136 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 136 "elds_to_erlang.m"
      return;
    }
#line 136 "elds_to_erlang.m"
  }
#line 136 "elds_to_erlang.m"
}

#line 126 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 126 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 126 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 126 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 126 "elds_to_erlang.m"
{
#line 126 "elds_to_erlang.m"
  {
#line 126 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 126 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16;

#line 126 "elds_to_erlang.m"
    {
#line 126 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16);
    }
#line 126 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16));
#line 126 "elds_to_erlang.m"
  }
#line 126 "elds_to_erlang.m"
}

#line 124 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 124 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 124 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 124 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 124 "elds_to_erlang.m"
{
#line 124 "elds_to_erlang.m"
  {
#line 124 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 124 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv3_HeadVar__3_3;

#line 124 "elds_to_erlang.m"
    {
#line 124 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv3_HeadVar__3_3);
    }
#line 124 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv3_HeadVar__3_3));
#line 124 "elds_to_erlang.m"
  }
#line 124 "elds_to_erlang.m"
}

#line 123 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 123 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 123 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 123 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 123 "elds_to_erlang.m"
{
#line 123 "elds_to_erlang.m"
  {
#line 123 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 123 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19;

#line 123 "elds_to_erlang.m"
    {
#line 123 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19);
    }
#line 123 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19));
#line 123 "elds_to_erlang.m"
  }
#line 123 "elds_to_erlang.m"
}

#line 106 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
#line 106 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 106 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 106 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
#line 106 "elds_to_erlang.m"
{
#line 109 "elds_to_erlang.m"
  {
#line 109 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_90_90;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_91_91;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_92_92;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_98_98;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_104_104;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Imports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignBodies_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ProcDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignExportDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__AddMainWrapper_19;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__NeedComma0_20;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__NeedComma1_21;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Globals_23;
#line 109 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ErlangModuleNameStr_24;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__EnvVarNames_29;
#line 109 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_35_35;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_41_41;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_46_46;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_55_55;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_71_71;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_79_79;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_81_81;
#line 109 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_83_83;
#line 123 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv2_NeedComma0_20;
#line 123 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43;
#line 124 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv5_NeedComma1_21;
#line 124 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45;
#line 126 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___NeedComma_22;
#line 126 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv8__NeedComma_22;
#line 126 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47;
#line 136 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54;
#line 139 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56;
#line 160 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68;
#line 166 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72;
#line 182 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80;
#line 183 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82;
#line 185 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31;

#line 112 "elds_to_erlang.m"
    {
#line 112 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__AddMainWrapper_19 = erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(erl_backend__elds_to_erlang__ModuleInfo_6);
    }
#line 115 "elds_to_erlang.m"
    {
#line 115 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(erl_backend__elds_to_erlang__SourceFileName_8);
    }
#line 118 "elds_to_erlang.m"
    {
#line 118 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-module(");
    }
#line 119 "elds_to_erlang.m"
    {
#line 119 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_35_35 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
#line 119 "elds_to_erlang.m"
    {
#line 119 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_35_35);
    }
#line 120 "elds_to_erlang.m"
    {
#line 120 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 122 "elds_to_erlang.m"
    {
#line 122 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-export([");
    }
#line 123 "elds_to_erlang.m"
    {
#line 123 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 123 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[0]));
#line 123 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_1));
#line 123 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 123 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 123 "elds_to_erlang.m"
    }
#line 10236 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_90_90 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0;
#line 10238 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_91_91 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 10240 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_92_92 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 123 "elds_to_erlang.m"
    {
#line 123 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_41_41, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv2_NeedComma0_20, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 123 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__NeedComma0_20 = ((MR_Word) erl_backend__elds_to_erlang__conv2_NeedComma0_20);
#line 10249 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_98_98 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;
#line 124 "elds_to_erlang.m"
    {
#line 124 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[0], erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma0_20)), &erl_backend__elds_to_erlang__conv5_NeedComma1_21, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45);
    }
#line 124 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__NeedComma1_21 = ((MR_Word) erl_backend__elds_to_erlang__conv5_NeedComma1_21);
#line 126 "elds_to_erlang.m"
    {
#line 126 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 126 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[1]));
#line 126 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_3));
#line 126 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 126 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 126 "elds_to_erlang.m"
    }
#line 10272 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_104_104 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
#line 126 "elds_to_erlang.m"
    {
#line 126 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_46_46, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma1_21)), &erl_backend__elds_to_erlang__conv8__NeedComma_22, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47);
    }
#line 126 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___NeedComma_22 = ((MR_Word) erl_backend__elds_to_erlang__conv8__NeedComma_22);
#line 128 "elds_to_erlang.m"
    {
#line 128 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(erl_backend__elds_to_erlang__AddMainWrapper_19, erl_backend__elds_to_erlang__InitPreds_17, erl_backend__elds_to_erlang__FinalPreds_18);
    }
#line 130 "elds_to_erlang.m"
    {
#line 130 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
#line 133 "elds_to_erlang.m"
    {
#line 133 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% -compile(export_all).\n");
    }
#line 135 "elds_to_erlang.m"
    {
#line 135 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_23);
    }
#line 136 "elds_to_erlang.m"
    {
#line 136 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 136 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[1]));
#line 136 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_4));
#line 136 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 136 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Globals_23));
#line 136 "elds_to_erlang.m"
    }
#line 136 "elds_to_erlang.m"
    {
#line 136 "elds_to_erlang.m"
      mercury__set__fold_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_53_53, erl_backend__elds_to_erlang__Imports_11, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54);
    }
#line 139 "elds_to_erlang.m"
    {
#line 139 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 139 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
#line 139 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_5));
#line 139 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 139 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 139 "elds_to_erlang.m"
    }
#line 139 "elds_to_erlang.m"
    {
#line 139 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_55_55, erl_backend__elds_to_erlang__ForeignDecls_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56);
    }
#line 142 "elds_to_erlang.m"
    {
#line 142 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ErlangModuleNameStr_24 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
#line 145 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__InitPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "elds_to_erlang.m"
      {
#line 144 "elds_to_erlang.m"
      }
#line 145 "elds_to_erlang.m"
    else
#line 146 "elds_to_erlang.m"
      {
#line 147 "elds_to_erlang.m"
        {
#line 147 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_INIT ");
        }
#line 148 "elds_to_erlang.m"
        {
#line 148 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
#line 149 "elds_to_erlang.m"
        {
#line 149 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_init\n");
        }
#line 146 "elds_to_erlang.m"
      }
#line 153 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__FinalPreds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "elds_to_erlang.m"
      {
#line 152 "elds_to_erlang.m"
      }
#line 153 "elds_to_erlang.m"
    else
#line 154 "elds_to_erlang.m"
      {
#line 155 "elds_to_erlang.m"
        {
#line 155 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_FINAL ");
        }
#line 156 "elds_to_erlang.m"
        {
#line 156 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
#line 157 "elds_to_erlang.m"
        {
#line 157 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_final\n");
        }
#line 154 "elds_to_erlang.m"
      }
#line 159 "elds_to_erlang.m"
    {
#line 159 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__EnvVarNames_29 = erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(erl_backend__elds_to_erlang__ProcDefns_14);
    }
#line 160 "elds_to_erlang.m"
    {
#line 160 "elds_to_erlang.m"
      mercury__set__fold_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[1], erl_backend__elds_to_erlang__EnvVarNames_29, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68);
    }
#line 163 "elds_to_erlang.m"
    {
#line 163 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% ENDINIT\n");
    }
#line 166 "elds_to_erlang.m"
    {
#line 166 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 166 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[3]));
#line 166 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_7));
#line 166 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 166 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 166 "elds_to_erlang.m"
    }
#line 166 "elds_to_erlang.m"
    {
#line 166 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_71_71, erl_backend__elds_to_erlang__ForeignBodies_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72);
    }
#line 172 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__AddMainWrapper_19 == (MR_Integer) 0))
#line 173 "elds_to_erlang.m"
      {
#line 173 "elds_to_erlang.m"
      }
#line 172 "elds_to_erlang.m"
    else
#line 170 "elds_to_erlang.m"
      {
#line 170 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_73_73;

#line 171 "elds_to_erlang.m"
        {
#line 171 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_73_73 = erl_backend__elds_to_erlang__main_wrapper_code_0_f_0();
        }
#line 171 "elds_to_erlang.m"
        {
#line 171 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_73_73);
        }
#line 170 "elds_to_erlang.m"
      }
#line 176 "elds_to_erlang.m"
    {
#line 176 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_init", erl_backend__elds_to_erlang__InitPreds_17);
    }
#line 178 "elds_to_erlang.m"
    {
#line 178 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_final", erl_backend__elds_to_erlang__FinalPreds_18);
    }
#line 182 "elds_to_erlang.m"
    {
#line 182 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 182 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[4]));
#line 182 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_8));
#line 182 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 182 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 182 "elds_to_erlang.m"
    }
#line 182 "elds_to_erlang.m"
    {
#line 182 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_79_79, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80);
    }
#line 183 "elds_to_erlang.m"
    {
#line 183 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[5]));
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_9));
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 183 "elds_to_erlang.m"
    }
#line 183 "elds_to_erlang.m"
    {
#line 183 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_81_81, erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82);
    }
#line 185 "elds_to_erlang.m"
    {
#line 185 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 185 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[6]));
#line 185 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_10));
#line 185 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 185 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 185 "elds_to_erlang.m"
    }
#line 185 "elds_to_erlang.m"
    {
#line 185 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_83_83, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31);
    }
#line 109 "elds_to_erlang.m"
  }
#line 106 "elds_to_erlang.m"
}

#line 1241 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1241 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1241 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1241 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1241 "elds_to_erlang.m"
    {
#line 1241 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1241 "elds_to_erlang.m"
      return;
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1241 "elds_to_erlang.m"
}

#line 39 "elds_to_erlang.m"
void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0(
#line 39 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 39 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_6)
#line 39 "elds_to_erlang.m"
{
#line 490 "elds_to_erlang.m"
  {
#line 490 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 490 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 0)));
#line 490 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 1)));
#line 490 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 2)));
#line 491 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___EnvVarNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 3)));

#line 519 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Body_10)) == (MR_mktag((MR_Integer) 0))))
#line 493 "elds_to_erlang.m"
      {
#line 493 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Clause_12 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Body_10), (MR_Integer) 0);
#line 515 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Context_20;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ClauseBody_14;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Fun_15;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__FunBody_18;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_28_28;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_29_29;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_30_30;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_31_31;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_32_32;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_33_33;
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___HeadVars_13;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___CallArgs_16;
#line 501 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___FunVars_17;
#line 503 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang___Code_19;
#line 505 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___PlaceOutputs_21;

#line 494 "elds_to_erlang.m"
        {
#line 494 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 499 "elds_to_erlang.m"
        erl_backend__elds_to_erlang___HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 0)));
#line 499 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__ClauseBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 1)));
#line 500 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__ClauseBody_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 500 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 500 "elds_to_erlang.m"
          {
#line 500 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 1)));
#line 500 "elds_to_erlang.m"
            erl_backend__elds_to_erlang___CallArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 2)));
#line 500 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 500 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 500 "elds_to_erlang.m"
              {
#line 500 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Fun_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_28_28, (MR_Integer) 0)));
#line 501 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Fun_15)) == (MR_mktag((MR_Integer) 0)));
#line 501 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 501 "elds_to_erlang.m"
                  {
#line 501 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_29_29 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Fun_15), (MR_Integer) 0);
#line 501 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang___FunVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, (MR_Integer) 0)));
#line 501 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__FunBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, (MR_Integer) 1)));
#line 502 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__FunBody_18)) == (MR_mktag((MR_Integer) 1)));
#line 502 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 502 "elds_to_erlang.m"
                      {
#line 502 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__FunBody_18, (MR_Integer) 0)));
#line 503 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 503 "elds_to_erlang.m"
                        if (erl_backend__elds_to_erlang__succeeded)
#line 503 "elds_to_erlang.m"
                          {
#line 503 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_30_30, (MR_Integer) 0)));
#line 503 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_30_30, (MR_Integer) 1)));
#line 503 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 503 "elds_to_erlang.m"
                            if (erl_backend__elds_to_erlang__succeeded)
#line 503 "elds_to_erlang.m"
                              {
#line 503 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang___Code_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 1)));
#line 503 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 2)));
#line 505 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 505 "elds_to_erlang.m"
                                if (erl_backend__elds_to_erlang__succeeded)
#line 505 "elds_to_erlang.m"
                                  {
#line 505 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang___PlaceOutputs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, (MR_Integer) 0)));
#line 505 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, (MR_Integer) 1)));
#line 505 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "elds_to_erlang.m"
                                  }
#line 503 "elds_to_erlang.m"
                              }
#line 503 "elds_to_erlang.m"
                          }
#line 502 "elds_to_erlang.m"
                      }
#line 501 "elds_to_erlang.m"
                  }
#line 500 "elds_to_erlang.m"
              }
#line 500 "elds_to_erlang.m"
          }
#line 515 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 510 "elds_to_erlang.m"
          {
#line 510 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__LineNr_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 1)));
#line 510 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__FileName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 0)));
#line 510 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__LineNr_46 = (erl_backend__elds_to_erlang__LineNr_23 - (MR_Integer) 3);
#line 1241 "elds_to_erlang.m"
            MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51;

#line 449 "elds_to_erlang.m"
            {
#line 449 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "-file(\"");
            }
#line 1241 "elds_to_erlang.m"
            {
#line 1241 "elds_to_erlang.m"
              mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[0], erl_backend__elds_to_erlang__FileName_45, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51);
            }
#line 451 "elds_to_erlang.m"
            {
#line 451 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 452 "elds_to_erlang.m"
            {
#line 452 "elds_to_erlang.m"
              mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_46);
            }
#line 453 "elds_to_erlang.m"
            {
#line 453 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) ").\n");
            }
#line 512 "elds_to_erlang.m"
            {
#line 512 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
#line 513 "elds_to_erlang.m"
            {
#line 513 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
            }
#line 514 "elds_to_erlang.m"
            {
#line 514 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
#line 514 "elds_to_erlang.m"
              return;
            }
#line 510 "elds_to_erlang.m"
          }
#line 515 "elds_to_erlang.m"
        else
#line 516 "elds_to_erlang.m"
          {
#line 516 "elds_to_erlang.m"
            {
#line 516 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
#line 517 "elds_to_erlang.m"
            {
#line 517 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
#line 517 "elds_to_erlang.m"
              return;
            }
#line 516 "elds_to_erlang.m"
          }
#line 493 "elds_to_erlang.m"
      }
#line 519 "elds_to_erlang.m"
    else
#line 520 "elds_to_erlang.m"
      {
#line 520 "elds_to_erlang.m"
      }
#line 490 "elds_to_erlang.m"
  }
#line 39 "elds_to_erlang.m"
}

#line 93 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
#line 93 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 93 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 93 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
#line 93 "elds_to_erlang.m"
{
#line 93 "elds_to_erlang.m"
  {
#line 93 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 93 "elds_to_erlang.m"
    {
#line 93 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_hrl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
#line 93 "elds_to_erlang.m"
      return;
    }
#line 93 "elds_to_erlang.m"
  }
#line 93 "elds_to_erlang.m"
}

#line 86 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
#line 86 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 86 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 86 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
#line 86 "elds_to_erlang.m"
{
#line 86 "elds_to_erlang.m"
  {
#line 86 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 86 "elds_to_erlang.m"
    {
#line 86 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_erl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
#line 86 "elds_to_erlang.m"
      return;
    }
#line 86 "elds_to_erlang.m"
  }
#line 86 "elds_to_erlang.m"
}

#line 33 "elds_to_erlang.m"
void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0(
#line 33 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 33 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 33 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__Succeeded_8)
#line 33 "elds_to_erlang.m"
{
#line 77 "elds_to_erlang.m"
  {
#line 77 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 77 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 77 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Globals_11;
#line 77 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__SourceFileName_12;
#line 77 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__TargetFileName_13;
#line 77 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeaderFileName_14;
#line 77 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TargetCodeSucceeded_15;
#line 77 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));

#line 79 "elds_to_erlang.m"
    {
#line 79 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_11);
    }
#line 80 "elds_to_erlang.m"
    {
#line 80 "elds_to_erlang.m"
      parse_tree__file_names__module_source_filename_5_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, &erl_backend__elds_to_erlang__SourceFileName_12);
    }
#line 81 "elds_to_erlang.m"
    {
#line 81 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, (MR_String) ".erl", (MR_Integer) 0, &erl_backend__elds_to_erlang__TargetFileName_13);
    }
#line 83 "elds_to_erlang.m"
    {
#line 83 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, (MR_String) ".hrl", (MR_Integer) 0, &erl_backend__elds_to_erlang__HeaderFileName_14);
    }
#line 86 "elds_to_erlang.m"
    {
#line 86 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 86 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[0]));
#line 86 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_1));
#line 86 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 86 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 86 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
#line 86 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
#line 86 "elds_to_erlang.m"
    }
#line 85 "elds_to_erlang.m"
    {
#line 85 "elds_to_erlang.m"
      libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TargetFileName_13, erl_backend__elds_to_erlang__V_26_26, &erl_backend__elds_to_erlang__TargetCodeSucceeded_15);
    }
#line 101 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__TargetCodeSucceeded_15 == (MR_Integer) 0))
#line 103 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__Succeeded_8 = (MR_Integer) 0;
#line 101 "elds_to_erlang.m"
    else
#line 89 "elds_to_erlang.m"
      {
#line 89 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__TmpHeaderFileName_16;
#line 89 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_29_29;

#line 91 "elds_to_erlang.m"
        {
#line 91 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__TmpHeaderFileName_16 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__HeaderFileName_14, (MR_String) ".tmp");
        }
#line 93 "elds_to_erlang.m"
        {
#line 93 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 93 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[1]));
#line 93 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_2));
#line 93 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 93 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Name_10));
#line 93 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
#line 93 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
#line 93 "elds_to_erlang.m"
        }
#line 92 "elds_to_erlang.m"
        {
#line 92 "elds_to_erlang.m"
          libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TmpHeaderFileName_16, erl_backend__elds_to_erlang__V_29_29, erl_backend__elds_to_erlang__Succeeded_8);
        }
#line 98 "elds_to_erlang.m"
        if ((*erl_backend__elds_to_erlang__Succeeded_8 == (MR_Integer) 0))
#line 99 "elds_to_erlang.m"
          {
#line 99 "elds_to_erlang.m"
          }
#line 98 "elds_to_erlang.m"
        else
#line 97 "elds_to_erlang.m"
          {
#line 97 "elds_to_erlang.m"
            parse_tree__module_cmds__update_interface_4_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__HeaderFileName_14);
#line 97 "elds_to_erlang.m"
            return;
          }
#line 89 "elds_to_erlang.m"
      }
#line 77 "elds_to_erlang.m"
  }
#line 33 "elds_to_erlang.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module erl_backend.elds_to_erlang. */
