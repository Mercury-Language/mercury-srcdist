/*
** Automatically generated from `elds_to_erlang.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 289 "elds_to_erlang.m"
struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s {
#line 289 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3;
#line 291 "elds_to_erlang.m"
  MR_bool erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded;
#line 291 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6;
#line 295 "elds_to_erlang.m"
  jmp_buf erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0;
#line 295 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7;
#line 295 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8;
#line 295 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9;
#line 295 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12;
#line 295 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7;
#line 289 "elds_to_erlang.m"
};


#line 174 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

#line 177 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0;

#line 183 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1;

#line 186 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2];

#line 189 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2];

#line 192 "erl_backend.elds_to_erlang.c"
static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2];

#line 195 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
#line 198 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 200 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

#line 203 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
#line 206 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 208 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 210 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

#line 213 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
#line 216 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 218 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2);

#line 221 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
#line 224 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 226 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 228 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1238 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
#line 1238 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3);

#line 1238 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1355 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
#line 1355 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3);

#line 1355 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1375 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void);

#line 1363 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
#line 1363 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4);

#line 1357 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
#line 1357 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4);

#line 1340 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
#line 1340 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 1340 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

#line 1335 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
#line 1335 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1335 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1335 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1335 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1320 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
#line 1320 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
#line 1320 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 1320 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

#line 1248 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
#line 1248 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1248 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__Char_6);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
#line 1242 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1242 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_6);

#line 1208 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
#line 1208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Binop_4);

#line 1201 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
#line 1201 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1152 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
#line 1152 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4);

#line 1144 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
#line 1144 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_3);

#line 1054 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
#line 1054 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__PredName_12,
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
#line 1054 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
#line 1054 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
#line 1054 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
#line 1054 "elds_to_erlang.m"
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18);

#line 998 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
#line 998 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name0_3);

#line 935 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
#line 935 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 935 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiId_6);

#line 920 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
#line 920 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 920 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

#line 911 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
#line 911 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__C_4);

#line 908 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 908 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 902 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
#line 902 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4);

#line 908 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 908 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 895 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
#line 895 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
#line 895 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Var_6);

#line 590 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 590 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 590 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 590 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 861 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
#line 861 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 861 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 861 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 861 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Args_10);

#line 842 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
#line 842 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_5,
#line 842 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
#line 842 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
#line 842 "elds_to_erlang.m"
  MR_Integer * erl_backend__elds_to_erlang__Pos_8);

#line 830 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
#line 830 "elds_to_erlang.m"
  MR_Float erl_backend__elds_to_erlang__Float_4);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 771 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
#line 771 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 771 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 771 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 771 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Term_10);

#line 757 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
#line 757 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 757 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 757 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 757 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Catch_10);

#line 747 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
#line 747 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 747 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 747 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 747 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

#line 677 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
#line 677 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 677 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 677 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 677 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 742 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
#line 742 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 742 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 742 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 742 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 662 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
#line 662 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 662 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 662 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 662 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 602 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
#line 602 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 602 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 602 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 602 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10);

#line 592 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
#line 592 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 592 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 592 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 592 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10);

#line 590 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 590 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 585 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
#line 585 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 585 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 585 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 585 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Exprs_10);

#line 570 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
#line 570 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
#line 570 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 570 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
#line 570 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4);

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 553 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
#line 553 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 553 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 553 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 553 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_10);

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 545 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
#line 545 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 545 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
#line 545 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_8);

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 536 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
#line 536 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 536 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6);

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 527 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
#line 527 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 527 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6);

#line 484 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
#line 484 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 484 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6);

#line 479 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
#line 479 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 479 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 479 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 479 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 468 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
#line 468 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 468 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name_7,
#line 468 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 459 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 424 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
#line 424 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 424 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 415 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
#line 415 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 415 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 404 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
#line 404 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Globals_5,
#line 404 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Import_6);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 395 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
#line 395 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__EnvVarName_4);

#line 391 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
#line 391 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3);

#line 389 "elds_to_erlang.m"
static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
#line 389 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 389 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1);

#line 386 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
#line 386 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3);

#line 305 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void);

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg);

#line 289 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
#line 289 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3);

#line 254 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
#line 254 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
#line 254 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
#line 254 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8);

#line 237 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
#line 237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
#line 237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
#line 237 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16);

#line 226 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
#line 226 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
#line 226 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
#line 226 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3);

#line 208 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
#line 208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_8,
#line 208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
#line 208 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19);

#line 191 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
#line 191 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_4);

#line 189 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
#line 189 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 189 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 189 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 189 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 187 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
#line 187 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 187 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 187 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 187 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 186 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 186 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 186 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 170 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
#line 170 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 170 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 170 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 170 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 164 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
#line 164 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 164 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 164 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 164 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 143 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
#line 143 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 143 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 143 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 143 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 140 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 140 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 140 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 130 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 130 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 130 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 128 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 128 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 128 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5);

#line 127 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
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

#line 110 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
#line 110 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 110 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 110 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8);

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3);

#line 97 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
#line 97 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 97 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 97 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2);

#line 90 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
#line 90 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 90 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 90 "elds_to_erlang.m"
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


#line 1203 "elds_to_erlang.m"
/* sealed */ struct erl_backend__elds_to_erlang__vector_common_type_10_0_s {
#line 1203 "elds_to_erlang.m"
  const MR_String erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;
#line 1203 "elds_to_erlang.m"
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



#line 1610 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1618 "erl_backend.elds_to_erlang.c"
static const MR_FA_PseudoTypeInfo_Struct1 erl_backend__elds_to_erlang__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1626 "erl_backend.elds_to_erlang.c"
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

#line 1643 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0 = {
  (MR_String) "in_string",
  (MR_Integer) 0
};

#line 1649 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDesc erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1 = {
  (MR_String) "in_atom",
  (MR_Integer) 1
};

#line 1655 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_value_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1
};

#line 1661 "erl_backend.elds_to_erlang.c"
static const MR_EnumFunctorDescPtr erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_name_ordered_string_or_atom_0[2] = {
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_1,
  &erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__enum_functor_desc_string_or_atom_0_0
};

#line 1667 "erl_backend.elds_to_erlang.c"
static const MR_Integer erl_backend__elds_to_erlang__erl_backend__elds_to_erlang__functor_number_map_string_or_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1673 "erl_backend.elds_to_erlang.c"
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

#line 1690 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0_10001(
#line 1693 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1695 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
#line 1697 "erl_backend.elds_to_erlang.c"
{
#line 1699 "erl_backend.elds_to_erlang.c"
  {
#line 1701 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1704 "erl_backend.elds_to_erlang.c"
    {
#line 1706 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____indent_0_0(((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
#line 1709 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1711 "erl_backend.elds_to_erlang.c"
  }
#line 1713 "erl_backend.elds_to_erlang.c"
}

#line 1716 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0_10001(
#line 1719 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1721 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1723 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1725 "erl_backend.elds_to_erlang.c"
{
#line 1727 "erl_backend.elds_to_erlang.c"
  {
#line 1729 "erl_backend.elds_to_erlang.c"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

#line 1732 "erl_backend.elds_to_erlang.c"
    {
#line 1734 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang____Compare____indent_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Integer) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
#line 1737 "erl_backend.elds_to_erlang.c"
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
#line 1739 "erl_backend.elds_to_erlang.c"
  }
#line 1741 "erl_backend.elds_to_erlang.c"
}

#line 1744 "erl_backend.elds_to_erlang.c"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0_10001(
#line 1747 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1749 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2)
#line 1751 "erl_backend.elds_to_erlang.c"
{
#line 1753 "erl_backend.elds_to_erlang.c"
  {
#line 1755 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1758 "erl_backend.elds_to_erlang.c"
    {
#line 1760 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2));
    }
#line 1763 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1765 "erl_backend.elds_to_erlang.c"
  }
#line 1767 "erl_backend.elds_to_erlang.c"
}

#line 1770 "erl_backend.elds_to_erlang.c"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0_10001(
#line 1773 "erl_backend.elds_to_erlang.c"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1775 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1777 "erl_backend.elds_to_erlang.c"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1779 "erl_backend.elds_to_erlang.c"
{
#line 1781 "erl_backend.elds_to_erlang.c"
  {
#line 1783 "erl_backend.elds_to_erlang.c"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__1_1;

#line 1786 "erl_backend.elds_to_erlang.c"
    {
#line 1788 "erl_backend.elds_to_erlang.c"
      erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(&erl_backend__elds_to_erlang__conv0_HeadVar__1_1, ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_3));
    }
#line 1791 "erl_backend.elds_to_erlang.c"
    *erl_backend__elds_to_erlang__wrapper_arg_1 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__1_1));
#line 1793 "erl_backend.elds_to_erlang.c"
  }
#line 1795 "erl_backend.elds_to_erlang.c"
}

#line 1238 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____string_or_atom_0_0(
#line 1238 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__3_3)
#line 1238 "elds_to_erlang.m"
{
#line 1238 "elds_to_erlang.m"
  {
#line 1238 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1238 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1238 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = (MR_Integer) erl_backend__elds_to_erlang__HeadVar__3_3;

#line 1238 "elds_to_erlang.m"
    {
#line 1238 "elds_to_erlang.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
    }
#line 1238 "elds_to_erlang.m"
  }
#line 1238 "elds_to_erlang.m"
}

#line 1238 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____string_or_atom_0_0(
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_1,
#line 1238 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2)
#line 1238 "elds_to_erlang.m"
{
#line 1837 "erl_backend.elds_to_erlang.c"
  {
#line 1839 "erl_backend.elds_to_erlang.c"
    MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__HeadVar__2_1 == erl_backend__elds_to_erlang__HeadVar__2_2);

#line 1842 "erl_backend.elds_to_erlang.c"
    return erl_backend__elds_to_erlang__succeeded;
#line 1844 "erl_backend.elds_to_erlang.c"
  }
#line 1238 "elds_to_erlang.m"
}

#line 1355 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang____Compare____indent_0_0(
#line 1355 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2,
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3)
#line 1355 "elds_to_erlang.m"
{
#line 1355 "elds_to_erlang.m"
  {
#line 1355 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1355 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_4 = erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1355 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_5 = erl_backend__elds_to_erlang__HeadVar__3_3;

#line 1355 "elds_to_erlang.m"
    {
#line 1355 "elds_to_erlang.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__Cast_HeadVar1_4, erl_backend__elds_to_erlang__Cast_HeadVar2_5);
    }
#line 1355 "elds_to_erlang.m"
  }
#line 1355 "elds_to_erlang.m"
}

#line 1355 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang____Unify____indent_0_0(
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__1_1,
#line 1355 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__2_2)
#line 1355 "elds_to_erlang.m"
{
#line 1355 "elds_to_erlang.m"
  {
#line 1355 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1355 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar1_3 = erl_backend__elds_to_erlang__HeadVar__1_1;
#line 1355 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Cast_HeadVar2_4 = erl_backend__elds_to_erlang__HeadVar__2_2;

#line 1355 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Cast_HeadVar1_3 == erl_backend__elds_to_erlang__Cast_HeadVar2_4);
#line 1355 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__succeeded;
#line 1355 "elds_to_erlang.m"
  }
#line 1355 "elds_to_erlang.m"
}

#line 1375 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__space_2_p_0(void)
#line 1375 "elds_to_erlang.m"
{
#line 1377 "elds_to_erlang.m"
  {
#line 1377 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1378 "elds_to_erlang.m"
    {
#line 1378 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
#line 1377 "elds_to_erlang.m"
  }
#line 1375 "elds_to_erlang.m"
}

#line 1363 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__indent_line_3_p_0(
#line 1363 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4)
#line 1363 "elds_to_erlang.m"
{
#line 1366 "elds_to_erlang.m"
  while (MR_TRUE)
#line 1366 "elds_to_erlang.m"
    {
#line 1366 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 1366 "elds_to_erlang.m"
      {
#line 1366 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__N_4 <= (MR_Integer) 0);

#line 1366 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1366 "elds_to_erlang.m"
          {
#line 1366 "elds_to_erlang.m"
          }
#line 1366 "elds_to_erlang.m"
        else
#line 1369 "elds_to_erlang.m"
          {
#line 1369 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__V_11_11;

#line 1369 "elds_to_erlang.m"
            {
#line 1369 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "  ");
            }
#line 1370 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_11_11 = (erl_backend__elds_to_erlang__N_4 - (MR_Integer) 1);
#line 1370 "elds_to_erlang.m"
            /* direct tailcall eliminated */
#line 1370 "elds_to_erlang.m"
            {
#line 1370 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__N__tmp_copy_4 = erl_backend__elds_to_erlang__V_11_11;

#line 1370 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__N_4 = erl_backend__elds_to_erlang__N__tmp_copy_4;
#line 1370 "elds_to_erlang.m"
            }
#line 1370 "elds_to_erlang.m"
            continue;
#line 1369 "elds_to_erlang.m"
          }
#line 1366 "elds_to_erlang.m"
      }
#line 1366 "elds_to_erlang.m"
      break;
#line 1366 "elds_to_erlang.m"
    }
#line 1363 "elds_to_erlang.m"
}

#line 1357 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__nl_indent_line_3_p_0(
#line 1357 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__N_4)
#line 1357 "elds_to_erlang.m"
{
#line 1359 "elds_to_erlang.m"
  {
#line 1359 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__N_4);
    }
#line 1359 "elds_to_erlang.m"
  }
#line 1357 "elds_to_erlang.m"
}

#line 1340 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(
#line 1340 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 1340 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
#line 1340 "elds_to_erlang.m"
{
#line 1343 "elds_to_erlang.m"
  {
#line 1343 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1343 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__IsLocal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));
#line 1344 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
#line 1344 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
#line 1344 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));

#line 1347 "elds_to_erlang.m"
#line 1347 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__IsLocal_8) {
#line 1347 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1347 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1349 "elds_to_erlang.m"
        {
#line 1349 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__ForeignDecl_6);
        }
#line 1347 "elds_to_erlang.m"
        break;
#line 1347 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1346 "elds_to_erlang.m"
        {
#line 1346 "elds_to_erlang.m"
        }
#line 1347 "elds_to_erlang.m"
        break;
#line 1347 "elds_to_erlang.m"
    }
#line 1343 "elds_to_erlang.m"
  }
#line 1340 "elds_to_erlang.m"
}

#line 1335 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1(
#line 1335 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1335 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1335 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1335 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1335 "elds_to_erlang.m"
{
#line 1335 "elds_to_erlang.m"
  {
#line 1335 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1335 "elds_to_erlang.m"
    {
#line 1335 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_exported_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1335 "elds_to_erlang.m"
  }
#line 1335 "elds_to_erlang.m"
}

#line 1320 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_hrl_file_5_p_0(
#line 1320 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_6,
#line 1320 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 1320 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
#line 1320 "elds_to_erlang.m"
{
#line 1323 "elds_to_erlang.m"
  {
#line 1323 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1323 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__MangledModuleName_10;
#line 1323 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__UppercaseModuleName_11;
#line 1323 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__GuardMacroName_12;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_13;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_21_21;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_22_22;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_24_24;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_30_30;
#line 1323 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Version_51;
#line 1323 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Fullarch_52;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_56_56;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_58_58;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_59_59;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_61_61;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_63_63;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_65_65;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_66_66;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_68_68;
#line 1323 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_70_70;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_34_34;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_35_35;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_36_36;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_37_37;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_40_40;
#line 1334 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_41_41;
#line 1335 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31;

#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_51, &erl_backend__elds_to_erlang__Fullarch_52);
    }
#line 200 "elds_to_erlang.m"
    {
#line 200 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_70_70, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_52));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
#line 200 "elds_to_erlang.m"
    }
#line 200 "elds_to_erlang.m"
    {
#line 200 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_68_68, 0) = ((MR_Box) ((MR_String) "% configured for "));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_68_68, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_70_70));
#line 200 "elds_to_erlang.m"
    }
#line 199 "elds_to_erlang.m"
    {
#line 199 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_66_66, 0) = ((MR_Box) ((MR_String) "\n"));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_66_66, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_68_68));
#line 199 "elds_to_erlang.m"
    }
#line 199 "elds_to_erlang.m"
    {
#line 199 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_65_65, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_51));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_65_65, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_66_66));
#line 199 "elds_to_erlang.m"
    }
#line 199 "elds_to_erlang.m"
    {
#line 199 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_63_63, 0) = ((MR_Box) ((MR_String) "% version "));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_63_63, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_65_65));
#line 199 "elds_to_erlang.m"
    }
#line 198 "elds_to_erlang.m"
    {
#line 198 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_61_61, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
#line 198 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_61_61, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_63_63));
#line 198 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_59_59, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_59_59, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_61_61));
#line 197 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_58_58, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_58_58, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_59_59));
#line 197 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_56_56, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_56_56, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_58_58));
#line 197 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_53_53, 0) = ((MR_Box) ((MR_String) "%\n"));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_53_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_56_56));
#line 196 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_53_53);
    }
#line 1326 "elds_to_erlang.m"
    {
#line 1326 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__MangledModuleName_10 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(erl_backend__elds_to_erlang__ModuleName_6);
    }
#line 1327 "elds_to_erlang.m"
    {
#line 1327 "elds_to_erlang.m"
      mercury__string__to_upper_2_p_0(erl_backend__elds_to_erlang__MangledModuleName_10, &erl_backend__elds_to_erlang__UppercaseModuleName_11);
    }
#line 1328 "elds_to_erlang.m"
    {
#line 1328 "elds_to_erlang.m"
      mercury__string__append_3_p_2(erl_backend__elds_to_erlang__UppercaseModuleName_11, (MR_String) "_HRL", &erl_backend__elds_to_erlang__GuardMacroName_12);
    }
#line 1331 "elds_to_erlang.m"
    {
#line 1331 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[6])));
#line 1331 "elds_to_erlang.m"
    }
#line 1331 "elds_to_erlang.m"
    {
#line 1331 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_24_24, 0) = ((MR_Box) ((MR_String) "-define("));
#line 1331 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_24_24, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_26_26));
#line 1331 "elds_to_erlang.m"
    }
#line 1330 "elds_to_erlang.m"
    {
#line 1330 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) ((MR_String) ").\n"));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_24_24));
#line 1330 "elds_to_erlang.m"
    }
#line 1330 "elds_to_erlang.m"
    {
#line 1330 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_21_21, 0) = ((MR_Box) (erl_backend__elds_to_erlang__GuardMacroName_12));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_21_21, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 1330 "elds_to_erlang.m"
    }
#line 1330 "elds_to_erlang.m"
    {
#line 1330 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 0) = ((MR_Box) ((MR_String) "-ifndef("));
#line 1330 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_21_21));
#line 1330 "elds_to_erlang.m"
    }
#line 1329 "elds_to_erlang.m"
    {
#line 1329 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_18_18);
    }
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ForeignDecls_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 1334 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
#line 1335 "elds_to_erlang.m"
    {
#line 1335 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1335 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
#line 1335 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_hrl_file_5_p_0_1));
#line 1335 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1335 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_30_30, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 1335 "elds_to_erlang.m"
    }
#line 1335 "elds_to_erlang.m"
    {
#line 1335 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_30_30, erl_backend__elds_to_erlang__ForeignDecls_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_31_31);
    }
#line 1338 "elds_to_erlang.m"
    {
#line 1338 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-endif.\n");
    }
#line 1323 "elds_to_erlang.m"
  }
#line 1320 "elds_to_erlang.m"
}

#line 1248 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(
#line 1248 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1248 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__Char_6)
#line 1248 "elds_to_erlang.m"
{
#line 1251 "elds_to_erlang.m"
  {
#line 1251 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1251 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Int_8;

#line 1252 "elds_to_erlang.m"
    {
#line 1252 "elds_to_erlang.m"
      mercury__char__to_int_2_p_0(erl_backend__elds_to_erlang__Char_6, &erl_backend__elds_to_erlang__Int_8);
    }
#line 1254 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_Integer) 32 <= erl_backend__elds_to_erlang__Int_8);
#line 1254 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1254 "elds_to_erlang.m"
      {
#line 1255 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 92);
#line 1255 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1254 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1259 "elds_to_erlang.m"
#line 1259 "elds_to_erlang.m"
          switch (erl_backend__elds_to_erlang__StringOrAtom_5) {
#line 1259 "elds_to_erlang.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1259 "elds_to_erlang.m"
            case (MR_Integer) 1:
#line 1261 "elds_to_erlang.m"
              {
#line 1261 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 39);
#line 1261 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1261 "elds_to_erlang.m"
              }
#line 1259 "elds_to_erlang.m"
              break;
#line 1259 "elds_to_erlang.m"
            case (MR_Integer) 0:
#line 1258 "elds_to_erlang.m"
              {
#line 1258 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_6 == (MR_Char) 34);
#line 1258 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1258 "elds_to_erlang.m"
              }
#line 1259 "elds_to_erlang.m"
              break;
#line 1259 "elds_to_erlang.m"
          }
#line 1254 "elds_to_erlang.m"
      }
#line 1253 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1264 "elds_to_erlang.m"
      {
#line 1264 "elds_to_erlang.m"
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_6);
      }
#line 1253 "elds_to_erlang.m"
    else
#line 1265 "elds_to_erlang.m"
      {
#line 1265 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Esc_9;

#line 1278 "elds_to_erlang.m"
#line 1278 "elds_to_erlang.m"
        switch (erl_backend__elds_to_erlang__Int_8) {
#line 1278 "elds_to_erlang.m"
          default:
#line 1278 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 1287 "elds_to_erlang.m"
            {
#line 1287 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^a";
#line 1287 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1287 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 2:
#line 1288 "elds_to_erlang.m"
            {
#line 1288 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^b";
#line 1288 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1288 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 3:
#line 1289 "elds_to_erlang.m"
            {
#line 1289 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^c";
#line 1289 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1289 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 4:
#line 1290 "elds_to_erlang.m"
            {
#line 1290 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^d";
#line 1290 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1290 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 5:
#line 1291 "elds_to_erlang.m"
            {
#line 1291 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^e";
#line 1291 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1291 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 6:
#line 1292 "elds_to_erlang.m"
            {
#line 1292 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^f";
#line 1292 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1292 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 7:
#line 1293 "elds_to_erlang.m"
            {
#line 1293 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^g";
#line 1293 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1293 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 8:
#line 1278 "elds_to_erlang.m"
            {
#line 1278 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\b";
#line 1278 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1278 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 9:
#line 1285 "elds_to_erlang.m"
            {
#line 1285 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\t";
#line 1285 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1285 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 10:
#line 1282 "elds_to_erlang.m"
            {
#line 1282 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\n";
#line 1282 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1282 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 11:
#line 1286 "elds_to_erlang.m"
            {
#line 1286 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\v";
#line 1286 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1286 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 12:
#line 1281 "elds_to_erlang.m"
            {
#line 1281 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\f";
#line 1281 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1281 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 13:
#line 1283 "elds_to_erlang.m"
            {
#line 1283 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\r";
#line 1283 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1283 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 14:
#line 1300 "elds_to_erlang.m"
            {
#line 1300 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^n";
#line 1300 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1300 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 15:
#line 1301 "elds_to_erlang.m"
            {
#line 1301 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^o";
#line 1301 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1301 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 16:
#line 1302 "elds_to_erlang.m"
            {
#line 1302 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^p";
#line 1302 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1302 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 17:
#line 1303 "elds_to_erlang.m"
            {
#line 1303 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^q";
#line 1303 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1303 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 18:
#line 1304 "elds_to_erlang.m"
            {
#line 1304 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^r";
#line 1304 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1304 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 19:
#line 1305 "elds_to_erlang.m"
            {
#line 1305 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^s";
#line 1305 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1305 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 20:
#line 1306 "elds_to_erlang.m"
            {
#line 1306 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^t";
#line 1306 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1306 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 21:
#line 1307 "elds_to_erlang.m"
            {
#line 1307 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^u";
#line 1307 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1307 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 22:
#line 1308 "elds_to_erlang.m"
            {
#line 1308 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^v";
#line 1308 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1308 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 23:
#line 1309 "elds_to_erlang.m"
            {
#line 1309 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^w";
#line 1309 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1309 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 24:
#line 1310 "elds_to_erlang.m"
            {
#line 1310 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^x";
#line 1310 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1310 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 25:
#line 1311 "elds_to_erlang.m"
            {
#line 1311 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^y";
#line 1311 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1311 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 26:
#line 1312 "elds_to_erlang.m"
            {
#line 1312 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\^z";
#line 1312 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1312 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 27:
#line 1280 "elds_to_erlang.m"
            {
#line 1280 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\e";
#line 1280 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1280 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 32:
#line 1284 "elds_to_erlang.m"
            {
#line 1284 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\s";
#line 1284 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1284 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 34:
#line 1314 "elds_to_erlang.m"
            {
#line 1314 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\"";
#line 1314 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1314 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 39:
#line 1313 "elds_to_erlang.m"
            {
#line 1313 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\'";
#line 1313 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1313 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 92:
#line 1315 "elds_to_erlang.m"
            {
#line 1315 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\\\";
#line 1315 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1315 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
          case (MR_Integer) 127:
#line 1279 "elds_to_erlang.m"
            {
#line 1279 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Esc_9 = (MR_String) "\\d";
#line 1279 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1279 "elds_to_erlang.m"
            }
#line 1278 "elds_to_erlang.m"
            break;
#line 1278 "elds_to_erlang.m"
        }
#line 1265 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1268 "elds_to_erlang.m"
          {
#line 1268 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_9);
          }
#line 1265 "elds_to_erlang.m"
        else
#line 1270 "elds_to_erlang.m"
          {
#line 1270 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__OctalString_10;

#line 1270 "elds_to_erlang.m"
            {
#line 1270 "elds_to_erlang.m"
              mercury__string__int_to_base_string_3_p_0(erl_backend__elds_to_erlang__Int_8, (MR_Integer) 8, &erl_backend__elds_to_erlang__OctalString_10);
            }
#line 1271 "elds_to_erlang.m"
            {
#line 1271 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 92);
            }
#line 1272 "elds_to_erlang.m"
            {
#line 1272 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__OctalString_10);
            }
#line 1270 "elds_to_erlang.m"
          }
#line 1265 "elds_to_erlang.m"
      }
#line 1251 "elds_to_erlang.m"
  }
#line 1248 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 1242 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__write_with_escaping_4_p_0(
#line 1242 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__StringOrAtom_5,
#line 1242 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_6)
#line 1242 "elds_to_erlang.m"
{
#line 1245 "elds_to_erlang.m"
  {
#line 1245 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1245 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[0]));
#line 1246 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__write_with_escaping_4_p_0_1));
#line 1246 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1246 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_10_10, 3) = ((MR_Box) (erl_backend__elds_to_erlang__StringOrAtom_5));
#line 1246 "elds_to_erlang.m"
    }
#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_10_10, erl_backend__elds_to_erlang__String_6, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9);
    }
#line 1245 "elds_to_erlang.m"
  }
#line 1242 "elds_to_erlang.m"
}

#line 1208 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_binop_3_p_0(
#line 1208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Binop_4)
#line 1208 "elds_to_erlang.m"
{
#line 1210 "elds_to_erlang.m"
  {
#line 1210 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1210 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_8_8 = ((&erl_backend__elds_to_erlang_vector_common_10[4 + erl_backend__elds_to_erlang__Binop_4]))->erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;

#line 1211 "elds_to_erlang.m"
    {
#line 1211 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_8_8);
    }
#line 1378 "elds_to_erlang.m"
    {
#line 1378 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
#line 1210 "elds_to_erlang.m"
  }
#line 1208 "elds_to_erlang.m"
}

#line 1201 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(
#line 1201 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1)
#line 1201 "elds_to_erlang.m"
{
#line 1203 "elds_to_erlang.m"
  {
#line 1203 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1203 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeadVar__2_2 = ((&erl_backend__elds_to_erlang_vector_common_10[0 + erl_backend__elds_to_erlang__HeadVar__1_1]))->erl_backend__elds_to_erlang__vector_common_type_10_0__vct_10_f_0;

#line 1203 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 1203 "elds_to_erlang.m"
  }
#line 1201 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 1152 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_atom_3_p_0(
#line 1152 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4)
#line 1152 "elds_to_erlang.m"
{
#line 1155 "elds_to_erlang.m"
  {
#line 1155 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1156 "elds_to_erlang.m"
    MR_Char erl_backend__elds_to_erlang__FirstChar_6;

#line 1156 "elds_to_erlang.m"
    {
#line 1156 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mercury__string__index_3_p_0(erl_backend__elds_to_erlang__String_4, (MR_Integer) 0, &erl_backend__elds_to_erlang__FirstChar_6);
    }
#line 1156 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1156 "elds_to_erlang.m"
      {
#line 1157 "elds_to_erlang.m"
        {
#line 1157 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = mercury__char__is_lower_1_p_0(erl_backend__elds_to_erlang__FirstChar_6);
        }
#line 1156 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 1156 "elds_to_erlang.m"
          {
#line 1158 "elds_to_erlang.m"
            {
#line 1158 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__String_4);
            }
#line 1156 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 1156 "elds_to_erlang.m"
              {
#line 1170 "elds_to_erlang.m"
                {
#line 1170 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) -1;

#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                  switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 0)) {
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 97:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 102:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "after"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 0;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 110:
#line 1170 "elds_to_erlang.m"
                          if (((MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) == (MR_Integer) 100))
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                            switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 3)) {
#line 1170 "elds_to_erlang.m"
                              case (MR_Integer) 0:
#line 1170 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 1;
#line 1170 "elds_to_erlang.m"
                                break;
#line 1170 "elds_to_erlang.m"
                              case (MR_Integer) 97:
#line 1170 "elds_to_erlang.m"
                                if (MR_offset_streq(4, erl_backend__elds_to_erlang__String_4, (MR_String) "andalso"))
#line 1170 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 2;
#line 1170 "elds_to_erlang.m"
                                break;
#line 1170 "elds_to_erlang.m"
                            }
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                      }
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 98:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 97:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "band"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 3;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 101:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "begin"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 4;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 110:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bnot"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 5;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 111:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bor"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 6;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 115:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1170 "elds_to_erlang.m"
                            case (MR_Integer) 108:
#line 1170 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "bsl"))
#line 1170 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 7;
#line 1170 "elds_to_erlang.m"
                              break;
#line 1170 "elds_to_erlang.m"
                            case (MR_Integer) 114:
#line 1170 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "bsr"))
#line 1170 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 8;
#line 1170 "elds_to_erlang.m"
                              break;
#line 1170 "elds_to_erlang.m"
                          }
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 120:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "bxor"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 9;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                      }
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 99:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 97:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1170 "elds_to_erlang.m"
                            case (MR_Integer) 115:
#line 1170 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "case"))
#line 1170 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 10;
#line 1170 "elds_to_erlang.m"
                              break;
#line 1170 "elds_to_erlang.m"
                            case (MR_Integer) 116:
#line 1170 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "catch"))
#line 1170 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 11;
#line 1170 "elds_to_erlang.m"
                              break;
#line 1170 "elds_to_erlang.m"
                          }
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 111:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "cond"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 12;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                      }
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 100:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "div"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 13;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 101:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "end"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 14;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 102:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "fun"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 15;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 105:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "if"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 16;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 108:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "let"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 17;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 110:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "not"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 18;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 111:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                      switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) {
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 102:
#line 1170 "elds_to_erlang.m"
                          if (MR_offset_streq(2, erl_backend__elds_to_erlang__String_4, (MR_String) "of"))
#line 1170 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 19;
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                        case (MR_Integer) 114:
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                          switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1170 "elds_to_erlang.m"
                            case (MR_Integer) 0:
#line 1170 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 20;
#line 1170 "elds_to_erlang.m"
                              break;
#line 1170 "elds_to_erlang.m"
                            case (MR_Integer) 101:
#line 1170 "elds_to_erlang.m"
                              if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "orelse"))
#line 1170 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 21;
#line 1170 "elds_to_erlang.m"
                              break;
#line 1170 "elds_to_erlang.m"
                          }
#line 1170 "elds_to_erlang.m"
                          break;
#line 1170 "elds_to_erlang.m"
                      }
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 113:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "query"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 22;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 114:
#line 1170 "elds_to_erlang.m"
                      if (((MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 1)) == (MR_Integer) 101))
#line 1170 "elds_to_erlang.m"
#line 1170 "elds_to_erlang.m"
                        switch (MR_nth_code_unit(erl_backend__elds_to_erlang__String_4, 2)) {
#line 1170 "elds_to_erlang.m"
                          case (MR_Integer) 99:
#line 1170 "elds_to_erlang.m"
                            if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "receive"))
#line 1170 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 23;
#line 1170 "elds_to_erlang.m"
                            break;
#line 1170 "elds_to_erlang.m"
                          case (MR_Integer) 109:
#line 1170 "elds_to_erlang.m"
                            if (MR_offset_streq(3, erl_backend__elds_to_erlang__String_4, (MR_String) "rem"))
#line 1170 "elds_to_erlang.m"
                              erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 24;
#line 1170 "elds_to_erlang.m"
                            break;
#line 1170 "elds_to_erlang.m"
                        }
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 116:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "try"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 25;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 119:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "when"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 26;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                    case (MR_Integer) 120:
#line 1170 "elds_to_erlang.m"
                      if (MR_offset_streq(1, erl_backend__elds_to_erlang__String_4, (MR_String) "xor"))
#line 1170 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__case_num_0 = (MR_Integer) 27;
#line 1170 "elds_to_erlang.m"
                      break;
#line 1170 "elds_to_erlang.m"
                  }
#line 1170 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__case_num_0 < (MR_Integer) 0))
#line 1170 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1170 "elds_to_erlang.m"
                  else
#line 1170 "elds_to_erlang.m"
                    {
#line 1170 "elds_to_erlang.m"
                      /* we found a match; look up the results */
#line 1170 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1170 "elds_to_erlang.m"
                    }
#line 1170 "elds_to_erlang.m"
                }
#line 1159 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1156 "elds_to_erlang.m"
              }
#line 1156 "elds_to_erlang.m"
          }
#line 1156 "elds_to_erlang.m"
      }
#line 1155 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1161 "elds_to_erlang.m"
      {
#line 1161 "elds_to_erlang.m"
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__String_4);
      }
#line 1155 "elds_to_erlang.m"
    else
#line 1163 "elds_to_erlang.m"
      {
#line 1246 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14;

#line 1163 "elds_to_erlang.m"
        {
#line 1163 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 39);
        }
#line 1246 "elds_to_erlang.m"
        {
#line 1246 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[9], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_14_14);
        }
#line 1165 "elds_to_erlang.m"
        {
#line 1165 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 39);
        }
#line 1163 "elds_to_erlang.m"
      }
#line 1155 "elds_to_erlang.m"
  }
#line 1152 "elds_to_erlang.m"
}

#line 1144 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(
#line 1144 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleName_3)
#line 1144 "elds_to_erlang.m"
{
#line 1146 "elds_to_erlang.m"
  {
#line 1146 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1146 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__String_4;
#line 1146 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ErlangModuleName_5;

#line 1147 "elds_to_erlang.m"
    {
#line 1147 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ErlangModuleName_5 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__ModuleName_3);
    }
#line 1148 "elds_to_erlang.m"
    {
#line 1148 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__String_4 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_5, (MR_String) "__");
    }
#line 1146 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__String_4;
#line 1146 "elds_to_erlang.m"
  }
#line 1144 "elds_to_erlang.m"
}

#line 1054 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ThisModule_10,
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredModule_11,
#line 1054 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__PredName_12,
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredOrFunc_13,
#line 1054 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__PredArity_14,
#line 1054 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__ProcId_15,
#line 1054 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredIsImported_16,
#line 1054 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__MaybeExtModule_17,
#line 1054 "elds_to_erlang.m"
  MR_String * erl_backend__elds_to_erlang__ProcNameStr_18)
#line 1054 "elds_to_erlang.m"
{
#line 1059 "elds_to_erlang.m"
  {
#line 1059 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Suffix_19;
#line 1059 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__OrigArity_20;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredLabelStr0_21;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredLabelStr_22;
#line 1059 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ModeNum_23;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_26_26;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_28_28;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_29_29;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_30_30;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_35_35;
#line 1059 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_37_37;

#line 1064 "elds_to_erlang.m"
#line 1064 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__PredIsImported_16) {
#line 1064 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1064 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1066 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__MaybeExtModule_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1064 "elds_to_erlang.m"
        break;
#line 1064 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1062 "elds_to_erlang.m"
        {
#line 1062 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_24_24;
#line 1062 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__ErlangModuleName_41;

#line 1147 "elds_to_erlang.m"
          {
#line 1147 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__ErlangModuleName_41 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
          }
#line 1148 "elds_to_erlang.m"
          {
#line 1148 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_24_24 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_41, (MR_String) "__");
          }
#line 1063 "elds_to_erlang.m"
          {
#line 1063 "elds_to_erlang.m"
            MR_Word base;
#line 1063 "elds_to_erlang.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "elds_to_erlang.m"
            *erl_backend__elds_to_erlang__MaybeExtModule_17 = base;
#line 1063 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (erl_backend__elds_to_erlang__V_24_24));
#line 1063 "elds_to_erlang.m"
          }
#line 1062 "elds_to_erlang.m"
        }
#line 1064 "elds_to_erlang.m"
        break;
#line 1064 "elds_to_erlang.m"
    }
#line 1073 "elds_to_erlang.m"
#line 1073 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__PredOrFunc_13) {
#line 1073 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1073 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1074 "elds_to_erlang.m"
        {
#line 1075 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "f";
#line 1076 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__OrigArity_20 = (erl_backend__elds_to_erlang__PredArity_14 - (MR_Integer) 1);
#line 1074 "elds_to_erlang.m"
        }
#line 1073 "elds_to_erlang.m"
        break;
#line 1073 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1070 "elds_to_erlang.m"
        {
#line 1071 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Suffix_19 = (MR_String) "p";
#line 1072 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__OrigArity_20 = erl_backend__elds_to_erlang__PredArity_14;
#line 1070 "elds_to_erlang.m"
        }
#line 1073 "elds_to_erlang.m"
        break;
#line 1073 "elds_to_erlang.m"
    }
#line 1079 "elds_to_erlang.m"
    {
#line 1079 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_29_29 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__OrigArity_20);
    }
#line 1080 "elds_to_erlang.m"
    {
#line 1080 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__Suffix_19);
    }
#line 1079 "elds_to_erlang.m"
    {
#line 1079 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_28_28 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__V_29_29, erl_backend__elds_to_erlang__V_30_30);
    }
#line 1079 "elds_to_erlang.m"
    {
#line 1079 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_28_28);
    }
#line 1079 "elds_to_erlang.m"
    {
#line 1079 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredLabelStr0_21 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_12, erl_backend__elds_to_erlang__V_26_26);
    }
#line 1083 "elds_to_erlang.m"
    {
#line 1083 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_10, erl_backend__elds_to_erlang__PredModule_11);
    }
#line 1083 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1083 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1084 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PredIsImported_16 == (MR_Integer) 0);
#line 1081 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1087 "elds_to_erlang.m"
      {
#line 1087 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_32_32;
#line 1087 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_34_34;
#line 1087 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_45;

#line 1147 "elds_to_erlang.m"
        {
#line 1147 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_45 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__PredModule_11);
        }
#line 1148 "elds_to_erlang.m"
        {
#line 1148 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_34_34 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_45, (MR_String) "__");
        }
#line 1087 "elds_to_erlang.m"
        {
#line 1087 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", erl_backend__elds_to_erlang__V_34_34);
        }
#line 1087 "elds_to_erlang.m"
        {
#line 1087 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__PredLabelStr_22 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr0_21, erl_backend__elds_to_erlang__V_32_32);
        }
#line 1087 "elds_to_erlang.m"
      }
#line 1081 "elds_to_erlang.m"
    else
#line 1091 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredLabelStr_22 = erl_backend__elds_to_erlang__PredLabelStr0_21;
#line 1094 "elds_to_erlang.m"
    {
#line 1094 "elds_to_erlang.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_15, &erl_backend__elds_to_erlang__ModeNum_23);
    }
#line 1095 "elds_to_erlang.m"
    {
#line 1095 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_37_37 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_23);
    }
#line 1095 "elds_to_erlang.m"
    {
#line 1095 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_37_37);
    }
#line 1095 "elds_to_erlang.m"
    {
#line 1095 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__ProcNameStr_18 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredLabelStr_22, erl_backend__elds_to_erlang__V_35_35);
    }
#line 1059 "elds_to_erlang.m"
  }
#line 1054 "elds_to_erlang.m"
}

#line 998 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(
#line 998 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name0_3)
#line 998 "elds_to_erlang.m"
{
#line 1005 "elds_to_erlang.m"
  {
#line 1005 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1005 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_4;
#line 1005 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_9_9;

#line 1005 "elds_to_erlang.m"
    {
#line 1005 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_9_9 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Name0_3);
    }
#line 1005 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_9_9 <= (MR_Integer) 200);
#line 1005 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1006 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__Name_4 = erl_backend__elds_to_erlang__Name0_3;
#line 1005 "elds_to_erlang.m"
    else
#line 1015 "elds_to_erlang.m"
      {
#line 1015 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Hash_5;
#line 1015 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Left_6;
#line 1015 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Right_7;
#line 1015 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Middle_8;
#line 1015 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_11_11;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_16_16;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_17_17;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_22_22;

#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_11_11 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Name0_3);
        }
#line 1015 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Hash_5 = (erl_backend__elds_to_erlang__V_11_11 & (MR_Integer) 4294967295);
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Left_6 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
#line 1017 "elds_to_erlang.m"
        {
#line 1017 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Right_7 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Name0_3, (MR_Integer) 64);
        }
#line 1018 "elds_to_erlang.m"
        {
#line 1018 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Middle_8 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_5, (MR_Integer) 16);
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_7));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 0) = ((MR_Box) ((MR_String) "..."));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_8));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_20_20));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_17_17, 0) = ((MR_Box) ((MR_String) "..."));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_17_17, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_19_19));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_6));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_17_17));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Name_4 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_16_16);
        }
#line 1015 "elds_to_erlang.m"
      }
#line 1005 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__Name_4;
#line 1005 "elds_to_erlang.m"
  }
#line 998 "elds_to_erlang.m"
}

#line 935 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_id_4_p_0(
#line 935 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 935 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiId_6)
#line 935 "elds_to_erlang.m"
{
#line 938 "elds_to_erlang.m"
  {
#line 938 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 938 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__CurModuleName_8;
#line 938 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__InstanceModule_13;
#line 938 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Atom1_15;
#line 938 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Atom_28;
#line 1005 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_65_65;

#line 939 "elds_to_erlang.m"
    {
#line 939 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_name_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, &erl_backend__elds_to_erlang__CurModuleName_8);
    }
#line 953 "elds_to_erlang.m"
#line 953 "elds_to_erlang.m"
    switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_6)) {
#line 953 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 953 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 941 "elds_to_erlang.m"
        {
#line 941 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__RttiTypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 941 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 0)));
#line 941 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__CRttiId_14;
#line 942 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 1)));
#line 942 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiTypeCtor_9, (MR_Integer) 2)));
#line 945 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_50_50;

#line 945 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__ModuleName_10)) == (MR_mktag((MR_Integer) 0)));
#line 945 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 945 "elds_to_erlang.m"
            {
#line 945 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ModuleName_10, (MR_Integer) 0)));
#line 945 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_50_50, (MR_String) "") == 0);
#line 945 "elds_to_erlang.m"
            }
#line 945 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 946 "elds_to_erlang.m"
            {
#line 946 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__InstanceModule_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 945 "elds_to_erlang.m"
          else
#line 948 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__ModuleName_10;
#line 951 "elds_to_erlang.m"
          {
#line 951 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__CRttiId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 0) = ((MR_Box) (erl_backend__elds_to_erlang__RttiTypeCtor_9));
#line 951 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CRttiId_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
#line 951 "elds_to_erlang.m"
          }
#line 952 "elds_to_erlang.m"
          {
#line 952 "elds_to_erlang.m"
            backend_libs__rtti__id_to_c_identifier_2_p_0(erl_backend__elds_to_erlang__CRttiId_14, &erl_backend__elds_to_erlang__Atom1_15);
          }
#line 941 "elds_to_erlang.m"
        }
#line 953 "elds_to_erlang.m"
        break;
#line 953 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 954 "elds_to_erlang.m"
        {
#line 954 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 954 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Atom0_17;
#line 954 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_47_47;

#line 957 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
#line 958 "elds_to_erlang.m"
          {
#line 958 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_47_47 = backend_libs__rtti__type_info_to_string_1_f_0(erl_backend__elds_to_erlang__TypeInfo_16);
          }
#line 958 "elds_to_erlang.m"
          {
#line 958 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom0_17 = mercury__string__f_43_43_2_f_0((MR_String) "ti_", erl_backend__elds_to_erlang__V_47_47);
          }
#line 961 "elds_to_erlang.m"
          {
#line 961 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_17, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
#line 954 "elds_to_erlang.m"
        }
#line 953 "elds_to_erlang.m"
        break;
#line 953 "elds_to_erlang.m"
      case (MR_Integer) 2:
#line 963 "elds_to_erlang.m"
        {
#line 963 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 963 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Prefix_20;
#line 963 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_43_43;
#line 963 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__Atom0_57;
#line 964 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__V_19_19;

#line 964 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3)));
#line 964 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 964 "elds_to_erlang.m"
            {
#line 964 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__PseudoTypeInfo_18, (MR_Integer) 0)));
#line 965 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "type_var_";
#line 964 "elds_to_erlang.m"
            }
#line 964 "elds_to_erlang.m"
          else
#line 967 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Prefix_20 = (MR_String) "pti_";
#line 971 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = erl_backend__elds_to_erlang__CurModuleName_8;
#line 972 "elds_to_erlang.m"
          {
#line 972 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_43_43 = backend_libs__rtti__pseudo_type_info_to_string_1_f_0(erl_backend__elds_to_erlang__PseudoTypeInfo_18);
          }
#line 972 "elds_to_erlang.m"
          {
#line 972 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom0_57 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__Prefix_20, erl_backend__elds_to_erlang__V_43_43);
          }
#line 975 "elds_to_erlang.m"
          {
#line 975 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__replace_all_3_f_0(erl_backend__elds_to_erlang__Atom0_57, (MR_String) "type_ctor_info", (MR_String) "tci");
          }
#line 963 "elds_to_erlang.m"
        }
#line 953 "elds_to_erlang.m"
        break;
#line 953 "elds_to_erlang.m"
      case (MR_Integer) 3:
#line 978 "elds_to_erlang.m"
        {
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TCName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 0)));
#line 978 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__InstanceStr_22;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__ClassModuleName_23;
#line 978 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__ClassName_24;
#line 978 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__ClassArity_25;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__QClassName_26;
#line 978 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__QClassNameStr_27;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_32_32;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_34_34;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_35_35;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_37_37;
#line 978 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_38_38;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 978 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_41_41;

#line 977 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 1)));
#line 977 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__InstanceStr_22 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__RttiId_6, (MR_Integer) 2)));
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ClassModuleName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 0)));
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ClassName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 1)));
#line 979 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ClassArity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TCName_21, (MR_Integer) 2)));
#line 980 "elds_to_erlang.m"
          {
#line 980 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__QClassName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 0) = ((MR_Box) (erl_backend__elds_to_erlang__ClassModuleName_23));
#line 980 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__QClassName_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__ClassName_24));
#line 980 "elds_to_erlang.m"
          }
#line 981 "elds_to_erlang.m"
          {
#line 981 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__QClassNameStr_27 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__QClassName_26, (MR_String) "__");
          }
#line 983 "elds_to_erlang.m"
          {
#line 983 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_38_38 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ClassArity_25);
          }
#line 983 "elds_to_erlang.m"
          {
#line 983 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_41_41, 0) = ((MR_Box) (erl_backend__elds_to_erlang__InstanceStr_22));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "elds_to_erlang.m"
          }
#line 983 "elds_to_erlang.m"
          {
#line 983 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_39_39, 0) = ((MR_Box) ((MR_String) "__"));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_39_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_41_41));
#line 983 "elds_to_erlang.m"
          }
#line 983 "elds_to_erlang.m"
          {
#line 983 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_37_37, 0) = ((MR_Box) (erl_backend__elds_to_erlang__V_38_38));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_37_37, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_39_39));
#line 983 "elds_to_erlang.m"
          }
#line 983 "elds_to_erlang.m"
          {
#line 983 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_35_35, 0) = ((MR_Box) ((MR_String) "__arity"));
#line 983 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_35_35, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_37_37));
#line 983 "elds_to_erlang.m"
          }
#line 982 "elds_to_erlang.m"
          {
#line 982 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_34_34, 0) = ((MR_Box) (erl_backend__elds_to_erlang__QClassNameStr_27));
#line 982 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_34_34, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_35_35));
#line 982 "elds_to_erlang.m"
          }
#line 982 "elds_to_erlang.m"
          {
#line 982 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, 0) = ((MR_Box) ((MR_String) "BaseTypeclassInfo_"));
#line 982 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_34_34));
#line 982 "elds_to_erlang.m"
          }
#line 982 "elds_to_erlang.m"
          {
#line 982 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Atom1_15 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_32_32);
          }
#line 978 "elds_to_erlang.m"
        }
#line 953 "elds_to_erlang.m"
        break;
#line 953 "elds_to_erlang.m"
    }
#line 1005 "elds_to_erlang.m"
    {
#line 1005 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_65_65 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
    }
#line 1005 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_65_65 <= (MR_Integer) 200);
#line 1005 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1006 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__Atom_28 = erl_backend__elds_to_erlang__Atom1_15;
#line 1005 "elds_to_erlang.m"
    else
#line 1015 "elds_to_erlang.m"
      {
#line 1015 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Hash_61;
#line 1015 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Left_62;
#line 1015 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Right_63;
#line 1015 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Middle_64;
#line 1015 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_67_67;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_72_72;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_73_73;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_75_75;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_76_76;
#line 1015 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_78_78;

#line 1015 "elds_to_erlang.m"
        {
#line 1015 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_67_67 = mercury__string__hash_1_f_0(erl_backend__elds_to_erlang__Atom1_15);
        }
#line 1015 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Hash_61 = (erl_backend__elds_to_erlang__V_67_67 & (MR_Integer) 4294967295);
#line 1016 "elds_to_erlang.m"
        {
#line 1016 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Left_62 = mercury__string__left_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
#line 1017 "elds_to_erlang.m"
        {
#line 1017 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Right_63 = mercury__string__right_2_f_0(erl_backend__elds_to_erlang__Atom1_15, (MR_Integer) 64);
        }
#line 1018 "elds_to_erlang.m"
        {
#line 1018 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Middle_64 = mercury__string__int_to_base_string_2_f_0(erl_backend__elds_to_erlang__Hash_61, (MR_Integer) 16);
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_78_78, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Right_63));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_76_76, 0) = ((MR_Box) ((MR_String) "..."));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_76_76, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_78_78));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_75_75, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Middle_64));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_75_75, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_76_76));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_73_73, 0) = ((MR_Box) ((MR_String) "..."));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_73_73, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_75_75));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_72_72, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Left_62));
#line 1019 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_72_72, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_73_73));
#line 1019 "elds_to_erlang.m"
        }
#line 1019 "elds_to_erlang.m"
        {
#line 1019 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__Atom_28 = mercury__string__append_list_1_f_0(erl_backend__elds_to_erlang__V_72_72);
        }
#line 1015 "elds_to_erlang.m"
      }
#line 986 "elds_to_erlang.m"
    {
#line 986 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__CurModuleName_8, erl_backend__elds_to_erlang__InstanceModule_13);
    }
#line 986 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 986 "elds_to_erlang.m"
      {
#line 986 "elds_to_erlang.m"
      }
#line 986 "elds_to_erlang.m"
    else
#line 989 "elds_to_erlang.m"
      {
#line 989 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_52_52;
#line 989 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ErlangModuleName_82;

#line 1147 "elds_to_erlang.m"
        {
#line 1147 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__ErlangModuleName_82 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__InstanceModule_13);
        }
#line 1148 "elds_to_erlang.m"
        {
#line 1148 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_52_52 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_82, (MR_String) "__");
        }
#line 989 "elds_to_erlang.m"
        {
#line 989 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_52_52);
        }
#line 990 "elds_to_erlang.m"
        {
#line 990 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 989 "elds_to_erlang.m"
      }
#line 992 "elds_to_erlang.m"
    {
#line 992 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_28);
    }
#line 938 "elds_to_erlang.m"
  }
#line 935 "elds_to_erlang.m"
}

#line 920 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(
#line 920 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 920 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
#line 920 "elds_to_erlang.m"
{
#line 923 "elds_to_erlang.m"
  {
#line 923 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__MaybeExtModule_8;
#line 923 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_9;
#line 923 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ShortName_11;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 0)));
#line 923 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_6, (MR_Integer) 1)));
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiProcName_24;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredOrFunc_25;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ThisModule_26;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredModule_27;
#line 923 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__PredName_28;
#line 923 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__PredArity_29;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredIsImported0_36;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Origin_38;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredInfo_41;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredStatus_42;
#line 923 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredIsImported_44;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ArgTypes_30;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___PredId_31;
#line 1030 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang___ProcId_32;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___HeadVarsWithNames_33;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ArgModes_34;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Detism_35;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___PredIsPseudoImported_37;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ProcIsExported_39;
#line 1030 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___ProcIsImported_40;
#line 1038 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_47_47;
#line 1038 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_43_43;
#line 1045 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__SpecialPredId_45;
#line 1045 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtor_46;

#line 1029 "elds_to_erlang.m"
    {
#line 1029 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__RttiProcName_24 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, erl_backend__elds_to_erlang__ProcId_23);
    }
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 0)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ThisModule_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 1)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredModule_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 2)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredName_28 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 3)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 4)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ArgTypes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 5)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 6)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 7)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___HeadVarsWithNames_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 8)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ArgModes_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 9)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___Detism_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__PredIsImported0_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___PredIsPseudoImported_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Origin_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 11)));
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcIsExported_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1030 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___ProcIsImported_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiProcName_24, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1036 "elds_to_erlang.m"
    {
#line 1036 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredId_22, &erl_backend__elds_to_erlang__PredInfo_41);
    }
#line 1037 "elds_to_erlang.m"
    {
#line 1037 "elds_to_erlang.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(erl_backend__elds_to_erlang__PredInfo_41, &erl_backend__elds_to_erlang__PredStatus_42);
    }
#line 1038 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_47_47 = (MR_Word) erl_backend__elds_to_erlang__PredStatus_42;
#line 1038 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 1038 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1038 "elds_to_erlang.m"
      {
#line 1038 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_47_47, (MR_Integer) 0)));
#line 1040 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__PredIsImported_44 = (MR_Integer) 0;
#line 1038 "elds_to_erlang.m"
      }
#line 1038 "elds_to_erlang.m"
    else
#line 1042 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__PredIsImported_44 = erl_backend__elds_to_erlang__PredIsImported0_36;
#line 1045 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Origin_38)) == (MR_mktag((MR_Integer) 0)));
#line 1045 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 1045 "elds_to_erlang.m"
      {
#line 1045 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__SpecialPredId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Origin_38, (MR_Integer) 0)));
#line 1045 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Origin_38, (MR_Integer) 1)));
#line 1103 "elds_to_erlang.m"
        {
#line 1103 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__TypeArity_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_46, (MR_Integer) 1)));
#line 1103 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__TypeName_57;
#line 1103 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeModule_58;
#line 1106 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__TypeCtorSymName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtor_46, (MR_Integer) 0)));

#line 1111 "elds_to_erlang.m"
          if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__TypeCtorSymName_55)) == (MR_mktag((MR_Integer) 1))))
#line 1112 "elds_to_erlang.m"
            {
#line 1112 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeModule_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_55, (MR_Integer) 0)));
#line 1112 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__TypeCtorSymName_55, (MR_Integer) 1)));
#line 1112 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1112 "elds_to_erlang.m"
            }
#line 1111 "elds_to_erlang.m"
          else
#line 1108 "elds_to_erlang.m"
            {
#line 1108 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__TypeName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__TypeCtorSymName_55, (MR_Integer) 0)));
#line 1109 "elds_to_erlang.m"
              {
#line 1109 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(erl_backend__elds_to_erlang__TypeCtor_46);
              }
#line 1108 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1108 "elds_to_erlang.m"
                {
#line 1110 "elds_to_erlang.m"
                  {
#line 1110 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__TypeModule_58 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
#line 1110 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1108 "elds_to_erlang.m"
                }
#line 1108 "elds_to_erlang.m"
            }
#line 1103 "elds_to_erlang.m"
          if (erl_backend__elds_to_erlang__succeeded)
#line 1115 "elds_to_erlang.m"
            {
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__ProcNameStr0_59;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__TypeModuleStr_60;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__ProcNameStr1_61;
#line 1115 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__ModeNum_62;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_64_64;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_65_65;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_67_67;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_68_68;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_69_69;
#line 1115 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_71_71;
#line 1115 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__ErlangModuleName_81;
#line 1120 "elds_to_erlang.m"
              MR_Integer erl_backend__elds_to_erlang__V_76_76;

#line 1115 "elds_to_erlang.m"
              {
#line 1115 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__ProcNameStr0_59 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__PredName_28, (MR_String) "__");
              }
#line 1147 "elds_to_erlang.m"
              {
#line 1147 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__ErlangModuleName_81 = parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(erl_backend__elds_to_erlang__TypeModule_58);
              }
#line 1148 "elds_to_erlang.m"
              {
#line 1148 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__TypeModuleStr_60 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(erl_backend__elds_to_erlang__ErlangModuleName_81, (MR_String) "__");
              }
#line 1118 "elds_to_erlang.m"
              {
#line 1118 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__TypeModule_58);
              }
#line 1118 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1118 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1118 "elds_to_erlang.m"
                {
#line 1119 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__SpecialPredId_45 == (MR_Integer) 0);
#line 1118 "elds_to_erlang.m"
                  if (erl_backend__elds_to_erlang__succeeded)
#line 1118 "elds_to_erlang.m"
                    {
#line 1120 "elds_to_erlang.m"
                      {
#line 1120 "elds_to_erlang.m"
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&erl_backend__elds_to_erlang__V_76_76);
                      }
#line 1120 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__ProcId_23 == erl_backend__elds_to_erlang__V_76_76);
#line 1120 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1118 "elds_to_erlang.m"
                    }
#line 1118 "elds_to_erlang.m"
                }
#line 1117 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 1124 "elds_to_erlang.m"
                {
#line 1124 "elds_to_erlang.m"
                  {
#line 1124 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__ProcNameStr1_61 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr0_59, erl_backend__elds_to_erlang__TypeModuleStr_60);
                  }
#line 1125 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1124 "elds_to_erlang.m"
                }
#line 1117 "elds_to_erlang.m"
              else
#line 1129 "elds_to_erlang.m"
                {
#line 1129 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__ProcNameStr1_61 = erl_backend__elds_to_erlang__ProcNameStr0_59;
#line 1130 "elds_to_erlang.m"
                  {
#line 1130 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(erl_backend__elds_to_erlang__TypeModule_58, erl_backend__elds_to_erlang__ThisModule_26);
                  }
#line 1130 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 1130 "elds_to_erlang.m"
                  if (erl_backend__elds_to_erlang__succeeded)
#line 1131 "elds_to_erlang.m"
                    {
#line 1131 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "elds_to_erlang.m"
                      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, 0) = ((MR_Box) (erl_backend__elds_to_erlang__TypeModuleStr_60));
#line 1131 "elds_to_erlang.m"
                    }
#line 1130 "elds_to_erlang.m"
                  else
#line 1133 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__MaybeExtModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "elds_to_erlang.m"
                }
#line 1136 "elds_to_erlang.m"
              {
#line 1136 "elds_to_erlang.m"
                hlds__hlds_pred__proc_id_to_int_2_p_0(erl_backend__elds_to_erlang__ProcId_23, &erl_backend__elds_to_erlang__ModeNum_62);
              }
#line 1138 "elds_to_erlang.m"
              {
#line 1138 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_68_68 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__TypeArity_56);
              }
#line 1138 "elds_to_erlang.m"
              {
#line 1138 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_71_71 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__ModeNum_62);
              }
#line 1138 "elds_to_erlang.m"
              {
#line 1138 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_71_71);
              }
#line 1138 "elds_to_erlang.m"
              {
#line 1138 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_67_67 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__V_68_68, erl_backend__elds_to_erlang__V_69_69);
              }
#line 1137 "elds_to_erlang.m"
              {
#line 1137 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_67_67);
              }
#line 1137 "elds_to_erlang.m"
              {
#line 1137 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_64_64 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__TypeName_57, erl_backend__elds_to_erlang__V_65_65);
              }
#line 1137 "elds_to_erlang.m"
              {
#line 1137 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Name_9 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__ProcNameStr1_61, erl_backend__elds_to_erlang__V_64_64);
              }
#line 1115 "elds_to_erlang.m"
            }
#line 1103 "elds_to_erlang.m"
          else
#line 1140 "elds_to_erlang.m"
            {
#line 1140 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_74_74;

#line 1141 "elds_to_erlang.m"
              {
#line 1141 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred ", erl_backend__elds_to_erlang__PredName_28);
              }
#line 1140 "elds_to_erlang.m"
              {
#line 1140 "elds_to_erlang.m"
                mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.erlang_special_proc_name\'/7", erl_backend__elds_to_erlang__V_74_74);
#line 1140 "elds_to_erlang.m"
                return;
              }
#line 1140 "elds_to_erlang.m"
            }
#line 1103 "elds_to_erlang.m"
        }
#line 1045 "elds_to_erlang.m"
      }
#line 1045 "elds_to_erlang.m"
    else
#line 1049 "elds_to_erlang.m"
      {
#line 1049 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__erlang_nonspecial_proc_name_9_p_0(erl_backend__elds_to_erlang__ThisModule_26, erl_backend__elds_to_erlang__PredModule_27, erl_backend__elds_to_erlang__PredName_28, erl_backend__elds_to_erlang__PredOrFunc_25, erl_backend__elds_to_erlang__PredArity_29, erl_backend__elds_to_erlang__ProcId_23, erl_backend__elds_to_erlang__PredIsImported_44, &erl_backend__elds_to_erlang__MaybeExtModule_8, &erl_backend__elds_to_erlang__Name_9);
      }
#line 929 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__MaybeExtModule_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "elds_to_erlang.m"
      {
#line 930 "elds_to_erlang.m"
      }
#line 929 "elds_to_erlang.m"
    else
#line 926 "elds_to_erlang.m"
      {
#line 926 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__ExtModule_10 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeExtModule_8, (MR_Integer) 0)));

#line 927 "elds_to_erlang.m"
        {
#line 927 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExtModule_10);
        }
#line 928 "elds_to_erlang.m"
        {
#line 928 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 926 "elds_to_erlang.m"
      }
#line 932 "elds_to_erlang.m"
    {
#line 932 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ShortName_11 = erl_backend__elds_to_erlang__shorten_long_atom_name_1_f_0(erl_backend__elds_to_erlang__Name_9);
    }
#line 933 "elds_to_erlang.m"
    {
#line 933 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ShortName_11);
    }
#line 923 "elds_to_erlang.m"
  }
#line 920 "elds_to_erlang.m"
}

#line 911 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_2_3_p_0(
#line 911 "elds_to_erlang.m"
  MR_Char erl_backend__elds_to_erlang__C_4)
#line 911 "elds_to_erlang.m"
{
#line 914 "elds_to_erlang.m"
  {
#line 914 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 914 "elds_to_erlang.m"
    {
#line 914 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(erl_backend__elds_to_erlang__C_4);
    }
#line 914 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 915 "elds_to_erlang.m"
      {
#line 915 "elds_to_erlang.m"
        mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__C_4);
      }
#line 914 "elds_to_erlang.m"
    else
#line 917 "elds_to_erlang.m"
      {
#line 917 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_9_9;

#line 917 "elds_to_erlang.m"
        {
#line 917 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_9_9 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__C_4);
        }
#line 917 "elds_to_erlang.m"
        {
#line 917 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_9_9);
        }
#line 917 "elds_to_erlang.m"
      }
#line 914 "elds_to_erlang.m"
  }
#line 911 "elds_to_erlang.m"
}

#line 908 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0_1(
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 908 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 908 "elds_to_erlang.m"
{
#line 908 "elds_to_erlang.m"
  {
#line 908 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 908 "elds_to_erlang.m"
    {
#line 908 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 908 "elds_to_erlang.m"
  }
#line 908 "elds_to_erlang.m"
}

#line 902 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_string_3_p_0(
#line 902 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_4)
#line 902 "elds_to_erlang.m"
{
#line 904 "elds_to_erlang.m"
  {
#line 904 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 908 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9;

#line 908 "elds_to_erlang.m"
    {
#line 908 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[4], erl_backend__elds_to_erlang__String_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_9);
    }
#line 1378 "elds_to_erlang.m"
    {
#line 1378 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
#line 904 "elds_to_erlang.m"
  }
#line 902 "elds_to_erlang.m"
}

#line 908 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0_1(
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 908 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 908 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 908 "elds_to_erlang.m"
{
#line 908 "elds_to_erlang.m"
  {
#line 908 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 908 "elds_to_erlang.m"
    {
#line 908 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_var_string_2_3_p_0(((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 908 "elds_to_erlang.m"
  }
#line 908 "elds_to_erlang.m"
}

#line 895 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_var_4_p_0(
#line 895 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_5,
#line 895 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Var_6)
#line 895 "elds_to_erlang.m"
{
#line 897 "elds_to_erlang.m"
  {
#line 897 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 897 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 897 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__VarName_8;
#line 897 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__VarNumber_9;
#line 897 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_12_12;
#line 897 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_14_14;
#line 897 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_16_16;
#line 908 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23;

#line 898 "elds_to_erlang.m"
    {
#line 898 "elds_to_erlang.m"
      mercury__varset__lookup_name_3_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__VarSet_5, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarName_8);
    }
#line 899 "elds_to_erlang.m"
    {
#line 899 "elds_to_erlang.m"
      mercury__term__var_to_int_2_p_0(erl_backend__elds_to_erlang__TypeCtorInfo_17_17, erl_backend__elds_to_erlang__Var_6, &erl_backend__elds_to_erlang__VarNumber_9);
    }
#line 900 "elds_to_erlang.m"
    {
#line 900 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_16_16 = mercury__string__from_int_1_f_0(erl_backend__elds_to_erlang__VarNumber_9);
    }
#line 900 "elds_to_erlang.m"
    {
#line 900 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", erl_backend__elds_to_erlang__V_16_16);
    }
#line 900 "elds_to_erlang.m"
    {
#line 900 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_12_12 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__VarName_8, erl_backend__elds_to_erlang__V_14_14);
    }
#line 908 "elds_to_erlang.m"
    {
#line 908 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[3], erl_backend__elds_to_erlang__V_12_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_9_23);
    }
#line 1378 "elds_to_erlang.m"
    {
#line 1378 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
    }
#line 897 "elds_to_erlang.m"
  }
#line 895 "elds_to_erlang.m"
}

#line 590 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_2(
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 590 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 590 "elds_to_erlang.m"
{
#line 590 "elds_to_erlang.m"
  {
#line 590 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 590 "elds_to_erlang.m"
    {
#line 590 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 590 "elds_to_erlang.m"
  }
#line 590 "elds_to_erlang.m"
}

#line 590 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0_1(
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 590 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 590 "elds_to_erlang.m"
{
#line 590 "elds_to_erlang.m"
  {
#line 590 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 590 "elds_to_erlang.m"
    {
#line 590 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 590 "elds_to_erlang.m"
  }
#line 590 "elds_to_erlang.m"
}

#line 861 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_tuple_6_p_0(
#line 861 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 861 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 861 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 861 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Args_10)
#line 861 "elds_to_erlang.m"
{
#line 866 "elds_to_erlang.m"
  {
#line 866 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 867 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__SymName_12;
#line 867 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 867 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 867 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 867 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_21_21;

#line 867 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 867 "elds_to_erlang.m"
      {
#line 867 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 867 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 867 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 867 "elds_to_erlang.m"
          {
#line 867 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 867 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 867 "elds_to_erlang.m"
              {
#line 867 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__V_18_18, (MR_Integer) 0)));
#line 867 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 867 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 867 "elds_to_erlang.m"
                  {
#line 867 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_19_19, (MR_Integer) 1)));
#line 868 "elds_to_erlang.m"
                    {
#line 868 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_21_21 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_12);
                    }
#line 868 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_21_21, (MR_String) "[]") == 0);
#line 867 "elds_to_erlang.m"
                  }
#line 867 "elds_to_erlang.m"
              }
#line 867 "elds_to_erlang.m"
          }
#line 867 "elds_to_erlang.m"
      }
#line 866 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 870 "elds_to_erlang.m"
      {
#line 870 "elds_to_erlang.m"
        {
#line 870 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "[] ");
        }
#line 870 "elds_to_erlang.m"
      }
#line 866 "elds_to_erlang.m"
    else
#line 871 "elds_to_erlang.m"
      {
#line 871 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__A_13;
#line 871 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__B_14;
#line 872 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_24_24;
#line 872 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_25_25;
#line 872 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 872 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_27_27;
#line 872 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_28_28;
#line 872 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_29_29;
#line 872 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__SymName_49;

#line 872 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
          {
#line 872 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 872 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_24_24)) == (MR_mktag((MR_Integer) 2)));
#line 872 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
              {
#line 872 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__V_24_24, (MR_Integer) 0)));
#line 872 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_25_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_25_25, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 872 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
                  {
#line 872 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__SymName_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_25_25, (MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
                      {
#line 872 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, (MR_Integer) 0)));
#line 872 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_26_26, (MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
                        if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
                          {
#line 872 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, (MR_Integer) 0)));
#line 872 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, (MR_Integer) 1)));
#line 872 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "elds_to_erlang.m"
                            if (erl_backend__elds_to_erlang__succeeded)
#line 872 "elds_to_erlang.m"
                              {
#line 873 "elds_to_erlang.m"
                                {
#line 873 "elds_to_erlang.m"
                                  erl_backend__elds_to_erlang__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_49);
                                }
#line 873 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = (strcmp(erl_backend__elds_to_erlang__V_29_29, (MR_String) "[|]") == 0);
#line 872 "elds_to_erlang.m"
                              }
#line 872 "elds_to_erlang.m"
                          }
#line 872 "elds_to_erlang.m"
                      }
#line 872 "elds_to_erlang.m"
                  }
#line 872 "elds_to_erlang.m"
              }
#line 872 "elds_to_erlang.m"
          }
#line 871 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 875 "elds_to_erlang.m"
          {
#line 875 "elds_to_erlang.m"
            {
#line 875 "elds_to_erlang.m"
              mercury__io__write_char_3_p_0((MR_Char) 91);
            }
#line 876 "elds_to_erlang.m"
            {
#line 876 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__A_13);
            }
#line 877 "elds_to_erlang.m"
            {
#line 877 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "| ");
            }
#line 878 "elds_to_erlang.m"
            {
#line 878 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__B_14);
            }
#line 879 "elds_to_erlang.m"
            {
#line 879 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "] ");
            }
#line 875 "elds_to_erlang.m"
          }
#line 871 "elds_to_erlang.m"
        else
#line 880 "elds_to_erlang.m"
          {
#line 880 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Args1_15;
#line 881 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_38_38;
#line 881 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_51_51;
#line 881 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 881 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__V_54_54;
#line 881 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__V_55_55;

#line 881 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 881 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 881 "elds_to_erlang.m"
              {
#line 881 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 0)));
#line 881 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Args1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Args_10, (MR_Integer) 1)));
#line 893 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_55_55 = (MR_String) "{}";
#line 893 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_54_54 = (MR_Word) &erl_backend__elds_to_erlang_scalar_common_9[0];
#line 893 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), &erl_backend__elds_to_erlang_scalar_common_1[5]);
#line 893 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), &erl_backend__elds_to_erlang_scalar_common_9[1]);
#line 881 "elds_to_erlang.m"
                {
#line 881 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = erl_backend__elds____Unify____elds_expr_0_0(erl_backend__elds_to_erlang__V_38_38, erl_backend__elds_to_erlang__V_51_51);
                }
#line 881 "elds_to_erlang.m"
              }
#line 880 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 883 "elds_to_erlang.m"
              {
#line 883 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__V_64_64;

#line 883 "elds_to_erlang.m"
                {
#line 883 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
#line 590 "elds_to_erlang.m"
                {
#line 590 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_1));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_64_64, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 590 "elds_to_erlang.m"
                }
#line 589 "elds_to_erlang.m"
                {
#line 589 "elds_to_erlang.m"
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args1_15, (MR_String) ", ", erl_backend__elds_to_erlang__V_64_64);
                }
#line 885 "elds_to_erlang.m"
                {
#line 885 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "} ");
                }
#line 883 "elds_to_erlang.m"
              }
#line 880 "elds_to_erlang.m"
            else
#line 887 "elds_to_erlang.m"
              {
#line 887 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__V_78_78;

#line 887 "elds_to_erlang.m"
                {
#line 887 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 123);
                }
#line 590 "elds_to_erlang.m"
                {
#line 590 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_tuple_6_p_0_2));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 590 "elds_to_erlang.m"
                  MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_78_78, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 590 "elds_to_erlang.m"
                }
#line 589 "elds_to_erlang.m"
                {
#line 589 "elds_to_erlang.m"
                  mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Args_10, (MR_String) ", ", erl_backend__elds_to_erlang__V_78_78);
                }
#line 889 "elds_to_erlang.m"
                {
#line 889 "elds_to_erlang.m"
                  mercury__io__write_string_3_p_0((MR_String) "} ");
                }
#line 887 "elds_to_erlang.m"
              }
#line 880 "elds_to_erlang.m"
          }
#line 871 "elds_to_erlang.m"
      }
#line 866 "elds_to_erlang.m"
  }
#line 861 "elds_to_erlang.m"
}

#line 842 "elds_to_erlang.m"
static MR_bool MR_CALL 
erl_backend__elds_to_erlang__digit_then_e_4_p_0(
#line 842 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__String_5,
#line 842 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PrevDigit_6,
#line 842 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Pos0_7,
#line 842 "elds_to_erlang.m"
  MR_Integer * erl_backend__elds_to_erlang__Pos_8)
#line 842 "elds_to_erlang.m"
{
#line 844 "elds_to_erlang.m"
  while (MR_TRUE)
#line 844 "elds_to_erlang.m"
    {
#line 844 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 844 "elds_to_erlang.m"
      {
#line 844 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;
#line 844 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__Pos1_9;
#line 844 "elds_to_erlang.m"
        MR_Char erl_backend__elds_to_erlang__Char_10;

#line 845 "elds_to_erlang.m"
        {
#line 845 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__succeeded = mercury__string__unsafe_index_next_4_p_0(erl_backend__elds_to_erlang__String_5, erl_backend__elds_to_erlang__Pos0_7, &erl_backend__elds_to_erlang__Pos1_9, &erl_backend__elds_to_erlang__Char_10);
        }
#line 844 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 844 "elds_to_erlang.m"
          {
#line 846 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__Char_10 == (MR_Char) 46);
#line 846 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = !(erl_backend__elds_to_erlang__succeeded);
#line 844 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 844 "elds_to_erlang.m"
              {
#line 858 "elds_to_erlang.m"
#line 858 "elds_to_erlang.m"
                switch (erl_backend__elds_to_erlang__Char_10) {
#line 858 "elds_to_erlang.m"
                  default:
#line 858 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 858 "elds_to_erlang.m"
                    break;
#line 858 "elds_to_erlang.m"
                  case (MR_Char) 69:
#line 859 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 858 "elds_to_erlang.m"
                    break;
#line 858 "elds_to_erlang.m"
                  case (MR_Char) 101:
#line 858 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 858 "elds_to_erlang.m"
                    break;
#line 858 "elds_to_erlang.m"
                }
#line 847 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 848 "elds_to_erlang.m"
                  {
#line 848 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__PrevDigit_6 == (MR_Integer) 1);
#line 848 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 848 "elds_to_erlang.m"
                      {
#line 849 "elds_to_erlang.m"
                        *erl_backend__elds_to_erlang__Pos_8 = erl_backend__elds_to_erlang__Pos0_7;
#line 849 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 848 "elds_to_erlang.m"
                      }
#line 848 "elds_to_erlang.m"
                  }
#line 847 "elds_to_erlang.m"
                else
#line 850 "elds_to_erlang.m"
                  {
#line 850 "elds_to_erlang.m"
                    {
#line 850 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__succeeded = mercury__char__is_digit_1_p_0(erl_backend__elds_to_erlang__Char_10);
                    }
#line 850 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 851 "elds_to_erlang.m"
                      {
#line 851 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 851 "elds_to_erlang.m"
                        {
#line 851 "elds_to_erlang.m"
                          MR_Integer erl_backend__elds_to_erlang__Pos0__tmp_copy_7 = erl_backend__elds_to_erlang__Pos1_9;

#line 851 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__Pos0__tmp_copy_7;
#line 851 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 1;
#line 851 "elds_to_erlang.m"
                        }
#line 851 "elds_to_erlang.m"
                        continue;
#line 851 "elds_to_erlang.m"
                      }
#line 850 "elds_to_erlang.m"
                    else
#line 853 "elds_to_erlang.m"
                      {
#line 853 "elds_to_erlang.m"
                        /* direct tailcall eliminated */
#line 853 "elds_to_erlang.m"
                        {
#line 853 "elds_to_erlang.m"
                          MR_Integer erl_backend__elds_to_erlang__Pos0__tmp_copy_7 = erl_backend__elds_to_erlang__Pos1_9;

#line 853 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__Pos0_7 = erl_backend__elds_to_erlang__Pos0__tmp_copy_7;
#line 853 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__PrevDigit_6 = (MR_Integer) 0;
#line 853 "elds_to_erlang.m"
                        }
#line 853 "elds_to_erlang.m"
                        continue;
#line 853 "elds_to_erlang.m"
                      }
#line 850 "elds_to_erlang.m"
                  }
#line 844 "elds_to_erlang.m"
              }
#line 844 "elds_to_erlang.m"
          }
#line 844 "elds_to_erlang.m"
        return erl_backend__elds_to_erlang__succeeded;
#line 844 "elds_to_erlang.m"
      }
#line 844 "elds_to_erlang.m"
      break;
#line 844 "elds_to_erlang.m"
    }
#line 842 "elds_to_erlang.m"
}

#line 830 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_float_3_p_0(
#line 830 "elds_to_erlang.m"
  MR_Float erl_backend__elds_to_erlang__Float_4)
#line 830 "elds_to_erlang.m"
{
#line 832 "elds_to_erlang.m"
  {
#line 832 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 832 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__S_6;
#line 834 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__Pos_7;

#line 833 "elds_to_erlang.m"
    {
#line 833 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__S_6 = mercury__string__from_float_1_f_0(erl_backend__elds_to_erlang__Float_4);
    }
#line 834 "elds_to_erlang.m"
    {
#line 834 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = erl_backend__elds_to_erlang__digit_then_e_4_p_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, (MR_Integer) 0, &erl_backend__elds_to_erlang__Pos_7);
    }
#line 834 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 835 "elds_to_erlang.m"
      {
#line 835 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_12_12;
#line 835 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__V_17_17;
#line 835 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_19_19;

#line 835 "elds_to_erlang.m"
        {
#line 835 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_12_12 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, (MR_Integer) 0, erl_backend__elds_to_erlang__Pos_7);
        }
#line 835 "elds_to_erlang.m"
        {
#line 835 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_12_12);
        }
#line 836 "elds_to_erlang.m"
        {
#line 836 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ".0");
        }
#line 837 "elds_to_erlang.m"
        {
#line 837 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = mercury__string__length_1_f_0(erl_backend__elds_to_erlang__S_6);
        }
#line 837 "elds_to_erlang.m"
        {
#line 837 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_17_17 = mercury__string__between_3_f_0(erl_backend__elds_to_erlang__S_6, erl_backend__elds_to_erlang__Pos_7, erl_backend__elds_to_erlang__V_19_19);
        }
#line 837 "elds_to_erlang.m"
        {
#line 837 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_17_17);
        }
#line 835 "elds_to_erlang.m"
      }
#line 834 "elds_to_erlang.m"
    else
#line 839 "elds_to_erlang.m"
      {
#line 839 "elds_to_erlang.m"
        mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__S_6);
      }
#line 832 "elds_to_erlang.m"
  }
#line 830 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 771 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_term_6_p_0(
#line 771 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 771 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 771 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 771 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Term_10)
#line 771 "elds_to_erlang.m"
{
#line 776 "elds_to_erlang.m"
  {
#line 776 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 776 "elds_to_erlang.m"
#line 776 "elds_to_erlang.m"
    switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__Term_10)) {
#line 776 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 776 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 823 "elds_to_erlang.m"
        {
#line 824 "elds_to_erlang.m"
          {
#line 824 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0((MR_String) "_ ");
          }
#line 823 "elds_to_erlang.m"
        }
#line 776 "elds_to_erlang.m"
        break;
#line 776 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 796 "elds_to_erlang.m"
        {
#line 796 "elds_to_erlang.m"
          MR_Char erl_backend__elds_to_erlang__Char_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));
#line 796 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__Int_61;

#line 797 "elds_to_erlang.m"
          {
#line 797 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__Int_61 = mercury__char__to_int_1_f_0(erl_backend__elds_to_erlang__Char_15);
          }
#line 798 "elds_to_erlang.m"
          {
#line 798 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = mercury__char__is_alnum_1_p_0(erl_backend__elds_to_erlang__Char_15);
          }
#line 798 "elds_to_erlang.m"
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
                mercury__io__write_char_3_p_0(erl_backend__elds_to_erlang__Char_15);
              }
#line 799 "elds_to_erlang.m"
            }
#line 798 "elds_to_erlang.m"
          else
#line 801 "elds_to_erlang.m"
            {
#line 801 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Esc_16;

#line 1278 "elds_to_erlang.m"
#line 1278 "elds_to_erlang.m"
              switch (erl_backend__elds_to_erlang__Int_61) {
#line 1278 "elds_to_erlang.m"
                default:
#line 1278 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__succeeded = MR_FALSE;
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 1:
#line 1287 "elds_to_erlang.m"
                  {
#line 1287 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^a";
#line 1287 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1287 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 2:
#line 1288 "elds_to_erlang.m"
                  {
#line 1288 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^b";
#line 1288 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1288 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 3:
#line 1289 "elds_to_erlang.m"
                  {
#line 1289 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^c";
#line 1289 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1289 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 4:
#line 1290 "elds_to_erlang.m"
                  {
#line 1290 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^d";
#line 1290 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1290 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 5:
#line 1291 "elds_to_erlang.m"
                  {
#line 1291 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^e";
#line 1291 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1291 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 6:
#line 1292 "elds_to_erlang.m"
                  {
#line 1292 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^f";
#line 1292 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1292 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 7:
#line 1293 "elds_to_erlang.m"
                  {
#line 1293 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^g";
#line 1293 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1293 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 8:
#line 1278 "elds_to_erlang.m"
                  {
#line 1278 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\b";
#line 1278 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1278 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 9:
#line 1285 "elds_to_erlang.m"
                  {
#line 1285 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\t";
#line 1285 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1285 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 10:
#line 1282 "elds_to_erlang.m"
                  {
#line 1282 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\n";
#line 1282 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1282 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 11:
#line 1286 "elds_to_erlang.m"
                  {
#line 1286 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\v";
#line 1286 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1286 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 12:
#line 1281 "elds_to_erlang.m"
                  {
#line 1281 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\f";
#line 1281 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1281 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 13:
#line 1283 "elds_to_erlang.m"
                  {
#line 1283 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\r";
#line 1283 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1283 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 14:
#line 1300 "elds_to_erlang.m"
                  {
#line 1300 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^n";
#line 1300 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1300 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 15:
#line 1301 "elds_to_erlang.m"
                  {
#line 1301 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^o";
#line 1301 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1301 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 16:
#line 1302 "elds_to_erlang.m"
                  {
#line 1302 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^p";
#line 1302 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1302 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 17:
#line 1303 "elds_to_erlang.m"
                  {
#line 1303 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^q";
#line 1303 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1303 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 18:
#line 1304 "elds_to_erlang.m"
                  {
#line 1304 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^r";
#line 1304 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1304 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 19:
#line 1305 "elds_to_erlang.m"
                  {
#line 1305 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^s";
#line 1305 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1305 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 20:
#line 1306 "elds_to_erlang.m"
                  {
#line 1306 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^t";
#line 1306 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1306 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 21:
#line 1307 "elds_to_erlang.m"
                  {
#line 1307 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^u";
#line 1307 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1307 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 22:
#line 1308 "elds_to_erlang.m"
                  {
#line 1308 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^v";
#line 1308 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1308 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 23:
#line 1309 "elds_to_erlang.m"
                  {
#line 1309 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^w";
#line 1309 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1309 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 24:
#line 1310 "elds_to_erlang.m"
                  {
#line 1310 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^x";
#line 1310 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1310 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 25:
#line 1311 "elds_to_erlang.m"
                  {
#line 1311 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^y";
#line 1311 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1311 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 26:
#line 1312 "elds_to_erlang.m"
                  {
#line 1312 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\^z";
#line 1312 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1312 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 27:
#line 1280 "elds_to_erlang.m"
                  {
#line 1280 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\e";
#line 1280 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1280 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 32:
#line 1284 "elds_to_erlang.m"
                  {
#line 1284 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\s";
#line 1284 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1284 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 34:
#line 1314 "elds_to_erlang.m"
                  {
#line 1314 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\"";
#line 1314 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1314 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 39:
#line 1313 "elds_to_erlang.m"
                  {
#line 1313 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\'";
#line 1313 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1313 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 92:
#line 1315 "elds_to_erlang.m"
                  {
#line 1315 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\\\";
#line 1315 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1315 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
                case (MR_Integer) 127:
#line 1279 "elds_to_erlang.m"
                  {
#line 1279 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Esc_16 = (MR_String) "\\d";
#line 1279 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = MR_TRUE;
#line 1279 "elds_to_erlang.m"
                  }
#line 1278 "elds_to_erlang.m"
                  break;
#line 1278 "elds_to_erlang.m"
              }
#line 801 "elds_to_erlang.m"
              if (erl_backend__elds_to_erlang__succeeded)
#line 802 "elds_to_erlang.m"
                {
#line 802 "elds_to_erlang.m"
                  {
#line 802 "elds_to_erlang.m"
                    mercury__io__write_char_3_p_0((MR_Char) 36);
                  }
#line 803 "elds_to_erlang.m"
                  {
#line 803 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Esc_16);
                  }
#line 802 "elds_to_erlang.m"
                }
#line 801 "elds_to_erlang.m"
              else
#line 805 "elds_to_erlang.m"
                {
#line 805 "elds_to_erlang.m"
                  mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_61);
                }
#line 801 "elds_to_erlang.m"
            }
#line 1378 "elds_to_erlang.m"
          {
#line 1378 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
#line 796 "elds_to_erlang.m"
        }
#line 776 "elds_to_erlang.m"
        break;
#line 776 "elds_to_erlang.m"
      case (MR_Integer) 2:
#line 776 "elds_to_erlang.m"
        {
#line 776 "elds_to_erlang.m"
          MR_Integer erl_backend__elds_to_erlang__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)));

#line 777 "elds_to_erlang.m"
          {
#line 777 "elds_to_erlang.m"
            mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__Int_12);
          }
#line 778 "elds_to_erlang.m"
          {
#line 778 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__space_2_p_0();
          }
#line 776 "elds_to_erlang.m"
        }
#line 776 "elds_to_erlang.m"
        break;
#line 776 "elds_to_erlang.m"
      case (MR_Integer) 3:
#line 776 "elds_to_erlang.m"
#line 776 "elds_to_erlang.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 0)))) {
#line 776 "elds_to_erlang.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 0:
#line 780 "elds_to_erlang.m"
            {
#line 780 "elds_to_erlang.m"
              MR_Float erl_backend__elds_to_erlang__Float_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 781 "elds_to_erlang.m"
              {
#line 781 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_float_3_p_0(erl_backend__elds_to_erlang__Float_13);
              }
#line 1378 "elds_to_erlang.m"
              {
#line 1378 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 780 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 784 "elds_to_erlang.m"
            {
#line 784 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__String_14 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
#line 1246 "elds_to_erlang.m"
              MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_52_52;

#line 785 "elds_to_erlang.m"
              {
#line 785 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "<<\"");
              }
#line 1246 "elds_to_erlang.m"
              {
#line 1246 "elds_to_erlang.m"
                mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[8], erl_backend__elds_to_erlang__String_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_52_52);
              }
#line 787 "elds_to_erlang.m"
              {
#line 787 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "\">>");
              }
#line 1378 "elds_to_erlang.m"
              {
#line 1378 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 784 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 2:
#line 790 "elds_to_erlang.m"
            {
#line 790 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__String_60 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 791 "elds_to_erlang.m"
              {
#line 791 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
#line 792 "elds_to_erlang.m"
              {
#line 792 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__write_with_escaping_4_p_0((MR_Integer) 0, erl_backend__elds_to_erlang__String_60);
              }
#line 793 "elds_to_erlang.m"
              {
#line 793 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "\"");
              }
#line 794 "elds_to_erlang.m"
              {
#line 794 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__space_2_p_0();
              }
#line 790 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 3:
#line 809 "elds_to_erlang.m"
            {
#line 809 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Atom_17 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 810 "elds_to_erlang.m"
              {
#line 810 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Atom_17);
              }
#line 1378 "elds_to_erlang.m"
              {
#line 1378 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 809 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 4:
#line 813 "elds_to_erlang.m"
            {
#line 813 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));
#line 813 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__V_29_29;

#line 814 "elds_to_erlang.m"
              {
#line 814 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__V_29_29 = mdbcomp__sym_name__unqualify_name_1_f_0(erl_backend__elds_to_erlang__SymName_18);
              }
#line 814 "elds_to_erlang.m"
              {
#line 814 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_29_29);
              }
#line 1378 "elds_to_erlang.m"
              {
#line 1378 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 813 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 5:
#line 817 "elds_to_erlang.m"
            {
#line 817 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 818 "elds_to_erlang.m"
              {
#line 818 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_tuple_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_19);
              }
#line 817 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 6:
#line 820 "elds_to_erlang.m"
            {
#line 820 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 821 "elds_to_erlang.m"
              {
#line 821 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_var_4_p_0(erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Var_20);
              }
#line 820 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
          case (MR_Integer) 7:
#line 826 "elds_to_erlang.m"
            {
#line 826 "elds_to_erlang.m"
              MR_String erl_backend__elds_to_erlang__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Term_10, (MR_Integer) 1)));

#line 827 "elds_to_erlang.m"
              {
#line 827 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_var_string_3_p_0(erl_backend__elds_to_erlang__Name_21);
              }
#line 826 "elds_to_erlang.m"
            }
#line 776 "elds_to_erlang.m"
            break;
#line 776 "elds_to_erlang.m"
        }
#line 776 "elds_to_erlang.m"
        break;
#line 776 "elds_to_erlang.m"
    }
#line 776 "elds_to_erlang.m"
  }
#line 771 "elds_to_erlang.m"
}

#line 757 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_catch_6_p_0(
#line 757 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 757 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 757 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 757 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Catch_10)
#line 757 "elds_to_erlang.m"
{
#line 760 "elds_to_erlang.m"
  {
#line 760 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 760 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PatternA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 0)));
#line 760 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PatternB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 1)));
#line 760 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__CatchExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Catch_10, (MR_Integer) 2)));
#line 760 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_23_23;
#line 760 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_26_26;
#line 596 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_42;

#line 762 "elds_to_erlang.m"
    {
#line 762 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternA_12);
    }
#line 763 "elds_to_erlang.m"
    {
#line 763 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 58);
    }
#line 764 "elds_to_erlang.m"
    {
#line 764 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__PatternB_13);
    }
#line 765 "elds_to_erlang.m"
    {
#line 765 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
#line 766 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_23_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_23_23);
    }
#line 767 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_26_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 596 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__CatchExpr_14)) == (MR_mktag((MR_Integer) 1)));
#line 596 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 596 "elds_to_erlang.m"
      {
#line 596 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CatchExpr_14, (MR_Integer) 0)));
#line 597 "elds_to_erlang.m"
        {
#line 597 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__Exprs_42);
        }
#line 596 "elds_to_erlang.m"
      }
#line 596 "elds_to_erlang.m"
    else
#line 599 "elds_to_erlang.m"
      {
#line 599 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__CatchExpr_14);
      }
#line 760 "elds_to_erlang.m"
  }
#line 757 "elds_to_erlang.m"
}

#line 747 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_case_6_p_0(
#line 747 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 747 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 747 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 747 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
#line 747 "elds_to_erlang.m"
{
#line 750 "elds_to_erlang.m"
  {
#line 750 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 750 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
#line 750 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));
#line 750 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_19_19;
#line 750 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_22_22;
#line 596 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_44;

#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
    }
#line 752 "elds_to_erlang.m"
    {
#line 752 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Pattern_10);
    }
#line 753 "elds_to_erlang.m"
    {
#line 753 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "->");
    }
#line 754 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_19_19 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_19_19);
    }
#line 755 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_22_22 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 596 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_11)) == (MR_mktag((MR_Integer) 1)));
#line 596 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 596 "elds_to_erlang.m"
      {
#line 596 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_11, (MR_Integer) 0)));
#line 597 "elds_to_erlang.m"
        {
#line 597 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_22_22, erl_backend__elds_to_erlang__Exprs_44);
        }
#line 596 "elds_to_erlang.m"
      }
#line 596 "elds_to_erlang.m"
    else
#line 599 "elds_to_erlang.m"
      {
#line 599 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_22_22, erl_backend__elds_to_erlang__Expr_11);
      }
#line 750 "elds_to_erlang.m"
  }
#line 747 "elds_to_erlang.m"
}

#line 677 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_3(
#line 677 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 677 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 677 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 677 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 677 "elds_to_erlang.m"
{
#line 677 "elds_to_erlang.m"
  {
#line 677 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 677 "elds_to_erlang.m"
    {
#line 677 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 677 "elds_to_erlang.m"
  }
#line 677 "elds_to_erlang.m"
}

#line 742 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_2(
#line 742 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 742 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 742 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 742 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 742 "elds_to_erlang.m"
{
#line 742 "elds_to_erlang.m"
  {
#line 742 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 742 "elds_to_erlang.m"
    {
#line 742 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 742 "elds_to_erlang.m"
  }
#line 742 "elds_to_erlang.m"
}

#line 662 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0_1(
#line 662 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 662 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 662 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 662 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 662 "elds_to_erlang.m"
{
#line 662 "elds_to_erlang.m"
  {
#line 662 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 662 "elds_to_erlang.m"
    {
#line 662 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_case_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 662 "elds_to_erlang.m"
  }
#line 662 "elds_to_erlang.m"
}

#line 602 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_expr_6_p_0(
#line 602 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 602 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 602 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 602 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10)
#line 602 "elds_to_erlang.m"
{
#line 607 "elds_to_erlang.m"
  while (MR_TRUE)
#line 607 "elds_to_erlang.m"
    {
#line 607 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 607 "elds_to_erlang.m"
      {
#line 607 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;

#line 607 "elds_to_erlang.m"
#line 607 "elds_to_erlang.m"
        switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) {
#line 607 "elds_to_erlang.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 607 "elds_to_erlang.m"
          case (MR_Integer) 0:
#line 649 "elds_to_erlang.m"
            {
#line 649 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Clause_25 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Expr_10), (MR_Integer) 0);

#line 650 "elds_to_erlang.m"
              {
#line 650 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "(fun");
              }
#line 651 "elds_to_erlang.m"
              {
#line 651 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_clause_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Clause_25);
              }
#line 652 "elds_to_erlang.m"
              {
#line 652 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
              }
#line 653 "elds_to_erlang.m"
              {
#line 653 "elds_to_erlang.m"
                mercury__io__write_string_3_p_0((MR_String) "end)");
              }
#line 649 "elds_to_erlang.m"
            }
#line 607 "elds_to_erlang.m"
            break;
#line 607 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 607 "elds_to_erlang.m"
            {
#line 607 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

#line 607 "elds_to_erlang.m"
              if ((erl_backend__elds_to_erlang__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "elds_to_erlang.m"
                {
#line 608 "elds_to_erlang.m"
                  {
#line 608 "elds_to_erlang.m"
                    mercury__require__unexpected_3_p_0((MR_String) "erl_backend.elds_to_erlang", (MR_String) "predicate \140erl_backend.elds_to_erlang.output_expr\'/6", (MR_String) "empty elds_block");
#line 608 "elds_to_erlang.m"
                    return;
                  }
#line 607 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
              else
#line 610 "elds_to_erlang.m"
                {
#line 610 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_157_157;
#line 610 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_160_160;

#line 611 "elds_to_erlang.m"
                  {
#line 611 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(begin");
                  }
#line 612 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_157_157 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 612 "elds_to_erlang.m"
                  {
#line 612 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_157_157);
                  }
#line 613 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_160_160 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 613 "elds_to_erlang.m"
                  {
#line 613 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_160_160, erl_backend__elds_to_erlang__V_192_192);
                  }
#line 614 "elds_to_erlang.m"
                  {
#line 614 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 615 "elds_to_erlang.m"
                  {
#line 615 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
#line 610 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
            }
#line 607 "elds_to_erlang.m"
            break;
#line 607 "elds_to_erlang.m"
          case (MR_Integer) 2:
#line 617 "elds_to_erlang.m"
            {
#line 617 "elds_to_erlang.m"
              MR_Word erl_backend__elds_to_erlang__Term_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));

#line 618 "elds_to_erlang.m"
              {
#line 618 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__output_term_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Term_15);
              }
#line 617 "elds_to_erlang.m"
            }
#line 607 "elds_to_erlang.m"
            break;
#line 607 "elds_to_erlang.m"
          case (MR_Integer) 3:
#line 607 "elds_to_erlang.m"
#line 607 "elds_to_erlang.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)))) {
#line 607 "elds_to_erlang.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 0:
#line 620 "elds_to_erlang.m"
                {
#line 620 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 620 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 621 "elds_to_erlang.m"
                  {
#line 621 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_16);
                  }
#line 622 "elds_to_erlang.m"
                  {
#line 622 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "= ");
                  }
#line 623 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 623 "elds_to_erlang.m"
                  {
#line 623 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_17;

#line 623 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 623 "elds_to_erlang.m"
                  }
#line 623 "elds_to_erlang.m"
                  continue;
#line 620 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 1:
#line 625 "elds_to_erlang.m"
                {
#line 625 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 625 "elds_to_erlang.m"
                  MR_String erl_backend__elds_to_erlang__V_146_146;
#line 625 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 626 "elds_to_erlang.m"
                  {
#line 626 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_146_146 = erl_backend__elds_to_erlang__elds_unop_to_string_1_f_0(erl_backend__elds_to_erlang__Unop_18);
                  }
#line 626 "elds_to_erlang.m"
                  {
#line 626 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_146_146);
                  }
#line 627 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 627 "elds_to_erlang.m"
                  {
#line 627 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprA_170;

#line 627 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 627 "elds_to_erlang.m"
                  }
#line 627 "elds_to_erlang.m"
                  continue;
#line 625 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 2:
#line 629 "elds_to_erlang.m"
                {
#line 629 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 629 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
#line 629 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));

#line 630 "elds_to_erlang.m"
                  {
#line 630 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_171);
                  }
#line 631 "elds_to_erlang.m"
                  {
#line 631 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_elds_binop_3_p_0(erl_backend__elds_to_erlang__Binop_19);
                  }
#line 632 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 632 "elds_to_erlang.m"
                  {
#line 632 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_172;

#line 632 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 632 "elds_to_erlang.m"
                  }
#line 632 "elds_to_erlang.m"
                  continue;
#line 629 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 3:
#line 634 "elds_to_erlang.m"
                {
#line 634 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__CallTarget_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 634 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 638 "elds_to_erlang.m"
#line 638 "elds_to_erlang.m"
                  switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__CallTarget_20)) {
#line 638 "elds_to_erlang.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 638 "elds_to_erlang.m"
                    case (MR_Integer) 0:
#line 636 "elds_to_erlang.m"
                      {
#line 636 "elds_to_erlang.m"
                        MR_Word erl_backend__elds_to_erlang__PredProcId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 637 "elds_to_erlang.m"
                        {
#line 637 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_22);
                        }
#line 636 "elds_to_erlang.m"
                      }
#line 638 "elds_to_erlang.m"
                      break;
#line 638 "elds_to_erlang.m"
                    case (MR_Integer) 1:
#line 639 "elds_to_erlang.m"
                      {
#line 639 "elds_to_erlang.m"
                        MR_Word erl_backend__elds_to_erlang__Closure_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 640 "elds_to_erlang.m"
                        {
#line 640 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Closure_23);
                        }
#line 639 "elds_to_erlang.m"
                      }
#line 638 "elds_to_erlang.m"
                      break;
#line 638 "elds_to_erlang.m"
                    case (MR_Integer) 2:
#line 642 "elds_to_erlang.m"
                      {
#line 642 "elds_to_erlang.m"
                        MR_String erl_backend__elds_to_erlang__FunName_24 = ((MR_String) (MR_hl_field(MR_mktag(2), erl_backend__elds_to_erlang__CallTarget_20, (MR_Integer) 0)));

#line 643 "elds_to_erlang.m"
                        {
#line 643 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__FunName_24);
                        }
#line 642 "elds_to_erlang.m"
                      }
#line 638 "elds_to_erlang.m"
                      break;
#line 638 "elds_to_erlang.m"
                  }
#line 645 "elds_to_erlang.m"
                  {
#line 645 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(");
                  }
#line 646 "elds_to_erlang.m"
                  {
#line 646 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_exprs_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Args_21);
                  }
#line 647 "elds_to_erlang.m"
                  {
#line 647 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 634 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 4:
#line 705 "elds_to_erlang.m"
                {
#line 705 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__RttiId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 721 "elds_to_erlang.m"
#line 721 "elds_to_erlang.m"
                  switch (MR_tag((MR_Word) erl_backend__elds_to_erlang__RttiId_33)) {
#line 721 "elds_to_erlang.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 721 "elds_to_erlang.m"
                    case (MR_Integer) 0:
#line 707 "elds_to_erlang.m"
                      {
#line 718 "elds_to_erlang.m"
                        {
#line 718 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "fun ");
                        }
#line 719 "elds_to_erlang.m"
                        {
#line 719 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                        }
#line 720 "elds_to_erlang.m"
                        {
#line 720 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "/0 ");
                        }
#line 707 "elds_to_erlang.m"
                      }
#line 721 "elds_to_erlang.m"
                      break;
#line 721 "elds_to_erlang.m"
                    case (MR_Integer) 1:
#line 721 "elds_to_erlang.m"
                    case (MR_Integer) 2:
#line 721 "elds_to_erlang.m"
                    case (MR_Integer) 3:
#line 725 "elds_to_erlang.m"
                      {
#line 726 "elds_to_erlang.m"
                        {
#line 726 "elds_to_erlang.m"
                          erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_33);
                        }
#line 727 "elds_to_erlang.m"
                        {
#line 727 "elds_to_erlang.m"
                          mercury__io__write_string_3_p_0((MR_String) "()");
                        }
#line 725 "elds_to_erlang.m"
                      }
#line 721 "elds_to_erlang.m"
                      break;
#line 721 "elds_to_erlang.m"
                  }
#line 705 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 5:
#line 655 "elds_to_erlang.m"
                {
#line 655 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));
#line 655 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_112_112;
#line 655 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_115_115;
#line 655 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__V_122_122;
#line 655 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_124_124;
#line 655 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 656 "elds_to_erlang.m"
                  {
#line 656 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(case");
                  }
#line 657 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_112_112 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 657 "elds_to_erlang.m"
                  {
#line 657 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_112_112);
                  }
#line 658 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_115_115 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 658 "elds_to_erlang.m"
                  {
#line 658 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_115_115, erl_backend__elds_to_erlang__ExprA_173);
                  }
#line 659 "elds_to_erlang.m"
                  {
#line 659 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 660 "elds_to_erlang.m"
                  {
#line 660 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "of");
                  }
#line 662 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_124_124 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 662 "elds_to_erlang.m"
                  {
#line 662 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 662 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 662 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_1));
#line 662 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 662 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 662 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 662 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_122_122, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_124_124));
#line 662 "elds_to_erlang.m"
                  }
#line 661 "elds_to_erlang.m"
                  {
#line 661 "elds_to_erlang.m"
                    mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_26, (MR_String) ";", erl_backend__elds_to_erlang__V_122_122);
                  }
#line 663 "elds_to_erlang.m"
                  {
#line 663 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 664 "elds_to_erlang.m"
                  {
#line 664 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
#line 655 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 6:
#line 666 "elds_to_erlang.m"
                {
#line 666 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__MaybeCatch_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 3)));
#line 666 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__MaybeAfter_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 4)));
#line 666 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_75_75;
#line 666 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_78_78;
#line 666 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 666 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Cases_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 667 "elds_to_erlang.m"
                  {
#line 667 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(try");
                  }
#line 668 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_75_75 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 668 "elds_to_erlang.m"
                  {
#line 668 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_75_75);
                  }
#line 669 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_78_78 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 669 "elds_to_erlang.m"
                  {
#line 669 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_78_78, erl_backend__elds_to_erlang__ExprA_174);
                  }
#line 672 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__Cases_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "elds_to_erlang.m"
                    {
#line 671 "elds_to_erlang.m"
                    }
#line 672 "elds_to_erlang.m"
                  else
#line 673 "elds_to_erlang.m"
                    {
#line 673 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__V_85_85;
#line 673 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_87_87;

#line 674 "elds_to_erlang.m"
                      {
#line 674 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 675 "elds_to_erlang.m"
                      {
#line 675 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "of");
                      }
#line 677 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_87_87 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 677 "elds_to_erlang.m"
                      {
#line 677 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 677 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 677 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_3));
#line 677 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 677 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 677 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 677 "elds_to_erlang.m"
                        MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_85_85, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_87_87));
#line 677 "elds_to_erlang.m"
                      }
#line 676 "elds_to_erlang.m"
                      {
#line 676 "elds_to_erlang.m"
                        mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_175, (MR_String) ";", erl_backend__elds_to_erlang__V_85_85);
                      }
#line 673 "elds_to_erlang.m"
                    }
#line 685 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__MaybeCatch_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "elds_to_erlang.m"
                    {
#line 686 "elds_to_erlang.m"
                    }
#line 685 "elds_to_erlang.m"
                  else
#line 680 "elds_to_erlang.m"
                    {
#line 680 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__Catch_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeCatch_27, (MR_Integer) 0)));
#line 680 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_92_92;
#line 680 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_95_95;

#line 681 "elds_to_erlang.m"
                      {
#line 681 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 682 "elds_to_erlang.m"
                      {
#line 682 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "catch");
                      }
#line 683 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_92_92 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 683 "elds_to_erlang.m"
                      {
#line 683 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_92_92);
                      }
#line 684 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_95_95 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 684 "elds_to_erlang.m"
                      {
#line 684 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__output_catch_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_95_95, erl_backend__elds_to_erlang__Catch_31);
                      }
#line 680 "elds_to_erlang.m"
                    }
#line 694 "elds_to_erlang.m"
                  if ((erl_backend__elds_to_erlang__MaybeAfter_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 695 "elds_to_erlang.m"
                    {
#line 695 "elds_to_erlang.m"
                    }
#line 694 "elds_to_erlang.m"
                  else
#line 689 "elds_to_erlang.m"
                    {
#line 689 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__After_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__MaybeAfter_28, (MR_Integer) 0)));
#line 689 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_101_101;
#line 689 "elds_to_erlang.m"
                      MR_Integer erl_backend__elds_to_erlang__V_104_104;

#line 690 "elds_to_erlang.m"
                      {
#line 690 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                      }
#line 691 "elds_to_erlang.m"
                      {
#line 691 "elds_to_erlang.m"
                        mercury__io__write_string_3_p_0((MR_String) "after");
                      }
#line 692 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_101_101 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 692 "elds_to_erlang.m"
                      {
#line 692 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__V_101_101);
                      }
#line 693 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__V_104_104 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 693 "elds_to_erlang.m"
                      {
#line 693 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_104_104, erl_backend__elds_to_erlang__After_32);
                      }
#line 689 "elds_to_erlang.m"
                    }
#line 697 "elds_to_erlang.m"
                  {
#line 697 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 698 "elds_to_erlang.m"
                  {
#line 698 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
#line 666 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 7:
#line 700 "elds_to_erlang.m"
                {
#line 700 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 701 "elds_to_erlang.m"
                  {
#line 701 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "throw(");
                  }
#line 702 "elds_to_erlang.m"
                  {
#line 702 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_176);
                  }
#line 703 "elds_to_erlang.m"
                  {
#line 703 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
#line 700 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 8:
#line 730 "elds_to_erlang.m"
                {
#line 730 "elds_to_erlang.m"
                  MR_String erl_backend__elds_to_erlang__Code_40 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 730 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang___Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 731 "elds_to_erlang.m"
                  {
#line 731 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_40);
                  }
#line 732 "elds_to_erlang.m"
                  {
#line 732 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 730 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 9:
#line 734 "elds_to_erlang.m"
                {
#line 734 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprA_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));
#line 734 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__ExprB_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 2)));

#line 735 "elds_to_erlang.m"
                  {
#line 735 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__ExprA_177);
                  }
#line 736 "elds_to_erlang.m"
                  {
#line 736 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) " ! ");
                  }
#line 737 "elds_to_erlang.m"
                  /* direct tailcall eliminated */
#line 737 "elds_to_erlang.m"
                  {
#line 737 "elds_to_erlang.m"
                    MR_Word erl_backend__elds_to_erlang__Expr__tmp_copy_10 = erl_backend__elds_to_erlang__ExprB_178;

#line 737 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__Expr_10 = erl_backend__elds_to_erlang__Expr__tmp_copy_10;
#line 737 "elds_to_erlang.m"
                  }
#line 737 "elds_to_erlang.m"
                  continue;
#line 734 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
              case (MR_Integer) 10:
#line 739 "elds_to_erlang.m"
                {
#line 739 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__V_47_47;
#line 739 "elds_to_erlang.m"
                  MR_Integer erl_backend__elds_to_erlang__V_49_49;
#line 739 "elds_to_erlang.m"
                  MR_Word erl_backend__elds_to_erlang__Cases_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 1)));

#line 740 "elds_to_erlang.m"
                  {
#line 740 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "(receive");
                  }
#line 742 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__V_49_49 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 742 "elds_to_erlang.m"
                  {
#line 742 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 742 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[4]));
#line 742 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_expr_6_p_0_2));
#line 742 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 742 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 742 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 742 "elds_to_erlang.m"
                    MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_47_47, 5) = ((MR_Box) (erl_backend__elds_to_erlang__V_49_49));
#line 742 "elds_to_erlang.m"
                  }
#line 741 "elds_to_erlang.m"
                  {
#line 741 "elds_to_erlang.m"
                    mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_case_0, erl_backend__elds_to_erlang__Cases_179, (MR_String) ";", erl_backend__elds_to_erlang__V_47_47);
                  }
#line 743 "elds_to_erlang.m"
                  {
#line 743 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__nl_indent_line_3_p_0(erl_backend__elds_to_erlang__Indent_9);
                  }
#line 744 "elds_to_erlang.m"
                  {
#line 744 "elds_to_erlang.m"
                    mercury__io__write_string_3_p_0((MR_String) "end)");
                  }
#line 739 "elds_to_erlang.m"
                }
#line 607 "elds_to_erlang.m"
                break;
#line 607 "elds_to_erlang.m"
            }
#line 607 "elds_to_erlang.m"
            break;
#line 607 "elds_to_erlang.m"
        }
#line 607 "elds_to_erlang.m"
      }
#line 607 "elds_to_erlang.m"
      break;
#line 607 "elds_to_erlang.m"
    }
#line 602 "elds_to_erlang.m"
}

#line 592 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_block_expr_6_p_0(
#line 592 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 592 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 592 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 592 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Expr_10)
#line 592 "elds_to_erlang.m"
{
#line 596 "elds_to_erlang.m"
  {
#line 596 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Expr_10)) == (MR_mktag((MR_Integer) 1)));
#line 596 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Exprs_12;

#line 596 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 596 "elds_to_erlang.m"
      {
#line 596 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__Exprs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Expr_10, (MR_Integer) 0)));
#line 597 "elds_to_erlang.m"
        {
#line 597 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Exprs_12);
        }
#line 596 "elds_to_erlang.m"
      }
#line 596 "elds_to_erlang.m"
    else
#line 599 "elds_to_erlang.m"
      {
#line 599 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__Indent_9, erl_backend__elds_to_erlang__Expr_10);
      }
#line 596 "elds_to_erlang.m"
  }
#line 592 "elds_to_erlang.m"
}

#line 590 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0_1(
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 590 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 590 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 590 "elds_to_erlang.m"
{
#line 590 "elds_to_erlang.m"
  {
#line 590 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 590 "elds_to_erlang.m"
    {
#line 590 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_expr_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 590 "elds_to_erlang.m"
  }
#line 590 "elds_to_erlang.m"
}

#line 585 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_6_p_0(
#line 585 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 585 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 585 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 585 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Exprs_10)
#line 585 "elds_to_erlang.m"
{
#line 588 "elds_to_erlang.m"
  {
#line 588 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 588 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_15_15;

#line 590 "elds_to_erlang.m"
    {
#line 590 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 590 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[3]));
#line 590 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_exprs_6_p_0_1));
#line 590 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 590 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 590 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 590 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_15_15, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 590 "elds_to_erlang.m"
    }
#line 589 "elds_to_erlang.m"
    {
#line 589 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_expr_0, erl_backend__elds_to_erlang__Exprs_10, (MR_String) ", ", erl_backend__elds_to_erlang__V_15_15);
    }
#line 588 "elds_to_erlang.m"
  }
#line 585 "elds_to_erlang.m"
}

#line 570 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_exprs_with_nl_6_p_0(
#line 570 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__1_1,
#line 570 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__2_2,
#line 570 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__HeadVar__3_3,
#line 570 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__HeadVar__4_4)
#line 570 "elds_to_erlang.m"
{
#line 573 "elds_to_erlang.m"
  while (MR_TRUE)
#line 573 "elds_to_erlang.m"
    {
#line 573 "elds_to_erlang.m"
      /* tailcall optimized into a loop */
#line 573 "elds_to_erlang.m"
      {
#line 573 "elds_to_erlang.m"
        MR_bool erl_backend__elds_to_erlang__succeeded;

#line 573 "elds_to_erlang.m"
        if ((erl_backend__elds_to_erlang__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "elds_to_erlang.m"
          {
#line 573 "elds_to_erlang.m"
          }
#line 573 "elds_to_erlang.m"
        else
#line 574 "elds_to_erlang.m"
          {
#line 574 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Expr_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 0)));
#line 574 "elds_to_erlang.m"
            MR_Word erl_backend__elds_to_erlang__Exprs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__HeadVar__4_4, (MR_Integer) 1)));

#line 575 "elds_to_erlang.m"
            {
#line 575 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_16);
            }
#line 578 "elds_to_erlang.m"
            if ((erl_backend__elds_to_erlang__Exprs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "elds_to_erlang.m"
              {
#line 577 "elds_to_erlang.m"
              }
#line 578 "elds_to_erlang.m"
            else
#line 579 "elds_to_erlang.m"
              {
#line 579 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Expr_43;
#line 579 "elds_to_erlang.m"
                MR_Word erl_backend__elds_to_erlang__Exprs_44;

#line 580 "elds_to_erlang.m"
                {
#line 580 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
#line 1360 "elds_to_erlang.m"
                {
#line 1360 "elds_to_erlang.m"
                  mercury__io__nl_2_p_0();
                }
#line 1361 "elds_to_erlang.m"
                {
#line 1361 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                }
#line 574 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Expr_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 0)));
#line 574 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Exprs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__Exprs_17, (MR_Integer) 1)));
#line 575 "elds_to_erlang.m"
                {
#line 575 "elds_to_erlang.m"
                  erl_backend__elds_to_erlang__output_expr_6_p_0(erl_backend__elds_to_erlang__HeadVar__1_1, erl_backend__elds_to_erlang__HeadVar__2_2, erl_backend__elds_to_erlang__HeadVar__3_3, erl_backend__elds_to_erlang__Expr_43);
                }
#line 578 "elds_to_erlang.m"
                if ((erl_backend__elds_to_erlang__Exprs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "elds_to_erlang.m"
                  {
#line 577 "elds_to_erlang.m"
                  }
#line 578 "elds_to_erlang.m"
                else
#line 579 "elds_to_erlang.m"
                  {
#line 580 "elds_to_erlang.m"
                    {
#line 580 "elds_to_erlang.m"
                      mercury__io__write_char_3_p_0((MR_Char) 44);
                    }
#line 1360 "elds_to_erlang.m"
                    {
#line 1360 "elds_to_erlang.m"
                      mercury__io__nl_2_p_0();
                    }
#line 1361 "elds_to_erlang.m"
                    {
#line 1361 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__HeadVar__3_3);
                    }
#line 582 "elds_to_erlang.m"
                    /* direct tailcall eliminated */
#line 582 "elds_to_erlang.m"
                    {
#line 582 "elds_to_erlang.m"
                      MR_Word erl_backend__elds_to_erlang__HeadVar__4__tmp_copy_4 = erl_backend__elds_to_erlang__Exprs_44;

#line 582 "elds_to_erlang.m"
                      erl_backend__elds_to_erlang__HeadVar__4_4 = erl_backend__elds_to_erlang__HeadVar__4__tmp_copy_4;
#line 582 "elds_to_erlang.m"
                    }
#line 582 "elds_to_erlang.m"
                    continue;
#line 579 "elds_to_erlang.m"
                  }
#line 579 "elds_to_erlang.m"
              }
#line 574 "elds_to_erlang.m"
          }
#line 573 "elds_to_erlang.m"
      }
#line 573 "elds_to_erlang.m"
      break;
#line 573 "elds_to_erlang.m"
    }
#line 570 "elds_to_erlang.m"
}

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 560 "elds_to_erlang.m"
{
#line 560 "elds_to_erlang.m"
  {
#line 560 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 560 "elds_to_erlang.m"
  }
#line 560 "elds_to_erlang.m"
}

#line 553 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_clause_6_p_0(
#line 553 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 553 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_8,
#line 553 "elds_to_erlang.m"
  MR_Integer erl_backend__elds_to_erlang__Indent_9,
#line 553 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_10)
#line 553 "elds_to_erlang.m"
{
#line 556 "elds_to_erlang.m"
  {
#line 556 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 556 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
#line 556 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
#line 556 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 556 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_23_23;
#line 556 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_26_26;

#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_clause_6_p_0_1));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_7));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_8));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 5) = ((MR_Box) (erl_backend__elds_to_erlang__Indent_9));
#line 560 "elds_to_erlang.m"
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_12, (MR_String) ", ", erl_backend__elds_to_erlang__V_19_19);
    }
#line 561 "elds_to_erlang.m"
    {
#line 561 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 562 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_23_23 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(erl_backend__elds_to_erlang__V_23_23);
    }
#line 563 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_26_26 = (erl_backend__elds_to_erlang__Indent_9 + (MR_Integer) 1);
#line 563 "elds_to_erlang.m"
    {
#line 563 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__VarSet_8, erl_backend__elds_to_erlang__V_26_26, erl_backend__elds_to_erlang__Expr_13);
    }
#line 556 "elds_to_erlang.m"
  }
#line 553 "elds_to_erlang.m"
}

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 560 "elds_to_erlang.m"
{
#line 560 "elds_to_erlang.m"
  {
#line 560 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 560 "elds_to_erlang.m"
  }
#line 560 "elds_to_erlang.m"
}

#line 545 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(
#line 545 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 545 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__VarSet_7,
#line 545 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Clause_8)
#line 545 "elds_to_erlang.m"
{
#line 548 "elds_to_erlang.m"
  {
#line 548 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 548 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 0)));
#line 548 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_8, (MR_Integer) 1)));
#line 548 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_28_28;

#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0_1));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_7));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_28_28, 5) = ((MR_Box) ((MR_Integer) 0));
#line 560 "elds_to_erlang.m"
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_23, (MR_String) ", ", erl_backend__elds_to_erlang__V_28_28);
    }
#line 561 "elds_to_erlang.m"
    {
#line 561 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
#line 563 "elds_to_erlang.m"
    {
#line 563 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, erl_backend__elds_to_erlang__VarSet_7, ((MR_Integer) 0 + (MR_Integer) 1), erl_backend__elds_to_erlang__Expr_24);
    }
#line 551 "elds_to_erlang.m"
    {
#line 551 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 548 "elds_to_erlang.m"
  }
#line 545 "elds_to_erlang.m"
}

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 560 "elds_to_erlang.m"
{
#line 560 "elds_to_erlang.m"
  {
#line 560 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 560 "elds_to_erlang.m"
  }
#line 560 "elds_to_erlang.m"
}

#line 536 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(
#line 536 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 536 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__RttiDefn_6)
#line 536 "elds_to_erlang.m"
{
#line 539 "elds_to_erlang.m"
  {
#line 539 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 539 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 0)));
#line 539 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 2)));
#line 539 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 3)));
#line 539 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_34;
#line 539 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_35;
#line 539 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39;
#line 540 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___IsExported_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__RttiDefn_6, (MR_Integer) 1)));

#line 541 "elds_to_erlang.m"
    {
#line 541 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 542 "elds_to_erlang.m"
    {
#line 542 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__RttiId_8);
    }
#line 557 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Pattern_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 0)));
#line 557 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Expr_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_11, (MR_Integer) 1)));
#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_rtti_defn_4_p_0_1));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_10));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_39_39, 5) = ((MR_Box) ((MR_Integer) 0));
#line 560 "elds_to_erlang.m"
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_34, (MR_String) ", ", erl_backend__elds_to_erlang__V_39_39);
    }
#line 561 "elds_to_erlang.m"
    {
#line 561 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
#line 563 "elds_to_erlang.m"
    {
#line 563 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_10, ((MR_Integer) 0 + (MR_Integer) 1), erl_backend__elds_to_erlang__Expr_35);
    }
#line 551 "elds_to_erlang.m"
    {
#line 551 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 539 "elds_to_erlang.m"
  }
#line 536 "elds_to_erlang.m"
}

#line 560 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1(
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 560 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 560 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 560 "elds_to_erlang.m"
{
#line 560 "elds_to_erlang.m"
  {
#line 560 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_term_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 560 "elds_to_erlang.m"
  }
#line 560 "elds_to_erlang.m"
}

#line 527 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(
#line 527 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 527 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6)
#line 527 "elds_to_erlang.m"
{
#line 530 "elds_to_erlang.m"
  {
#line 530 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 530 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
#line 530 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
#line 530 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
#line 530 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Pattern_33;
#line 530 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Expr_34;
#line 530 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38;

#line 532 "elds_to_erlang.m"
    {
#line 532 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 533 "elds_to_erlang.m"
    {
#line 533 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__Name_8);
    }
#line 557 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Pattern_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 0)));
#line 557 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Expr_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_10, (MR_Integer) 1)));
#line 558 "elds_to_erlang.m"
    {
#line 558 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
#line 560 "elds_to_erlang.m"
    {
#line 560 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[2]));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0_1));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_5));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 4) = ((MR_Box) (erl_backend__elds_to_erlang__VarSet_9));
#line 560 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_38_38, 5) = ((MR_Box) ((MR_Integer) 0));
#line 560 "elds_to_erlang.m"
    }
#line 559 "elds_to_erlang.m"
    {
#line 559 "elds_to_erlang.m"
      mercury__io__write_list_5_p_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_term_0, erl_backend__elds_to_erlang__Pattern_33, (MR_String) ", ", erl_backend__elds_to_erlang__V_38_38);
    }
#line 561 "elds_to_erlang.m"
    {
#line 561 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ") -> ");
    }
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0(((MR_Integer) 0 + (MR_Integer) 1));
    }
#line 563 "elds_to_erlang.m"
    {
#line 563 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_block_expr_6_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, ((MR_Integer) 0 + (MR_Integer) 1), erl_backend__elds_to_erlang__Expr_34);
    }
#line 551 "elds_to_erlang.m"
    {
#line 551 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
#line 530 "elds_to_erlang.m"
  }
#line 527 "elds_to_erlang.m"
}

#line 484 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(
#line 484 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 484 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcId_6)
#line 484 "elds_to_erlang.m"
{
#line 487 "elds_to_erlang.m"
  {
#line 487 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 489 "elds_to_erlang.m"
    {
#line 489 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_6);
    }
#line 490 "elds_to_erlang.m"
    {
#line 490 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "(),");
    }
#line 487 "elds_to_erlang.m"
  }
#line 484 "elds_to_erlang.m"
}

#line 479 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1(
#line 479 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 479 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 479 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 479 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 479 "elds_to_erlang.m"
{
#line 479 "elds_to_erlang.m"
  {
#line 479 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 479 "elds_to_erlang.m"
    {
#line 479 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_init_fn_call_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 479 "elds_to_erlang.m"
  }
#line 479 "elds_to_erlang.m"
}

#line 468 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(
#line 468 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 468 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__Name_7,
#line 468 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__PredProcIds_8)
#line 468 "elds_to_erlang.m"
{
#line 473 "elds_to_erlang.m"
  {
#line 473 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 473 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__PredProcIds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "elds_to_erlang.m"
      {
#line 473 "elds_to_erlang.m"
      }
#line 473 "elds_to_erlang.m"
    else
#line 475 "elds_to_erlang.m"
      {
#line 475 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_19_19;
#line 479 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20;

#line 1360 "elds_to_erlang.m"
        {
#line 1360 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1361 "elds_to_erlang.m"
        {
#line 1361 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 0);
        }
#line 477 "elds_to_erlang.m"
        {
#line 477 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Name_7);
        }
#line 478 "elds_to_erlang.m"
        {
#line 478 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "() ->");
        }
#line 479 "elds_to_erlang.m"
        {
#line 479 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 479 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[7]));
#line 479 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 1) = ((MR_Box) (erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0_1));
#line 479 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 479 "elds_to_erlang.m"
          MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_19_19, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 479 "elds_to_erlang.m"
        }
#line 479 "elds_to_erlang.m"
        {
#line 479 "elds_to_erlang.m"
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, erl_backend__elds_to_erlang__V_19_19, erl_backend__elds_to_erlang__PredProcIds_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_20_20);
        }
#line 1360 "elds_to_erlang.m"
        {
#line 1360 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1361 "elds_to_erlang.m"
        {
#line 1361 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 481 "elds_to_erlang.m"
        {
#line 481 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "void.\n");
        }
#line 475 "elds_to_erlang.m"
      }
#line 473 "elds_to_erlang.m"
  }
#line 468 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 459 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__reset_file_directive_2_p_0(void)
#line 459 "elds_to_erlang.m"
{
#line 461 "elds_to_erlang.m"
  {
#line 461 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 461 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__FileName_14;
#line 461 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__LineNr_15;
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20;

#line 462 "elds_to_erlang.m"
    {
#line 462 "elds_to_erlang.m"
      mercury__io__output_stream_name_3_p_0(&erl_backend__elds_to_erlang__FileName_14);
    }
#line 463 "elds_to_erlang.m"
    {
#line 463 "elds_to_erlang.m"
      mercury__io__get_output_line_number_3_p_0(&erl_backend__elds_to_erlang__LineNr_15);
    }
#line 453 "elds_to_erlang.m"
    {
#line 453 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-file(\"");
    }
#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[7], erl_backend__elds_to_erlang__FileName_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_20);
    }
#line 455 "elds_to_erlang.m"
    {
#line 455 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "\", ");
    }
#line 456 "elds_to_erlang.m"
    {
#line 456 "elds_to_erlang.m"
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_15);
    }
#line 457 "elds_to_erlang.m"
    {
#line 457 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 461 "elds_to_erlang.m"
  }
#line 459 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_2(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 424 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(
#line 424 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 424 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignBody_6)
#line 424 "elds_to_erlang.m"
{
#line 427 "elds_to_erlang.m"
  {
#line 427 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 427 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 1)));
#line 427 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 2)));
#line 428 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignBody_6, (MR_Integer) 0)));

#line 441 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_9)) == (MR_mktag((MR_Integer) 1))))
#line 442 "elds_to_erlang.m"
      {
#line 442 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__IncludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
#line 442 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_33;
#line 1246 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39;

#line 443 "elds_to_erlang.m"
        {
#line 443 "elds_to_erlang.m"
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_21, &erl_backend__elds_to_erlang__FileName_33);
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1246 "elds_to_erlang.m"
        {
#line 1246 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[5], erl_backend__elds_to_erlang__FileName_33, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_39);
        }
#line 455 "elds_to_erlang.m"
        {
#line 455 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 456 "elds_to_erlang.m"
        {
#line 456 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
#line 457 "elds_to_erlang.m"
        {
#line 457 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 445 "elds_to_erlang.m"
        {
#line 445 "elds_to_erlang.m"
          libs__file_util__write_include_file_contents_3_p_0(erl_backend__elds_to_erlang__FileName_33);
        }
#line 442 "elds_to_erlang.m"
      }
#line 441 "elds_to_erlang.m"
    else
#line 438 "elds_to_erlang.m"
      {
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_9, (MR_Integer) 0)));
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_58 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 0)));
#line 438 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__LineNr_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_10, (MR_Integer) 1)));
#line 1246 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64;

#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1246 "elds_to_erlang.m"
        {
#line 1246 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[6], erl_backend__elds_to_erlang__FileName_58, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_64);
        }
#line 455 "elds_to_erlang.m"
        {
#line 455 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 456 "elds_to_erlang.m"
        {
#line 456 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_59);
        }
#line 457 "elds_to_erlang.m"
        {
#line 457 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 440 "elds_to_erlang.m"
        {
#line 440 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_20);
        }
#line 438 "elds_to_erlang.m"
      }
#line 447 "elds_to_erlang.m"
    {
#line 447 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 448 "elds_to_erlang.m"
    {
#line 448 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
    }
#line 427 "elds_to_erlang.m"
  }
#line 424 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_2(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 415 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(
#line 415 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_5,
#line 415 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignDecl_6)
#line 415 "elds_to_erlang.m"
{
#line 418 "elds_to_erlang.m"
  {
#line 418 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 418 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__LiteralOrInclude_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 2)));
#line 418 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 3)));
#line 419 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Lang_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 0)));
#line 419 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___IsLocal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignDecl_6, (MR_Integer) 1)));

#line 441 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__LiteralOrInclude_10)) == (MR_mktag((MR_Integer) 1))))
#line 442 "elds_to_erlang.m"
      {
#line 442 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
#line 442 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_34;
#line 1246 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40;

#line 443 "elds_to_erlang.m"
        {
#line 443 "elds_to_erlang.m"
          parse_tree__file_names__make_include_file_path_3_p_0(erl_backend__elds_to_erlang__SourceFileName_5, erl_backend__elds_to_erlang__IncludeFileName_22, &erl_backend__elds_to_erlang__FileName_34);
        }
#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1246 "elds_to_erlang.m"
        {
#line 1246 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[3], erl_backend__elds_to_erlang__FileName_34, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_40);
        }
#line 455 "elds_to_erlang.m"
        {
#line 455 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 456 "elds_to_erlang.m"
        {
#line 456 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0((MR_Integer) 1);
        }
#line 457 "elds_to_erlang.m"
        {
#line 457 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 445 "elds_to_erlang.m"
        {
#line 445 "elds_to_erlang.m"
          libs__file_util__write_include_file_contents_3_p_0(erl_backend__elds_to_erlang__FileName_34);
        }
#line 442 "elds_to_erlang.m"
      }
#line 441 "elds_to_erlang.m"
    else
#line 438 "elds_to_erlang.m"
      {
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__LiteralOrInclude_10, (MR_Integer) 0)));
#line 438 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang__FileName_59 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 0)));
#line 438 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__LineNr_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_11, (MR_Integer) 1)));
#line 1246 "elds_to_erlang.m"
        MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65;

#line 453 "elds_to_erlang.m"
        {
#line 453 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "-file(\"");
        }
#line 1246 "elds_to_erlang.m"
        {
#line 1246 "elds_to_erlang.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[4], erl_backend__elds_to_erlang__FileName_59, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_12_65);
        }
#line 455 "elds_to_erlang.m"
        {
#line 455 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "\", ");
        }
#line 456 "elds_to_erlang.m"
        {
#line 456 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_60);
        }
#line 457 "elds_to_erlang.m"
        {
#line 457 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ").\n");
        }
#line 440 "elds_to_erlang.m"
        {
#line 440 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__Code_21);
        }
#line 438 "elds_to_erlang.m"
      }
#line 447 "elds_to_erlang.m"
    {
#line 447 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 448 "elds_to_erlang.m"
    {
#line 448 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
    }
#line 418 "elds_to_erlang.m"
  }
#line 415 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 404 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(
#line 404 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Globals_5,
#line 404 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Import_6)
#line 404 "elds_to_erlang.m"
{
#line 407 "elds_to_erlang.m"
  {
#line 407 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 407 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeaderFile_8;
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16;

#line 408 "elds_to_erlang.m"
    {
#line 408 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(erl_backend__elds_to_erlang__Globals_5, erl_backend__elds_to_erlang__Import_6, (MR_String) ".hrl", &erl_backend__elds_to_erlang__HeaderFile_8);
    }
#line 409 "elds_to_erlang.m"
    {
#line 409 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-include(\"");
    }
#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[2], erl_backend__elds_to_erlang__HeaderFile_8, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_16_16);
    }
#line 411 "elds_to_erlang.m"
    {
#line 411 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "\").\n");
    }
#line 407 "elds_to_erlang.m"
  }
#line 404 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 395 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(
#line 395 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__EnvVarName_4)
#line 395 "elds_to_erlang.m"
{
#line 397 "elds_to_erlang.m"
  {
#line 397 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11;

#line 398 "elds_to_erlang.m"
    {
#line 398 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% ENVVAR ");
    }
#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[1], erl_backend__elds_to_erlang__EnvVarName_4, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_11_11);
    }
#line 400 "elds_to_erlang.m"
    {
#line 400 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 397 "elds_to_erlang.m"
  }
#line 395 "elds_to_erlang.m"
}

#line 391 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(
#line 391 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefn_3)
#line 391 "elds_to_erlang.m"
{
#line 393 "elds_to_erlang.m"
  {
#line 393 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 393 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 3)));
#line 393 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 0)));
#line 393 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 1)));
#line 393 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ProcDefn_3, (MR_Integer) 2)));

#line 393 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 393 "elds_to_erlang.m"
  }
#line 391 "elds_to_erlang.m"
}

#line 389 "elds_to_erlang.m"
static MR_Box MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0_1(
#line 389 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 389 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1)
#line 389 "elds_to_erlang.m"
{
#line 389 "elds_to_erlang.m"
  {
#line 389 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__wrapper_arg_2;
#line 389 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 389 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv0_HeadVar__2_2;

#line 389 "elds_to_erlang.m"
    {
#line 389 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__conv0_HeadVar__2_2 = erl_backend__elds_to_erlang__elds_get_env_var_names_from_defn_1_f_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 389 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__wrapper_arg_2 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_HeadVar__2_2));
#line 389 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__wrapper_arg_2;
#line 389 "elds_to_erlang.m"
  }
#line 389 "elds_to_erlang.m"
}

#line 386 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(
#line 386 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ProcDefns_3)
#line 386 "elds_to_erlang.m"
{
#line 388 "elds_to_erlang.m"
  {
#line 388 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 388 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__HeadVar__2_2;
#line 388 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_4_4;

#line 389 "elds_to_erlang.m"
    {
#line 389 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_4_4 = mercury__list__map_2_f_0((MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_1[0], (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[2], erl_backend__elds_to_erlang__ProcDefns_3);
    }
#line 389 "elds_to_erlang.m"
    {
#line 389 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__HeadVar__2_2 = mercury__set__union_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__V_4_4);
    }
#line 388 "elds_to_erlang.m"
    return erl_backend__elds_to_erlang__HeadVar__2_2;
#line 388 "elds_to_erlang.m"
  }
#line 386 "elds_to_erlang.m"
}

#line 305 "elds_to_erlang.m"
static MR_String MR_CALL 
erl_backend__elds_to_erlang__main_wrapper_code_0_f_0(void)
#line 305 "elds_to_erlang.m"
{
#line 307 "elds_to_erlang.m"
  {
#line 307 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 307 "elds_to_erlang.m"
    return (MR_String) "\n\n    % This function is called in place of main_2_p_0 by the shell script that\n    % we generate for this program, if linking against the standard library.\n   " " % Otherwise main_2_p_0 will be called.\n\n    mercury__main_wrapper() ->\n        mercury__startup(),\n        InitModule = list_to_atom(atom_to_list(\?MODULE) ++ \"" "_init\"),\n        try\n            InitModule:init_env_vars(),\n            InitModule:init_modules(),\n            InitModule:init_modules_required(),\n            " "main_2_p_0(),\n            InitModule:final_modules_required()\n        catch\n            {\'ML_exception\', Excp} ->\n                StackTrace = erlang:get_stackt" "race(),\n                mercury__exception:\'ML_report_uncaught_exception\'(Excp),\n                mercury__maybe_dump_stacktrace(StackTrace),\n                mer" "cury__shutdown(true)\n        end,\n        mercury__shutdown(false).\n\n    mercury__startup() ->\n        mercury__erlang_builtin:\'ML_start_global_server\'(),\n     " "   mercury__library:\'ML_std_library_init\'().\n\n    mercury__shutdown(ForceBadExit) ->\n        mercury__library:\'ML_std_library_finalize\'(),\n        \'ML_erlang_gl" "obal_server\' ! {get_exit_status, self()},\n        receive\n            {get_exit_status_ack, ExitStatus0} ->\n                void\n        end,\n        if\n       " "     ExitStatus0 =:= 0 andalso ForceBadExit ->\n                ExitStatus = 1;\n            true ->\n                ExitStatus = ExitStatus0\n        end,\n       " " mercury__erlang_builtin:\'ML_stop_global_server\'(),\n        % init:stop is preferred to calling halt but there seems\n        % to be no way to choose the exit c" "ode otherwise.\n        case ExitStatus of\n            0 -> void;\n            _ -> halt(ExitStatus)\n        end.\n\n    mercury__maybe_dump_stacktrace(StackTrace) " "->\n        case os:getenv(\"MERCURY_SUPPRESS_STACK_TRACE\") of\n            false ->\n                io:put_chars(\"Stack dump follows:\\n\"),\n                mercury" "__dump_stacktrace(StackTrace);\n            _ ->\n                void\n        end.\n\n    mercury__dump_stacktrace([]) -> void;\n    mercury__dump_stacktrace([St | " "Sts]) ->\n        {Module, Function, ArityOrArgs} = St,\n        io:format(\"\\t~s:~s\", [Module, Function]),\n        if\n            is_integer(ArityOrArgs) ->\n     " "           io:format(\"/~B~n\", [ArityOrArgs]);\n            true ->\n                io:format(\"~p~n\", [ArityOrArgs])\n        end,\n        % Don\'t show stack frame" "s below main.\n        case St of\n            {\?MODULE, mercury__main_wrapper, _} ->\n                void;\n            _ ->\n                mercury__dump_stacktr" "ace(Sts)\n        end.\n";
#line 307 "elds_to_erlang.m"
  }
#line 305 "elds_to_erlang.m"
}

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 295 "elds_to_erlang.m"
{
#line 295 "elds_to_erlang.m"
  {
#line 295 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 295 "elds_to_erlang.m"
    MR_builtin_longjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0, 1);
#line 295 "elds_to_erlang.m"
  }
#line 295 "elds_to_erlang.m"
}

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 295 "elds_to_erlang.m"
{
#line 295 "elds_to_erlang.m"
  {
#line 295 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 295 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7 = ((MR_Word) (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7);
#line 295 "elds_to_erlang.m"
    {
#line 295 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(erl_backend__elds_to_erlang__env_ptr);
    }
#line 295 "elds_to_erlang.m"
  }
#line 295 "elds_to_erlang.m"
}

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_2(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 295 "elds_to_erlang.m"
{
#line 295 "elds_to_erlang.m"
  {
#line 295 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 296 "elds_to_erlang.m"
    {
#line 296 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredId_7, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8);
    }
#line 297 "elds_to_erlang.m"
    {
#line 297 "elds_to_erlang.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredInfo_8, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9);
    }
#line 298 "elds_to_erlang.m"
    {
#line 298 "elds_to_erlang.m"
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredStatus_9);
    }
#line 298 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__V_12_12 == (MR_Integer) 1);
#line 298 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
#line 298 "elds_to_erlang.m"
      {
#line 298 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_1(erl_backend__elds_to_erlang__env_ptr);
      }
#line 295 "elds_to_erlang.m"
  }
#line 295 "elds_to_erlang.m"
}

#line 295 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(
#line 295 "elds_to_erlang.m"
  void * erl_backend__elds_to_erlang__env_ptr_arg)
#line 295 "elds_to_erlang.m"
{
#line 295 "elds_to_erlang.m"
  {
#line 295 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s * erl_backend__elds_to_erlang__env_ptr = (struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s *) erl_backend__elds_to_erlang__env_ptr_arg;

#line 295 "elds_to_erlang.m"
    if (MR_builtin_setjmp((erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__commit_0) == 0)
#line 295 "elds_to_erlang.m"
      {
#line 295 "elds_to_erlang.m"
        {
#line 295 "elds_to_erlang.m"
          {
#line 295 "elds_to_erlang.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &(erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__conv0_PredId_7, (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6, erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_3, erl_backend__elds_to_erlang__env_ptr);
          }
#line 295 "elds_to_erlang.m"
        }
#line 295 "elds_to_erlang.m"
        (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_FALSE;
#line 295 "elds_to_erlang.m"
      }
#line 295 "elds_to_erlang.m"
    else
#line 295 "elds_to_erlang.m"
      (erl_backend__elds_to_erlang__env_ptr)->erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded = MR_TRUE;
#line 295 "elds_to_erlang.m"
  }
#line 295 "elds_to_erlang.m"
}

#line 289 "elds_to_erlang.m"
static MR_Word MR_CALL 
erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(
#line 289 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_3)
#line 289 "elds_to_erlang.m"
{
#line 289 "elds_to_erlang.m"
  {
#line 289 "elds_to_erlang.m"
    struct erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0_s erl_backend__elds_to_erlang__env;

#line 289 "elds_to_erlang.m"
    (erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3 = erl_backend__elds_to_erlang__ModuleInfo_3;
#line 291 "elds_to_erlang.m"
    {
#line 291 "elds_to_erlang.m"
      MR_Word erl_backend__elds_to_erlang__AddMainWrapper_4;
#line 291 "elds_to_erlang.m"
      MR_Word erl_backend__elds_to_erlang__PredTable_5;

#line 292 "elds_to_erlang.m"
      {
#line 292 "elds_to_erlang.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__ModuleInfo_3, &erl_backend__elds_to_erlang__PredTable_5);
      }
#line 293 "elds_to_erlang.m"
      {
#line 293 "elds_to_erlang.m"
        hlds__pred_table__predicate_table_lookup_pred_name_arity_4_p_0(erl_backend__elds_to_erlang__PredTable_5, (MR_String) "main", (MR_Integer) 2, &(erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__PredIds_6);
      }
#line 295 "elds_to_erlang.m"
      {
#line 295 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0_4(&erl_backend__elds_to_erlang__env);
      }
#line 294 "elds_to_erlang.m"
      if ((erl_backend__elds_to_erlang__env).erl_backend__elds_to_erlang__should_add_main_wrapper_2_f_0_env_0__succeeded)
#line 300 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 1;
#line 294 "elds_to_erlang.m"
      else
#line 302 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__AddMainWrapper_4 = (MR_Integer) 0;
#line 291 "elds_to_erlang.m"
      return erl_backend__elds_to_erlang__AddMainWrapper_4;
#line 291 "elds_to_erlang.m"
    }
#line 289 "elds_to_erlang.m"
  }
#line 289 "elds_to_erlang.m"
}

#line 254 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(
#line 254 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__AddMainWrapper_6,
#line 254 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__InitPreds_7,
#line 254 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__FinalPreds_8)
#line 254 "elds_to_erlang.m"
{
#line 258 "elds_to_erlang.m"
  {
#line 258 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;

#line 265 "elds_to_erlang.m"
#line 265 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__AddMainWrapper_6) {
#line 265 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 265 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 266 "elds_to_erlang.m"
        {
#line 266 "elds_to_erlang.m"
        }
#line 265 "elds_to_erlang.m"
        break;
#line 265 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 260 "elds_to_erlang.m"
        {
#line 1383 "elds_to_erlang.m"
          {
#line 1383 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 44);
          }
#line 1360 "elds_to_erlang.m"
          {
#line 1360 "elds_to_erlang.m"
            mercury__io__nl_2_p_0();
          }
#line 1361 "elds_to_erlang.m"
          {
#line 1361 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          }
#line 263 "elds_to_erlang.m"
          {
#line 263 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__main_wrapper");
          }
#line 264 "elds_to_erlang.m"
          {
#line 264 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0((MR_String) "/0");
          }
#line 260 "elds_to_erlang.m"
        }
#line 265 "elds_to_erlang.m"
        break;
#line 265 "elds_to_erlang.m"
    }
#line 270 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__InitPreds_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "elds_to_erlang.m"
      {
#line 269 "elds_to_erlang.m"
      }
#line 270 "elds_to_erlang.m"
    else
#line 271 "elds_to_erlang.m"
      {
#line 1383 "elds_to_erlang.m"
        {
#line 1383 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1360 "elds_to_erlang.m"
        {
#line 1360 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1361 "elds_to_erlang.m"
        {
#line 1361 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 274 "elds_to_erlang.m"
        {
#line 274 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_init");
        }
#line 275 "elds_to_erlang.m"
        {
#line 275 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
#line 271 "elds_to_erlang.m"
      }
#line 279 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__FinalPreds_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "elds_to_erlang.m"
      {
#line 278 "elds_to_erlang.m"
      }
#line 279 "elds_to_erlang.m"
    else
#line 280 "elds_to_erlang.m"
      {
#line 1383 "elds_to_erlang.m"
        {
#line 1383 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 44);
        }
#line 1360 "elds_to_erlang.m"
        {
#line 1360 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1361 "elds_to_erlang.m"
        {
#line 1361 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 283 "elds_to_erlang.m"
        {
#line 283 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0((MR_String) "mercury__required_final");
        }
#line 284 "elds_to_erlang.m"
        {
#line 284 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "/0");
        }
#line 280 "elds_to_erlang.m"
      }
#line 258 "elds_to_erlang.m"
  }
#line 254 "elds_to_erlang.m"
}

#line 237 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(
#line 237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_8,
#line 237 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15,
#line 237 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16)
#line 237 "elds_to_erlang.m"
{
#line 240 "elds_to_erlang.m"
  {
#line 240 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 240 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 0)));
#line 240 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__IsExported_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 1)));
#line 241 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 2)));
#line 241 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___Clause_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_8, (MR_Integer) 3)));

#line 250 "elds_to_erlang.m"
#line 250 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__IsExported_12) {
#line 250 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 250 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 251 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15;
#line 250 "elds_to_erlang.m"
        break;
#line 250 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 243 "elds_to_erlang.m"
        {
#line 1387 "elds_to_erlang.m"
#line 1387 "elds_to_erlang.m"
          switch (erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_15) {
#line 1387 "elds_to_erlang.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1387 "elds_to_erlang.m"
            case (MR_Integer) 0:
#line 1387 "elds_to_erlang.m"
              {
#line 1387 "elds_to_erlang.m"
              }
#line 1387 "elds_to_erlang.m"
              break;
#line 1387 "elds_to_erlang.m"
            case (MR_Integer) 1:
#line 1382 "elds_to_erlang.m"
              {
#line 1383 "elds_to_erlang.m"
                {
#line 1383 "elds_to_erlang.m"
                  mercury__io__write_char_3_p_0((MR_Char) 44);
                }
#line 1382 "elds_to_erlang.m"
              }
#line 1387 "elds_to_erlang.m"
              break;
#line 1387 "elds_to_erlang.m"
          }
#line 1360 "elds_to_erlang.m"
          {
#line 1360 "elds_to_erlang.m"
            mercury__io__nl_2_p_0();
          }
#line 1361 "elds_to_erlang.m"
          {
#line 1361 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
          }
#line 246 "elds_to_erlang.m"
          {
#line 246 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__output_rtti_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__RttiId_11);
          }
#line 247 "elds_to_erlang.m"
          {
#line 247 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 47);
          }
#line 248 "elds_to_erlang.m"
          {
#line 248 "elds_to_erlang.m"
            mercury__io__write_int_3_p_0((MR_Integer) 0);
          }
#line 249 "elds_to_erlang.m"
          *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_16 = (MR_Integer) 1;
#line 243 "elds_to_erlang.m"
        }
#line 250 "elds_to_erlang.m"
        break;
#line 250 "elds_to_erlang.m"
    }
#line 240 "elds_to_erlang.m"
  }
#line 237 "elds_to_erlang.m"
}

#line 226 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(
#line 226 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ForeignExportDefn_6,
#line 226 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__NeedComma_7,
#line 226 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__HeadVar__3_3)
#line 226 "elds_to_erlang.m"
{
#line 229 "elds_to_erlang.m"
  {
#line 229 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 229 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ExportedName_9;
#line 229 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Clause_11;
#line 229 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__V_20_20;
#line 230 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;

#line 229 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__HeadVar__3_3 = (MR_Integer) 1;
#line 230 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__ExportedName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 0)));
#line 230 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 1)));
#line 230 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__Clause_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ForeignExportDefn_6, (MR_Integer) 2)));
#line 1387 "elds_to_erlang.m"
#line 1387 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__NeedComma_7) {
#line 1387 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1387 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 1387 "elds_to_erlang.m"
        {
#line 1387 "elds_to_erlang.m"
        }
#line 1387 "elds_to_erlang.m"
        break;
#line 1387 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 1382 "elds_to_erlang.m"
        {
#line 1383 "elds_to_erlang.m"
          {
#line 1383 "elds_to_erlang.m"
            mercury__io__write_char_3_p_0((MR_Char) 44);
          }
#line 1382 "elds_to_erlang.m"
        }
#line 1387 "elds_to_erlang.m"
        break;
#line 1387 "elds_to_erlang.m"
    }
#line 1360 "elds_to_erlang.m"
    {
#line 1360 "elds_to_erlang.m"
      mercury__io__nl_2_p_0();
    }
#line 1361 "elds_to_erlang.m"
    {
#line 1361 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
    }
#line 233 "elds_to_erlang.m"
    {
#line 233 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ExportedName_9);
    }
#line 234 "elds_to_erlang.m"
    {
#line 234 "elds_to_erlang.m"
      mercury__io__write_char_3_p_0((MR_Char) 47);
    }
#line 235 "elds_to_erlang.m"
    {
#line 235 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_20_20 = erl_backend__elds__elds_clause_arity_1_f_0(erl_backend__elds_to_erlang__Clause_11);
    }
#line 235 "elds_to_erlang.m"
    {
#line 235 "elds_to_erlang.m"
      mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_20_20);
    }
#line 229 "elds_to_erlang.m"
  }
#line 226 "elds_to_erlang.m"
}

#line 208 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_export_ann_6_p_0(
#line 208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_7,
#line 208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_8,
#line 208 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18,
#line 208 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19)
#line 208 "elds_to_erlang.m"
{
#line 211 "elds_to_erlang.m"
  {
#line 211 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 211 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredProcId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 0)));
#line 211 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Body_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 2)));
#line 211 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 0)));
#line 211 "elds_to_erlang.m"
    MR_Integer erl_backend__elds_to_erlang__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__PredProcId_11, (MR_Integer) 1)));
#line 211 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredInfo_17;
#line 212 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 1)));
#line 212 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_8, (MR_Integer) 3)));

#line 214 "elds_to_erlang.m"
    {
#line 214 "elds_to_erlang.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredId_15, &erl_backend__elds_to_erlang__PredInfo_17);
    }
#line 215 "elds_to_erlang.m"
    {
#line 215 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredInfo_17, erl_backend__elds_to_erlang__ProcId_16);
    }
#line 215 "elds_to_erlang.m"
    if (erl_backend__elds_to_erlang__succeeded)
#line 216 "elds_to_erlang.m"
      {
#line 216 "elds_to_erlang.m"
        MR_Integer erl_backend__elds_to_erlang__V_28_28;

#line 1387 "elds_to_erlang.m"
#line 1387 "elds_to_erlang.m"
        switch (erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18) {
#line 1387 "elds_to_erlang.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1387 "elds_to_erlang.m"
          case (MR_Integer) 0:
#line 1387 "elds_to_erlang.m"
            {
#line 1387 "elds_to_erlang.m"
            }
#line 1387 "elds_to_erlang.m"
            break;
#line 1387 "elds_to_erlang.m"
          case (MR_Integer) 1:
#line 1382 "elds_to_erlang.m"
            {
#line 1383 "elds_to_erlang.m"
              {
#line 1383 "elds_to_erlang.m"
                mercury__io__write_char_3_p_0((MR_Char) 44);
              }
#line 1382 "elds_to_erlang.m"
            }
#line 1387 "elds_to_erlang.m"
            break;
#line 1387 "elds_to_erlang.m"
        }
#line 1360 "elds_to_erlang.m"
        {
#line 1360 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 1361 "elds_to_erlang.m"
        {
#line 1361 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__indent_line_3_p_0((MR_Integer) 1);
        }
#line 218 "elds_to_erlang.m"
        {
#line 218 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_7, erl_backend__elds_to_erlang__PredProcId_11);
        }
#line 219 "elds_to_erlang.m"
        {
#line 219 "elds_to_erlang.m"
          mercury__io__write_char_3_p_0((MR_Char) 47);
        }
#line 220 "elds_to_erlang.m"
        {
#line 220 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__V_28_28 = erl_backend__elds__elds_body_arity_1_f_0(erl_backend__elds_to_erlang__Body_13);
        }
#line 220 "elds_to_erlang.m"
        {
#line 220 "elds_to_erlang.m"
          mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__V_28_28);
        }
#line 221 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = (MR_Integer) 1;
#line 216 "elds_to_erlang.m"
      }
#line 215 "elds_to_erlang.m"
    else
#line 223 "elds_to_erlang.m"
      *erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_19 = erl_backend__elds_to_erlang__STATE_VARIABLE_NeedComma_0_18;
#line 211 "elds_to_erlang.m"
  }
#line 208 "elds_to_erlang.m"
}

#line 191 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(
#line 191 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_4)
#line 191 "elds_to_erlang.m"
{
#line 193 "elds_to_erlang.m"
  {
#line 193 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 193 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Version_6;
#line 193 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__Fullarch_7;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_10_10;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_13_13;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_15_15;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_16_16;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_18_18;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_20_20;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_22_22;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_23_23;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_25_25;
#line 193 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_27_27;

#line 194 "elds_to_erlang.m"
    {
#line 194 "elds_to_erlang.m"
      mercury__library__version_2_p_0(&erl_backend__elds_to_erlang__Version_6, &erl_backend__elds_to_erlang__Fullarch_7);
    }
#line 200 "elds_to_erlang.m"
    {
#line 200 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Fullarch_7));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &erl_backend__elds_to_erlang_scalar_common_1[4])));
#line 200 "elds_to_erlang.m"
    }
#line 200 "elds_to_erlang.m"
    {
#line 200 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_25_25, 0) = ((MR_Box) ((MR_String) "% configured for "));
#line 200 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_25_25, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_27_27));
#line 200 "elds_to_erlang.m"
    }
#line 199 "elds_to_erlang.m"
    {
#line 199 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_23_23, 0) = ((MR_Box) ((MR_String) "\n"));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_23_23, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_25_25));
#line 199 "elds_to_erlang.m"
    }
#line 199 "elds_to_erlang.m"
    {
#line 199 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 0) = ((MR_Box) (erl_backend__elds_to_erlang__Version_6));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_22_22, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_23_23));
#line 199 "elds_to_erlang.m"
    }
#line 199 "elds_to_erlang.m"
    {
#line 199 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 0) = ((MR_Box) ((MR_String) "% version "));
#line 199 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_20_20, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_22_22));
#line 199 "elds_to_erlang.m"
    }
#line 198 "elds_to_erlang.m"
    {
#line 198 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 0) = ((MR_Box) ((MR_String) "% by the Mercury compiler,\n"));
#line 198 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_18_18, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_20_20));
#line 198 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_16_16, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_18_18));
#line 197 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_15_15, 0) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_4));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_15_15, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_16_16));
#line 197 "elds_to_erlang.m"
    }
#line 197 "elds_to_erlang.m"
    {
#line 197 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_13_13, 0) = ((MR_Box) ((MR_String) "% Automatically generated from \140"));
#line 197 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_13_13, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_15_15));
#line 197 "elds_to_erlang.m"
    }
#line 196 "elds_to_erlang.m"
    {
#line 196 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_10_10, 0) = ((MR_Box) ((MR_String) "%\n"));
#line 196 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_10_10, 1) = ((MR_Box) (erl_backend__elds_to_erlang__V_13_13));
#line 196 "elds_to_erlang.m"
    }
#line 195 "elds_to_erlang.m"
    {
#line 195 "elds_to_erlang.m"
      mercury__io__write_strings_3_p_0(erl_backend__elds_to_erlang__V_10_10);
    }
#line 193 "elds_to_erlang.m"
  }
#line 191 "elds_to_erlang.m"
}

#line 189 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_10(
#line 189 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 189 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 189 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 189 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 189 "elds_to_erlang.m"
{
#line 189 "elds_to_erlang.m"
  {
#line 189 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 189 "elds_to_erlang.m"
    {
#line 189 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 189 "elds_to_erlang.m"
  }
#line 189 "elds_to_erlang.m"
}

#line 187 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_9(
#line 187 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 187 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 187 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 187 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 187 "elds_to_erlang.m"
{
#line 187 "elds_to_erlang.m"
  {
#line 187 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 187 "elds_to_erlang.m"
    {
#line 187 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_export_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 187 "elds_to_erlang.m"
  }
#line 187 "elds_to_erlang.m"
}

#line 186 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_8(
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
      erl_backend__elds_to_erlang__output_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 186 "elds_to_erlang.m"
  }
#line 186 "elds_to_erlang.m"
}

#line 170 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_7(
#line 170 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 170 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 170 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 170 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 170 "elds_to_erlang.m"
{
#line 170 "elds_to_erlang.m"
  {
#line 170 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 170 "elds_to_erlang.m"
    {
#line 170 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_body_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 170 "elds_to_erlang.m"
  }
#line 170 "elds_to_erlang.m"
}

#line 164 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_6(
#line 164 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 164 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 164 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 164 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 164 "elds_to_erlang.m"
{
#line 164 "elds_to_erlang.m"
  {
#line 164 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 164 "elds_to_erlang.m"
    {
#line 164 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_env_var_directive_3_p_0(((MR_String) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 164 "elds_to_erlang.m"
  }
#line 164 "elds_to_erlang.m"
}

#line 143 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_5(
#line 143 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 143 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 143 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 143 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 143 "elds_to_erlang.m"
{
#line 143 "elds_to_erlang.m"
  {
#line 143 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 143 "elds_to_erlang.m"
    {
#line 143 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_decl_code_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 143 "elds_to_erlang.m"
  }
#line 143 "elds_to_erlang.m"
}

#line 140 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_4(
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
      erl_backend__elds_to_erlang__output_include_header_ann_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 140 "elds_to_erlang.m"
  }
#line 140 "elds_to_erlang.m"
}

#line 130 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_3(
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 130 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 130 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 130 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 130 "elds_to_erlang.m"
{
#line 130 "elds_to_erlang.m"
  {
#line 130 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 130 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16;

#line 130 "elds_to_erlang.m"
    {
#line 130 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_rtti_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16);
    }
#line 130 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv6_STATE_VARIABLE_NeedComma_16));
#line 130 "elds_to_erlang.m"
  }
#line 130 "elds_to_erlang.m"
}

#line 128 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_2(
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 128 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3,
#line 128 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_4,
#line 128 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_5)
#line 128 "elds_to_erlang.m"
{
#line 128 "elds_to_erlang.m"
  {
#line 128 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;
#line 128 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__conv3_HeadVar__3_3;

#line 128 "elds_to_erlang.m"
    {
#line 128 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_foreign_export_ann_5_p_0(((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv3_HeadVar__3_3);
    }
#line 128 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv3_HeadVar__3_3));
#line 128 "elds_to_erlang.m"
  }
#line 128 "elds_to_erlang.m"
}

#line 127 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0_1(
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
    MR_Word erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19;

#line 127 "elds_to_erlang.m"
    {
#line 127 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_export_ann_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1), ((MR_Word) erl_backend__elds_to_erlang__wrapper_arg_2), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19);
    }
#line 127 "elds_to_erlang.m"
    *erl_backend__elds_to_erlang__wrapper_arg_3 = ((MR_Box) (erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_NeedComma_19));
#line 127 "elds_to_erlang.m"
  }
#line 127 "elds_to_erlang.m"
}

#line 110 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_erl_file_5_p_0(
#line 110 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 110 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 110 "elds_to_erlang.m"
  MR_String erl_backend__elds_to_erlang__SourceFileName_8)
#line 110 "elds_to_erlang.m"
{
#line 113 "elds_to_erlang.m"
  {
#line 113 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_90_90;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_91_91;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_92_92;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_98_98;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TypeCtorInfo_104_104;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Imports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignBodies_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ProcDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__ForeignExportDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__RttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__AddMainWrapper_19;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__NeedComma0_20;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__NeedComma1_21;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Globals_23;
#line 113 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__ErlangModuleNameStr_24;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__EnvVarNames_29;
#line 113 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__V_35_35;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_41_41;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_46_46;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_53_53;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_55_55;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_71_71;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_79_79;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_81_81;
#line 113 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_83_83;
#line 127 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv2_NeedComma0_20;
#line 127 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43;
#line 128 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv5_NeedComma1_21;
#line 128 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45;
#line 130 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___NeedComma_22;
#line 130 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv8__NeedComma_22;
#line 130 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47;
#line 140 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54;
#line 143 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56;
#line 164 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68;
#line 170 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72;
#line 186 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80;
#line 187 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82;
#line 189 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31;

#line 116 "elds_to_erlang.m"
    {
#line 116 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__AddMainWrapper_19 = erl_backend__elds_to_erlang__should_add_main_wrapper_1_f_0(erl_backend__elds_to_erlang__ModuleInfo_6);
    }
#line 119 "elds_to_erlang.m"
    {
#line 119 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_do_no_edit_comment_3_p_0(erl_backend__elds_to_erlang__SourceFileName_8);
    }
#line 122 "elds_to_erlang.m"
    {
#line 122 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-module(");
    }
#line 123 "elds_to_erlang.m"
    {
#line 123 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_35_35 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
#line 123 "elds_to_erlang.m"
    {
#line 123 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__V_35_35);
    }
#line 124 "elds_to_erlang.m"
    {
#line 124 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
#line 126 "elds_to_erlang.m"
    {
#line 126 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "-export([");
    }
#line 127 "elds_to_erlang.m"
    {
#line 127 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[0]));
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_1));
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 127 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_41_41, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 127 "elds_to_erlang.m"
    }
#line 10300 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_90_90 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_defn_0;
#line 10302 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_91_91 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 10304 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_92_92 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 127 "elds_to_erlang.m"
    {
#line 127 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_41_41, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv2_NeedComma0_20, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv1_STATE_VARIABLE_IO_43_43);
    }
#line 127 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__NeedComma0_20 = ((MR_Word) erl_backend__elds_to_erlang__conv2_NeedComma0_20);
#line 10313 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_98_98 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_foreign_export_defn_0;
#line 128 "elds_to_erlang.m"
    {
#line 128 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[0], erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma0_20)), &erl_backend__elds_to_erlang__conv5_NeedComma1_21, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv4_STATE_VARIABLE_IO_45_45);
    }
#line 128 "elds_to_erlang.m"
    erl_backend__elds_to_erlang__NeedComma1_21 = ((MR_Word) erl_backend__elds_to_erlang__conv5_NeedComma1_21);
#line 130 "elds_to_erlang.m"
    {
#line 130 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 130 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_5[1]));
#line 130 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_3));
#line 130 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 130 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_46_46, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 130 "elds_to_erlang.m"
    }
#line 10336 "erl_backend.elds_to_erlang.c"
    erl_backend__elds_to_erlang__TypeCtorInfo_104_104 = (MR_Word) &erl_backend__elds__erl_backend__elds__type_ctor_info_elds_rtti_defn_0;
#line 130 "elds_to_erlang.m"
    {
#line 130 "elds_to_erlang.m"
      mercury__list__foldl2_6_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_91_91, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_46_46, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) (erl_backend__elds_to_erlang__NeedComma1_21)), &erl_backend__elds_to_erlang__conv8__NeedComma_22, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv7_STATE_VARIABLE_IO_47_47);
    }
#line 130 "elds_to_erlang.m"
    erl_backend__elds_to_erlang___NeedComma_22 = ((MR_Word) erl_backend__elds_to_erlang__conv8__NeedComma_22);
#line 132 "elds_to_erlang.m"
    {
#line 132 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_wrapper_init_fn_export_ann_5_p_0(erl_backend__elds_to_erlang__AddMainWrapper_19, erl_backend__elds_to_erlang__InitPreds_17, erl_backend__elds_to_erlang__FinalPreds_18);
    }
#line 134 "elds_to_erlang.m"
    {
#line 134 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "]).\n");
    }
#line 137 "elds_to_erlang.m"
    {
#line 137 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% -compile(export_all).\n");
    }
#line 139 "elds_to_erlang.m"
    {
#line 139 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_23);
    }
#line 140 "elds_to_erlang.m"
    {
#line 140 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[1]));
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_4));
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 140 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_53_53, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Globals_23));
#line 140 "elds_to_erlang.m"
    }
#line 140 "elds_to_erlang.m"
    {
#line 140 "elds_to_erlang.m"
      mercury__set__fold_4_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_53_53, erl_backend__elds_to_erlang__Imports_11, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv9_STATE_VARIABLE_IO_54_54);
    }
#line 143 "elds_to_erlang.m"
    {
#line 143 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 143 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[2]));
#line 143 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_5));
#line 143 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 143 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_55_55, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 143 "elds_to_erlang.m"
    }
#line 143 "elds_to_erlang.m"
    {
#line 143 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_55_55, erl_backend__elds_to_erlang__ForeignDecls_12, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv10_STATE_VARIABLE_IO_56_56);
    }
#line 146 "elds_to_erlang.m"
    {
#line 146 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__ErlangModuleNameStr_24 = erl_backend__elds_to_erlang__erlang_module_name_to_str_1_f_0(erl_backend__elds_to_erlang__ModuleName_10);
    }
#line 149 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__InitPreds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "elds_to_erlang.m"
      {
#line 148 "elds_to_erlang.m"
      }
#line 149 "elds_to_erlang.m"
    else
#line 150 "elds_to_erlang.m"
      {
#line 151 "elds_to_erlang.m"
        {
#line 151 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_INIT ");
        }
#line 152 "elds_to_erlang.m"
        {
#line 152 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
#line 153 "elds_to_erlang.m"
        {
#line 153 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_init\n");
        }
#line 150 "elds_to_erlang.m"
      }
#line 157 "elds_to_erlang.m"
    if ((erl_backend__elds_to_erlang__FinalPreds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "elds_to_erlang.m"
      {
#line 156 "elds_to_erlang.m"
      }
#line 157 "elds_to_erlang.m"
    else
#line 158 "elds_to_erlang.m"
      {
#line 159 "elds_to_erlang.m"
        {
#line 159 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) "% REQUIRED_FINAL ");
        }
#line 160 "elds_to_erlang.m"
        {
#line 160 "elds_to_erlang.m"
          erl_backend__elds_to_erlang__output_atom_3_p_0(erl_backend__elds_to_erlang__ErlangModuleNameStr_24);
        }
#line 161 "elds_to_erlang.m"
        {
#line 161 "elds_to_erlang.m"
          mercury__io__write_string_3_p_0((MR_String) ":mercury__required_final\n");
        }
#line 158 "elds_to_erlang.m"
      }
#line 163 "elds_to_erlang.m"
    {
#line 163 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__EnvVarNames_29 = erl_backend__elds_to_erlang__elds_get_env_var_names_1_f_0(erl_backend__elds_to_erlang__ProcDefns_14);
    }
#line 164 "elds_to_erlang.m"
    {
#line 164 "elds_to_erlang.m"
      mercury__set__fold_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_6[1], erl_backend__elds_to_erlang__EnvVarNames_29, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv11_STATE_VARIABLE_IO_68_68);
    }
#line 167 "elds_to_erlang.m"
    {
#line 167 "elds_to_erlang.m"
      mercury__io__write_string_3_p_0((MR_String) "% ENDINIT\n");
    }
#line 170 "elds_to_erlang.m"
    {
#line 170 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 170 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[3]));
#line 170 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_7));
#line 170 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 170 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_71_71, 3) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_8));
#line 170 "elds_to_erlang.m"
    }
#line 170 "elds_to_erlang.m"
    {
#line 170 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_71_71, erl_backend__elds_to_erlang__ForeignBodies_13, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv12_STATE_VARIABLE_IO_72_72);
    }
#line 176 "elds_to_erlang.m"
#line 176 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__AddMainWrapper_19) {
#line 176 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 176 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 177 "elds_to_erlang.m"
        {
#line 177 "elds_to_erlang.m"
        }
#line 176 "elds_to_erlang.m"
        break;
#line 176 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 174 "elds_to_erlang.m"
        {
#line 174 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__V_73_73;

#line 175 "elds_to_erlang.m"
          {
#line 175 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_73_73 = erl_backend__elds_to_erlang__main_wrapper_code_0_f_0();
          }
#line 175 "elds_to_erlang.m"
          {
#line 175 "elds_to_erlang.m"
            mercury__io__write_string_3_p_0(erl_backend__elds_to_erlang__V_73_73);
          }
#line 174 "elds_to_erlang.m"
        }
#line 176 "elds_to_erlang.m"
        break;
#line 176 "elds_to_erlang.m"
    }
#line 180 "elds_to_erlang.m"
    {
#line 180 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_init", erl_backend__elds_to_erlang__InitPreds_17);
    }
#line 182 "elds_to_erlang.m"
    {
#line 182 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__maybe_output_required_init_or_final_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, (MR_String) "mercury__required_final", erl_backend__elds_to_erlang__FinalPreds_18);
    }
#line 186 "elds_to_erlang.m"
    {
#line 186 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[4]));
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_8));
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 186 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_79_79, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 186 "elds_to_erlang.m"
    }
#line 186 "elds_to_erlang.m"
    {
#line 186 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_90_90, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_79_79, erl_backend__elds_to_erlang__ProcDefns_14, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv13_STATE_VARIABLE_IO_80_80);
    }
#line 187 "elds_to_erlang.m"
    {
#line 187 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[5]));
#line 187 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_9));
#line 187 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_81_81, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 187 "elds_to_erlang.m"
    }
#line 187 "elds_to_erlang.m"
    {
#line 187 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_98_98, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_81_81, erl_backend__elds_to_erlang__ForeignExportDefns_15, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv14_STATE_VARIABLE_IO_82_82);
    }
#line 189 "elds_to_erlang.m"
    {
#line 189 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 189 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_3[6]));
#line 189 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_erl_file_5_p_0_10));
#line 189 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 189 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_83_83, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 189 "elds_to_erlang.m"
    }
#line 189 "elds_to_erlang.m"
    {
#line 189 "elds_to_erlang.m"
      mercury__list__foldl_4_p_2(erl_backend__elds_to_erlang__TypeCtorInfo_104_104, erl_backend__elds_to_erlang__TypeCtorInfo_92_92, erl_backend__elds_to_erlang__V_83_83, erl_backend__elds_to_erlang__RttiDefns_16, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv15_STATE_VARIABLE_IO_31);
    }
#line 113 "elds_to_erlang.m"
  }
#line 110 "elds_to_erlang.m"
}

#line 1246 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0_1(
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 1246 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_2,
#line 1246 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_3)
#line 1246 "elds_to_erlang.m"
{
#line 1246 "elds_to_erlang.m"
  {
#line 1246 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 1246 "elds_to_erlang.m"
    {
#line 1246 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__write_with_escaping_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) erl_backend__elds_to_erlang__wrapper_arg_1));
    }
#line 1246 "elds_to_erlang.m"
  }
#line 1246 "elds_to_erlang.m"
}

#line 40 "elds_to_erlang.m"
void MR_CALL 
erl_backend__elds_to_erlang__output_defn_4_p_0(
#line 40 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_5,
#line 40 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__Defn_6)
#line 40 "elds_to_erlang.m"
{
#line 494 "elds_to_erlang.m"
  {
#line 494 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 494 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 0)));
#line 494 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__VarSet_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 1)));
#line 494 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Body_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 2)));
#line 495 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang___EnvVarNames_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Defn_6, (MR_Integer) 3)));

#line 523 "elds_to_erlang.m"
    if (((MR_tag((MR_Word) erl_backend__elds_to_erlang__Body_10)) == (MR_mktag((MR_Integer) 0))))
#line 497 "elds_to_erlang.m"
      {
#line 497 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Clause_12 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Body_10), (MR_Integer) 0);
#line 499 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Context_20;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__ClauseBody_14;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__Fun_15;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__FunBody_18;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_28_28;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_29_29;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_30_30;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_31_31;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_32_32;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang__V_33_33;
#line 503 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___HeadVars_13;
#line 504 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___CallArgs_16;
#line 505 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___FunVars_17;
#line 507 "elds_to_erlang.m"
        MR_String erl_backend__elds_to_erlang___Code_19;
#line 509 "elds_to_erlang.m"
        MR_Word erl_backend__elds_to_erlang___PlaceOutputs_21;

#line 498 "elds_to_erlang.m"
        {
#line 498 "elds_to_erlang.m"
          mercury__io__nl_2_p_0();
        }
#line 503 "elds_to_erlang.m"
        erl_backend__elds_to_erlang___HeadVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 0)));
#line 503 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__ClauseBody_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Clause_12, (MR_Integer) 1)));
#line 504 "elds_to_erlang.m"
        erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__ClauseBody_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 504 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 504 "elds_to_erlang.m"
          {
#line 504 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 1)));
#line 504 "elds_to_erlang.m"
            erl_backend__elds_to_erlang___CallArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__ClauseBody_14, (MR_Integer) 2)));
#line 504 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 504 "elds_to_erlang.m"
            if (erl_backend__elds_to_erlang__succeeded)
#line 504 "elds_to_erlang.m"
              {
#line 504 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__Fun_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_28_28, (MR_Integer) 0)));
#line 505 "elds_to_erlang.m"
                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__Fun_15)) == (MR_mktag((MR_Integer) 0)));
#line 505 "elds_to_erlang.m"
                if (erl_backend__elds_to_erlang__succeeded)
#line 505 "elds_to_erlang.m"
                  {
#line 505 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__V_29_29 = (MR_Word) MR_body(((MR_Word) erl_backend__elds_to_erlang__Fun_15), (MR_Integer) 0);
#line 505 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang___FunVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, (MR_Integer) 0)));
#line 505 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__FunBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, (MR_Integer) 1)));
#line 506 "elds_to_erlang.m"
                    erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__FunBody_18)) == (MR_mktag((MR_Integer) 1)));
#line 506 "elds_to_erlang.m"
                    if (erl_backend__elds_to_erlang__succeeded)
#line 506 "elds_to_erlang.m"
                      {
#line 506 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__FunBody_18, (MR_Integer) 0)));
#line 507 "elds_to_erlang.m"
                        erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 507 "elds_to_erlang.m"
                        if (erl_backend__elds_to_erlang__succeeded)
#line 507 "elds_to_erlang.m"
                          {
#line 507 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_30_30, (MR_Integer) 0)));
#line 507 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_30_30, (MR_Integer) 1)));
#line 507 "elds_to_erlang.m"
                            erl_backend__elds_to_erlang__succeeded = ((((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_31_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 507 "elds_to_erlang.m"
                            if (erl_backend__elds_to_erlang__succeeded)
#line 507 "elds_to_erlang.m"
                              {
#line 507 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang___Code_19 = ((MR_String) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 1)));
#line 507 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), erl_backend__elds_to_erlang__V_31_31, (MR_Integer) 2)));
#line 509 "elds_to_erlang.m"
                                erl_backend__elds_to_erlang__succeeded = ((MR_tag((MR_Word) erl_backend__elds_to_erlang__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 509 "elds_to_erlang.m"
                                if (erl_backend__elds_to_erlang__succeeded)
#line 509 "elds_to_erlang.m"
                                  {
#line 509 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang___PlaceOutputs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, (MR_Integer) 0)));
#line 509 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), erl_backend__elds_to_erlang__V_32_32, (MR_Integer) 1)));
#line 509 "elds_to_erlang.m"
                                    erl_backend__elds_to_erlang__succeeded = (erl_backend__elds_to_erlang__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "elds_to_erlang.m"
                                  }
#line 507 "elds_to_erlang.m"
                              }
#line 507 "elds_to_erlang.m"
                          }
#line 506 "elds_to_erlang.m"
                      }
#line 505 "elds_to_erlang.m"
                  }
#line 504 "elds_to_erlang.m"
              }
#line 504 "elds_to_erlang.m"
          }
#line 499 "elds_to_erlang.m"
        if (erl_backend__elds_to_erlang__succeeded)
#line 514 "elds_to_erlang.m"
          {
#line 514 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__LineNr_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 1)));
#line 514 "elds_to_erlang.m"
            MR_String erl_backend__elds_to_erlang__FileName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__Context_20, (MR_Integer) 0)));
#line 514 "elds_to_erlang.m"
            MR_Integer erl_backend__elds_to_erlang__LineNr_46 = (erl_backend__elds_to_erlang__LineNr_23 - (MR_Integer) 3);
#line 1246 "elds_to_erlang.m"
            MR_Box erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51;

#line 453 "elds_to_erlang.m"
            {
#line 453 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "-file(\"");
            }
#line 1246 "elds_to_erlang.m"
            {
#line 1246 "elds_to_erlang.m"
              mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &erl_backend__elds_to_erlang_scalar_common_4[0], erl_backend__elds_to_erlang__FileName_45, ((MR_Box) ((MR_Integer) 0)), &erl_backend__elds_to_erlang__conv0_STATE_VARIABLE_IO_12_51);
            }
#line 455 "elds_to_erlang.m"
            {
#line 455 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
#line 456 "elds_to_erlang.m"
            {
#line 456 "elds_to_erlang.m"
              mercury__io__write_int_3_p_0(erl_backend__elds_to_erlang__LineNr_46);
            }
#line 457 "elds_to_erlang.m"
            {
#line 457 "elds_to_erlang.m"
              mercury__io__write_string_3_p_0((MR_String) ").\n");
            }
#line 516 "elds_to_erlang.m"
            {
#line 516 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
#line 517 "elds_to_erlang.m"
            {
#line 517 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
            }
#line 518 "elds_to_erlang.m"
            {
#line 518 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__reset_file_directive_2_p_0();
            }
#line 514 "elds_to_erlang.m"
          }
#line 499 "elds_to_erlang.m"
        else
#line 520 "elds_to_erlang.m"
          {
#line 520 "elds_to_erlang.m"
            {
#line 520 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_pred_proc_id_4_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__PredProcId_8);
            }
#line 521 "elds_to_erlang.m"
            {
#line 521 "elds_to_erlang.m"
              erl_backend__elds_to_erlang__output_toplevel_clause_5_p_0(erl_backend__elds_to_erlang__ModuleInfo_5, erl_backend__elds_to_erlang__VarSet_9, erl_backend__elds_to_erlang__Clause_12);
            }
#line 520 "elds_to_erlang.m"
          }
#line 497 "elds_to_erlang.m"
      }
#line 523 "elds_to_erlang.m"
    else
#line 524 "elds_to_erlang.m"
      {
#line 524 "elds_to_erlang.m"
      }
#line 494 "elds_to_erlang.m"
  }
#line 40 "elds_to_erlang.m"
}

#line 97 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_2(
#line 97 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 97 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 97 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
#line 97 "elds_to_erlang.m"
{
#line 97 "elds_to_erlang.m"
  {
#line 97 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 97 "elds_to_erlang.m"
    {
#line 97 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_hrl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
    }
#line 97 "elds_to_erlang.m"
  }
#line 97 "elds_to_erlang.m"
}

#line 90 "elds_to_erlang.m"
static void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0_1(
#line 90 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__closure_arg,
#line 90 "elds_to_erlang.m"
  MR_Box erl_backend__elds_to_erlang__wrapper_arg_1,
#line 90 "elds_to_erlang.m"
  MR_Box * erl_backend__elds_to_erlang__wrapper_arg_2)
#line 90 "elds_to_erlang.m"
{
#line 90 "elds_to_erlang.m"
  {
#line 90 "elds_to_erlang.m"
    MR_Box erl_backend__elds_to_erlang__closure = erl_backend__elds_to_erlang__closure_arg;

#line 90 "elds_to_erlang.m"
    {
#line 90 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__output_erl_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__closure, (MR_Integer) 5))));
    }
#line 90 "elds_to_erlang.m"
  }
#line 90 "elds_to_erlang.m"
}

#line 34 "elds_to_erlang.m"
void MR_CALL 
erl_backend__elds_to_erlang__output_elds_5_p_0(
#line 34 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ModuleInfo_6,
#line 34 "elds_to_erlang.m"
  MR_Word erl_backend__elds_to_erlang__ELDS_7,
#line 34 "elds_to_erlang.m"
  MR_Word * erl_backend__elds_to_erlang__Succeeded_8)
#line 34 "elds_to_erlang.m"
{
#line 81 "elds_to_erlang.m"
  {
#line 81 "elds_to_erlang.m"
    MR_bool erl_backend__elds_to_erlang__succeeded;
#line 81 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 0)));
#line 81 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__Globals_11;
#line 81 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__SourceFileName_12;
#line 81 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__TargetFileName_13;
#line 81 "elds_to_erlang.m"
    MR_String erl_backend__elds_to_erlang__HeaderFileName_14;
#line 81 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__TargetCodeSucceeded_15;
#line 81 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_26_26;
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 1)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 2)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 3)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 4)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 5)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 6)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 7)));
#line 82 "elds_to_erlang.m"
    MR_Word erl_backend__elds_to_erlang__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__ELDS_7, (MR_Integer) 8)));

#line 83 "elds_to_erlang.m"
    {
#line 83 "elds_to_erlang.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(erl_backend__elds_to_erlang__ModuleInfo_6, &erl_backend__elds_to_erlang__Globals_11);
    }
#line 84 "elds_to_erlang.m"
    {
#line 84 "elds_to_erlang.m"
      parse_tree__file_names__module_source_filename_5_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, &erl_backend__elds_to_erlang__SourceFileName_12);
    }
#line 85 "elds_to_erlang.m"
    {
#line 85 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, (MR_String) ".erl", (MR_Integer) 0, &erl_backend__elds_to_erlang__TargetFileName_13);
    }
#line 87 "elds_to_erlang.m"
    {
#line 87 "elds_to_erlang.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__Name_10, (MR_String) ".hrl", (MR_Integer) 0, &erl_backend__elds_to_erlang__HeaderFileName_14);
    }
#line 90 "elds_to_erlang.m"
    {
#line 90 "elds_to_erlang.m"
      erl_backend__elds_to_erlang__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 90 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[0]));
#line 90 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_1));
#line 90 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 90 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 3) = ((MR_Box) (erl_backend__elds_to_erlang__ModuleInfo_6));
#line 90 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
#line 90 "elds_to_erlang.m"
      MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_26_26, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
#line 90 "elds_to_erlang.m"
    }
#line 89 "elds_to_erlang.m"
    {
#line 89 "elds_to_erlang.m"
      libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TargetFileName_13, erl_backend__elds_to_erlang__V_26_26, &erl_backend__elds_to_erlang__TargetCodeSucceeded_15);
    }
#line 105 "elds_to_erlang.m"
#line 105 "elds_to_erlang.m"
    switch (erl_backend__elds_to_erlang__TargetCodeSucceeded_15) {
#line 105 "elds_to_erlang.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 105 "elds_to_erlang.m"
      case (MR_Integer) 0:
#line 107 "elds_to_erlang.m"
        *erl_backend__elds_to_erlang__Succeeded_8 = (MR_Integer) 0;
#line 105 "elds_to_erlang.m"
        break;
#line 105 "elds_to_erlang.m"
      case (MR_Integer) 1:
#line 93 "elds_to_erlang.m"
        {
#line 93 "elds_to_erlang.m"
          MR_String erl_backend__elds_to_erlang__TmpHeaderFileName_16;
#line 93 "elds_to_erlang.m"
          MR_Word erl_backend__elds_to_erlang__V_29_29;

#line 95 "elds_to_erlang.m"
          {
#line 95 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__TmpHeaderFileName_16 = mercury__string__f_43_43_2_f_0(erl_backend__elds_to_erlang__HeaderFileName_14, (MR_String) ".tmp");
          }
#line 97 "elds_to_erlang.m"
          {
#line 97 "elds_to_erlang.m"
            erl_backend__elds_to_erlang__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 97 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 0) = ((MR_Box) (&erl_backend__elds_to_erlang_scalar_common_2[1]));
#line 97 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 1) = ((MR_Box) (erl_backend__elds_to_erlang__output_elds_5_p_0_2));
#line 97 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 97 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 3) = ((MR_Box) (erl_backend__elds_to_erlang__Name_10));
#line 97 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 4) = ((MR_Box) (erl_backend__elds_to_erlang__ELDS_7));
#line 97 "elds_to_erlang.m"
            MR_hl_field(MR_mktag(0), erl_backend__elds_to_erlang__V_29_29, 5) = ((MR_Box) (erl_backend__elds_to_erlang__SourceFileName_12));
#line 97 "elds_to_erlang.m"
          }
#line 96 "elds_to_erlang.m"
          {
#line 96 "elds_to_erlang.m"
            libs__file_util__output_to_file_6_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__TmpHeaderFileName_16, erl_backend__elds_to_erlang__V_29_29, erl_backend__elds_to_erlang__Succeeded_8);
          }
#line 102 "elds_to_erlang.m"
#line 102 "elds_to_erlang.m"
          switch (*erl_backend__elds_to_erlang__Succeeded_8) {
#line 102 "elds_to_erlang.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 102 "elds_to_erlang.m"
            case (MR_Integer) 0:
#line 103 "elds_to_erlang.m"
              {
#line 103 "elds_to_erlang.m"
              }
#line 102 "elds_to_erlang.m"
              break;
#line 102 "elds_to_erlang.m"
            case (MR_Integer) 1:
#line 101 "elds_to_erlang.m"
              {
#line 101 "elds_to_erlang.m"
                parse_tree__module_cmds__update_interface_4_p_0(erl_backend__elds_to_erlang__Globals_11, erl_backend__elds_to_erlang__HeaderFileName_14);
              }
#line 102 "elds_to_erlang.m"
              break;
#line 102 "elds_to_erlang.m"
          }
#line 93 "elds_to_erlang.m"
        }
#line 105 "elds_to_erlang.m"
        break;
#line 105 "elds_to_erlang.m"
    }
#line 81 "elds_to_erlang.m"
  }
#line 34 "elds_to_erlang.m"
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
