/*
** Automatically generated from `elds_to_erlang.m'
** by the Mercury compiler,
** version DEV
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 286 "elds_to_erlang.m"
struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s {
#line 286 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3;
#line 288 "elds_to_erlang.m"
  MR_bool erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded;
#line 288 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6;
#line 292 "elds_to_erlang.m"
  jmp_buf erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0;
#line 292 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7;
#line 292 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8;
#line 292 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ImportStatus_9;
#line 292 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12;
#line 292 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7;
#line 286 "elds_to_erlang.m"
};


#line 171 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 174 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0;

#line 180 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1;

#line 183 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2];

#line 186 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2];

#line 189 "erl_backend.elds_to_erlang.c"
static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2];

#line 192 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
#line 195 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 197 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

#line 200 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
#line 203 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 205 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 207 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

#line 210 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
#line 213 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 215 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

#line 218 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
#line 221 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 223 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 225 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1234 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
#line 1234 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3);

#line 1234 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1351 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
#line 1351 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3);

#line 1351 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1371 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void);

#line 1359 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
#line 1359 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4);

#line 1353 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
#line 1353 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4);

#line 1336 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
#line 1336 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 1336 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

#line 1331 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
#line 1331 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1331 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1331 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1331 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1316 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
#line 1316 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
#line 1316 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 1316 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

#line 1244 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
#line 1244 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1244 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__Char_6);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1238 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1238 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_6);

#line 1204 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
#line 1204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Binop_4);

#line 1197 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
#line 1197 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1148 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
#line 1148 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4);

#line 1140 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
#line 1140 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_3);

#line 1051 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
#line 1051 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__PredName_12,
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
#line 1051 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
#line 1051 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
#line 1051 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
#line 1051 "elds_to_erlang.m"
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18);

#line 995 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
#line 995 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name0_3);

#line 932 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
#line 932 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 932 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiId_6);

#line 917 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
#line 917 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 917 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

#line 908 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
#line 908 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__C_4);

#line 905 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 905 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 899 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
#line 899 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4);

#line 905 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 905 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 892 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
#line 892 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
#line 892 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Var_6);

#line 587 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 587 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 587 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 587 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 858 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
#line 858 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 858 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 858 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 858 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Args_10);

#line 839 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
#line 839 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_5,
#line 839 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
#line 839 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
#line 839 "elds_to_erlang.m"
  MR_Integer * erl_backend__elds_to_erlang__Pos_8);

#line 827 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
#line 827 "elds_to_erlang.m"
  MR_Float erl_backend__elds_to_erlang__Float_4);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 768 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
#line 768 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 768 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 768 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 768 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Term_10);

#line 754 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
#line 754 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 754 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 754 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 754 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Catch_10);

#line 744 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
#line 744 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 744 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 744 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 744 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

#line 674 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
#line 674 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 674 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 674 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 674 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 739 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
#line 739 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 739 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 739 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 739 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 659 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
#line 659 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 659 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 659 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 659 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 599 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
#line 599 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 599 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 599 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 599 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10);

#line 589 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
#line 589 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 589 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 589 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 589 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10);

#line 587 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 587 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 582 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
#line 582 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 582 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 582 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 582 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Exprs_10);

#line 567 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
#line 567 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
#line 567 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 567 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
#line 567 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 550 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
#line 550 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 550 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 550 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 550 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_10);

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 542 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
#line 542 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 542 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
#line 542 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_8);

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 533 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
#line 533 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 533 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6);

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 524 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
#line 524 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 524 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6);

#line 481 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
#line 481 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 481 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

#line 476 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
#line 476 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 476 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 476 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 476 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 465 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
#line 465 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 465 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name_7,
#line 465 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 456 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 421 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
#line 421 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 421 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 412 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
#line 412 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 412 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 401 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
#line 401 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Globals_5,
#line 401 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Import_6);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 392 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
#line 392 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__EnvVarName_4);

#line 388 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
#line 388 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3);

#line 386 "elds_to_erlang.m"
static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
#line 386 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 386 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1);

#line 383 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
#line 383 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3);

#line 302 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void);

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 286 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
#line 286 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3);

#line 251 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
#line 251 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
#line 251 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
#line 251 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8);

#line 234 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
#line 234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
#line 234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
#line 234 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16);

#line 223 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
#line 223 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
#line 223 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
#line 223 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3);

#line 205 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
#line 205 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 205 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_8,
#line 205 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
#line 205 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19);

#line 188 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
#line 188 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_4);

#line 186 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 186 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 184 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
#line 184 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 184 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 184 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 184 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 183 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 183 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 183 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 167 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
#line 167 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 167 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 167 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 167 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 161 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
#line 161 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 161 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 161 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 161 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 140 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 140 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 137 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
#line 137 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 137 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 137 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 137 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 127 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 127 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 127 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 125 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 125 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 125 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 124 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
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

#line 107 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
#line 107 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 107 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 107 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 94 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
#line 94 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 94 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 94 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2);

#line 87 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
#line 87 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 87 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 87 "elds_to_erlang.m"
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


#line 1199 "elds_to_erlang.m"
/* sealed */ struct erl_backend__elds_to_erlang__vector_common_type_10_0_s {
#line 1199 "elds_to_erlang.m"
  const MR_String erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;
#line 1199 "elds_to_erlang.m"
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



#line 1607 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1615 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1623 "erl_backend.elds_to_erlang.c"
const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_indent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1640 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0 = {
  (MR_String) "in_string",
  (MR_Integer) 0
};

#line 1646 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1 = {
  (MR_String) "in_atom",
  (MR_Integer) 1
};

#line 1652 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1
};

#line 1658 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0
};

#line 1664 "erl_backend.elds_to_erlang.c"
static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1670 "erl_backend.elds_to_erlang.c"
const MR_TypeCtorInfo_Struct erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__type_ctor_info_string_or_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1687 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
#line 1690 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1692 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
#line 1694 "erl_backend.elds_to_erlang.c"
{
#line 1696 "erl_backend.elds_to_erlang.c"
  {
#line 1698 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1701 "erl_backend.elds_to_erlang.c"
    {
#line 1703 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____indent_0_0(((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
#line 1706 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1708 "erl_backend.elds_to_erlang.c"
  }
#line 1710 "erl_backend.elds_to_erlang.c"
}

#line 1713 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
#line 1716 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1718 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1720 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1722 "erl_backend.elds_to_erlang.c"
{
#line 1724 "erl_backend.elds_to_erlang.c"
  {
#line 1726 "erl_backend.elds_to_erlang.c"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

#line 1729 "erl_backend.elds_to_erlang.c"
    {
#line 1731 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang____Compare____indent_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
#line 1734 "erl_backend.elds_to_erlang.c"
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
#line 1736 "erl_backend.elds_to_erlang.c"
  }
#line 1738 "erl_backend.elds_to_erlang.c"
}

#line 1741 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
#line 1744 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1746 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
#line 1748 "erl_backend.elds_to_erlang.c"
{
#line 1750 "erl_backend.elds_to_erlang.c"
  {
#line 1752 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1755 "erl_backend.elds_to_erlang.c"
    {
#line 1757 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
#line 1760 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1762 "erl_backend.elds_to_erlang.c"
  }
#line 1764 "erl_backend.elds_to_erlang.c"
}

#line 1767 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
#line 1770 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1772 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1774 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1776 "erl_backend.elds_to_erlang.c"
{
#line 1778 "erl_backend.elds_to_erlang.c"
  {
#line 1780 "erl_backend.elds_to_erlang.c"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

#line 1783 "erl_backend.elds_to_erlang.c"
    {
#line 1785 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
#line 1788 "erl_backend.elds_to_erlang.c"
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
#line 1790 "erl_backend.elds_to_erlang.c"
  }
#line 1792 "erl_backend.elds_to_erlang.c"
}

#line 1234 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
#line 1234 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3)
#line 1234 "elds_to_erlang.m"
{
#line 1234 "elds_to_erlang.m"
  {
#line 1234 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1234 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1234 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__3_3;

#line 1234 "elds_to_erlang.m"
    {
#line 1234 "elds_to_erlang.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
#line 1234 "elds_to_erlang.m"
      return;
    }
#line 1234 "elds_to_erlang.m"
  }
#line 1234 "elds_to_erlang.m"
}

#line 1234 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
#line 1234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2)
#line 1234 "elds_to_erlang.m"
{
#line 1836 "erl_backend.elds_to_erlang.c"
  {
#line 1838 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__HeadVar__2_1 == erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1841 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1843 "erl_backend.elds_to_erlang.c"
  }
#line 1234 "elds_to_erlang.m"
}

#line 1351 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
#line 1351 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3)
#line 1351 "elds_to_erlang.m"
{
#line 1351 "elds_to_erlang.m"
  {
#line 1351 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1351 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1351 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = erl_backend__elds_to_erlang__HeadVar__3_3;

#line 1351 "elds_to_erlang.m"
    {
#line 1351 "elds_to_erlang.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
#line 1351 "elds_to_erlang.m"
      return;
    }
#line 1351 "elds_to_erlang.m"
  }
#line 1351 "elds_to_erlang.m"
}

#line 1351 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1351 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2)
#line 1351 "elds_to_erlang.m"
{
#line 1351 "elds_to_erlang.m"
  {
#line 1351 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1351 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_3 = erl_backend__elds_to_erlang__HeadVar__1_1;
#line 1351 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_4 = erl_backend__elds_to_erlang__HeadVar__2_2;

#line 1351 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Cast_HeadVar1_3 == erl_backend__elds_to_erlang__Cast_HeadVar2_4);
#line 1351 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__succeeded;
#line 1351 "elds_to_erlang.m"
  }
#line 1351 "elds_to_erlang.m"
}

#line 1371 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void)
#line 1371 "elds_to_erlang.m"
{
#line 1373 "elds_to_erlang.m"
  {
#line 1373 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1374 "elds_to_erlang.m"
    {
#line 1374 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
      return;
    }
#line 1373 "elds_to_erlang.m"
  }
#line 1371 "elds_to_erlang.m"
}

#line 1359 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
#line 1359 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4)
#line 1359 "elds_to_erlang.m"
{
#line 1364 "elds_to_erlang.m"
  while (MR_TRUE)
#line 1364 "elds_to_erlang.m"
    {
#line 1364 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 1364 "elds_to_erlang.m"
      {
#line 1364 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__N_4 <= (MR_Integer) 0);

#line 1364 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1364 "elds_to_erlang.m"
          {
#line 1364 "elds_to_erlang.m"
          }
#line 1364 "elds_to_erlang.m"
        else
#line 1365 "elds_to_erlang.m"
          {
#line 1365 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__V_11_11;

#line 1365 "elds_to_erlang.m"
            {
#line 1365 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1366 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_11_11 = (erl_backend__elds_to_erlang__N_4 - (MR_Integer) 1);
#line 1366 "elds_to_erlang.m"
            /* direct tailcall eliminated */
#line 1366 "elds_to_erlang.m"
            {
#line 1366 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__N__tmp_copy_4 = erl_backend__elds_to_erlang__V_11_11;

#line 1366 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__N_4 = erl_backend__elds_to_erlang__N__tmp_copy_4;
#line 1366 "elds_to_erlang.m"
            }
#line 1366 "elds_to_erlang.m"
            continue;
#line 1365 "elds_to_erlang.m"
          }
#line 1364 "elds_to_erlang.m"
      }
#line 1364 "elds_to_erlang.m"
      break;
#line 1364 "elds_to_erlang.m"
    }
#line 1359 "elds_to_erlang.m"
}

#line 1353 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
#line 1353 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4)
#line 1353 "elds_to_erlang.m"
{
#line 1355 "elds_to_erlang.m"
  {
#line 1355 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__N_4);
#line 1357 "elds_to_erlang.m"
      return;
    }
#line 1355 "elds_to_erlang.m"
  }
#line 1353 "elds_to_erlang.m"
}

#line 1336 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
#line 1336 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 1336 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
#line 1336 "elds_to_erlang.m"
{
#line 1339 "elds_to_erlang.m"
  {
#line 1339 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1339 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__IsLocal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));
#line 1340 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
#line 1340 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
#line 1340 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));

#line 1343 "elds_to_erlang.m"
#line 1343 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__IsLocal_8) {
#line 1343 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1343 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1345 "elds_to_erlang.m"
        {
#line 1345 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__ForeignDecl_6);
#line 1345 "elds_to_erlang.m"
          return;
        }
#line 1343 "elds_to_erlang.m"
        break;
#line 1343 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1342 "elds_to_erlang.m"
        {
#line 1342 "elds_to_erlang.m"
        }
#line 1343 "elds_to_erlang.m"
        break;
#line 1343 "elds_to_erlang.m"
    }
#line 1339 "elds_to_erlang.m"
  }
#line 1336 "elds_to_erlang.m"
}

#line 1331 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
#line 1331 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1331 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1331 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1331 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1331 "elds_to_erlang.m"
{
#line 1331 "elds_to_erlang.m"
  {
#line 1331 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1331 "elds_to_erlang.m"
    {
#line 1331 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1331 "elds_to_erlang.m"
      return;
    }
#line 1331 "elds_to_erlang.m"
  }
#line 1331 "elds_to_erlang.m"
}

#line 1316 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
#line 1316 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
#line 1316 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 1316 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
#line 1316 "elds_to_erlang.m"
{
#line 1319 "elds_to_erlang.m"
  {
#line 1319 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1319 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__MangledModuleName_10;
#line 1319 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__UppercaseModuleName_11;
#line 1319 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__GuardMacroName_12;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_13;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_21_21;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_22_22;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_24_24;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_30_30;
#line 1319 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Version_51;
#line 1319 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Fullarch_52;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_56_56;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_58_58;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_59_59;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_61_61;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_63_63;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_65_65;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_66_66;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_68_68;
#line 1319 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_70_70;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_34_34;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_35_35;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_36_36;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_37_37;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_40_40;
#line 1330 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_41_41;
#line 1331 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31;

#line 191 "elds_to_erlang.m"
    {
#line 191 "elds_to_erlang.m"
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_51, &erl_backend__elds_to_erlang__Fullarch_52);
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_70_70, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_52));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
#line 197 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_68_68, 0) = ((MR_Box) ((MR_String) "% configured for "));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_68_68, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_70_70));
#line 197 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_66_66, 0) = ((MR_Box) ((MR_String) "\n"));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_66_66, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_68_68));
#line 196 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_65_65, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_51));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_65_65, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_66_66));
#line 196 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_63_63, 0) = ((MR_Box) ((MR_String) "% version "));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_63_63, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_65_65));
#line 196 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_61_61, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_61_61, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_63_63));
#line 195 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_59_59, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_59_59, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_61_61));
#line 194 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_58_58, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_58_58, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_59_59));
#line 194 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_56_56, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_56_56, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_58_58));
#line 194 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_53_53, 0) = ((MR_Box) ((MR_String) "%\n"));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_53_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_56_56));
#line 193 "elds_to_erlang.m"
    }
#line 192 "elds_to_erlang.m"
    {
#line 192 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_53_53);
    }
#line 1322 "elds_to_erlang.m"
    {
#line 1322 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__MangledModuleName_10 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(erl_backend__elds_to_erlang__ModuleName_6);
    }
#line 1323 "elds_to_erlang.m"
    {
#line 1323 "elds_to_erlang.m"
      mercury__string__to_upper_2_p_0(erl_backend__elds_to_erlang__MangledModuleName_10, &erl_backend__elds_to_erlang__UppercaseModuleName_11);
    }
#line 1324 "elds_to_erlang.m"
    {
#line 1324 "elds_to_erlang.m"
      mercury__string__append_3_p_2(erl_backend__elds_to_erlang__UppercaseModuleName_11, (MR_String) "_HRL", &erl_backend__elds_to_erlang__GuardMacroName_12);
    }
#line 1327 "elds_to_erlang.m"
    {
#line 1327 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
#line 1327 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[6])));
#line 1327 "elds_to_erlang.m"
    }
#line 1327 "elds_to_erlang.m"
    {
#line 1327 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_24_24, 0) = ((MR_Box) ((MR_String) "-define("));
#line 1327 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_24_24, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_26_26));
#line 1327 "elds_to_erlang.m"
    }
#line 1326 "elds_to_erlang.m"
    {
#line 1326 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) ((MR_String) ").\n"));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_24_24));
#line 1326 "elds_to_erlang.m"
    }
#line 1326 "elds_to_erlang.m"
    {
#line 1326 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_21_21, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_21_21, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 1326 "elds_to_erlang.m"
    }
#line 1326 "elds_to_erlang.m"
    {
#line 1326 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 0) = ((MR_Box) ((MR_String) "-ifndef("));
#line 1326 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_21_21));
#line 1326 "elds_to_erlang.m"
    }
#line 1325 "elds_to_erlang.m"
    {
#line 1325 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_18_18);
    }
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ForeignDecls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 1330 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
#line 1331 "elds_to_erlang.m"
    {
#line 1331 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 1331 "elds_to_erlang.m"
    }
#line 1331 "elds_to_erlang.m"
    {
#line 1331 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_30_30, erl_backend__elds_to_erlang__ForeignDecls_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31);
    }
#line 1334 "elds_to_erlang.m"
    {
#line 1334 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-endif.\n");
#line 1334 "elds_to_erlang.m"
      return;
    }
#line 1319 "elds_to_erlang.m"
  }
#line 1316 "elds_to_erlang.m"
}

#line 1244 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
#line 1244 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1244 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__Char_6)
#line 1244 "elds_to_erlang.m"
{
#line 1247 "elds_to_erlang.m"
  {
#line 1247 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1247 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Int_8;

#line 1248 "elds_to_erlang.m"
    {
#line 1248 "elds_to_erlang.m"
      mercury__char__to_int_2_p_0(erl_backend__elds_to_erlang__Char_6, &erl_backend__elds_to_erlang__Int_8);
    }
#line 1250 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_Integer) 32 <= erl_backend__elds_to_erlang__Int_8);
#line 1250 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1250 "elds_to_erlang.m"
      {
#line 1251 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 92);
#line 1251 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1250 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1255 "elds_to_erlang.m"
#line 1255 "elds_to_erlang.m"
          switch (erl_backend__elds_to_erlang__StringOrAtom_5) {
#line 1255 "elds_to_erlang.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1255 "elds_to_erlang.m"
            case (MR_Integer) 1:
#line 1257 "elds_to_erlang.m"
              {
#line 1257 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 39);
#line 1257 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1257 "elds_to_erlang.m"
              }
#line 1255 "elds_to_erlang.m"
              break;
#line 1255 "elds_to_erlang.m"
            case (MR_Integer) 0:
#line 1254 "elds_to_erlang.m"
              {
#line 1254 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 34);
#line 1254 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1254 "elds_to_erlang.m"
              }
#line 1255 "elds_to_erlang.m"
              break;
#line 1255 "elds_to_erlang.m"
          }
#line 1250 "elds_to_erlang.m"
      }
#line 1261 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1260 "elds_to_erlang.m"
      {
#line 1260 "elds_to_erlang.m"
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_6);
#line 1260 "elds_to_erlang.m"
        return;
      }
#line 1261 "elds_to_erlang.m"
    else
#line 1265 "elds_to_erlang.m"
      {
#line 1265 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Esc_9;

#line 1274 "elds_to_erlang.m"
#line 1274 "elds_to_erlang.m"
        switch (erl_backend__elds_to_erlang__Int_8) {
#line 1274 "elds_to_erlang.m"
          default:
#line 1274 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 1283 "elds_to_erlang.m"
            {
#line 1283 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^a";
#line 1283 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1283 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 2:
#line 1284 "elds_to_erlang.m"
            {
#line 1284 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^b";
#line 1284 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1284 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 3:
#line 1285 "elds_to_erlang.m"
            {
#line 1285 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^c";
#line 1285 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1285 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 4:
#line 1286 "elds_to_erlang.m"
            {
#line 1286 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^d";
#line 1286 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1286 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 5:
#line 1287 "elds_to_erlang.m"
            {
#line 1287 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^e";
#line 1287 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1287 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 6:
#line 1288 "elds_to_erlang.m"
            {
#line 1288 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^f";
#line 1288 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1288 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 7:
#line 1289 "elds_to_erlang.m"
            {
#line 1289 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^g";
#line 1289 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1289 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 8:
#line 1274 "elds_to_erlang.m"
            {
#line 1274 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\b";
#line 1274 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1274 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 9:
#line 1281 "elds_to_erlang.m"
            {
#line 1281 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\t";
#line 1281 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1281 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 10:
#line 1278 "elds_to_erlang.m"
            {
#line 1278 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\n";
#line 1278 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1278 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 11:
#line 1282 "elds_to_erlang.m"
            {
#line 1282 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\v";
#line 1282 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1282 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 12:
#line 1277 "elds_to_erlang.m"
            {
#line 1277 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\f";
#line 1277 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1277 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 13:
#line 1279 "elds_to_erlang.m"
            {
#line 1279 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\r";
#line 1279 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1279 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 14:
#line 1296 "elds_to_erlang.m"
            {
#line 1296 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^n";
#line 1296 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1296 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 15:
#line 1297 "elds_to_erlang.m"
            {
#line 1297 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^o";
#line 1297 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1297 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 16:
#line 1298 "elds_to_erlang.m"
            {
#line 1298 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^p";
#line 1298 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1298 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 17:
#line 1299 "elds_to_erlang.m"
            {
#line 1299 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^q";
#line 1299 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1299 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 18:
#line 1300 "elds_to_erlang.m"
            {
#line 1300 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^r";
#line 1300 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1300 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 19:
#line 1301 "elds_to_erlang.m"
            {
#line 1301 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^s";
#line 1301 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1301 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 20:
#line 1302 "elds_to_erlang.m"
            {
#line 1302 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^t";
#line 1302 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1302 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 21:
#line 1303 "elds_to_erlang.m"
            {
#line 1303 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^u";
#line 1303 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1303 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 22:
#line 1304 "elds_to_erlang.m"
            {
#line 1304 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^v";
#line 1304 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1304 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 23:
#line 1305 "elds_to_erlang.m"
            {
#line 1305 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^w";
#line 1305 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1305 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 24:
#line 1306 "elds_to_erlang.m"
            {
#line 1306 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^x";
#line 1306 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1306 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 25:
#line 1307 "elds_to_erlang.m"
            {
#line 1307 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^y";
#line 1307 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1307 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 26:
#line 1308 "elds_to_erlang.m"
            {
#line 1308 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^z";
#line 1308 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1308 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 27:
#line 1276 "elds_to_erlang.m"
            {
#line 1276 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\e";
#line 1276 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1276 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 32:
#line 1280 "elds_to_erlang.m"
            {
#line 1280 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\s";
#line 1280 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1280 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 34:
#line 1310 "elds_to_erlang.m"
            {
#line 1310 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\"";
#line 1310 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1310 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 39:
#line 1309 "elds_to_erlang.m"
            {
#line 1309 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\'";
#line 1309 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1309 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 92:
#line 1311 "elds_to_erlang.m"
            {
#line 1311 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\\";
#line 1311 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1311 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
          case (MR_Integer) 127:
#line 1275 "elds_to_erlang.m"
            {
#line 1275 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\d";
#line 1275 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1275 "elds_to_erlang.m"
            }
#line 1274 "elds_to_erlang.m"
            break;
#line 1274 "elds_to_erlang.m"
        }
#line 1265 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1264 "elds_to_erlang.m"
          {
#line 1264 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_9);
#line 1264 "elds_to_erlang.m"
            return;
          }
#line 1265 "elds_to_erlang.m"
        else
#line 1266 "elds_to_erlang.m"
          {
#line 1266 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__OctalString_10;

#line 1266 "elds_to_erlang.m"
            {
#line 1266 "elds_to_erlang.m"
              mercury__string__int_to_base_string_3_p_0(erl_backend__elds_to_erlang__Int_8, (MR_Integer) 8, &erl_backend__elds_to_erlang__OctalString_10);
            }
#line 1267 "elds_to_erlang.m"
            {
#line 1267 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 92);
            }
#line 1268 "elds_to_erlang.m"
            {
#line 1268 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__OctalString_10);
#line 1268 "elds_to_erlang.m"
              return;
            }
#line 1266 "elds_to_erlang.m"
          }
#line 1265 "elds_to_erlang.m"
      }
#line 1247 "elds_to_erlang.m"
  }
#line 1244 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 1238 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1238 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_6)
#line 1238 "elds_to_erlang.m"
{
#line 1241 "elds_to_erlang.m"
  {
#line 1241 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1241 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0]));
#line 1242 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1));
#line 1242 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1242 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 3) = ((MR_Box) (erl_backend__elds_to_erlang__StringOrAtom_5));
#line 1242 "elds_to_erlang.m"
    }
#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_10_10, erl_backend__elds_to_erlang__String_6, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9);
    }
#line 1241 "elds_to_erlang.m"
  }
#line 1238 "elds_to_erlang.m"
}

#line 1204 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
#line 1204 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Binop_4)
#line 1204 "elds_to_erlang.m"
{
#line 1206 "elds_to_erlang.m"
  {
#line 1206 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1206 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_8_8 = ((&erl_backend__elds_to_erlang_vector_common_10[4 + erl_backend__elds_to_erlang__Binop_4]))->erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;

#line 1207 "elds_to_erlang.m"
    {
#line 1207 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_8_8);
    }
#line 1374 "elds_to_erlang.m"
    {
#line 1374 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
      return;
    }
#line 1206 "elds_to_erlang.m"
  }
#line 1204 "elds_to_erlang.m"
}

#line 1197 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
#line 1197 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1)
#line 1197 "elds_to_erlang.m"
{
#line 1199 "elds_to_erlang.m"
  {
#line 1199 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1199 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeadVar__2_2 = ((&erl_backend__elds_to_erlang_vector_common_10[0 + erl_backend__elds_to_erlang__HeadVar__1_1]))->erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;

#line 1199 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1199 "elds_to_erlang.m"
  }
#line 1197 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 1148 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
#line 1148 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4)
#line 1148 "elds_to_erlang.m"
{
#line 1158 "elds_to_erlang.m"
  {
#line 1158 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1152 "elds_to_erlang.m"
    MR_Char erl_backend__elds_to_erlang__FirstChar_6;

#line 1152 "elds_to_erlang.m"
    {
#line 1152 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mercury__string__index_3_p_0(erl_backend__elds_to_erlang__String_4, (MR_Integer) 0, &erl_backend__elds_to_erlang__FirstChar_6);
    }
#line 1152 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1152 "elds_to_erlang.m"
      {
#line 1153 "elds_to_erlang.m"
        {
#line 1153 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = mercury__char__is_lower_1_p_0(erl_backend__elds_to_erlang__FirstChar_6);
        }
#line 1152 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1152 "elds_to_erlang.m"
          {
#line 1154 "elds_to_erlang.m"
            {
#line 1154 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__String_4);
            }
#line 1152 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 1152 "elds_to_erlang.m"
              {
#line 1166 "elds_to_erlang.m"
                {
#line 1166 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) -1;

#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                  switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 0)) {
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 97:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 102:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "after"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 0;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 110:
#line 1166 "elds_to_erlang.m"
                          if (((MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) == (MR_Integer) 100))
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                            switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 3)) {
#line 1166 "elds_to_erlang.m"
                              case (MR_Integer) 0:
#line 1166 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 1;
#line 1166 "elds_to_erlang.m"
                                break;
#line 1166 "elds_to_erlang.m"
                              case (MR_Integer) 97:
#line 1166 "elds_to_erlang.m"
                                if (MR_offset_streq(4, erl_backend__elds_to_erlang__String_4, (MR_String) "andalso"))
#line 1166 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 2;
#line 1166 "elds_to_erlang.m"
                                break;
#line 1166 "elds_to_erlang.m"
                            }
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                      }
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 98:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 97:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "band"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 3;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 101:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "begin"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 4;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 110:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bnot"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 5;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 111:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bor"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 6;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 115:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1166 "elds_to_erlang.m"
                            case (MR_Integer) 108:
#line 1166 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "bsl"))
#line 1166 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 7;
#line 1166 "elds_to_erlang.m"
                              break;
#line 1166 "elds_to_erlang.m"
                            case (MR_Integer) 114:
#line 1166 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "bsr"))
#line 1166 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 8;
#line 1166 "elds_to_erlang.m"
                              break;
#line 1166 "elds_to_erlang.m"
                          }
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 120:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bxor"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 9;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                      }
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 99:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 97:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1166 "elds_to_erlang.m"
                            case (MR_Integer) 115:
#line 1166 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "case"))
#line 1166 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 10;
#line 1166 "elds_to_erlang.m"
                              break;
#line 1166 "elds_to_erlang.m"
                            case (MR_Integer) 116:
#line 1166 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "catch"))
#line 1166 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 11;
#line 1166 "elds_to_erlang.m"
                              break;
#line 1166 "elds_to_erlang.m"
                          }
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 111:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "cond"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 12;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                      }
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 100:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "div"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 13;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 101:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "end"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 14;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 102:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "fun"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 15;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 105:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "if"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 16;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 108:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "let"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 17;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 110:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "not"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 18;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 111:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 102:
#line 1166 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "of"))
#line 1166 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 19;
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                        case (MR_Integer) 114:
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1166 "elds_to_erlang.m"
                            case (MR_Integer) 0:
#line 1166 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 20;
#line 1166 "elds_to_erlang.m"
                              break;
#line 1166 "elds_to_erlang.m"
                            case (MR_Integer) 101:
#line 1166 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "orelse"))
#line 1166 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 21;
#line 1166 "elds_to_erlang.m"
                              break;
#line 1166 "elds_to_erlang.m"
                          }
#line 1166 "elds_to_erlang.m"
                          break;
#line 1166 "elds_to_erlang.m"
                      }
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 113:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "query"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 22;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 114:
#line 1166 "elds_to_erlang.m"
                      if (((MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) == (MR_Integer) 101))
#line 1166 "elds_to_erlang.m"
#line 1166 "elds_to_erlang.m"
                        switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1166 "elds_to_erlang.m"
                          case (MR_Integer) 99:
#line 1166 "elds_to_erlang.m"
                            if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "receive"))
#line 1166 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 23;
#line 1166 "elds_to_erlang.m"
                            break;
#line 1166 "elds_to_erlang.m"
                          case (MR_Integer) 109:
#line 1166 "elds_to_erlang.m"
                            if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "rem"))
#line 1166 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 24;
#line 1166 "elds_to_erlang.m"
                            break;
#line 1166 "elds_to_erlang.m"
                        }
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 116:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "try"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 25;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 119:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "when"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 26;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                    case (MR_Integer) 120:
#line 1166 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "xor"))
#line 1166 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 27;
#line 1166 "elds_to_erlang.m"
                      break;
#line 1166 "elds_to_erlang.m"
                  }
#line 1166 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__case_num_0 < (MR_Integer) 0))
#line 1166 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1166 "elds_to_erlang.m"
                  else
#line 1166 "elds_to_erlang.m"
                    {
#line 1166 "elds_to_erlang.m"
                      /* we found a match; look up the results */
#line 1166 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1166 "elds_to_erlang.m"
                    }
#line 1166 "elds_to_erlang.m"
                }
#line 1155 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1152 "elds_to_erlang.m"
              }
#line 1152 "elds_to_erlang.m"
          }
#line 1152 "elds_to_erlang.m"
      }
#line 1158 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1157 "elds_to_erlang.m"
      {
#line 1157 "elds_to_erlang.m"
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__String_4);
#line 1157 "elds_to_erlang.m"
        return;
      }
#line 1158 "elds_to_erlang.m"
    else
#line 1159 "elds_to_erlang.m"
      {
#line 1242 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14;

#line 1159 "elds_to_erlang.m"
        {
#line 1159 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 39);
        }
#line 1242 "elds_to_erlang.m"
        {
#line 1242 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[9], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14);
        }
#line 1161 "elds_to_erlang.m"
        {
#line 1161 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 39);
#line 1161 "elds_to_erlang.m"
          return;
        }
#line 1159 "elds_to_erlang.m"
      }
#line 1158 "elds_to_erlang.m"
  }
#line 1148 "elds_to_erlang.m"
}

#line 1140 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
#line 1140 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_3)
#line 1140 "elds_to_erlang.m"
{
#line 1142 "elds_to_erlang.m"
  {
#line 1142 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1142 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__String_4;
#line 1142 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ErlangModuleName_5;

#line 1143 "elds_to_erlang.m"
    {
#line 1143 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ErlangModuleName_5 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__ModuleName_3);
    }
#line 1144 "elds_to_erlang.m"
    {
#line 1144 "elds_to_erlang.m"
      return erl_backend__elds_to_erlang__String_4 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_5, (MR_String) "__");
    }
#line 1142 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__String_4;
#line 1142 "elds_to_erlang.m"
  }
#line 1140 "elds_to_erlang.m"
}

#line 1051 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
#line 1051 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__PredName_12,
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
#line 1051 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
#line 1051 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
#line 1051 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
#line 1051 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
#line 1051 "elds_to_erlang.m"
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18)
#line 1051 "elds_to_erlang.m"
{
#line 1056 "elds_to_erlang.m"
  {
#line 1056 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Suffix_19;
#line 1056 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__OrigArity_20;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredLabelStr0_21;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredLabelStr_22;
#line 1056 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ModeNum_23;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_26_26;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_28_28;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_29_29;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_30_30;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_35_35;
#line 1056 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_37_37;

#line 1061 "elds_to_erlang.m"
#line 1061 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__PredIsImported_16) {
#line 1061 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1061 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1063 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__MaybeExtModule_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1061 "elds_to_erlang.m"
        break;
#line 1061 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1059 "elds_to_erlang.m"
        {
#line 1059 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_24_24;
#line 1059 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__ErlangModuleName_41;

#line 1143 "elds_to_erlang.m"
          {
#line 1143 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__ErlangModuleName_41 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
          }
#line 1144 "elds_to_erlang.m"
          {
#line 1144 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_24_24 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_41, (MR_String) "__");
          }
#line 1060 "elds_to_erlang.m"
          {
#line 1060 "elds_to_erlang.m"
            MR_Word base;
#line 1060 "elds_to_erlang.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "elds_to_erlang.m"
            *erl_backend__elds_to_erlang__MaybeExtModule_17 = base;
#line 1060 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__elds_to_erlang__V_24_24));
#line 1060 "elds_to_erlang.m"
          }
#line 1059 "elds_to_erlang.m"
        }
#line 1061 "elds_to_erlang.m"
        break;
#line 1061 "elds_to_erlang.m"
    }
#line 1070 "elds_to_erlang.m"
#line 1070 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__PredOrFunc_13) {
#line 1070 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1070 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1071 "elds_to_erlang.m"
        {
#line 1072 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "f";
#line 1073 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__OrigArity_20 = (erl_backend__elds_to_erlang__PredArity_14 - (MR_Integer) 1);
#line 1071 "elds_to_erlang.m"
        }
#line 1070 "elds_to_erlang.m"
        break;
#line 1070 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1067 "elds_to_erlang.m"
        {
#line 1068 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "p";
#line 1069 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__OrigArity_20 = erl_backend__elds_to_erlang__PredArity_14;
#line 1067 "elds_to_erlang.m"
        }
#line 1070 "elds_to_erlang.m"
        break;
#line 1070 "elds_to_erlang.m"
    }
#line 1076 "elds_to_erlang.m"
    {
#line 1076 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_29_29 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__OrigArity_20);
    }
#line 1077 "elds_to_erlang.m"
    {
#line 1077 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Suffix_19);
    }
#line 1076 "elds_to_erlang.m"
    {
#line 1076 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_28_28 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__V_29_29, erl_backend__elds_to_erlang__V_30_30);
    }
#line 1076 "elds_to_erlang.m"
    {
#line 1076 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_28_28);
    }
#line 1076 "elds_to_erlang.m"
    {
#line 1076 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredLabelStr0_21 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_12, erl_backend__elds_to_erlang__V_26_26);
    }
#line 1080 "elds_to_erlang.m"
    {
#line 1080 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_10, erl_backend__elds_to_erlang__PredModule_11);
    }
#line 1080 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1080 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1081 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PredIsImported_16 == (MR_Integer) 0);
#line 1086 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1084 "elds_to_erlang.m"
      {
#line 1084 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_32_32;
#line 1084 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_34_34;
#line 1084 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_45;

#line 1143 "elds_to_erlang.m"
        {
#line 1143 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_45 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
        }
#line 1144 "elds_to_erlang.m"
        {
#line 1144 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_34_34 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_45, (MR_String) "__");
        }
#line 1084 "elds_to_erlang.m"
        {
#line 1084 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", erl_backend__elds_to_erlang__V_34_34);
        }
#line 1084 "elds_to_erlang.m"
        {
#line 1084 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__PredLabelStr_22 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr0_21, erl_backend__elds_to_erlang__V_32_32);
        }
#line 1084 "elds_to_erlang.m"
      }
#line 1086 "elds_to_erlang.m"
    else
#line 1088 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredLabelStr_22 = erl_backend__elds_to_erlang__PredLabelStr0_21;
#line 1091 "elds_to_erlang.m"
    {
#line 1091 "elds_to_erlang.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_15, &erl_backend__elds_to_erlang__ModeNum_23);
    }
#line 1092 "elds_to_erlang.m"
    {
#line 1092 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_37_37 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_23);
    }
#line 1092 "elds_to_erlang.m"
    {
#line 1092 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_37_37);
    }
#line 1092 "elds_to_erlang.m"
    {
#line 1092 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__ProcNameStr_18 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr_22, erl_backend__elds_to_erlang__V_35_35);
    }
#line 1056 "elds_to_erlang.m"
  }
#line 1051 "elds_to_erlang.m"
}

#line 995 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
#line 995 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name0_3)
#line 995 "elds_to_erlang.m"
{
#line 1004 "elds_to_erlang.m"
  {
#line 1004 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1004 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_4;
#line 1002 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_9_9;

#line 1002 "elds_to_erlang.m"
    {
#line 1002 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_9_9 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Name0_3);
    }
#line 1002 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_9_9 <= (MR_Integer) 200);
#line 1004 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1003 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__Name_4 = erl_backend__elds_to_erlang__Name0_3;
#line 1004 "elds_to_erlang.m"
    else
#line 1012 "elds_to_erlang.m"
      {
#line 1012 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Hash_5;
#line 1012 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Left_6;
#line 1012 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Right_7;
#line 1012 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Middle_8;
#line 1012 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_11_11;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_16_16;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_17_17;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_22_22;

#line 1012 "elds_to_erlang.m"
        {
#line 1012 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_11_11 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Name0_3);
        }
#line 1012 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Hash_5 = (erl_backend__elds_to_erlang__V_11_11 & (MR_Integer) 4294967295);
#line 1013 "elds_to_erlang.m"
        {
#line 1013 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Left_6 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
#line 1014 "elds_to_erlang.m"
        {
#line 1014 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Right_7 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Middle_8 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_5, (MR_Integer) 16);
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_7));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 0) = ((MR_Box) ((MR_String) "..."));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_8));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_20_20));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_17_17, 0) = ((MR_Box) ((MR_String) "..."));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_17_17, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_19_19));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_6));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_17_17));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          return erl_backend__elds_to_erlang__Name_4 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_16_16);
        }
#line 1012 "elds_to_erlang.m"
      }
#line 1004 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__Name_4;
#line 1004 "elds_to_erlang.m"
  }
#line 995 "elds_to_erlang.m"
}

#line 932 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
#line 932 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 932 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiId_6)
#line 932 "elds_to_erlang.m"
{
#line 935 "elds_to_erlang.m"
  {
#line 935 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 935 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__CurModuleName_8;
#line 935 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__InstanceModule_13;
#line 935 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Atom1_15;
#line 935 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Atom_28;
#line 1002 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_65_65;

#line 936 "elds_to_erlang.m"
    {
#line 936 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, &erl_backend__elds_to_erlang__CurModuleName_8);
    }
#line 950 "elds_to_erlang.m"
#line 950 "elds_to_erlang.m"
    switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_6)) {
#line 950 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 950 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 938 "elds_to_erlang.m"
        {
#line 938 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__RttiTypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 938 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 0)));
#line 938 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__CRttiId_14;
#line 939 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 1)));
#line 939 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 2)));
#line 942 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_50_50;

#line 942 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__ModuleName_10)) == (MR_mktag((MR_Integer) 0)));
#line 942 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 942 "elds_to_erlang.m"
            {
#line 942 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ModuleName_10, (MR_Integer) 0)));
#line 942 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_50_50, (MR_String) "") == 0);
#line 942 "elds_to_erlang.m"
            }
#line 944 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 943 "elds_to_erlang.m"
            {
#line 943 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__InstanceModule_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 944 "elds_to_erlang.m"
          else
#line 945 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__ModuleName_10;
#line 948 "elds_to_erlang.m"
          {
#line 948 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__CRttiId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 948 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 0) = ((MR_Box) (erl_backend__elds_to_erlang__RttiTypeCtor_9));
#line 948 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 948 "elds_to_erlang.m"
          }
#line 949 "elds_to_erlang.m"
          {
#line 949 "elds_to_erlang.m"
            backend_libs__rtti__id_to_c_identifier_2_p_0(erl_backend__elds_to_erlang__CRttiId_14, &erl_backend__elds_to_erlang__Atom1_15);
          }
#line 938 "elds_to_erlang.m"
        }
#line 950 "elds_to_erlang.m"
        break;
#line 950 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 951 "elds_to_erlang.m"
        {
#line 951 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 951 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Atom0_17;
#line 951 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_47_47;

#line 954 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
#line 955 "elds_to_erlang.m"
          {
#line 955 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_47_47 = backend_libs__rtti__type_info_to_string_1_f_0(erl_backend__elds_to_erlang__TypeInfo_16);
          }
#line 955 "elds_to_erlang.m"
          {
#line 955 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom0_17 = mercury__string__f_43_43_2_f_0((MR_String) "ti_", erl_backend__elds_to_erlang__V_47_47);
          }
#line 958 "elds_to_erlang.m"
          {
#line 958 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_17, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
#line 951 "elds_to_erlang.m"
        }
#line 950 "elds_to_erlang.m"
        break;
#line 950 "elds_to_erlang.m"
      case (MR_Integer) 2:
#line 960 "elds_to_erlang.m"
        {
#line 960 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 960 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Prefix_20;
#line 960 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_43_43;
#line 960 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Atom0_57;
#line 961 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__V_19_19;

#line 961 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3)));
#line 961 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 961 "elds_to_erlang.m"
            {
#line 961 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__PseudoTypeInfo_18, (MR_Integer) 0)));
#line 962 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "type_var_";
#line 961 "elds_to_erlang.m"
            }
#line 961 "elds_to_erlang.m"
          else
#line 964 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "pti_";
#line 968 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
#line 969 "elds_to_erlang.m"
          {
#line 969 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_43_43 = backend_libs__rtti__pseudo_type_info_to_string_1_f_0(erl_backend__elds_to_erlang__PseudoTypeInfo_18);
          }
#line 969 "elds_to_erlang.m"
          {
#line 969 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom0_57 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__Prefix_20, erl_backend__elds_to_erlang__V_43_43);
          }
#line 972 "elds_to_erlang.m"
          {
#line 972 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_57, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
#line 960 "elds_to_erlang.m"
        }
#line 950 "elds_to_erlang.m"
        break;
#line 950 "elds_to_erlang.m"
      case (MR_Integer) 3:
#line 975 "elds_to_erlang.m"
        {
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TCName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 975 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__InstanceStr_22;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__ClassModuleName_23;
#line 975 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__ClassName_24;
#line 975 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__ClassArity_25;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__QClassName_26;
#line 975 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__QClassNameStr_27;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_32_32;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_34_34;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_35_35;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_37_37;
#line 975 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_38_38;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 975 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_41_41;

#line 974 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 1)));
#line 974 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceStr_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 2)));
#line 976 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ClassModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 0)));
#line 976 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ClassName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 1)));
#line 976 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ClassArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 2)));
#line 977 "elds_to_erlang.m"
          {
#line 977 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__QClassName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 977 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__ClassModuleName_23));
#line 977 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__ClassName_24));
#line 977 "elds_to_erlang.m"
          }
#line 978 "elds_to_erlang.m"
          {
#line 978 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__QClassNameStr_27 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__QClassName_26, (MR_String) "__");
          }
#line 980 "elds_to_erlang.m"
          {
#line 980 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_38_38 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ClassArity_25);
          }
#line 980 "elds_to_erlang.m"
          {
#line 980 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_41_41, 0) = ((MR_Box) (erl_backend__elds_to_erlang__InstanceStr_22));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "elds_to_erlang.m"
          }
#line 980 "elds_to_erlang.m"
          {
#line 980 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_39_39, 0) = ((MR_Box) ((MR_String) "__"));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_39_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_41_41));
#line 980 "elds_to_erlang.m"
          }
#line 980 "elds_to_erlang.m"
          {
#line 980 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_37_37, 0) = ((MR_Box) (erl_backend__elds_to_erlang__V_38_38));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_37_37, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_39_39));
#line 980 "elds_to_erlang.m"
          }
#line 980 "elds_to_erlang.m"
          {
#line 980 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_35_35, 0) = ((MR_Box) ((MR_String) "__arity"));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_35_35, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_37_37));
#line 980 "elds_to_erlang.m"
          }
#line 979 "elds_to_erlang.m"
          {
#line 979 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_34_34, 0) = ((MR_Box) (erl_backend__elds_to_erlang__QClassNameStr_27));
#line 979 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_34_34, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_35_35));
#line 979 "elds_to_erlang.m"
          }
#line 979 "elds_to_erlang.m"
          {
#line 979 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, 0) = ((MR_Box) ((MR_String) "BaseTypeclassInfo_"));
#line 979 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_34_34));
#line 979 "elds_to_erlang.m"
          }
#line 979 "elds_to_erlang.m"
          {
#line 979 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_32_32);
          }
#line 975 "elds_to_erlang.m"
        }
#line 950 "elds_to_erlang.m"
        break;
#line 950 "elds_to_erlang.m"
    }
#line 1002 "elds_to_erlang.m"
    {
#line 1002 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_65_65 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
    }
#line 1002 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_65_65 <= (MR_Integer) 200);
#line 1004 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1003 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__Atom_28 = erl_backend__elds_to_erlang__Atom1_15;
#line 1004 "elds_to_erlang.m"
    else
#line 1012 "elds_to_erlang.m"
      {
#line 1012 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Hash_61;
#line 1012 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Left_62;
#line 1012 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Right_63;
#line 1012 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Middle_64;
#line 1012 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_67_67;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_72_72;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_73_73;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_75_75;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_76_76;
#line 1012 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_78_78;

#line 1012 "elds_to_erlang.m"
        {
#line 1012 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_67_67 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
        }
#line 1012 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Hash_61 = (erl_backend__elds_to_erlang__V_67_67 & (MR_Integer) 4294967295);
#line 1013 "elds_to_erlang.m"
        {
#line 1013 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Left_62 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
#line 1014 "elds_to_erlang.m"
        {
#line 1014 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Right_63 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Middle_64 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_61, (MR_Integer) 16);
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_78_78, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_63));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_76_76, 0) = ((MR_Box) ((MR_String) "..."));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_76_76, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_78_78));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_75_75, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_64));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_75_75, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_76_76));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_73_73, 0) = ((MR_Box) ((MR_String) "..."));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_73_73, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_75_75));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_72_72, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_62));
#line 1016 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_72_72, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_73_73));
#line 1016 "elds_to_erlang.m"
        }
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Atom_28 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_72_72);
        }
#line 1012 "elds_to_erlang.m"
      }
#line 983 "elds_to_erlang.m"
    {
#line 983 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__CurModuleName_8, erl_backend__elds_to_erlang__InstanceModule_13);
    }
#line 983 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 986 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 984 "elds_to_erlang.m"
      {
#line 984 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_52_52;
#line 984 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_82;

#line 1143 "elds_to_erlang.m"
        {
#line 1143 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_82 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__InstanceModule_13);
        }
#line 1144 "elds_to_erlang.m"
        {
#line 1144 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_52_52 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_82, (MR_String) "__");
        }
#line 984 "elds_to_erlang.m"
        {
#line 984 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_52_52);
        }
#line 985 "elds_to_erlang.m"
        {
#line 985 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 984 "elds_to_erlang.m"
      }
#line 986 "elds_to_erlang.m"
    else
#line 986 "elds_to_erlang.m"
      {
#line 986 "elds_to_erlang.m"
      }
#line 989 "elds_to_erlang.m"
    {
#line 989 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_28);
#line 989 "elds_to_erlang.m"
      return;
    }
#line 935 "elds_to_erlang.m"
  }
#line 932 "elds_to_erlang.m"
}

#line 917 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
#line 917 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 917 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
#line 917 "elds_to_erlang.m"
{
#line 920 "elds_to_erlang.m"
  {
#line 920 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__MaybeExtModule_8;
#line 920 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_9;
#line 920 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ShortName_11;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 0)));
#line 920 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 1)));
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiProcName_24;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredOrFunc_25;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ThisModule_26;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredModule_27;
#line 920 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredName_28;
#line 920 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__PredArity_29;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredIsImported0_36;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Origin_38;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredInfo_41;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ImportStatus_42;
#line 920 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredIsImported_44;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ArgTypes_30;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___PredId_31;
#line 1027 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang___ProcId_32;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___HeadVarsWithNames_33;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ArgModes_34;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Detism_35;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___PredIsPseudoImported_37;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ProcIsExported_39;
#line 1027 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ProcIsImported_40;
#line 1035 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_43_43;
#line 1045 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__SpecialPred_45;

#line 1026 "elds_to_erlang.m"
    {
#line 1026 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__RttiProcName_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, erl_backend__elds_to_erlang__ProcId_23);
    }
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 0)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ThisModule_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 1)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredModule_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 2)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 3)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 4)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ArgTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 5)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 6)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 7)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___HeadVarsWithNames_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 8)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ArgModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 9)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___Detism_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredIsImported0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___PredIsPseudoImported_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Origin_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 11)));
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcIsExported_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1027 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcIsImported_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1033 "elds_to_erlang.m"
    {
#line 1033 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, &erl_backend__elds_to_erlang__PredInfo_41);
    }
#line 1034 "elds_to_erlang.m"
    {
#line 1034 "elds_to_erlang.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(erl_backend__elds_to_erlang__PredInfo_41, &erl_backend__elds_to_erlang__ImportStatus_42);
    }
#line 1035 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__ImportStatus_42)) == (MR_mktag((MR_Integer) 1)));
#line 1035 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1035 "elds_to_erlang.m"
      {
#line 1035 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__ImportStatus_42, (MR_Integer) 0)));
#line 1037 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__PredIsImported_44 = (MR_Integer) 0;
#line 1035 "elds_to_erlang.m"
      }
#line 1035 "elds_to_erlang.m"
    else
#line 1039 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredIsImported_44 = erl_backend__elds_to_erlang__PredIsImported0_36;
#line 1042 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Origin_38)) == (MR_mktag((MR_Integer) 0)));
#line 1042 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1042 "elds_to_erlang.m"
      {
#line 1042 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__SpecialPred_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Origin_38, (MR_Integer) 0)));
#line 1098 "elds_to_erlang.m"
        {
#line 1098 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__SpecialPred_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__SpecialPred_45, (MR_Integer) 0)));
#line 1098 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeCtor_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__SpecialPred_45, (MR_Integer) 1)));
#line 1135 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__TypeArity_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_52, (MR_Integer) 1)));
#line 1135 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__TypeName_55;
#line 1135 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeModule_56;
#line 1102 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeCtorSymName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_52, (MR_Integer) 0)));

#line 1107 "elds_to_erlang.m"
          if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__TypeCtorSymName_53)) == (MR_mktag((MR_Integer) 1))))
#line 1108 "elds_to_erlang.m"
            {
#line 1108 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeModule_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_53, (MR_Integer) 0)));
#line 1108 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeName_55 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_53, (MR_Integer) 1)));
#line 1108 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1108 "elds_to_erlang.m"
            }
#line 1107 "elds_to_erlang.m"
          else
#line 1104 "elds_to_erlang.m"
            {
#line 1104 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeName_55 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtorSymName_53, (MR_Integer) 0)));
#line 1105 "elds_to_erlang.m"
              {
#line 1105 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(erl_backend__elds_to_erlang__TypeCtor_52);
              }
#line 1104 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1104 "elds_to_erlang.m"
                {
#line 1106 "elds_to_erlang.m"
                  {
#line 1106 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__TypeModule_56 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
#line 1106 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1104 "elds_to_erlang.m"
                }
#line 1104 "elds_to_erlang.m"
            }
#line 1135 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 1111 "elds_to_erlang.m"
            {
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__ProcNameStr0_57;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__TypeModuleStr_58;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__ProcNameStr1_59;
#line 1111 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__ModeNum_60;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_62_62;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_63_63;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_65_65;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_66_66;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_67_67;
#line 1111 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_69_69;
#line 1111 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__ErlangModuleName_79;
#line 1116 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__V_74_74;

#line 1111 "elds_to_erlang.m"
              {
#line 1111 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__ProcNameStr0_57 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_28, (MR_String) "__");
              }
#line 1143 "elds_to_erlang.m"
              {
#line 1143 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__ErlangModuleName_79 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__TypeModule_56);
              }
#line 1144 "elds_to_erlang.m"
              {
#line 1144 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__TypeModuleStr_58 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_79, (MR_String) "__");
              }
#line 1114 "elds_to_erlang.m"
              {
#line 1114 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__TypeModule_56);
              }
#line 1114 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1114 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1114 "elds_to_erlang.m"
                {
#line 1115 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__SpecialPred_51 == (MR_Integer) 0);
#line 1114 "elds_to_erlang.m"
                  if (erl_backend__elds_to_erlang__succeeded)
#line 1114 "elds_to_erlang.m"
                    {
#line 1116 "elds_to_erlang.m"
                      {
#line 1116 "elds_to_erlang.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__elds_to_erlang__V_74_74);
                      }
#line 1116 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__ProcId_23 == erl_backend__elds_to_erlang__V_74_74);
#line 1116 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1114 "elds_to_erlang.m"
                    }
#line 1114 "elds_to_erlang.m"
                }
#line 1122 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1120 "elds_to_erlang.m"
                {
#line 1120 "elds_to_erlang.m"
                  {
#line 1120 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__ProcNameStr1_59 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr0_57, erl_backend__elds_to_erlang__TypeModuleStr_58);
                  }
#line 1121 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "elds_to_erlang.m"
                }
#line 1122 "elds_to_erlang.m"
              else
#line 1125 "elds_to_erlang.m"
                {
#line 1125 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__ProcNameStr1_59 = erl_backend__elds_to_erlang__ProcNameStr0_57;
#line 1126 "elds_to_erlang.m"
                  {
#line 1126 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__TypeModule_56, erl_backend__elds_to_erlang__ThisModule_26);
                  }
#line 1126 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1128 "elds_to_erlang.m"
                  if (erl_backend__elds_to_erlang__succeeded)
#line 1127 "elds_to_erlang.m"
                    {
#line 1127 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "elds_to_erlang.m"
                      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, 0) = ((MR_Box) (erl_backend__elds_to_erlang__TypeModuleStr_58));
#line 1127 "elds_to_erlang.m"
                    }
#line 1128 "elds_to_erlang.m"
                  else
#line 1129 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1125 "elds_to_erlang.m"
                }
#line 1132 "elds_to_erlang.m"
              {
#line 1132 "elds_to_erlang.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_23, &erl_backend__elds_to_erlang__ModeNum_60);
              }
#line 1134 "elds_to_erlang.m"
              {
#line 1134 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_66_66 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__TypeArity_54);
              }
#line 1134 "elds_to_erlang.m"
              {
#line 1134 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_69_69 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_60);
              }
#line 1134 "elds_to_erlang.m"
              {
#line 1134 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_69_69);
              }
#line 1134 "elds_to_erlang.m"
              {
#line 1134 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_65_65 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__V_66_66, erl_backend__elds_to_erlang__V_67_67);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_65_65);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_62_62 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__TypeName_55, erl_backend__elds_to_erlang__V_63_63);
              }
#line 1133 "elds_to_erlang.m"
              {
#line 1133 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Name_9 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr1_59, erl_backend__elds_to_erlang__V_62_62);
              }
#line 1111 "elds_to_erlang.m"
            }
#line 1135 "elds_to_erlang.m"
          else
#line 1136 "elds_to_erlang.m"
            {
#line 1136 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_72_72;

#line 1137 "elds_to_erlang.m"
              {
#line 1137 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred ", erl_backend__elds_to_erlang__PredName_28);
              }
#line 1136 "elds_to_erlang.m"
              {
#line 1136 "elds_to_erlang.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.erlang_special_proc_name\'/6", erl_backend__elds_to_erlang__V_72_72);
#line 1136 "elds_to_erlang.m"
                return;
              }
#line 1136 "elds_to_erlang.m"
            }
#line 1098 "elds_to_erlang.m"
        }
#line 1042 "elds_to_erlang.m"
      }
#line 1042 "elds_to_erlang.m"
    else
#line 1046 "elds_to_erlang.m"
      {
#line 1046 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__PredModule_27, erl_backend__elds_to_erlang__PredName_28, erl_backend__elds_to_erlang__PredOrFunc_25, erl_backend__elds_to_erlang__PredArity_29, erl_backend__elds_to_erlang__ProcId_23, erl_backend__elds_to_erlang__PredIsImported_44, &erl_backend__elds_to_erlang__MaybeExtModule_8, &erl_backend__elds_to_erlang__Name_9);
      }
#line 926 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__MaybeExtModule_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "elds_to_erlang.m"
      {
#line 927 "elds_to_erlang.m"
      }
#line 926 "elds_to_erlang.m"
    else
#line 923 "elds_to_erlang.m"
      {
#line 923 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__ExtModule_10 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, (MR_Integer) 0)));

#line 924 "elds_to_erlang.m"
        {
#line 924 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExtModule_10);
        }
#line 925 "elds_to_erlang.m"
        {
#line 925 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 923 "elds_to_erlang.m"
      }
#line 929 "elds_to_erlang.m"
    {
#line 929 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ShortName_11 = erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(erl_backend__elds_to_erlang__Name_9);
    }
#line 930 "elds_to_erlang.m"
    {
#line 930 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ShortName_11);
#line 930 "elds_to_erlang.m"
      return;
    }
#line 920 "elds_to_erlang.m"
  }
#line 917 "elds_to_erlang.m"
}

#line 908 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
#line 908 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__C_4)
#line 908 "elds_to_erlang.m"
{
#line 913 "elds_to_erlang.m"
  {
#line 913 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 911 "elds_to_erlang.m"
    {
#line 911 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__C_4);
    }
#line 913 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 912 "elds_to_erlang.m"
      {
#line 912 "elds_to_erlang.m"
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__C_4);
#line 912 "elds_to_erlang.m"
        return;
      }
#line 913 "elds_to_erlang.m"
    else
#line 914 "elds_to_erlang.m"
      {
#line 914 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_9_9;

#line 914 "elds_to_erlang.m"
        {
#line 914 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_9_9 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__C_4);
        }
#line 914 "elds_to_erlang.m"
        {
#line 914 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_9_9);
#line 914 "elds_to_erlang.m"
          return;
        }
#line 914 "elds_to_erlang.m"
      }
#line 913 "elds_to_erlang.m"
  }
#line 908 "elds_to_erlang.m"
}

#line 905 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 905 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 905 "elds_to_erlang.m"
{
#line 905 "elds_to_erlang.m"
  {
#line 905 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 905 "elds_to_erlang.m"
    {
#line 905 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 905 "elds_to_erlang.m"
      return;
    }
#line 905 "elds_to_erlang.m"
  }
#line 905 "elds_to_erlang.m"
}

#line 899 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
#line 899 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4)
#line 899 "elds_to_erlang.m"
{
#line 901 "elds_to_erlang.m"
  {
#line 901 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 905 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9;

#line 905 "elds_to_erlang.m"
    {
#line 905 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[4], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9);
    }
#line 1374 "elds_to_erlang.m"
    {
#line 1374 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
      return;
    }
#line 901 "elds_to_erlang.m"
  }
#line 899 "elds_to_erlang.m"
}

#line 905 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 905 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 905 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 905 "elds_to_erlang.m"
{
#line 905 "elds_to_erlang.m"
  {
#line 905 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 905 "elds_to_erlang.m"
    {
#line 905 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 905 "elds_to_erlang.m"
      return;
    }
#line 905 "elds_to_erlang.m"
  }
#line 905 "elds_to_erlang.m"
}

#line 892 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
#line 892 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
#line 892 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Var_6)
#line 892 "elds_to_erlang.m"
{
#line 894 "elds_to_erlang.m"
  {
#line 894 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 894 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 894 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__VarName_8;
#line 894 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__VarNumber_9;
#line 894 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_12_12;
#line 894 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_14_14;
#line 894 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_16_16;
#line 905 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23;

#line 895 "elds_to_erlang.m"
    {
#line 895 "elds_to_erlang.m"
      mercury__varset__lookup_name_3_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__VarSet_5, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarName_8);
    }
#line 896 "elds_to_erlang.m"
    {
#line 896 "elds_to_erlang.m"
      mercury__term__var_to_int_2_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarNumber_9);
    }
#line 897 "elds_to_erlang.m"
    {
#line 897 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_16_16 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__VarNumber_9);
    }
#line 897 "elds_to_erlang.m"
    {
#line 897 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_16_16);
    }
#line 897 "elds_to_erlang.m"
    {
#line 897 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_12_12 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__VarName_8, erl_backend__elds_to_erlang__V_14_14);
    }
#line 905 "elds_to_erlang.m"
    {
#line 905 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[3], erl_backend__elds_to_erlang__V_12_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23);
    }
#line 1374 "elds_to_erlang.m"
    {
#line 1374 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
      return;
    }
#line 894 "elds_to_erlang.m"
  }
#line 892 "elds_to_erlang.m"
}

#line 587 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 587 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 587 "elds_to_erlang.m"
{
#line 587 "elds_to_erlang.m"
  {
#line 587 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 587 "elds_to_erlang.m"
    {
#line 587 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 587 "elds_to_erlang.m"
      return;
    }
#line 587 "elds_to_erlang.m"
  }
#line 587 "elds_to_erlang.m"
}

#line 587 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 587 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 587 "elds_to_erlang.m"
{
#line 587 "elds_to_erlang.m"
  {
#line 587 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 587 "elds_to_erlang.m"
    {
#line 587 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 587 "elds_to_erlang.m"
      return;
    }
#line 587 "elds_to_erlang.m"
  }
#line 587 "elds_to_erlang.m"
}

#line 858 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
#line 858 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 858 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 858 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 858 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Args_10)
#line 858 "elds_to_erlang.m"
{
#line 868 "elds_to_erlang.m"
  {
#line 868 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 864 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__SymName_12;
#line 864 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 864 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 864 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 864 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_21_21;

#line 864 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 864 "elds_to_erlang.m"
      {
#line 864 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 864 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 864 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 864 "elds_to_erlang.m"
          {
#line 864 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 864 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 864 "elds_to_erlang.m"
              {
#line 864 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__V_18_18, (MR_Integer) 0)));
#line 864 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 864 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 864 "elds_to_erlang.m"
                  {
#line 864 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_19_19, (MR_Integer) 1)));
#line 865 "elds_to_erlang.m"
                    {
#line 865 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_21_21 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_12);
                    }
#line 865 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_21_21, (MR_String) "[]") == 0);
#line 864 "elds_to_erlang.m"
                  }
#line 864 "elds_to_erlang.m"
              }
#line 864 "elds_to_erlang.m"
          }
#line 864 "elds_to_erlang.m"
      }
#line 868 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 867 "elds_to_erlang.m"
      {
#line 867 "elds_to_erlang.m"
        {
#line 867 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "[] ");
#line 867 "elds_to_erlang.m"
          return;
        }
#line 867 "elds_to_erlang.m"
      }
#line 868 "elds_to_erlang.m"
    else
#line 877 "elds_to_erlang.m"
      {
#line 877 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__A_13;
#line 877 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__B_14;
#line 869 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_24_24;
#line 869 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_25_25;
#line 869 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 869 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_27_27;
#line 869 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_28_28;
#line 869 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_29_29;
#line 869 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__SymName_49;

#line 869 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 869 "elds_to_erlang.m"
          {
#line 869 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 869 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_24_24)) == (MR_mktag((MR_Integer) 2)));
#line 869 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 869 "elds_to_erlang.m"
              {
#line 869 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__V_24_24, (MR_Integer) 0)));
#line 869 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 869 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 869 "elds_to_erlang.m"
                  {
#line 869 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_25_25, (MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 869 "elds_to_erlang.m"
                      {
#line 869 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, (MR_Integer) 0)));
#line 869 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, (MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
                        if (erl_backend__elds_to_erlang__succeeded)
#line 869 "elds_to_erlang.m"
                          {
#line 869 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, (MR_Integer) 0)));
#line 869 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, (MR_Integer) 1)));
#line 869 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "elds_to_erlang.m"
                            if (erl_backend__elds_to_erlang__succeeded)
#line 869 "elds_to_erlang.m"
                              {
#line 870 "elds_to_erlang.m"
                                {
#line 870 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_49);
                                }
#line 870 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_29_29, (MR_String) "[|]") == 0);
#line 869 "elds_to_erlang.m"
                              }
#line 869 "elds_to_erlang.m"
                          }
#line 869 "elds_to_erlang.m"
                      }
#line 869 "elds_to_erlang.m"
                  }
#line 869 "elds_to_erlang.m"
              }
#line 869 "elds_to_erlang.m"
          }
#line 877 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
          {
#line 872 "elds_to_erlang.m"
            {
#line 872 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
#line 873 "elds_to_erlang.m"
            {
#line 873 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__A_13);
            }
#line 874 "elds_to_erlang.m"
            {
#line 874 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "| ");
            }
#line 875 "elds_to_erlang.m"
            {
#line 875 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__B_14);
            }
#line 876 "elds_to_erlang.m"
            {
#line 876 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "] ");
#line 876 "elds_to_erlang.m"
              return;
            }
#line 872 "elds_to_erlang.m"
          }
#line 877 "elds_to_erlang.m"
        else
#line 883 "elds_to_erlang.m"
          {
#line 883 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Args1_15;
#line 878 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_38_38;
#line 878 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_51_51;
#line 878 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 878 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_54_54;
#line 878 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__V_55_55;

#line 878 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 878 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 878 "elds_to_erlang.m"
              {
#line 878 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 878 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Args1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 890 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_55_55 = (MR_String) "{}";
#line 890 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_54_54 = (MR_Word) &erl_backend__elds_to_erlang_scalar_common_9[0];
#line 890 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_to_erlang_scalar_common_1[5]);
#line 890 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_to_erlang_scalar_common_9[1]);
#line 878 "elds_to_erlang.m"
                {
#line 878 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds_to_erlang__V_38_38, erl_backend__elds_to_erlang__V_51_51);
                }
#line 878 "elds_to_erlang.m"
              }
#line 883 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 880 "elds_to_erlang.m"
              {
#line 880 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__V_64_64;

#line 880 "elds_to_erlang.m"
                {
#line 880 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
#line 587 "elds_to_erlang.m"
                {
#line 587 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_1));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 587 "elds_to_erlang.m"
                }
#line 586 "elds_to_erlang.m"
                {
#line 586 "elds_to_erlang.m"
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args1_15, (MR_String) ", ", erl_backend__elds_to_erlang__V_64_64);
                }
#line 882 "elds_to_erlang.m"
                {
#line 882 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "} ");
#line 882 "elds_to_erlang.m"
                  return;
                }
#line 880 "elds_to_erlang.m"
              }
#line 883 "elds_to_erlang.m"
            else
#line 884 "elds_to_erlang.m"
              {
#line 884 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__V_78_78;

#line 884 "elds_to_erlang.m"
                {
#line 884 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
#line 587 "elds_to_erlang.m"
                {
#line 587 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_2));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 587 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 587 "elds_to_erlang.m"
                }
#line 586 "elds_to_erlang.m"
                {
#line 586 "elds_to_erlang.m"
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args_10, (MR_String) ", ", erl_backend__elds_to_erlang__V_78_78);
                }
#line 886 "elds_to_erlang.m"
                {
#line 886 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "} ");
#line 886 "elds_to_erlang.m"
                  return;
                }
#line 884 "elds_to_erlang.m"
              }
#line 883 "elds_to_erlang.m"
          }
#line 877 "elds_to_erlang.m"
      }
#line 868 "elds_to_erlang.m"
  }
#line 858 "elds_to_erlang.m"
}

#line 839 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
#line 839 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_5,
#line 839 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
#line 839 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
#line 839 "elds_to_erlang.m"
  MR_Integer * erl_backend__elds_to_erlang__Pos_8)
#line 839 "elds_to_erlang.m"
{
#line 841 "elds_to_erlang.m"
  while (MR_TRUE)
#line 841 "elds_to_erlang.m"
    {
#line 841 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 841 "elds_to_erlang.m"
      {
#line 841 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;
#line 841 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Pos1_9;
#line 841 "elds_to_erlang.m"
        MR_Char erl_backend__elds_to_erlang__Char_10;

#line 842 "elds_to_erlang.m"
        {
#line 842 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = mercury__string__unsafe_index_next_4_p_0(erl_backend__elds_to_erlang__String_5, erl_backend__elds_to_erlang__Pos0_7, &erl_backend__elds_to_erlang__Pos1_9, &erl_backend__elds_to_erlang__Char_10);
        }
#line 841 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 841 "elds_to_erlang.m"
          {
#line 843 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_10 == (MR_Char) 46);
#line 843 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 841 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 841 "elds_to_erlang.m"
              {
#line 855 "elds_to_erlang.m"
#line 855 "elds_to_erlang.m"
                switch (erl_backend__elds_to_erlang__Char_10) {
#line 855 "elds_to_erlang.m"
                  default:
#line 855 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 855 "elds_to_erlang.m"
                    break;
#line 855 "elds_to_erlang.m"
                  case (MR_Char) 69:
#line 856 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 855 "elds_to_erlang.m"
                    break;
#line 855 "elds_to_erlang.m"
                  case (MR_Char) 101:
#line 855 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 855 "elds_to_erlang.m"
                    break;
#line 855 "elds_to_erlang.m"
                }
#line 847 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 845 "elds_to_erlang.m"
                  {
#line 845 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PrevDigit_6 == (MR_Integer) 1);
#line 845 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 845 "elds_to_erlang.m"
                      {
#line 846 "elds_to_erlang.m"
                        *erl_backend__elds_to_erlang__Pos_8 = erl_backend__elds_to_erlang__Pos0_7;
#line 846 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 845 "elds_to_erlang.m"
                      }
#line 845 "elds_to_erlang.m"
                  }
#line 847 "elds_to_erlang.m"
                else
#line 849 "elds_to_erlang.m"
                  {
#line 847 "elds_to_erlang.m"
                    {
#line 847 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = mercury__char__is_digit_1_p_0(erl_backend__elds_to_erlang__Char_10);
                    }
#line 849 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 848 "elds_to_erlang.m"
                      {
#line 848 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 848 "elds_to_erlang.m"
                        {
#line 848 "elds_to_erlang.m"
                          MR_Integer erl_backend__elds_to_erlang__Pos0__tmp_copy_7 = erl_backend__elds_to_erlang__Pos1_9;

#line 848 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__Pos0__tmp_copy_7;
#line 848 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 1;
#line 848 "elds_to_erlang.m"
                        }
#line 848 "elds_to_erlang.m"
                        continue;
#line 848 "elds_to_erlang.m"
                      }
#line 849 "elds_to_erlang.m"
                    else
#line 850 "elds_to_erlang.m"
                      {
#line 850 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 850 "elds_to_erlang.m"
                        {
#line 850 "elds_to_erlang.m"
                          MR_Integer erl_backend__elds_to_erlang__Pos0__tmp_copy_7 = erl_backend__elds_to_erlang__Pos1_9;

#line 850 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__Pos0__tmp_copy_7;
#line 850 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 0;
#line 850 "elds_to_erlang.m"
                        }
#line 850 "elds_to_erlang.m"
                        continue;
#line 850 "elds_to_erlang.m"
                      }
#line 849 "elds_to_erlang.m"
                  }
#line 841 "elds_to_erlang.m"
              }
#line 841 "elds_to_erlang.m"
          }
#line 841 "elds_to_erlang.m"
        return erl_backend__elds_to_erlang__succeeded;
#line 841 "elds_to_erlang.m"
      }
#line 841 "elds_to_erlang.m"
      break;
#line 841 "elds_to_erlang.m"
    }
#line 839 "elds_to_erlang.m"
}

#line 827 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
#line 827 "elds_to_erlang.m"
  MR_Float erl_backend__elds_to_erlang__Float_4)
#line 827 "elds_to_erlang.m"
{
#line 829 "elds_to_erlang.m"
  {
#line 829 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 829 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__S_6;
#line 835 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Pos_7;

#line 830 "elds_to_erlang.m"
    {
#line 830 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__S_6 = mercury__string__from_float_1_f_0(erl_backend__elds_to_erlang__Float_4);
    }
#line 831 "elds_to_erlang.m"
    {
#line 831 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang__digit_then_e_4_p_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, (MR_Integer) 0, &erl_backend__elds_to_erlang__Pos_7);
    }
#line 835 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 832 "elds_to_erlang.m"
      {
#line 832 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_12_12;
#line 832 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_17_17;
#line 832 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_19_19;

#line 832 "elds_to_erlang.m"
        {
#line 832 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_12_12 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, erl_backend__elds_to_erlang__Pos_7);
        }
#line 832 "elds_to_erlang.m"
        {
#line 832 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_12_12);
        }
#line 833 "elds_to_erlang.m"
        {
#line 833 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ".0");
        }
#line 834 "elds_to_erlang.m"
        {
#line 834 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__S_6);
        }
#line 834 "elds_to_erlang.m"
        {
#line 834 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_17_17 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, erl_backend__elds_to_erlang__Pos_7, erl_backend__elds_to_erlang__V_19_19);
        }
#line 834 "elds_to_erlang.m"
        {
#line 834 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_17_17);
#line 834 "elds_to_erlang.m"
          return;
        }
#line 832 "elds_to_erlang.m"
      }
#line 835 "elds_to_erlang.m"
    else
#line 836 "elds_to_erlang.m"
      {
#line 836 "elds_to_erlang.m"
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__S_6);
#line 836 "elds_to_erlang.m"
        return;
      }
#line 829 "elds_to_erlang.m"
  }
#line 827 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 768 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
#line 768 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 768 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 768 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 768 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Term_10)
#line 768 "elds_to_erlang.m"
{
#line 773 "elds_to_erlang.m"
  {
#line 773 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 773 "elds_to_erlang.m"
#line 773 "elds_to_erlang.m"
    switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) {
#line 773 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 773 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 820 "elds_to_erlang.m"
        {
#line 821 "elds_to_erlang.m"
          {
#line 821 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0((MR_String) "_ ");
#line 821 "elds_to_erlang.m"
            return;
          }
#line 820 "elds_to_erlang.m"
        }
#line 773 "elds_to_erlang.m"
        break;
#line 773 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 793 "elds_to_erlang.m"
        {
#line 793 "elds_to_erlang.m"
          MR_Char erl_backend__elds_to_erlang__Char_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));
#line 793 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__Int_61;

#line 794 "elds_to_erlang.m"
          {
#line 794 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Int_61 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__Char_15);
          }
#line 795 "elds_to_erlang.m"
          {
#line 795 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_1_p_0(erl_backend__elds_to_erlang__Char_15);
          }
#line 798 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 796 "elds_to_erlang.m"
            {
#line 796 "elds_to_erlang.m"
              {
#line 796 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 36);
              }
#line 797 "elds_to_erlang.m"
              {
#line 797 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_15);
              }
#line 796 "elds_to_erlang.m"
            }
#line 798 "elds_to_erlang.m"
          else
#line 801 "elds_to_erlang.m"
            {
#line 801 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Esc_16;

#line 1274 "elds_to_erlang.m"
#line 1274 "elds_to_erlang.m"
              switch (erl_backend__elds_to_erlang__Int_61) {
#line 1274 "elds_to_erlang.m"
                default:
#line 1274 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 1:
#line 1283 "elds_to_erlang.m"
                  {
#line 1283 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^a";
#line 1283 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1283 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 2:
#line 1284 "elds_to_erlang.m"
                  {
#line 1284 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^b";
#line 1284 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1284 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 3:
#line 1285 "elds_to_erlang.m"
                  {
#line 1285 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^c";
#line 1285 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1285 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 4:
#line 1286 "elds_to_erlang.m"
                  {
#line 1286 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^d";
#line 1286 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1286 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 5:
#line 1287 "elds_to_erlang.m"
                  {
#line 1287 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^e";
#line 1287 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1287 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 6:
#line 1288 "elds_to_erlang.m"
                  {
#line 1288 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^f";
#line 1288 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1288 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 7:
#line 1289 "elds_to_erlang.m"
                  {
#line 1289 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^g";
#line 1289 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1289 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 8:
#line 1274 "elds_to_erlang.m"
                  {
#line 1274 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\b";
#line 1274 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1274 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 9:
#line 1281 "elds_to_erlang.m"
                  {
#line 1281 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\t";
#line 1281 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1281 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 10:
#line 1278 "elds_to_erlang.m"
                  {
#line 1278 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\n";
#line 1278 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1278 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 11:
#line 1282 "elds_to_erlang.m"
                  {
#line 1282 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\v";
#line 1282 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1282 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 12:
#line 1277 "elds_to_erlang.m"
                  {
#line 1277 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\f";
#line 1277 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1277 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 13:
#line 1279 "elds_to_erlang.m"
                  {
#line 1279 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\r";
#line 1279 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1279 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 14:
#line 1296 "elds_to_erlang.m"
                  {
#line 1296 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^n";
#line 1296 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1296 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 15:
#line 1297 "elds_to_erlang.m"
                  {
#line 1297 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^o";
#line 1297 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1297 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 16:
#line 1298 "elds_to_erlang.m"
                  {
#line 1298 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^p";
#line 1298 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1298 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 17:
#line 1299 "elds_to_erlang.m"
                  {
#line 1299 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^q";
#line 1299 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1299 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 18:
#line 1300 "elds_to_erlang.m"
                  {
#line 1300 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^r";
#line 1300 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1300 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 19:
#line 1301 "elds_to_erlang.m"
                  {
#line 1301 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^s";
#line 1301 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1301 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 20:
#line 1302 "elds_to_erlang.m"
                  {
#line 1302 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^t";
#line 1302 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1302 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 21:
#line 1303 "elds_to_erlang.m"
                  {
#line 1303 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^u";
#line 1303 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1303 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 22:
#line 1304 "elds_to_erlang.m"
                  {
#line 1304 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^v";
#line 1304 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1304 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 23:
#line 1305 "elds_to_erlang.m"
                  {
#line 1305 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^w";
#line 1305 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1305 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 24:
#line 1306 "elds_to_erlang.m"
                  {
#line 1306 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^x";
#line 1306 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1306 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 25:
#line 1307 "elds_to_erlang.m"
                  {
#line 1307 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^y";
#line 1307 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1307 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 26:
#line 1308 "elds_to_erlang.m"
                  {
#line 1308 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^z";
#line 1308 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1308 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 27:
#line 1276 "elds_to_erlang.m"
                  {
#line 1276 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\e";
#line 1276 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1276 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 32:
#line 1280 "elds_to_erlang.m"
                  {
#line 1280 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\s";
#line 1280 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1280 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 34:
#line 1310 "elds_to_erlang.m"
                  {
#line 1310 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\"";
#line 1310 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1310 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 39:
#line 1309 "elds_to_erlang.m"
                  {
#line 1309 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\'";
#line 1309 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1309 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 92:
#line 1311 "elds_to_erlang.m"
                  {
#line 1311 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\\";
#line 1311 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1311 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
                case (MR_Integer) 127:
#line 1275 "elds_to_erlang.m"
                  {
#line 1275 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\d";
#line 1275 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1275 "elds_to_erlang.m"
                  }
#line 1274 "elds_to_erlang.m"
                  break;
#line 1274 "elds_to_erlang.m"
              }
#line 801 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 799 "elds_to_erlang.m"
                {
#line 799 "elds_to_erlang.m"
                  {
#line 799 "elds_to_erlang.m"
                    mercury__io__write_char_3_p_0((MR_Char) 36);
                  }
#line 800 "elds_to_erlang.m"
                  {
#line 800 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_16);
                  }
#line 799 "elds_to_erlang.m"
                }
#line 801 "elds_to_erlang.m"
              else
#line 802 "elds_to_erlang.m"
                {
#line 802 "elds_to_erlang.m"
                  mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_61);
                }
#line 801 "elds_to_erlang.m"
            }
#line 1374 "elds_to_erlang.m"
          {
#line 1374 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
            return;
          }
#line 793 "elds_to_erlang.m"
        }
#line 773 "elds_to_erlang.m"
        break;
#line 773 "elds_to_erlang.m"
      case (MR_Integer) 2:
#line 773 "elds_to_erlang.m"
        {
#line 773 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));

#line 774 "elds_to_erlang.m"
          {
#line 774 "elds_to_erlang.m"
            mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_12);
          }
#line 775 "elds_to_erlang.m"
          {
#line 775 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__space_2_p_0();
#line 775 "elds_to_erlang.m"
            return;
          }
#line 773 "elds_to_erlang.m"
        }
#line 773 "elds_to_erlang.m"
        break;
#line 773 "elds_to_erlang.m"
      case (MR_Integer) 3:
#line 773 "elds_to_erlang.m"
#line 773 "elds_to_erlang.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) {
#line 773 "elds_to_erlang.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 0:
#line 777 "elds_to_erlang.m"
            {
#line 777 "elds_to_erlang.m"
              MR_Float erl_backend__elds_to_erlang__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 778 "elds_to_erlang.m"
              {
#line 778 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_float_3_p_0(erl_backend__elds_to_erlang__Float_13);
              }
#line 1374 "elds_to_erlang.m"
              {
#line 1374 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
                return;
              }
#line 777 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 781 "elds_to_erlang.m"
            {
#line 781 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__String_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
#line 1242 "elds_to_erlang.m"
              MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_52_52;

#line 782 "elds_to_erlang.m"
              {
#line 782 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "<<\"");
              }
#line 1242 "elds_to_erlang.m"
              {
#line 1242 "elds_to_erlang.m"
                mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[8], erl_backend__elds_to_erlang__String_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_52_52);
              }
#line 784 "elds_to_erlang.m"
              {
#line 784 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "\">>");
              }
#line 1374 "elds_to_erlang.m"
              {
#line 1374 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
                return;
              }
#line 781 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 2:
#line 787 "elds_to_erlang.m"
            {
#line 787 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__String_60 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 788 "elds_to_erlang.m"
              {
#line 788 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
#line 789 "elds_to_erlang.m"
              {
#line 789 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__write_with_escaping_4_p_0((MR_Integer) 0, erl_backend__elds_to_erlang__String_60);
              }
#line 790 "elds_to_erlang.m"
              {
#line 790 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
#line 791 "elds_to_erlang.m"
              {
#line 791 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__space_2_p_0();
#line 791 "elds_to_erlang.m"
                return;
              }
#line 787 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 3:
#line 806 "elds_to_erlang.m"
            {
#line 806 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Atom_17 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 807 "elds_to_erlang.m"
              {
#line 807 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_17);
              }
#line 1374 "elds_to_erlang.m"
              {
#line 1374 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
                return;
              }
#line 806 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 4:
#line 810 "elds_to_erlang.m"
            {
#line 810 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
#line 810 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_29_29;

#line 811 "elds_to_erlang.m"
              {
#line 811 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_18);
              }
#line 811 "elds_to_erlang.m"
              {
#line 811 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_29_29);
              }
#line 1374 "elds_to_erlang.m"
              {
#line 1374 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1374 "elds_to_erlang.m"
                return;
              }
#line 810 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 5:
#line 814 "elds_to_erlang.m"
            {
#line 814 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 815 "elds_to_erlang.m"
              {
#line 815 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_tuple_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_19);
#line 815 "elds_to_erlang.m"
                return;
              }
#line 814 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 6:
#line 817 "elds_to_erlang.m"
            {
#line 817 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 818 "elds_to_erlang.m"
              {
#line 818 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_var_4_p_0(erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_20);
#line 818 "elds_to_erlang.m"
                return;
              }
#line 817 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
          case (MR_Integer) 7:
#line 823 "elds_to_erlang.m"
            {
#line 823 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 824 "elds_to_erlang.m"
              {
#line 824 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_var_string_3_p_0(erl_backend__elds_to_erlang__Name_21);
#line 824 "elds_to_erlang.m"
                return;
              }
#line 823 "elds_to_erlang.m"
            }
#line 773 "elds_to_erlang.m"
            break;
#line 773 "elds_to_erlang.m"
        }
#line 773 "elds_to_erlang.m"
        break;
#line 773 "elds_to_erlang.m"
    }
#line 773 "elds_to_erlang.m"
  }
#line 768 "elds_to_erlang.m"
}

#line 754 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
#line 754 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 754 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 754 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 754 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Catch_10)
#line 754 "elds_to_erlang.m"
{
#line 757 "elds_to_erlang.m"
  {
#line 757 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 757 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PatternA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 0)));
#line 757 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PatternB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 1)));
#line 757 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__CatchExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 2)));
#line 757 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_23_23;
#line 757 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_26_26;
#line 595 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_42;

#line 759 "elds_to_erlang.m"
    {
#line 759 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternA_12);
    }
#line 760 "elds_to_erlang.m"
    {
#line 760 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
#line 761 "elds_to_erlang.m"
    {
#line 761 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternB_13);
    }
#line 762 "elds_to_erlang.m"
    {
#line 762 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
#line 763 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_23_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_23_23);
    }
#line 764 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_26_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 593 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__CatchExpr_14)) == (MR_mktag((MR_Integer) 1)));
#line 593 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 593 "elds_to_erlang.m"
      {
#line 593 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CatchExpr_14, (MR_Integer) 0)));
#line 594 "elds_to_erlang.m"
        {
#line 594 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__Exprs_42);
#line 594 "elds_to_erlang.m"
          return;
        }
#line 593 "elds_to_erlang.m"
      }
#line 593 "elds_to_erlang.m"
    else
#line 596 "elds_to_erlang.m"
      {
#line 596 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__CatchExpr_14);
#line 596 "elds_to_erlang.m"
        return;
      }
#line 757 "elds_to_erlang.m"
  }
#line 754 "elds_to_erlang.m"
}

#line 744 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
#line 744 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 744 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 744 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 744 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
#line 744 "elds_to_erlang.m"
{
#line 747 "elds_to_erlang.m"
  {
#line 747 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 747 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
#line 747 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));
#line 747 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_19_19;
#line 747 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_22_22;
#line 595 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_44;

#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
    }
#line 749 "elds_to_erlang.m"
    {
#line 749 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Pattern_10);
    }
#line 750 "elds_to_erlang.m"
    {
#line 750 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
#line 751 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_19_19 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_19_19);
    }
#line 752 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_22_22 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 593 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_11)) == (MR_mktag((MR_Integer) 1)));
#line 593 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 593 "elds_to_erlang.m"
      {
#line 593 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_11, (MR_Integer) 0)));
#line 594 "elds_to_erlang.m"
        {
#line 594 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_22_22, erl_backend__elds_to_erlang__Exprs_44);
#line 594 "elds_to_erlang.m"
          return;
        }
#line 593 "elds_to_erlang.m"
      }
#line 593 "elds_to_erlang.m"
    else
#line 596 "elds_to_erlang.m"
      {
#line 596 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_22_22, erl_backend__elds_to_erlang__Expr_11);
#line 596 "elds_to_erlang.m"
        return;
      }
#line 747 "elds_to_erlang.m"
  }
#line 744 "elds_to_erlang.m"
}

#line 674 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
#line 674 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 674 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 674 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 674 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 674 "elds_to_erlang.m"
{
#line 674 "elds_to_erlang.m"
  {
#line 674 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 674 "elds_to_erlang.m"
    {
#line 674 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 674 "elds_to_erlang.m"
      return;
    }
#line 674 "elds_to_erlang.m"
  }
#line 674 "elds_to_erlang.m"
}

#line 739 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
#line 739 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 739 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 739 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 739 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 739 "elds_to_erlang.m"
{
#line 739 "elds_to_erlang.m"
  {
#line 739 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 739 "elds_to_erlang.m"
    {
#line 739 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 739 "elds_to_erlang.m"
      return;
    }
#line 739 "elds_to_erlang.m"
  }
#line 739 "elds_to_erlang.m"
}

#line 659 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
#line 659 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 659 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 659 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 659 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 659 "elds_to_erlang.m"
{
#line 659 "elds_to_erlang.m"
  {
#line 659 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 659 "elds_to_erlang.m"
    {
#line 659 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 659 "elds_to_erlang.m"
      return;
    }
#line 659 "elds_to_erlang.m"
  }
#line 659 "elds_to_erlang.m"
}

#line 599 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
#line 599 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 599 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 599 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 599 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10)
#line 599 "elds_to_erlang.m"
{
#line 604 "elds_to_erlang.m"
  while (MR_TRUE)
#line 604 "elds_to_erlang.m"
    {
#line 604 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 604 "elds_to_erlang.m"
      {
#line 604 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;

#line 604 "elds_to_erlang.m"
#line 604 "elds_to_erlang.m"
        switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) {
#line 604 "elds_to_erlang.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 604 "elds_to_erlang.m"
          case (MR_Integer) 0:
#line 646 "elds_to_erlang.m"
            {
#line 646 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Clause_25 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Expr_10), (MR_Integer) 0);

#line 647 "elds_to_erlang.m"
              {
#line 647 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "(fun");
              }
#line 648 "elds_to_erlang.m"
              {
#line 648 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_clause_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Clause_25);
              }
#line 649 "elds_to_erlang.m"
              {
#line 649 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
              }
#line 650 "elds_to_erlang.m"
              {
#line 650 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "end)");
#line 650 "elds_to_erlang.m"
                return;
              }
#line 646 "elds_to_erlang.m"
            }
#line 604 "elds_to_erlang.m"
            break;
#line 604 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 604 "elds_to_erlang.m"
            {
#line 604 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

#line 604 "elds_to_erlang.m"
              if ((erl_backend__elds_to_erlang__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "elds_to_erlang.m"
                {
#line 605 "elds_to_erlang.m"
                  {
#line 605 "elds_to_erlang.m"
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.output_expr\'/6", (MR_String) "empty elds_block");
#line 605 "elds_to_erlang.m"
                    return;
                  }
#line 604 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
              else
#line 607 "elds_to_erlang.m"
                {
#line 607 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_157_157;
#line 607 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_160_160;

#line 608 "elds_to_erlang.m"
                  {
#line 608 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(begin");
                  }
#line 609 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_157_157 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 609 "elds_to_erlang.m"
                  {
#line 609 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_157_157);
                  }
#line 610 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_160_160 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 610 "elds_to_erlang.m"
                  {
#line 610 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_160_160, erl_backend__elds_to_erlang__V_192_192);
                  }
#line 611 "elds_to_erlang.m"
                  {
#line 611 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 612 "elds_to_erlang.m"
                  {
#line 612 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
#line 612 "elds_to_erlang.m"
                    return;
                  }
#line 607 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
            }
#line 604 "elds_to_erlang.m"
            break;
#line 604 "elds_to_erlang.m"
          case (MR_Integer) 2:
#line 614 "elds_to_erlang.m"
            {
#line 614 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Term_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

#line 615 "elds_to_erlang.m"
              {
#line 615 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Term_15);
#line 615 "elds_to_erlang.m"
                return;
              }
#line 614 "elds_to_erlang.m"
            }
#line 604 "elds_to_erlang.m"
            break;
#line 604 "elds_to_erlang.m"
          case (MR_Integer) 3:
#line 604 "elds_to_erlang.m"
#line 604 "elds_to_erlang.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) {
#line 604 "elds_to_erlang.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 0:
#line 617 "elds_to_erlang.m"
                {
#line 617 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 617 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 618 "elds_to_erlang.m"
                  {
#line 618 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_16);
                  }
#line 619 "elds_to_erlang.m"
                  {
#line 619 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "= ");
                  }
#line 620 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 620 "elds_to_erlang.m"
                  {
#line 620 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_17;

#line 620 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 620 "elds_to_erlang.m"
                  }
#line 620 "elds_to_erlang.m"
                  continue;
#line 617 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 1:
#line 622 "elds_to_erlang.m"
                {
#line 622 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 622 "elds_to_erlang.m"
                  MR_String erl_backend__elds_to_erlang__V_146_146;
#line 622 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 623 "elds_to_erlang.m"
                  {
#line 623 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_146_146 = erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(erl_backend__elds_to_erlang__Unop_18);
                  }
#line 623 "elds_to_erlang.m"
                  {
#line 623 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_146_146);
                  }
#line 624 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 624 "elds_to_erlang.m"
                  {
#line 624 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprA_170;

#line 624 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 624 "elds_to_erlang.m"
                  }
#line 624 "elds_to_erlang.m"
                  continue;
#line 622 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 2:
#line 626 "elds_to_erlang.m"
                {
#line 626 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 626 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
#line 626 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));

#line 627 "elds_to_erlang.m"
                  {
#line 627 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_171);
                  }
#line 628 "elds_to_erlang.m"
                  {
#line 628 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_elds_binop_3_p_0(erl_backend__elds_to_erlang__Binop_19);
                  }
#line 629 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 629 "elds_to_erlang.m"
                  {
#line 629 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_172;

#line 629 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 629 "elds_to_erlang.m"
                  }
#line 629 "elds_to_erlang.m"
                  continue;
#line 626 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 3:
#line 631 "elds_to_erlang.m"
                {
#line 631 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__CallTarget_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 631 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 635 "elds_to_erlang.m"
#line 635 "elds_to_erlang.m"
                  switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__CallTarget_20)) {
#line 635 "elds_to_erlang.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 635 "elds_to_erlang.m"
                    case (MR_Integer) 0:
#line 633 "elds_to_erlang.m"
                      {
#line 633 "elds_to_erlang.m"
                        MR_Word erl_backend__elds_to_erlang__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 634 "elds_to_erlang.m"
                        {
#line 634 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_22);
                        }
#line 633 "elds_to_erlang.m"
                      }
#line 635 "elds_to_erlang.m"
                      break;
#line 635 "elds_to_erlang.m"
                    case (MR_Integer) 1:
#line 636 "elds_to_erlang.m"
                      {
#line 636 "elds_to_erlang.m"
                        MR_Word erl_backend__elds_to_erlang__Closure_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 637 "elds_to_erlang.m"
                        {
#line 637 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Closure_23);
                        }
#line 636 "elds_to_erlang.m"
                      }
#line 635 "elds_to_erlang.m"
                      break;
#line 635 "elds_to_erlang.m"
                    case (MR_Integer) 2:
#line 639 "elds_to_erlang.m"
                      {
#line 639 "elds_to_erlang.m"
                        MR_String erl_backend__elds_to_erlang__FunName_24 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 640 "elds_to_erlang.m"
                        {
#line 640 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__FunName_24);
                        }
#line 639 "elds_to_erlang.m"
                      }
#line 635 "elds_to_erlang.m"
                      break;
#line 635 "elds_to_erlang.m"
                  }
#line 642 "elds_to_erlang.m"
                  {
#line 642 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 643 "elds_to_erlang.m"
                  {
#line 643 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_exprs_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_21);
                  }
#line 644 "elds_to_erlang.m"
                  {
#line 644 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
#line 644 "elds_to_erlang.m"
                    return;
                  }
#line 631 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 4:
#line 702 "elds_to_erlang.m"
                {
#line 702 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__RttiId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 718 "elds_to_erlang.m"
#line 718 "elds_to_erlang.m"
                  switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_33)) {
#line 718 "elds_to_erlang.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 718 "elds_to_erlang.m"
                    case (MR_Integer) 0:
#line 704 "elds_to_erlang.m"
                      {
#line 715 "elds_to_erlang.m"
                        {
#line 715 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "fun ");
                        }
#line 716 "elds_to_erlang.m"
                        {
#line 716 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                        }
#line 717 "elds_to_erlang.m"
                        {
#line 717 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "/0 ");
#line 717 "elds_to_erlang.m"
                          return;
                        }
#line 704 "elds_to_erlang.m"
                      }
#line 718 "elds_to_erlang.m"
                      break;
#line 718 "elds_to_erlang.m"
                    case (MR_Integer) 1:
#line 718 "elds_to_erlang.m"
                    case (MR_Integer) 2:
#line 718 "elds_to_erlang.m"
                    case (MR_Integer) 3:
#line 722 "elds_to_erlang.m"
                      {
#line 723 "elds_to_erlang.m"
                        {
#line 723 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                        }
#line 724 "elds_to_erlang.m"
                        {
#line 724 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "()");
#line 724 "elds_to_erlang.m"
                          return;
                        }
#line 722 "elds_to_erlang.m"
                      }
#line 718 "elds_to_erlang.m"
                      break;
#line 718 "elds_to_erlang.m"
                  }
#line 702 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 5:
#line 652 "elds_to_erlang.m"
                {
#line 652 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
#line 652 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_112_112;
#line 652 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_115_115;
#line 652 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__V_122_122;
#line 652 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_124_124;
#line 652 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 653 "elds_to_erlang.m"
                  {
#line 653 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(case");
                  }
#line 654 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_112_112 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 654 "elds_to_erlang.m"
                  {
#line 654 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_112_112);
                  }
#line 655 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_115_115 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 655 "elds_to_erlang.m"
                  {
#line 655 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_115_115, erl_backend__elds_to_erlang__ExprA_173);
                  }
#line 656 "elds_to_erlang.m"
                  {
#line 656 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 657 "elds_to_erlang.m"
                  {
#line 657 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "of");
                  }
#line 659 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_124_124 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 659 "elds_to_erlang.m"
                  {
#line 659 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 659 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 659 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_1));
#line 659 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 659 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 659 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 659 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_124_124));
#line 659 "elds_to_erlang.m"
                  }
#line 658 "elds_to_erlang.m"
                  {
#line 658 "elds_to_erlang.m"
                    mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_26, (MR_String) ";", erl_backend__elds_to_erlang__V_122_122);
                  }
#line 660 "elds_to_erlang.m"
                  {
#line 660 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 661 "elds_to_erlang.m"
                  {
#line 661 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
#line 661 "elds_to_erlang.m"
                    return;
                  }
#line 652 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 6:
#line 663 "elds_to_erlang.m"
                {
#line 663 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__MaybeCatch_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));
#line 663 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__MaybeAfter_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 4)));
#line 663 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_75_75;
#line 663 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_78_78;
#line 663 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 663 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Cases_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 664 "elds_to_erlang.m"
                  {
#line 664 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(try");
                  }
#line 665 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_75_75 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 665 "elds_to_erlang.m"
                  {
#line 665 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_75_75);
                  }
#line 666 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_78_78 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 666 "elds_to_erlang.m"
                  {
#line 666 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_78_78, erl_backend__elds_to_erlang__ExprA_174);
                  }
#line 669 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__Cases_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 668 "elds_to_erlang.m"
                    {
#line 668 "elds_to_erlang.m"
                    }
#line 669 "elds_to_erlang.m"
                  else
#line 670 "elds_to_erlang.m"
                    {
#line 670 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__V_85_85;
#line 670 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_87_87;

#line 671 "elds_to_erlang.m"
                      {
#line 671 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 672 "elds_to_erlang.m"
                      {
#line 672 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "of");
                      }
#line 674 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_87_87 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 674 "elds_to_erlang.m"
                      {
#line 674 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 674 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 674 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_3));
#line 674 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 674 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 674 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 674 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_87_87));
#line 674 "elds_to_erlang.m"
                      }
#line 673 "elds_to_erlang.m"
                      {
#line 673 "elds_to_erlang.m"
                        mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_175, (MR_String) ";", erl_backend__elds_to_erlang__V_85_85);
                      }
#line 670 "elds_to_erlang.m"
                    }
#line 682 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__MaybeCatch_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 683 "elds_to_erlang.m"
                    {
#line 683 "elds_to_erlang.m"
                    }
#line 682 "elds_to_erlang.m"
                  else
#line 677 "elds_to_erlang.m"
                    {
#line 677 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__Catch_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeCatch_27, (MR_Integer) 0)));
#line 677 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_92_92;
#line 677 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_95_95;

#line 678 "elds_to_erlang.m"
                      {
#line 678 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 679 "elds_to_erlang.m"
                      {
#line 679 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "catch");
                      }
#line 680 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_92_92 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 680 "elds_to_erlang.m"
                      {
#line 680 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_92_92);
                      }
#line 681 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_95_95 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 681 "elds_to_erlang.m"
                      {
#line 681 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__output_catch_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_95_95, erl_backend__elds_to_erlang__Catch_31);
                      }
#line 677 "elds_to_erlang.m"
                    }
#line 691 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__MaybeAfter_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "elds_to_erlang.m"
                    {
#line 692 "elds_to_erlang.m"
                    }
#line 691 "elds_to_erlang.m"
                  else
#line 686 "elds_to_erlang.m"
                    {
#line 686 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__After_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeAfter_28, (MR_Integer) 0)));
#line 686 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_101_101;
#line 686 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_104_104;

#line 687 "elds_to_erlang.m"
                      {
#line 687 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 688 "elds_to_erlang.m"
                      {
#line 688 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "after");
                      }
#line 689 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_101_101 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 689 "elds_to_erlang.m"
                      {
#line 689 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_101_101);
                      }
#line 690 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_104_104 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 690 "elds_to_erlang.m"
                      {
#line 690 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_104_104, erl_backend__elds_to_erlang__After_32);
                      }
#line 686 "elds_to_erlang.m"
                    }
#line 694 "elds_to_erlang.m"
                  {
#line 694 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 695 "elds_to_erlang.m"
                  {
#line 695 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
#line 695 "elds_to_erlang.m"
                    return;
                  }
#line 663 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 7:
#line 697 "elds_to_erlang.m"
                {
#line 697 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 698 "elds_to_erlang.m"
                  {
#line 698 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "throw(");
                  }
#line 699 "elds_to_erlang.m"
                  {
#line 699 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_176);
                  }
#line 700 "elds_to_erlang.m"
                  {
#line 700 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
#line 700 "elds_to_erlang.m"
                    return;
                  }
#line 697 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 8:
#line 727 "elds_to_erlang.m"
                {
#line 727 "elds_to_erlang.m"
                  MR_String erl_backend__elds_to_erlang__Code_40 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 727 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 728 "elds_to_erlang.m"
                  {
#line 728 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_40);
                  }
#line 729 "elds_to_erlang.m"
                  {
#line 729 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
#line 729 "elds_to_erlang.m"
                    return;
                  }
#line 727 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 9:
#line 731 "elds_to_erlang.m"
                {
#line 731 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 731 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 732 "elds_to_erlang.m"
                  {
#line 732 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_177);
                  }
#line 733 "elds_to_erlang.m"
                  {
#line 733 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) " ! ");
                  }
#line 734 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 734 "elds_to_erlang.m"
                  {
#line 734 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_178;

#line 734 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 734 "elds_to_erlang.m"
                  }
#line 734 "elds_to_erlang.m"
                  continue;
#line 731 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
              case (MR_Integer) 10:
#line 736 "elds_to_erlang.m"
                {
#line 736 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__V_47_47;
#line 736 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_49_49;
#line 736 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Cases_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 737 "elds_to_erlang.m"
                  {
#line 737 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(receive");
                  }
#line 739 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_49_49 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 739 "elds_to_erlang.m"
                  {
#line 739 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 739 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 739 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_2));
#line 739 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 739 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 739 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 739 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_49_49));
#line 739 "elds_to_erlang.m"
                  }
#line 738 "elds_to_erlang.m"
                  {
#line 738 "elds_to_erlang.m"
                    mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_179, (MR_String) ";", erl_backend__elds_to_erlang__V_47_47);
                  }
#line 740 "elds_to_erlang.m"
                  {
#line 740 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 741 "elds_to_erlang.m"
                  {
#line 741 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
#line 741 "elds_to_erlang.m"
                    return;
                  }
#line 736 "elds_to_erlang.m"
                }
#line 604 "elds_to_erlang.m"
                break;
#line 604 "elds_to_erlang.m"
            }
#line 604 "elds_to_erlang.m"
            break;
#line 604 "elds_to_erlang.m"
        }
#line 604 "elds_to_erlang.m"
      }
#line 604 "elds_to_erlang.m"
      break;
#line 604 "elds_to_erlang.m"
    }
#line 599 "elds_to_erlang.m"
}

#line 589 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
#line 589 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 589 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 589 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 589 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10)
#line 589 "elds_to_erlang.m"
{
#line 595 "elds_to_erlang.m"
  {
#line 595 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 1)));
#line 595 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_12;

#line 593 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 593 "elds_to_erlang.m"
      {
#line 593 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));
#line 594 "elds_to_erlang.m"
        {
#line 594 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Exprs_12);
#line 594 "elds_to_erlang.m"
          return;
        }
#line 593 "elds_to_erlang.m"
      }
#line 593 "elds_to_erlang.m"
    else
#line 596 "elds_to_erlang.m"
      {
#line 596 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Expr_10);
#line 596 "elds_to_erlang.m"
        return;
      }
#line 595 "elds_to_erlang.m"
  }
#line 589 "elds_to_erlang.m"
}

#line 587 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 587 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 587 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 587 "elds_to_erlang.m"
{
#line 587 "elds_to_erlang.m"
  {
#line 587 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 587 "elds_to_erlang.m"
    {
#line 587 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 587 "elds_to_erlang.m"
      return;
    }
#line 587 "elds_to_erlang.m"
  }
#line 587 "elds_to_erlang.m"
}

#line 582 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
#line 582 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 582 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 582 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 582 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Exprs_10)
#line 582 "elds_to_erlang.m"
{
#line 585 "elds_to_erlang.m"
  {
#line 585 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 585 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_15_15;

#line 587 "elds_to_erlang.m"
    {
#line 587 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 587 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 587 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_exprs_6_p_0_1));
#line 587 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 587 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 587 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 587 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 587 "elds_to_erlang.m"
    }
#line 586 "elds_to_erlang.m"
    {
#line 586 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Exprs_10, (MR_String) ", ", erl_backend__elds_to_erlang__V_15_15);
#line 586 "elds_to_erlang.m"
      return;
    }
#line 585 "elds_to_erlang.m"
  }
#line 582 "elds_to_erlang.m"
}

#line 567 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
#line 567 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
#line 567 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 567 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
#line 567 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
#line 567 "elds_to_erlang.m"
{
#line 570 "elds_to_erlang.m"
  while (MR_TRUE)
#line 570 "elds_to_erlang.m"
    {
#line 570 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 570 "elds_to_erlang.m"
      {
#line 570 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;

#line 570 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "elds_to_erlang.m"
          {
#line 570 "elds_to_erlang.m"
          }
#line 570 "elds_to_erlang.m"
        else
#line 571 "elds_to_erlang.m"
          {
#line 571 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
#line 571 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Exprs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));

#line 572 "elds_to_erlang.m"
            {
#line 572 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_16);
            }
#line 575 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__Exprs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "elds_to_erlang.m"
              {
#line 574 "elds_to_erlang.m"
              }
#line 575 "elds_to_erlang.m"
            else
#line 576 "elds_to_erlang.m"
              {
#line 576 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Expr_43;
#line 576 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Exprs_44;

#line 577 "elds_to_erlang.m"
                {
#line 577 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
#line 1356 "elds_to_erlang.m"
                {
#line 1356 "elds_to_erlang.m"
                  mercury__io__nl_2_p_0();
                }
#line 1357 "elds_to_erlang.m"
                {
#line 1357 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                }
#line 571 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Expr_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 0)));
#line 571 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 1)));
#line 572 "elds_to_erlang.m"
                {
#line 572 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_43);
                }
#line 575 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Exprs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "elds_to_erlang.m"
                  {
#line 574 "elds_to_erlang.m"
                  }
#line 575 "elds_to_erlang.m"
                else
#line 576 "elds_to_erlang.m"
                  {
#line 577 "elds_to_erlang.m"
                    {
#line 577 "elds_to_erlang.m"
                      mercury__io__write_char_3_p_0((MR_Char) 44);
                    }
#line 1356 "elds_to_erlang.m"
                    {
#line 1356 "elds_to_erlang.m"
                      mercury__io__nl_2_p_0();
                    }
#line 1357 "elds_to_erlang.m"
                    {
#line 1357 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                    }
#line 579 "elds_to_erlang.m"
                    /* direct tailcall eliminated */
#line 579 "elds_to_erlang.m"
                    {
#line 579 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__HeadVar__4__tmp_copy_4 = erl_backend__elds_to_erlang__Exprs_44;

#line 579 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__HeadVar__4_4 = erl_backend__elds_to_erlang__HeadVar__4__tmp_copy_4;
#line 579 "elds_to_erlang.m"
                    }
#line 579 "elds_to_erlang.m"
                    continue;
#line 576 "elds_to_erlang.m"
                  }
#line 576 "elds_to_erlang.m"
              }
#line 571 "elds_to_erlang.m"
          }
#line 570 "elds_to_erlang.m"
      }
#line 570 "elds_to_erlang.m"
      break;
#line 570 "elds_to_erlang.m"
    }
#line 567 "elds_to_erlang.m"
}

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 557 "elds_to_erlang.m"
{
#line 557 "elds_to_erlang.m"
  {
#line 557 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 557 "elds_to_erlang.m"
      return;
    }
#line 557 "elds_to_erlang.m"
  }
#line 557 "elds_to_erlang.m"
}

#line 550 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
#line 550 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 550 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 550 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 550 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_10)
#line 550 "elds_to_erlang.m"
{
#line 553 "elds_to_erlang.m"
  {
#line 553 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 553 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
#line 553 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
#line 553 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 553 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_23_23;
#line 553 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_26_26;

#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_clause_6_p_0_1));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 557 "elds_to_erlang.m"
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_12, (MR_String) ", ", erl_backend__elds_to_erlang__V_19_19);
    }
#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 559 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_23_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_23_23);
    }
#line 560 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_26_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__Expr_13);
#line 560 "elds_to_erlang.m"
      return;
    }
#line 553 "elds_to_erlang.m"
  }
#line 550 "elds_to_erlang.m"
}

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 557 "elds_to_erlang.m"
{
#line 557 "elds_to_erlang.m"
  {
#line 557 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 557 "elds_to_erlang.m"
      return;
    }
#line 557 "elds_to_erlang.m"
  }
#line 557 "elds_to_erlang.m"
}

#line 542 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
#line 542 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 542 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
#line 542 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_8)
#line 542 "elds_to_erlang.m"
{
#line 545 "elds_to_erlang.m"
  {
#line 545 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 545 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 0)));
#line 545 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 1)));
#line 545 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_28_28;

#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_7));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 5) = ((MR_Box) ((MR_Integer) 0));
#line 557 "elds_to_erlang.m"
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_23, (MR_String) ", ", erl_backend__elds_to_erlang__V_28_28);
    }
#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, erl_backend__elds_to_erlang__VarSet_7, ((MR_Integer) 0 + (MR_Integer) 1), erl_backend__elds_to_erlang__Expr_24);
    }
#line 548 "elds_to_erlang.m"
    {
#line 548 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 548 "elds_to_erlang.m"
      return;
    }
#line 545 "elds_to_erlang.m"
  }
#line 542 "elds_to_erlang.m"
}

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 557 "elds_to_erlang.m"
{
#line 557 "elds_to_erlang.m"
  {
#line 557 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 557 "elds_to_erlang.m"
      return;
    }
#line 557 "elds_to_erlang.m"
  }
#line 557 "elds_to_erlang.m"
}

#line 533 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
#line 533 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 533 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6)
#line 533 "elds_to_erlang.m"
{
#line 536 "elds_to_erlang.m"
  {
#line 536 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 0)));
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 2)));
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 3)));
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_34;
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_35;
#line 536 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 537 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___IsExported_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 1)));

#line 538 "elds_to_erlang.m"
    {
#line 538 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 539 "elds_to_erlang.m"
    {
#line 539 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__RttiId_8);
    }
#line 554 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Pattern_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 0)));
#line 554 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Expr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 1)));
#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_10));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 557 "elds_to_erlang.m"
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_34, (MR_String) ", ", erl_backend__elds_to_erlang__V_39_39);
    }
#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_10, ((MR_Integer) 0 + (MR_Integer) 1), erl_backend__elds_to_erlang__Expr_35);
    }
#line 548 "elds_to_erlang.m"
    {
#line 548 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 548 "elds_to_erlang.m"
      return;
    }
#line 536 "elds_to_erlang.m"
  }
#line 533 "elds_to_erlang.m"
}

#line 557 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 557 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 557 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 557 "elds_to_erlang.m"
{
#line 557 "elds_to_erlang.m"
  {
#line 557 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 557 "elds_to_erlang.m"
      return;
    }
#line 557 "elds_to_erlang.m"
  }
#line 557 "elds_to_erlang.m"
}

#line 524 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
#line 524 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 524 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6)
#line 524 "elds_to_erlang.m"
{
#line 527 "elds_to_erlang.m"
  {
#line 527 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 527 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
#line 527 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
#line 527 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
#line 527 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_33;
#line 527 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_34;
#line 527 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38;

#line 529 "elds_to_erlang.m"
    {
#line 529 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 530 "elds_to_erlang.m"
    {
#line 530 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Name_8);
    }
#line 554 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Pattern_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
#line 554 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Expr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
#line 555 "elds_to_erlang.m"
    {
#line 555 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 557 "elds_to_erlang.m"
    {
#line 557 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_9));
#line 557 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 5) = ((MR_Box) ((MR_Integer) 0));
#line 557 "elds_to_erlang.m"
    }
#line 556 "elds_to_erlang.m"
    {
#line 556 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_33, (MR_String) ", ", erl_backend__elds_to_erlang__V_38_38);
    }
#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, ((MR_Integer) 0 + (MR_Integer) 1), erl_backend__elds_to_erlang__Expr_34);
    }
#line 548 "elds_to_erlang.m"
    {
#line 548 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 548 "elds_to_erlang.m"
      return;
    }
#line 527 "elds_to_erlang.m"
  }
#line 524 "elds_to_erlang.m"
}

#line 481 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
#line 481 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 481 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
#line 481 "elds_to_erlang.m"
{
#line 484 "elds_to_erlang.m"
  {
#line 484 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 486 "elds_to_erlang.m"
    {
#line 486 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_6);
    }
#line 487 "elds_to_erlang.m"
    {
#line 487 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(),");
#line 487 "elds_to_erlang.m"
      return;
    }
#line 484 "elds_to_erlang.m"
  }
#line 481 "elds_to_erlang.m"
}

#line 476 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
#line 476 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 476 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 476 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 476 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 476 "elds_to_erlang.m"
{
#line 476 "elds_to_erlang.m"
  {
#line 476 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 476 "elds_to_erlang.m"
    {
#line 476 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 476 "elds_to_erlang.m"
      return;
    }
#line 476 "elds_to_erlang.m"
  }
#line 476 "elds_to_erlang.m"
}

#line 465 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
#line 465 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 465 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name_7,
#line 465 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8)
#line 465 "elds_to_erlang.m"
{
#line 470 "elds_to_erlang.m"
  {
#line 470 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 470 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__PredProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "elds_to_erlang.m"
      {
#line 470 "elds_to_erlang.m"
      }
#line 470 "elds_to_erlang.m"
    else
#line 472 "elds_to_erlang.m"
      {
#line 472 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 476 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20;

#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1357 "elds_to_erlang.m"
        {
#line 1357 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 0);
        }
#line 474 "elds_to_erlang.m"
        {
#line 474 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Name_7);
        }
#line 475 "elds_to_erlang.m"
        {
#line 475 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "() ->");
        }
#line 476 "elds_to_erlang.m"
        {
#line 476 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[7]));
#line 476 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1));
#line 476 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 476 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 476 "elds_to_erlang.m"
        }
#line 476 "elds_to_erlang.m"
        {
#line 476 "elds_to_erlang.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_19_19, erl_backend__elds_to_erlang__PredProcIds_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20);
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1357 "elds_to_erlang.m"
        {
#line 1357 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 478 "elds_to_erlang.m"
        {
#line 478 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "void.\n");
#line 478 "elds_to_erlang.m"
          return;
        }
#line 472 "elds_to_erlang.m"
      }
#line 470 "elds_to_erlang.m"
  }
#line 465 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 456 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void)
#line 456 "elds_to_erlang.m"
{
#line 458 "elds_to_erlang.m"
  {
#line 458 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 458 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__FileName_14;
#line 458 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__LineNr_15;
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20;

#line 459 "elds_to_erlang.m"
    {
#line 459 "elds_to_erlang.m"
      mercury__io__output_stream_name_3_p_0(&erl_backend__elds_to_erlang__FileName_14);
    }
#line 460 "elds_to_erlang.m"
    {
#line 460 "elds_to_erlang.m"
      mercury__io__get_output_line_number_3_p_0(&erl_backend__elds_to_erlang__LineNr_15);
    }
#line 450 "elds_to_erlang.m"
    {
#line 450 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
    }
#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[7], erl_backend__elds_to_erlang__FileName_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20);
    }
#line 452 "elds_to_erlang.m"
    {
#line 452 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
#line 453 "elds_to_erlang.m"
    {
#line 453 "elds_to_erlang.m"
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_15);
    }
#line 454 "elds_to_erlang.m"
    {
#line 454 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
#line 454 "elds_to_erlang.m"
      return;
    }
#line 458 "elds_to_erlang.m"
  }
#line 456 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 421 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
#line 421 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 421 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6)
#line 421 "elds_to_erlang.m"
{
#line 424 "elds_to_erlang.m"
  {
#line 424 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 424 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 1)));
#line 424 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 2)));
#line 425 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 0)));

#line 438 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_9)) == (MR_mktag((MR_Integer) 1))))
#line 439 "elds_to_erlang.m"
      {
#line 439 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__IncludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
#line 439 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_33;
#line 1242 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39;

#line 440 "elds_to_erlang.m"
        {
#line 440 "elds_to_erlang.m"
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_21, &erl_backend__elds_to_erlang__FileName_33);
        }
#line 450 "elds_to_erlang.m"
        {
#line 450 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1242 "elds_to_erlang.m"
        {
#line 1242 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[5], erl_backend__elds_to_erlang__FileName_33, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39);
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
#line 454 "elds_to_erlang.m"
        {
#line 454 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 442 "elds_to_erlang.m"
        {
#line 442 "elds_to_erlang.m"
          libs__file_util__write_include_file_contents_3_p_0(erl_backend__elds_to_erlang__FileName_33);
        }
#line 439 "elds_to_erlang.m"
      }
#line 438 "elds_to_erlang.m"
    else
#line 435 "elds_to_erlang.m"
      {
#line 435 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
#line 435 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 0)));
#line 435 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__LineNr_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 1)));
#line 1242 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64;

#line 450 "elds_to_erlang.m"
        {
#line 450 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1242 "elds_to_erlang.m"
        {
#line 1242 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[6], erl_backend__elds_to_erlang__FileName_58, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64);
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_59);
        }
#line 454 "elds_to_erlang.m"
        {
#line 454 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 437 "elds_to_erlang.m"
        {
#line 437 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_20);
        }
#line 435 "elds_to_erlang.m"
      }
#line 444 "elds_to_erlang.m"
    {
#line 444 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 445 "elds_to_erlang.m"
    {
#line 445 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
#line 445 "elds_to_erlang.m"
      return;
    }
#line 424 "elds_to_erlang.m"
  }
#line 421 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 412 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
#line 412 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 412 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
#line 412 "elds_to_erlang.m"
{
#line 415 "elds_to_erlang.m"
  {
#line 415 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 415 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
#line 415 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));
#line 416 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
#line 416 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___IsLocal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));

#line 438 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_10)) == (MR_mktag((MR_Integer) 1))))
#line 439 "elds_to_erlang.m"
      {
#line 439 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
#line 439 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_34;
#line 1242 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40;

#line 440 "elds_to_erlang.m"
        {
#line 440 "elds_to_erlang.m"
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_22, &erl_backend__elds_to_erlang__FileName_34);
        }
#line 450 "elds_to_erlang.m"
        {
#line 450 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1242 "elds_to_erlang.m"
        {
#line 1242 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[3], erl_backend__elds_to_erlang__FileName_34, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40);
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
#line 454 "elds_to_erlang.m"
        {
#line 454 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 442 "elds_to_erlang.m"
        {
#line 442 "elds_to_erlang.m"
          libs__file_util__write_include_file_contents_3_p_0(erl_backend__elds_to_erlang__FileName_34);
        }
#line 439 "elds_to_erlang.m"
      }
#line 438 "elds_to_erlang.m"
    else
#line 435 "elds_to_erlang.m"
      {
#line 435 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
#line 435 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_59 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 0)));
#line 435 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__LineNr_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 1)));
#line 1242 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65;

#line 450 "elds_to_erlang.m"
        {
#line 450 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1242 "elds_to_erlang.m"
        {
#line 1242 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[4], erl_backend__elds_to_erlang__FileName_59, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65);
        }
#line 452 "elds_to_erlang.m"
        {
#line 452 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_60);
        }
#line 454 "elds_to_erlang.m"
        {
#line 454 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 437 "elds_to_erlang.m"
        {
#line 437 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_21);
        }
#line 435 "elds_to_erlang.m"
      }
#line 444 "elds_to_erlang.m"
    {
#line 444 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 445 "elds_to_erlang.m"
    {
#line 445 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
#line 445 "elds_to_erlang.m"
      return;
    }
#line 415 "elds_to_erlang.m"
  }
#line 412 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 401 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
#line 401 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Globals_5,
#line 401 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Import_6)
#line 401 "elds_to_erlang.m"
{
#line 404 "elds_to_erlang.m"
  {
#line 404 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 404 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeaderFile_8;
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16;

#line 405 "elds_to_erlang.m"
    {
#line 405 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(erl_backend__elds_to_erlang__Globals_5, erl_backend__elds_to_erlang__Import_6, (MR_String) ".hrl", &erl_backend__elds_to_erlang__HeaderFile_8);
    }
#line 406 "elds_to_erlang.m"
    {
#line 406 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-include(\"");
    }
#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[2], erl_backend__elds_to_erlang__HeaderFile_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 408 "elds_to_erlang.m"
    {
#line 408 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "\").\n");
#line 408 "elds_to_erlang.m"
      return;
    }
#line 404 "elds_to_erlang.m"
  }
#line 401 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 392 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
#line 392 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__EnvVarName_4)
#line 392 "elds_to_erlang.m"
{
#line 394 "elds_to_erlang.m"
  {
#line 394 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11;

#line 395 "elds_to_erlang.m"
    {
#line 395 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% ENVVAR ");
    }
#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[1], erl_backend__elds_to_erlang__EnvVarName_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11);
    }
#line 397 "elds_to_erlang.m"
    {
#line 397 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
#line 397 "elds_to_erlang.m"
      return;
    }
#line 394 "elds_to_erlang.m"
  }
#line 392 "elds_to_erlang.m"
}

#line 388 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
#line 388 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3)
#line 388 "elds_to_erlang.m"
{
#line 390 "elds_to_erlang.m"
  {
#line 390 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 390 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 3)));
#line 390 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 0)));
#line 390 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 1)));
#line 390 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 2)));

#line 390 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 390 "elds_to_erlang.m"
  }
#line 388 "elds_to_erlang.m"
}

#line 386 "elds_to_erlang.m"
static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
#line 386 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 386 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1)
#line 386 "elds_to_erlang.m"
{
#line 386 "elds_to_erlang.m"
  {
#line 386 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__wrapper_arg_2;
#line 386 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 386 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__2_2;

#line 386 "elds_to_erlang.m"
    {
#line 386 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__conv0_HeadVar__2_2 = erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 386 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__wrapper_arg_2 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__2_2));
#line 386 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__wrapper_arg_2;
#line 386 "elds_to_erlang.m"
  }
#line 386 "elds_to_erlang.m"
}

#line 383 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
#line 383 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3)
#line 383 "elds_to_erlang.m"
{
#line 385 "elds_to_erlang.m"
  {
#line 385 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 385 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2;
#line 385 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_4_4;

#line 386 "elds_to_erlang.m"
    {
#line 386 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_1[0], (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[2], erl_backend__elds_to_erlang__ProcDefns_3);
    }
#line 386 "elds_to_erlang.m"
    {
#line 386 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__HeadVar__2_2 = mercury__set__union_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__V_4_4);
    }
#line 385 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 385 "elds_to_erlang.m"
  }
#line 383 "elds_to_erlang.m"
}

#line 302 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void)
#line 302 "elds_to_erlang.m"
{
#line 304 "elds_to_erlang.m"
  {
#line 304 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 304 "elds_to_erlang.m"
    return (MR_String) "\n\n    % This function is called in place of main_2_p_0 by the shell script that\n    % we generate for this program, if linking against the standard library.\n   " " % Otherwise main_2_p_0 will be called.\n\n    mercury__main_wrapper() ->\n        mercury__startup(),\n        InitModule = list_to_atom(atom_to_list(\?MODULE) ++ \"" "_init\"),\n        try\n            InitModule:init_env_vars(),\n            InitModule:init_modules(),\n            InitModule:init_modules_required(),\n            " "main_2_p_0(),\n            InitModule:final_modules_required()\n        catch\n            {\'ML_exception\', Excp} ->\n                StackTrace = erlang:get_stackt" "race(),\n                mercury__exception:\'ML_report_uncaught_exception\'(Excp),\n                mercury__maybe_dump_stacktrace(StackTrace),\n                mer" "cury__shutdown(true)\n        end,\n        mercury__shutdown(false).\n\n    mercury__startup() ->\n        mercury__erlang_builtin:\'ML_start_global_server\'(),\n     " "   mercury__library:\'ML_std_library_init\'().\n\n    mercury__shutdown(ForceBadExit) ->\n        mercury__library:\'ML_std_library_finalize\'(),\n        \'ML_erlang_gl" "obal_server\' ! {get_exit_status, self()},\n        receive\n            {get_exit_status_ack, ExitStatus0} ->\n                void\n        end,\n        if\n       " "     ExitStatus0 =:= 0 andalso ForceBadExit ->\n                ExitStatus = 1;\n            true ->\n                ExitStatus = ExitStatus0\n        end,\n       " " mercury__erlang_builtin:\'ML_stop_global_server\'(),\n        % init:stop is preferred to calling halt but there seems\n        % to be no way to choose the exit c" "ode otherwise.\n        case ExitStatus of\n            0 -> void;\n            _ -> halt(ExitStatus)\n        end.\n\n    mercury__maybe_dump_stacktrace(StackTrace) " "->\n        case os:getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") of\n            false ->\n                io:put_chars(\"Stack dump follows:\\n\"),\n                mercury" "__dump_stacktrace(StackTrace);\n            _ ->\n                void\n        end.\n\n    mercury__dump_stacktrace([]) -> void;\n    mercury__dump_stacktrace([St | " "Sts]) ->\n        {Module, Function, ArityOrArgs} = St,\n        io:format(\"\\t~s:~s\", [Module, Function]),\n        if\n            is_integer(ArityOrArgs) ->\n     " "           io:format(\"/~B~n\", [ArityOrArgs]);\n            true ->\n                io:format(\"~p~n\", [ArityOrArgs])\n        end,\n        % Don\'t show stack frame" "s below main.\n        case St of\n            {\?MODULE, mercury__main_wrapper, _} ->\n                void;\n            _ ->\n                mercury__dump_stacktr" "ace(Sts)\n        end.\n";
#line 304 "elds_to_erlang.m"
  }
#line 302 "elds_to_erlang.m"
}

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 292 "elds_to_erlang.m"
{
#line 292 "elds_to_erlang.m"
  {
#line 292 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 292 "elds_to_erlang.m"
    MR_builtin_longjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0, 1);
#line 292 "elds_to_erlang.m"
  }
#line 292 "elds_to_erlang.m"
}

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 292 "elds_to_erlang.m"
{
#line 292 "elds_to_erlang.m"
  {
#line 292 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 292 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7 = ((MR_Word) (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7);
#line 292 "elds_to_erlang.m"
    {
#line 292 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(erl_backend__elds_to_erlang__env_ptr);
#line 292 "elds_to_erlang.m"
      return;
    }
#line 292 "elds_to_erlang.m"
  }
#line 292 "elds_to_erlang.m"
}

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 292 "elds_to_erlang.m"
{
#line 292 "elds_to_erlang.m"
  {
#line 292 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 293 "elds_to_erlang.m"
    {
#line 293 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8);
    }
#line 294 "elds_to_erlang.m"
    {
#line 294 "elds_to_erlang.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ImportStatus_9);
    }
#line 295 "elds_to_erlang.m"
    {
#line 295 "elds_to_erlang.m"
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ImportStatus_9);
    }
#line 295 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12 == (MR_Integer) 1);
#line 295 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
#line 295 "elds_to_erlang.m"
      {
#line 295 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(erl_backend__elds_to_erlang__env_ptr);
#line 295 "elds_to_erlang.m"
        return;
      }
#line 292 "elds_to_erlang.m"
  }
#line 292 "elds_to_erlang.m"
}

#line 292 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
#line 292 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 292 "elds_to_erlang.m"
{
#line 292 "elds_to_erlang.m"
  {
#line 292 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 292 "elds_to_erlang.m"
    if (MR_builtin_setjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0) == 0)
#line 292 "elds_to_erlang.m"
      {
#line 292 "elds_to_erlang.m"
        {
#line 292 "elds_to_erlang.m"
          {
#line 292 "elds_to_erlang.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6, erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3, erl_backend__elds_to_erlang__env_ptr);
          }
#line 292 "elds_to_erlang.m"
        }
#line 292 "elds_to_erlang.m"
        (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_FALSE;
#line 292 "elds_to_erlang.m"
      }
#line 292 "elds_to_erlang.m"
    else
#line 292 "elds_to_erlang.m"
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_TRUE;
#line 292 "elds_to_erlang.m"
  }
#line 292 "elds_to_erlang.m"
}

#line 286 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
#line 286 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3)
#line 286 "elds_to_erlang.m"
{
#line 286 "elds_to_erlang.m"
  {
#line 286 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s erl_backend__elds_to_erlang__env;

#line 286 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3 = erl_backend__elds_to_erlang__ModuleInfo_3;
#line 288 "elds_to_erlang.m"
    {
#line 288 "elds_to_erlang.m"
      MR_Word erl_backend__elds_to_erlang__AddMainWrapper_4;
#line 288 "elds_to_erlang.m"
      MR_Word erl_backend__elds_to_erlang__PredTable_5;

#line 289 "elds_to_erlang.m"
      {
#line 289 "elds_to_erlang.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, &erl_backend__elds_to_erlang__PredTable_5);
      }
#line 290 "elds_to_erlang.m"
      {
#line 290 "elds_to_erlang.m"
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(erl_backend__elds_to_erlang__PredTable_5, (MR_String) "main", (MR_Integer) 2, &(erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6);
      }
#line 292 "elds_to_erlang.m"
      {
#line 292 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(&erl_backend__elds_to_erlang__env);
      }
#line 298 "elds_to_erlang.m"
      if ((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
#line 297 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 1;
#line 298 "elds_to_erlang.m"
      else
#line 299 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 0;
#line 288 "elds_to_erlang.m"
      return erl_backend__elds_to_erlang__AddMainWrapper_4;
#line 288 "elds_to_erlang.m"
    }
#line 286 "elds_to_erlang.m"
  }
#line 286 "elds_to_erlang.m"
}

#line 251 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
#line 251 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
#line 251 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
#line 251 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8)
#line 251 "elds_to_erlang.m"
{
#line 255 "elds_to_erlang.m"
  {
#line 255 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 262 "elds_to_erlang.m"
#line 262 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__AddMainWrapper_6) {
#line 262 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 262 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 263 "elds_to_erlang.m"
        {
#line 263 "elds_to_erlang.m"
        }
#line 262 "elds_to_erlang.m"
        break;
#line 262 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 257 "elds_to_erlang.m"
        {
#line 1379 "elds_to_erlang.m"
          {
#line 1379 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 44);
          }
#line 1356 "elds_to_erlang.m"
          {
#line 1356 "elds_to_erlang.m"
            mercury__io__nl_2_p_0();
          }
#line 1357 "elds_to_erlang.m"
          {
#line 1357 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          }
#line 260 "elds_to_erlang.m"
          {
#line 260 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__main_wrapper");
          }
#line 261 "elds_to_erlang.m"
          {
#line 261 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0((MR_String) "/0");
          }
#line 257 "elds_to_erlang.m"
        }
#line 262 "elds_to_erlang.m"
        break;
#line 262 "elds_to_erlang.m"
    }
#line 267 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__InitPreds_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "elds_to_erlang.m"
      {
#line 266 "elds_to_erlang.m"
      }
#line 267 "elds_to_erlang.m"
    else
#line 268 "elds_to_erlang.m"
      {
#line 1379 "elds_to_erlang.m"
        {
#line 1379 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1357 "elds_to_erlang.m"
        {
#line 1357 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 271 "elds_to_erlang.m"
        {
#line 271 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_init");
        }
#line 272 "elds_to_erlang.m"
        {
#line 272 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
#line 268 "elds_to_erlang.m"
      }
#line 276 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__FinalPreds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "elds_to_erlang.m"
      {
#line 275 "elds_to_erlang.m"
      }
#line 276 "elds_to_erlang.m"
    else
#line 277 "elds_to_erlang.m"
      {
#line 1379 "elds_to_erlang.m"
        {
#line 1379 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1357 "elds_to_erlang.m"
        {
#line 1357 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 280 "elds_to_erlang.m"
        {
#line 280 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_final");
        }
#line 281 "elds_to_erlang.m"
        {
#line 281 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
#line 281 "elds_to_erlang.m"
          return;
        }
#line 277 "elds_to_erlang.m"
      }
#line 255 "elds_to_erlang.m"
  }
#line 251 "elds_to_erlang.m"
}

#line 234 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
#line 234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
#line 234 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
#line 234 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16)
#line 234 "elds_to_erlang.m"
{
#line 237 "elds_to_erlang.m"
  {
#line 237 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 237 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 0)));
#line 237 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__IsExported_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 1)));
#line 238 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 2)));
#line 238 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Clause_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 3)));

#line 247 "elds_to_erlang.m"
#line 247 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__IsExported_12) {
#line 247 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 247 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 248 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15;
#line 247 "elds_to_erlang.m"
        break;
#line 247 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 240 "elds_to_erlang.m"
        {
#line 1383 "elds_to_erlang.m"
#line 1383 "elds_to_erlang.m"
          switch (erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15) {
#line 1383 "elds_to_erlang.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1383 "elds_to_erlang.m"
            case (MR_Integer) 0:
#line 1383 "elds_to_erlang.m"
              {
#line 1383 "elds_to_erlang.m"
              }
#line 1383 "elds_to_erlang.m"
              break;
#line 1383 "elds_to_erlang.m"
            case (MR_Integer) 1:
#line 1378 "elds_to_erlang.m"
              {
#line 1379 "elds_to_erlang.m"
                {
#line 1379 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
#line 1378 "elds_to_erlang.m"
              }
#line 1383 "elds_to_erlang.m"
              break;
#line 1383 "elds_to_erlang.m"
          }
#line 1356 "elds_to_erlang.m"
          {
#line 1356 "elds_to_erlang.m"
            mercury__io__nl_2_p_0();
          }
#line 1357 "elds_to_erlang.m"
          {
#line 1357 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          }
#line 243 "elds_to_erlang.m"
          {
#line 243 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_11);
          }
#line 244 "elds_to_erlang.m"
          {
#line 244 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 47);
          }
#line 245 "elds_to_erlang.m"
          {
#line 245 "elds_to_erlang.m"
            mercury__io__write_int_3_p_0((MR_Integer) 0);
          }
#line 246 "elds_to_erlang.m"
          *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
#line 240 "elds_to_erlang.m"
        }
#line 247 "elds_to_erlang.m"
        break;
#line 247 "elds_to_erlang.m"
    }
#line 237 "elds_to_erlang.m"
  }
#line 234 "elds_to_erlang.m"
}

#line 223 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
#line 223 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
#line 223 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
#line 223 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3)
#line 223 "elds_to_erlang.m"
{
#line 226 "elds_to_erlang.m"
  {
#line 226 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 226 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ExportedName_9;
#line 226 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_11;
#line 226 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_20_20;
#line 227 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;

#line 226 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__HeadVar__3_3 = (MR_Integer) 1;
#line 227 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ExportedName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
#line 227 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
#line 227 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
#line 1383 "elds_to_erlang.m"
#line 1383 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__NeedComma_7) {
#line 1383 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1383 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1383 "elds_to_erlang.m"
        {
#line 1383 "elds_to_erlang.m"
        }
#line 1383 "elds_to_erlang.m"
        break;
#line 1383 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1378 "elds_to_erlang.m"
        {
#line 1379 "elds_to_erlang.m"
          {
#line 1379 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 44);
          }
#line 1378 "elds_to_erlang.m"
        }
#line 1383 "elds_to_erlang.m"
        break;
#line 1383 "elds_to_erlang.m"
    }
#line 1356 "elds_to_erlang.m"
    {
#line 1356 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1357 "elds_to_erlang.m"
    {
#line 1357 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 230 "elds_to_erlang.m"
    {
#line 230 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExportedName_9);
    }
#line 231 "elds_to_erlang.m"
    {
#line 231 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 47);
    }
#line 232 "elds_to_erlang.m"
    {
#line 232 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_20_20 = erl_backend__elds__elds_clause_arity_1_f_0(erl_backend__elds_to_erlang__Clause_11);
    }
#line 232 "elds_to_erlang.m"
    {
#line 232 "elds_to_erlang.m"
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_20_20);
#line 232 "elds_to_erlang.m"
      return;
    }
#line 226 "elds_to_erlang.m"
  }
#line 223 "elds_to_erlang.m"
}

#line 205 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
#line 205 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 205 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_8,
#line 205 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
#line 205 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19)
#line 205 "elds_to_erlang.m"
{
#line 208 "elds_to_erlang.m"
  {
#line 208 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 208 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 0)));
#line 208 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Body_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 2)));
#line 208 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 0)));
#line 208 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 1)));
#line 208 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredInfo_17;
#line 209 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 1)));
#line 209 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 3)));

#line 211 "elds_to_erlang.m"
    {
#line 211 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredId_15, &erl_backend__elds_to_erlang__PredInfo_17);
    }
#line 212 "elds_to_erlang.m"
    {
#line 212 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredInfo_17, erl_backend__elds_to_erlang__ProcId_16);
    }
#line 219 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 213 "elds_to_erlang.m"
      {
#line 213 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_28_28;

#line 1383 "elds_to_erlang.m"
#line 1383 "elds_to_erlang.m"
        switch (erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18) {
#line 1383 "elds_to_erlang.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1383 "elds_to_erlang.m"
          case (MR_Integer) 0:
#line 1383 "elds_to_erlang.m"
            {
#line 1383 "elds_to_erlang.m"
            }
#line 1383 "elds_to_erlang.m"
            break;
#line 1383 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 1378 "elds_to_erlang.m"
            {
#line 1379 "elds_to_erlang.m"
              {
#line 1379 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 44);
              }
#line 1378 "elds_to_erlang.m"
            }
#line 1383 "elds_to_erlang.m"
            break;
#line 1383 "elds_to_erlang.m"
        }
#line 1356 "elds_to_erlang.m"
        {
#line 1356 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1357 "elds_to_erlang.m"
        {
#line 1357 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 215 "elds_to_erlang.m"
        {
#line 215 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_11);
        }
#line 216 "elds_to_erlang.m"
        {
#line 216 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 47);
        }
#line 217 "elds_to_erlang.m"
        {
#line 217 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_28_28 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__elds_to_erlang__Body_13);
        }
#line 217 "elds_to_erlang.m"
        {
#line 217 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_28_28);
        }
#line 218 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = (MR_Integer) 1;
#line 213 "elds_to_erlang.m"
      }
#line 219 "elds_to_erlang.m"
    else
#line 220 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18;
#line 208 "elds_to_erlang.m"
  }
#line 205 "elds_to_erlang.m"
}

#line 188 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
#line 188 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_4)
#line 188 "elds_to_erlang.m"
{
#line 190 "elds_to_erlang.m"
  {
#line 190 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 190 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Version_6;
#line 190 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Fullarch_7;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_13_13;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_15_15;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_16_16;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_22_22;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_23_23;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_25_25;
#line 190 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_27_27;

#line 191 "elds_to_erlang.m"
    {
#line 191 "elds_to_erlang.m"
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_6, &erl_backend__elds_to_erlang__Fullarch_7);
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_7));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
#line 197 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_25_25, 0) = ((MR_Box) ((MR_String) "% configured for "));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_25_25, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_27_27));
#line 197 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_23_23, 0) = ((MR_Box) ((MR_String) "\n"));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_23_23, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_25_25));
#line 196 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_6));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_23_23));
#line 196 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 0) = ((MR_Box) ((MR_String) "% version "));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 196 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
#line 195 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_20_20));
#line 195 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_18_18));
#line 194 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_15_15, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_4));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_15_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_16_16));
#line 194 "elds_to_erlang.m"
    }
#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_13_13, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
#line 194 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_13_13, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_15_15));
#line 194 "elds_to_erlang.m"
    }
#line 193 "elds_to_erlang.m"
    {
#line 193 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_10_10, 0) = ((MR_Box) ((MR_String) "%\n"));
#line 193 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_10_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_13_13));
#line 193 "elds_to_erlang.m"
    }
#line 192 "elds_to_erlang.m"
    {
#line 192 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_10_10);
#line 192 "elds_to_erlang.m"
      return;
    }
#line 190 "elds_to_erlang.m"
  }
#line 188 "elds_to_erlang.m"
}

#line 186 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 186 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 186 "elds_to_erlang.m"
{
#line 186 "elds_to_erlang.m"
  {
#line 186 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 186 "elds_to_erlang.m"
    {
#line 186 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 186 "elds_to_erlang.m"
      return;
    }
#line 186 "elds_to_erlang.m"
  }
#line 186 "elds_to_erlang.m"
}

#line 184 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
#line 184 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 184 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 184 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 184 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 184 "elds_to_erlang.m"
{
#line 184 "elds_to_erlang.m"
  {
#line 184 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 184 "elds_to_erlang.m"
    {
#line 184 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 184 "elds_to_erlang.m"
      return;
    }
#line 184 "elds_to_erlang.m"
  }
#line 184 "elds_to_erlang.m"
}

#line 183 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
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
      erl_backend__elds_to_erlang__output_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 183 "elds_to_erlang.m"
      return;
    }
#line 183 "elds_to_erlang.m"
  }
#line 183 "elds_to_erlang.m"
}

#line 167 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
#line 167 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 167 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 167 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 167 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 167 "elds_to_erlang.m"
{
#line 167 "elds_to_erlang.m"
  {
#line 167 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 167 "elds_to_erlang.m"
    {
#line 167 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 167 "elds_to_erlang.m"
      return;
    }
#line 167 "elds_to_erlang.m"
  }
#line 167 "elds_to_erlang.m"
}

#line 161 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
#line 161 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 161 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 161 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 161 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 161 "elds_to_erlang.m"
{
#line 161 "elds_to_erlang.m"
  {
#line 161 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 161 "elds_to_erlang.m"
    {
#line 161 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(((MR_String) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 161 "elds_to_erlang.m"
      return;
    }
#line 161 "elds_to_erlang.m"
  }
#line 161 "elds_to_erlang.m"
}

#line 140 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 140 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 140 "elds_to_erlang.m"
{
#line 140 "elds_to_erlang.m"
  {
#line 140 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 140 "elds_to_erlang.m"
    {
#line 140 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 140 "elds_to_erlang.m"
      return;
    }
#line 140 "elds_to_erlang.m"
  }
#line 140 "elds_to_erlang.m"
}

#line 137 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
#line 137 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 137 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 137 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 137 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 137 "elds_to_erlang.m"
{
#line 137 "elds_to_erlang.m"
  {
#line 137 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 137 "elds_to_erlang.m"
    {
#line 137 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 137 "elds_to_erlang.m"
      return;
    }
#line 137 "elds_to_erlang.m"
  }
#line 137 "elds_to_erlang.m"
}

#line 127 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 127 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 127 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 127 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 127 "elds_to_erlang.m"
{
#line 127 "elds_to_erlang.m"
  {
#line 127 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 127 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16;

#line 127 "elds_to_erlang.m"
    {
#line 127 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16);
    }
#line 127 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16));
#line 127 "elds_to_erlang.m"
  }
#line 127 "elds_to_erlang.m"
}

#line 125 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 125 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 125 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 125 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 125 "elds_to_erlang.m"
{
#line 125 "elds_to_erlang.m"
  {
#line 125 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 125 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv3_HeadVar__3_3;

#line 125 "elds_to_erlang.m"
    {
#line 125 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv3_HeadVar__3_3);
    }
#line 125 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv3_HeadVar__3_3));
#line 125 "elds_to_erlang.m"
  }
#line 125 "elds_to_erlang.m"
}

#line 124 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
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
    MR_Word erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19;

#line 124 "elds_to_erlang.m"
    {
#line 124 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19);
    }
#line 124 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19));
#line 124 "elds_to_erlang.m"
  }
#line 124 "elds_to_erlang.m"
}

#line 107 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
#line 107 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 107 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 107 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
#line 107 "elds_to_erlang.m"
{
#line 110 "elds_to_erlang.m"
  {
#line 110 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_90_90;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_91_91;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_92_92;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_98_98;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_104_104;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Imports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignBodies_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ProcDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignExportDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__AddMainWrapper_19;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__NeedComma0_20;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__NeedComma1_21;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Globals_23;
#line 110 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ErlangModuleNameStr_24;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__EnvVarNames_29;
#line 110 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_35_35;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_41_41;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_46_46;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_55_55;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_71_71;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_79_79;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_81_81;
#line 110 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_83_83;
#line 124 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv2_NeedComma0_20;
#line 124 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43;
#line 125 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv5_NeedComma1_21;
#line 125 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45;
#line 127 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___NeedComma_22;
#line 127 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv8__NeedComma_22;
#line 127 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47;
#line 137 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54;
#line 140 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56;
#line 161 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68;
#line 167 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72;
#line 183 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80;
#line 184 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82;
#line 186 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31;

#line 113 "elds_to_erlang.m"
    {
#line 113 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__AddMainWrapper_19 = erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(erl_backend__elds_to_erlang__ModuleInfo_6);
    }
#line 116 "elds_to_erlang.m"
    {
#line 116 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(erl_backend__elds_to_erlang__SourceFileName_8);
    }
#line 119 "elds_to_erlang.m"
    {
#line 119 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-module(");
    }
#line 120 "elds_to_erlang.m"
    {
#line 120 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_35_35 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
#line 120 "elds_to_erlang.m"
    {
#line 120 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_35_35);
    }
#line 121 "elds_to_erlang.m"
    {
#line 121 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 123 "elds_to_erlang.m"
    {
#line 123 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-export([");
    }
#line 124 "elds_to_erlang.m"
    {
#line 124 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 124 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[0]));
#line 124 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_1));
#line 124 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 124 "elds_to_erlang.m"
    }
#line 10495 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_90_90 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0;
#line 10497 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_91_91 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 10499 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_92_92 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 124 "elds_to_erlang.m"
    {
#line 124 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_41_41, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv2_NeedComma0_20, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 124 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__NeedComma0_20 = ((MR_Word) erl_backend__elds_to_erlang__conv2_NeedComma0_20);
#line 10508 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_98_98 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;
#line 125 "elds_to_erlang.m"
    {
#line 125 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[0], erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma0_20)), &erl_backend__elds_to_erlang__conv5_NeedComma1_21, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45);
    }
#line 125 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__NeedComma1_21 = ((MR_Word) erl_backend__elds_to_erlang__conv5_NeedComma1_21);
#line 127 "elds_to_erlang.m"
    {
#line 127 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[1]));
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_3));
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 127 "elds_to_erlang.m"
    }
#line 10531 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_104_104 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
#line 127 "elds_to_erlang.m"
    {
#line 127 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_46_46, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma1_21)), &erl_backend__elds_to_erlang__conv8__NeedComma_22, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47);
    }
#line 127 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___NeedComma_22 = ((MR_Word) erl_backend__elds_to_erlang__conv8__NeedComma_22);
#line 129 "elds_to_erlang.m"
    {
#line 129 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(erl_backend__elds_to_erlang__AddMainWrapper_19, erl_backend__elds_to_erlang__InitPreds_17, erl_backend__elds_to_erlang__FinalPreds_18);
    }
#line 131 "elds_to_erlang.m"
    {
#line 131 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
#line 134 "elds_to_erlang.m"
    {
#line 134 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% -compile(export_all).\n");
    }
#line 136 "elds_to_erlang.m"
    {
#line 136 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_23);
    }
#line 137 "elds_to_erlang.m"
    {
#line 137 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 137 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[1]));
#line 137 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_4));
#line 137 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 137 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Globals_23));
#line 137 "elds_to_erlang.m"
    }
#line 137 "elds_to_erlang.m"
    {
#line 137 "elds_to_erlang.m"
      mercury__set__fold_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_53_53, erl_backend__elds_to_erlang__Imports_11, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54);
    }
#line 140 "elds_to_erlang.m"
    {
#line 140 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_5));
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 140 "elds_to_erlang.m"
    }
#line 140 "elds_to_erlang.m"
    {
#line 140 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_55_55, erl_backend__elds_to_erlang__ForeignDecls_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56);
    }
#line 143 "elds_to_erlang.m"
    {
#line 143 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ErlangModuleNameStr_24 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
#line 146 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__InitPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "elds_to_erlang.m"
      {
#line 145 "elds_to_erlang.m"
      }
#line 146 "elds_to_erlang.m"
    else
#line 147 "elds_to_erlang.m"
      {
#line 148 "elds_to_erlang.m"
        {
#line 148 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_INIT ");
        }
#line 149 "elds_to_erlang.m"
        {
#line 149 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
#line 150 "elds_to_erlang.m"
        {
#line 150 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_init\n");
        }
#line 147 "elds_to_erlang.m"
      }
#line 154 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__FinalPreds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "elds_to_erlang.m"
      {
#line 153 "elds_to_erlang.m"
      }
#line 154 "elds_to_erlang.m"
    else
#line 155 "elds_to_erlang.m"
      {
#line 156 "elds_to_erlang.m"
        {
#line 156 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_FINAL ");
        }
#line 157 "elds_to_erlang.m"
        {
#line 157 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
#line 158 "elds_to_erlang.m"
        {
#line 158 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_final\n");
        }
#line 155 "elds_to_erlang.m"
      }
#line 160 "elds_to_erlang.m"
    {
#line 160 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__EnvVarNames_29 = erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(erl_backend__elds_to_erlang__ProcDefns_14);
    }
#line 161 "elds_to_erlang.m"
    {
#line 161 "elds_to_erlang.m"
      mercury__set__fold_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[1], erl_backend__elds_to_erlang__EnvVarNames_29, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68);
    }
#line 164 "elds_to_erlang.m"
    {
#line 164 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% ENDINIT\n");
    }
#line 167 "elds_to_erlang.m"
    {
#line 167 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 167 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[3]));
#line 167 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_7));
#line 167 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 167 "elds_to_erlang.m"
    }
#line 167 "elds_to_erlang.m"
    {
#line 167 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_71_71, erl_backend__elds_to_erlang__ForeignBodies_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72);
    }
#line 173 "elds_to_erlang.m"
#line 173 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__AddMainWrapper_19) {
#line 173 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 173 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 174 "elds_to_erlang.m"
        {
#line 174 "elds_to_erlang.m"
        }
#line 173 "elds_to_erlang.m"
        break;
#line 173 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 171 "elds_to_erlang.m"
        {
#line 171 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_73_73;

#line 172 "elds_to_erlang.m"
          {
#line 172 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_73_73 = erl_backend__elds_to_erlang__main_wrapper_code_0_f_0();
          }
#line 172 "elds_to_erlang.m"
          {
#line 172 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_73_73);
          }
#line 171 "elds_to_erlang.m"
        }
#line 173 "elds_to_erlang.m"
        break;
#line 173 "elds_to_erlang.m"
    }
#line 177 "elds_to_erlang.m"
    {
#line 177 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_init", erl_backend__elds_to_erlang__InitPreds_17);
    }
#line 179 "elds_to_erlang.m"
    {
#line 179 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_final", erl_backend__elds_to_erlang__FinalPreds_18);
    }
#line 183 "elds_to_erlang.m"
    {
#line 183 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[4]));
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_8));
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 183 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 183 "elds_to_erlang.m"
    }
#line 183 "elds_to_erlang.m"
    {
#line 183 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_79_79, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80);
    }
#line 184 "elds_to_erlang.m"
    {
#line 184 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[5]));
#line 184 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_9));
#line 184 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 184 "elds_to_erlang.m"
    }
#line 184 "elds_to_erlang.m"
    {
#line 184 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_81_81, erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82);
    }
#line 186 "elds_to_erlang.m"
    {
#line 186 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[6]));
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_10));
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 186 "elds_to_erlang.m"
    }
#line 186 "elds_to_erlang.m"
    {
#line 186 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_83_83, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31);
    }
#line 110 "elds_to_erlang.m"
  }
#line 107 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1242 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1242 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1242 "elds_to_erlang.m"
{
#line 1242 "elds_to_erlang.m"
  {
#line 1242 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1242 "elds_to_erlang.m"
    {
#line 1242 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
#line 1242 "elds_to_erlang.m"
      return;
    }
#line 1242 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
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
#line 491 "elds_to_erlang.m"
  {
#line 491 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 491 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 0)));
#line 491 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 1)));
#line 491 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 2)));
#line 492 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___EnvVarNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 3)));

#line 520 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Body_10)) == (MR_mktag((MR_Integer) 0))))
#line 494 "elds_to_erlang.m"
      {
#line 494 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Clause_12 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Body_10), (MR_Integer) 0);
#line 516 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Context_20;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ClauseBody_14;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Fun_15;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__FunBody_18;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_28_28;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_29_29;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_30_30;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_31_31;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_32_32;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_33_33;
#line 500 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___HeadVars_13;
#line 501 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___CallArgs_16;
#line 502 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___FunVars_17;
#line 504 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang___Code_19;
#line 506 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___PlaceOutputs_21;

#line 495 "elds_to_erlang.m"
        {
#line 495 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 500 "elds_to_erlang.m"
        erl_backend__elds_to_erlang___HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 0)));
#line 500 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__ClauseBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 1)));
#line 501 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__ClauseBody_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 501 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 501 "elds_to_erlang.m"
          {
#line 501 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 1)));
#line 501 "elds_to_erlang.m"
            erl_backend__elds_to_erlang___CallArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 2)));
#line 501 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 501 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 501 "elds_to_erlang.m"
              {
#line 501 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Fun_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_28_28, (MR_Integer) 0)));
#line 502 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Fun_15)) == (MR_mktag((MR_Integer) 0)));
#line 502 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 502 "elds_to_erlang.m"
                  {
#line 502 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_29_29 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Fun_15), (MR_Integer) 0);
#line 502 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang___FunVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, (MR_Integer) 0)));
#line 502 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__FunBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, (MR_Integer) 1)));
#line 503 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__FunBody_18)) == (MR_mktag((MR_Integer) 1)));
#line 503 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 503 "elds_to_erlang.m"
                      {
#line 503 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__FunBody_18, (MR_Integer) 0)));
#line 504 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 504 "elds_to_erlang.m"
                        if (erl_backend__elds_to_erlang__succeeded)
#line 504 "elds_to_erlang.m"
                          {
#line 504 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_30_30, (MR_Integer) 0)));
#line 504 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_30_30, (MR_Integer) 1)));
#line 504 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 504 "elds_to_erlang.m"
                            if (erl_backend__elds_to_erlang__succeeded)
#line 504 "elds_to_erlang.m"
                              {
#line 504 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang___Code_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 1)));
#line 504 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 2)));
#line 506 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 506 "elds_to_erlang.m"
                                if (erl_backend__elds_to_erlang__succeeded)
#line 506 "elds_to_erlang.m"
                                  {
#line 506 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang___PlaceOutputs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, (MR_Integer) 0)));
#line 506 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, (MR_Integer) 1)));
#line 506 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "elds_to_erlang.m"
                                  }
#line 504 "elds_to_erlang.m"
                              }
#line 504 "elds_to_erlang.m"
                          }
#line 503 "elds_to_erlang.m"
                      }
#line 502 "elds_to_erlang.m"
                  }
#line 501 "elds_to_erlang.m"
              }
#line 501 "elds_to_erlang.m"
          }
#line 516 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 511 "elds_to_erlang.m"
          {
#line 511 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__LineNr_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 1)));
#line 511 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__FileName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 0)));
#line 511 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__LineNr_46 = (erl_backend__elds_to_erlang__LineNr_23 - (MR_Integer) 3);
#line 1242 "elds_to_erlang.m"
            MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51;

#line 450 "elds_to_erlang.m"
            {
#line 450 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "-file(\"");
            }
#line 1242 "elds_to_erlang.m"
            {
#line 1242 "elds_to_erlang.m"
              mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[0], erl_backend__elds_to_erlang__FileName_45, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51);
            }
#line 452 "elds_to_erlang.m"
            {
#line 452 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 453 "elds_to_erlang.m"
            {
#line 453 "elds_to_erlang.m"
              mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_46);
            }
#line 454 "elds_to_erlang.m"
            {
#line 454 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) ").\n");
            }
#line 513 "elds_to_erlang.m"
            {
#line 513 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
#line 514 "elds_to_erlang.m"
            {
#line 514 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
            }
#line 515 "elds_to_erlang.m"
            {
#line 515 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
#line 515 "elds_to_erlang.m"
              return;
            }
#line 511 "elds_to_erlang.m"
          }
#line 516 "elds_to_erlang.m"
        else
#line 517 "elds_to_erlang.m"
          {
#line 517 "elds_to_erlang.m"
            {
#line 517 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
#line 518 "elds_to_erlang.m"
            {
#line 518 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
#line 518 "elds_to_erlang.m"
              return;
            }
#line 517 "elds_to_erlang.m"
          }
#line 494 "elds_to_erlang.m"
      }
#line 520 "elds_to_erlang.m"
    else
#line 521 "elds_to_erlang.m"
      {
#line 521 "elds_to_erlang.m"
      }
#line 491 "elds_to_erlang.m"
  }
#line 39 "elds_to_erlang.m"
}

#line 94 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
#line 94 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 94 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 94 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
#line 94 "elds_to_erlang.m"
{
#line 94 "elds_to_erlang.m"
  {
#line 94 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 94 "elds_to_erlang.m"
    {
#line 94 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_hrl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
#line 94 "elds_to_erlang.m"
      return;
    }
#line 94 "elds_to_erlang.m"
  }
#line 94 "elds_to_erlang.m"
}

#line 87 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
#line 87 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 87 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 87 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
#line 87 "elds_to_erlang.m"
{
#line 87 "elds_to_erlang.m"
  {
#line 87 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 87 "elds_to_erlang.m"
    {
#line 87 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_erl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
#line 87 "elds_to_erlang.m"
      return;
    }
#line 87 "elds_to_erlang.m"
  }
#line 87 "elds_to_erlang.m"
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
#line 78 "elds_to_erlang.m"
  {
#line 78 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Globals_11;
#line 78 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__SourceFileName_12;
#line 78 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__TargetFileName_13;
#line 78 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeaderFileName_14;
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TargetCodeSucceeded_15;
#line 78 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 79 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));

#line 80 "elds_to_erlang.m"
    {
#line 80 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_11);
    }
#line 81 "elds_to_erlang.m"
    {
#line 81 "elds_to_erlang.m"
      parse_tree__file_names__module_source_filename_5_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, &erl_backend__elds_to_erlang__SourceFileName_12);
    }
#line 82 "elds_to_erlang.m"
    {
#line 82 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, (MR_String) ".erl", (MR_Integer) 0, &erl_backend__elds_to_erlang__TargetFileName_13);
    }
#line 84 "elds_to_erlang.m"
    {
#line 84 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, (MR_String) ".hrl", (MR_Integer) 0, &erl_backend__elds_to_erlang__HeaderFileName_14);
    }
#line 87 "elds_to_erlang.m"
    {
#line 87 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 87 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[0]));
#line 87 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_1));
#line 87 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 87 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 87 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
#line 87 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
#line 87 "elds_to_erlang.m"
    }
#line 86 "elds_to_erlang.m"
    {
#line 86 "elds_to_erlang.m"
      libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TargetFileName_13, erl_backend__elds_to_erlang__V_26_26, &erl_backend__elds_to_erlang__TargetCodeSucceeded_15);
    }
#line 102 "elds_to_erlang.m"
#line 102 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__TargetCodeSucceeded_15) {
#line 102 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 102 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 104 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__Succeeded_8 = (MR_Integer) 0;
#line 102 "elds_to_erlang.m"
        break;
#line 102 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 90 "elds_to_erlang.m"
        {
#line 90 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__TmpHeaderFileName_16;
#line 90 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_29_29;

#line 92 "elds_to_erlang.m"
          {
#line 92 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__TmpHeaderFileName_16 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__HeaderFileName_14, (MR_String) ".tmp");
          }
#line 94 "elds_to_erlang.m"
          {
#line 94 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 94 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[1]));
#line 94 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_2));
#line 94 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 94 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Name_10));
#line 94 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
#line 94 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
#line 94 "elds_to_erlang.m"
          }
#line 93 "elds_to_erlang.m"
          {
#line 93 "elds_to_erlang.m"
            libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TmpHeaderFileName_16, erl_backend__elds_to_erlang__V_29_29, erl_backend__elds_to_erlang__Succeeded_8);
          }
#line 99 "elds_to_erlang.m"
#line 99 "elds_to_erlang.m"
          switch (*erl_backend__elds_to_erlang__Succeeded_8) {
#line 99 "elds_to_erlang.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 99 "elds_to_erlang.m"
            case (MR_Integer) 0:
#line 100 "elds_to_erlang.m"
              {
#line 100 "elds_to_erlang.m"
              }
#line 99 "elds_to_erlang.m"
              break;
#line 99 "elds_to_erlang.m"
            case (MR_Integer) 1:
#line 98 "elds_to_erlang.m"
              {
#line 98 "elds_to_erlang.m"
                parse_tree__module_cmds__update_interface_4_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__HeaderFileName_14);
#line 98 "elds_to_erlang.m"
                return;
              }
#line 99 "elds_to_erlang.m"
              break;
#line 99 "elds_to_erlang.m"
          }
#line 90 "elds_to_erlang.m"
        }
#line 102 "elds_to_erlang.m"
        break;
#line 102 "elds_to_erlang.m"
    }
#line 78 "elds_to_erlang.m"
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
