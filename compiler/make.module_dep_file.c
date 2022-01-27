/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module make.module_dep_file. */
/* :- implementation. */

/*
INIT mercury__make__module_dep_file__init
ENDINIT
*/

#include "make.module_dep_file.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.compile_target_code.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.process_util.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.dependencies.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 743 "make.module_dep_file.m"
struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
#line 743 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
#line 743 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
#line 746 "make.module_dep_file.m"
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 746 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
#line 747 "make.module_dep_file.m"
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
#line 743 "make.module_dep_file.m"
};


#line 209 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

#line 212 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 215 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 218 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 221 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 224 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 227 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

#line 230 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 233 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 236 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 239 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 242 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

#line 245 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

#line 248 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

#line 251 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

#line 254 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

#line 257 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 260 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 262 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2);

#line 265 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 268 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 270 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 272 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3);

#line 925 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 925 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 925 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 925 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 925 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 918 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 918 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 305 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 308 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 310 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 312 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 323 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 326 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 328 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 330 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 341 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 344 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 346 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 348 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 359 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 362 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 364 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 366 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 947 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__947__1_6_p_0(
#line 947 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 947 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
#line 947 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
#line 947 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25);

#line 935 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__935__1_6_p_0(
#line 935 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 935 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
#line 935 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
#line 935 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25);

#line 901 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0_1(
#line 901 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 901 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 901 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 901 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 899 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0(
#line 899 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 899 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 899 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__1_117,
#line 899 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_118,
#line 899 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_119);

#line 871 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__871__1_3_p_0(
#line 871 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__1_94,
#line 871 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_95,
#line 871 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_96);

#line 692 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__692__1_2_p_0(
#line 692 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 692 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7);

#line 383 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__383__1_3_p_0(
#line 383 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_454);

#line 247 "make.module_dep_file.m"
static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__247__1_1_f_0(
#line 247 "make.module_dep_file.m"
  MR_String make__module_dep_file__LambdaHeadVar__1_58);

#line 72 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
#line 72 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__1_1,
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2,
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_3);

#line 72 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_1,
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 954 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 954 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 954 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 947 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 947 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 947 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 943 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 943 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 935 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 935 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 935 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 931 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 931 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 931 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 931 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 931 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 918 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 918 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 904 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 904 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 899 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 899 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 899 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 899 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 899 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 899 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 899 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 893 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 893 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 893 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 893 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 893 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 893 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 888 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 888 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 888 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 888 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 888 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 888 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 888 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 890 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 871 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 871 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 871 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 871 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 871 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 868 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 868 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 868 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 868 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 866 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1);

#line 817 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 817 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 817 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 817 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 817 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45);

#line 798 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 798 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_6,
#line 798 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepsFile_7,
#line 798 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 750 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 750 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 750 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6);

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 746 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 747 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 747 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 746 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 746 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 743 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 743 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 743 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4);

#line 737 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 737 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 737 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4);

#line 730 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 730 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1);

#line 723 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 723 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 723 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

#line 714 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 714 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 714 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4);

#line 705 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 705 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 705 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4);

#line 699 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 699 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4);

#line 694 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 694 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 694 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4);

#line 785 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 788 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 790 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 792 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 689 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 689 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 689 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4);

#line 677 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 677 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 677 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 677 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 672 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 672 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4);

#line 666 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 666 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 666 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4);

#line 650 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 650 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 595 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 595 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 595 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 595 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 595 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 534 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 534 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 534 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 534 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_72,
#line 534 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_73);

#line 527 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 527 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 527 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 527 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 488 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_27,
#line 488 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_28);

#line 479 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 479 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 469 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 469 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 455 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 455 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 455 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 439 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 439 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 429 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 429 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4);

#line 420 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4);

#line 415 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 415 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 415 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 415 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 415 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 400 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 400 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 400 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 400 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 400 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 394 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 394 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 394 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 394 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 394 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 383 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 383 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 383 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 383 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 383 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 380 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 380 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 380 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 380 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 380 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 377 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 377 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 377 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 377 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 377 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 374 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 374 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 374 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 374 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 374 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 371 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 371 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 371 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 371 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 371 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 368 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 368 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 354 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 354 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_5,
#line 354 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6);

#line 320 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 320 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 320 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_6);

#line 299 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
#line 299 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 299 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_2);

#line 249 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
#line 249 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 249 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 249 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 247 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
#line 247 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 247 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1);

#line 161 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 161 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_37,
#line 161 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_38);

#line 145 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 145 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeModuleAndImports_12,
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 145 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17);

#line 127 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 127 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_6,
#line 127 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7);

#line 77 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 77 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 77 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2);

#line 109 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 109 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 109 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 109 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[8][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[7][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[18][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][7];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[7][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[6][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][10];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[5])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_6[6])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[6])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make__type_ctor_info_rebuild_module_deps_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "error in nested sub-modules"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "failed to parse term"))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



#line 1726 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
  }
};

#line 1734 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1742 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1750 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1758 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1766 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 1774 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

#line 1782 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1790 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_globals_0,
    (MR_PseudoTypeInfo) &make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &make__make__type_ctor_info_make_info_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 1805 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1813 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 1821 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

#line 1827 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

#line 1833 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1839 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1845 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1851 "make.module_dep_file.c"
const MR_TypeCtorInfo_Struct make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  {     make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0 },
  {     make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0
};

#line 1868 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 1871 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1873 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2)
#line 1875 "make.module_dep_file.c"
{
#line 1877 "make.module_dep_file.c"
  {
#line 1879 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;

#line 1882 "make.module_dep_file.c"
    {
#line 1884 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
#line 1887 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 1889 "make.module_dep_file.c"
  }
#line 1891 "make.module_dep_file.c"
}

#line 1894 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 1897 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 1899 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 1901 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3)
#line 1903 "make.module_dep_file.c"
{
#line 1905 "make.module_dep_file.c"
  {
#line 1907 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

#line 1910 "make.module_dep_file.c"
    {
#line 1912 "make.module_dep_file.c"
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
#line 1915 "make.module_dep_file.c"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
#line 1917 "make.module_dep_file.c"
  }
#line 1919 "make.module_dep_file.c"
}

#line 925 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 925 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 925 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 925 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 925 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 925 "make.module_dep_file.m"
{
#line 925 "make.module_dep_file.m"
  {
#line 925 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 925 "make.module_dep_file.m"
    {
#line 925 "make.module_dep_file.m"
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 925 "make.module_dep_file.m"
      return;
    }
#line 925 "make.module_dep_file.m"
  }
#line 925 "make.module_dep_file.m"
}

#line 918 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 918 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 918 "make.module_dep_file.m"
{
#line 923 "make.module_dep_file.m"
  {
#line 923 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 923 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 923 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_21;
#line 923 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 925 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28;
#line 927 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;

#line 924 "make.module_dep_file.m"
    {
#line 924 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 925 "make.module_dep_file.m"
    {
#line 925 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 925 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[1]));
#line 925 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 925 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 925 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 925 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 925 "make.module_dep_file.m"
    }
#line 925 "make.module_dep_file.m"
    {
#line 925 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnits_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28);
    }
#line 927 "make.module_dep_file.m"
    {
#line 927 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_20_20);
    }
#line 928 "make.module_dep_file.m"
    {
#line 928 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_21);
    }
#line 929 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_21 == (MR_Integer) 0);
#line 929 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 929 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 929 "make.module_dep_file.m"
    else
#line 929 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 923 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 923 "make.module_dep_file.m"
  }
#line 918 "make.module_dep_file.m"
}

#line 2039 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 2042 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2044 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2046 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2048 "make.module_dep_file.c"
{
#line 2050 "make.module_dep_file.c"
  {
#line 2052 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2054 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2056 "make.module_dep_file.c"
    MR_String make__module_dep_file__conv0_FactDep_4;

#line 2059 "make.module_dep_file.c"
    {
#line 2061 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
#line 2064 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2066 "make.module_dep_file.c"
      {
#line 2068 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
#line 2070 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2072 "make.module_dep_file.c"
      }
#line 2074 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2076 "make.module_dep_file.c"
  }
#line 2078 "make.module_dep_file.c"
}

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 683 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 685 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
              {
#line 2129 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 687 "make.module_dep_file.m"
                {
#line 687 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_4[17], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 685 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 685 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
  }
#line 683 "make.module_dep_file.m"
}

#line 2149 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 2152 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2154 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2156 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2158 "make.module_dep_file.c"
{
#line 2160 "make.module_dep_file.c"
  {
#line 2162 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2164 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2166 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_Lang_4;

#line 2169 "make.module_dep_file.c"
    {
#line 2171 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
#line 2174 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2176 "make.module_dep_file.c"
      {
#line 2178 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
#line 2180 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2182 "make.module_dep_file.c"
      }
#line 2184 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2186 "make.module_dep_file.c"
  }
#line 2188 "make.module_dep_file.c"
}

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 683 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 685 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
              {
#line 2239 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 687 "make.module_dep_file.m"
                {
#line 687 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_4[16], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 685 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 685 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
  }
#line 683 "make.module_dep_file.m"
}

#line 2259 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 2262 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2264 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2266 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2268 "make.module_dep_file.c"
{
#line 2270 "make.module_dep_file.c"
  {
#line 2272 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2274 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2276 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

#line 2279 "make.module_dep_file.c"
    {
#line 2281 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
#line 2284 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2286 "make.module_dep_file.c"
      {
#line 2288 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
#line 2290 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2292 "make.module_dep_file.c"
      }
#line 2294 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2296 "make.module_dep_file.c"
  }
#line 2298 "make.module_dep_file.c"
}

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 683 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 685 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
              {
#line 2349 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 687 "make.module_dep_file.m"
                {
#line 687 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 685 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 685 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
  }
#line 683 "make.module_dep_file.m"
}

#line 2369 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 2372 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2374 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2376 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2378 "make.module_dep_file.c"
{
#line 2380 "make.module_dep_file.c"
  {
#line 2382 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2384 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2386 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

#line 2389 "make.module_dep_file.c"
    {
#line 2391 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
#line 2394 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2396 "make.module_dep_file.c"
      {
#line 2398 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
#line 2400 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2402 "make.module_dep_file.c"
      }
#line 2404 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2406 "make.module_dep_file.c"
  }
#line 2408 "make.module_dep_file.c"
}

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 683 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 685 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
              {
#line 2459 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 687 "make.module_dep_file.m"
                {
#line 687 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 685 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 685 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
  }
#line 683 "make.module_dep_file.m"
}

#line 947 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__947__1_6_p_0(
#line 947 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 947 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
#line 947 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
#line 947 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25)
#line 947 "make.module_dep_file.m"
{
#line 947 "make.module_dep_file.m"
  {
#line 947 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 947 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 951 "make.module_dep_file.m"
    {
#line 951 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 950 "make.module_dep_file.m"
    {
#line 950 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 50, make__module_dep_file__LambdaHeadVar__1_23, make__module_dep_file__V_29_29, make__module_dep_file__LambdaHeadVar__2_24, make__module_dep_file__LambdaHeadVar__3_25);
#line 950 "make.module_dep_file.m"
      return;
    }
#line 947 "make.module_dep_file.m"
  }
#line 947 "make.module_dep_file.m"
}

#line 935 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__935__1_6_p_0(
#line 935 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 935 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__1_23,
#line 935 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_24,
#line 935 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_25)
#line 935 "make.module_dep_file.m"
{
#line 935 "make.module_dep_file.m"
  {
#line 935 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 938 "make.module_dep_file.m"
    {
#line 938 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, make__module_dep_file__LambdaHeadVar__1_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__LambdaHeadVar__2_24, make__module_dep_file__LambdaHeadVar__3_25);
#line 938 "make.module_dep_file.m"
      return;
    }
#line 935 "make.module_dep_file.m"
  }
#line 935 "make.module_dep_file.m"
}

#line 901 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0_1(
#line 901 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 901 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 901 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 901 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 901 "make.module_dep_file.m"
{
#line 901 "make.module_dep_file.m"
  {
#line 901 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 901 "make.module_dep_file.m"
    {
#line 901 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 901 "make.module_dep_file.m"
      return;
    }
#line 901 "make.module_dep_file.m"
  }
#line 901 "make.module_dep_file.m"
}

#line 899 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0(
#line 899 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 899 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 899 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__1_117,
#line 899 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_118,
#line 899 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_119)
#line 899 "make.module_dep_file.m"
{
#line 899 "make.module_dep_file.m"
  {
#line 899 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 899 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 901 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_LambdaHeadVar__5_121;

#line 901 "make.module_dep_file.m"
    {
#line 901 "make.module_dep_file.m"
      make__module_dep_file__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 901 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
#line 901 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0_1));
#line 901 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 901 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 901 "make.module_dep_file.m"
    }
#line 901 "make.module_dep_file.m"
    {
#line 901 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_122_122, make__module_dep_file__ModuleAndImportList_34, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_LambdaHeadVar__5_121);
    }
#line 900 "make.module_dep_file.m"
    *make__module_dep_file__LambdaHeadVar__1_117 = (MR_Integer) 1;
#line 900 "make.module_dep_file.m"
    *make__module_dep_file__LambdaHeadVar__3_119 = make__module_dep_file__LambdaHeadVar__2_118;
#line 899 "make.module_dep_file.m"
  }
#line 899 "make.module_dep_file.m"
}

#line 871 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__871__1_3_p_0(
#line 871 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__1_94,
#line 871 "make.module_dep_file.m"
  MR_Word make__module_dep_file__LambdaHeadVar__2_95,
#line 871 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__LambdaHeadVar__3_96)
#line 871 "make.module_dep_file.m"
{
#line 871 "make.module_dep_file.m"
  {
#line 871 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 871 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 2)));
#line 871 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 871 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 871 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
#line 873 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 0)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 1)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 3)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 4)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 5)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 6)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 7)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 8)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 9)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 10)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 11)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 12)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 13)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 14)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 15)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 16)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 17)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 18)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 19)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 20)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 21)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 22)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 23)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 24)));
#line 873 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 25)));
#line 873 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__1_94, (MR_Integer) 26)));
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 874 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_241_241;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 874 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_261_261;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;

#line 875 "make.module_dep_file.m"
    {
#line 875 "make.module_dep_file.m"
      make__module_dep_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_97_97, 0) = ((MR_Box) (make__module_dep_file__LambdaHeadVar__1_94));
#line 875 "make.module_dep_file.m"
    }
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 0)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 1)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 2)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 3)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 4)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 5)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 6)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 7)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 8)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 9)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 10)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 11)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 12)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 13)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 14)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 15)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 16)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 17)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 18)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 19)));
#line 874 "make.module_dep_file.m"
    {
#line 874 "make.module_dep_file.m"
      make__module_dep_file__V_99_99 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_37)), make__module_dep_file__V_98_98, ((MR_Box) (make__module_dep_file__V_97_97)));
    }
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 0)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 1)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 2)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 3)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 4)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 5)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 6)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 7)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 8)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 9)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 10)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 11)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 12)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 13)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 14)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 15)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 16)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 17)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 18)));
#line 874 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LambdaHeadVar__2_95, (MR_Integer) 19)));
#line 874 "make.module_dep_file.m"
    {
#line 874 "make.module_dep_file.m"
      MR_Word base;
#line 874 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 874 "make.module_dep_file.m"
      *make__module_dep_file__LambdaHeadVar__3_96 = base;
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_258_258));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_259_259));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_260_260));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_261_261));
#line 874 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_262_262));
#line 874 "make.module_dep_file.m"
    }
#line 871 "make.module_dep_file.m"
  }
#line 871 "make.module_dep_file.m"
}

#line 692 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__692__1_2_p_0(
#line 692 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 692 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7)
#line 692 "make.module_dep_file.m"
{
#line 692 "make.module_dep_file.m"
  {
#line 692 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 692 "make.module_dep_file.m"
    {
#line 692 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
#line 692 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 692 "make.module_dep_file.m"
  }
#line 692 "make.module_dep_file.m"
}

#line 383 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__383__1_3_p_0(
#line 383 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_454)
#line 383 "make.module_dep_file.m"
{
#line 383 "make.module_dep_file.m"
  {
#line 383 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 383 "make.module_dep_file.m"
    {
#line 383 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_454)));
#line 383 "make.module_dep_file.m"
      return;
    }
#line 383 "make.module_dep_file.m"
  }
#line 383 "make.module_dep_file.m"
}

#line 247 "make.module_dep_file.m"
static MR_String MR_CALL 
make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__247__1_1_f_0(
#line 247 "make.module_dep_file.m"
  MR_String make__module_dep_file__LambdaHeadVar__1_58)
#line 247 "make.module_dep_file.m"
{
#line 247 "make.module_dep_file.m"
  {
#line 247 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 247 "make.module_dep_file.m"
    MR_String make__module_dep_file__LambdaHeadVar__2_59;
#line 247 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_61_61;

#line 247 "make.module_dep_file.m"
    {
#line 247 "make.module_dep_file.m"
      make__module_dep_file__V_61_61 = mercury__string__f_43_43_2_f_0(make__module_dep_file__LambdaHeadVar__1_58, (MR_String) "\'");
    }
#line 247 "make.module_dep_file.m"
    {
#line 247 "make.module_dep_file.m"
      return make__module_dep_file__LambdaHeadVar__2_59 = mercury__string__f_43_43_2_f_0((MR_String) "\140", make__module_dep_file__V_61_61);
    }
#line 247 "make.module_dep_file.m"
    return make__module_dep_file__LambdaHeadVar__2_59;
#line 247 "make.module_dep_file.m"
  }
#line 247 "make.module_dep_file.m"
}

#line 72 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
#line 72 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__1_1,
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2,
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_3)
#line 72 "make.module_dep_file.m"
{
#line 72 "make.module_dep_file.m"
  {
#line 72 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 72 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Cast_HeadVar1_4 = (MR_Integer) make__module_dep_file__HeadVar__2_2;
#line 72 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Cast_HeadVar2_5 = (MR_Integer) make__module_dep_file__HeadVar__3_3;

#line 72 "make.module_dep_file.m"
    {
#line 72 "make.module_dep_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__module_dep_file__HeadVar__1_1, make__module_dep_file__Cast_HeadVar1_4, make__module_dep_file__Cast_HeadVar2_5);
#line 72 "make.module_dep_file.m"
      return;
    }
#line 72 "make.module_dep_file.m"
  }
#line 72 "make.module_dep_file.m"
}

#line 72 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_1,
#line 72 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 72 "make.module_dep_file.m"
{
#line 3054 "make.module_dep_file.c"
  {
#line 3056 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

#line 3059 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 3061 "make.module_dep_file.c"
  }
#line 72 "make.module_dep_file.m"
}

#line 954 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 954 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 954 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 954 "make.module_dep_file.m"
{
#line 957 "make.module_dep_file.m"
  {
#line 957 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 957 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "make.module_dep_file.m"
      {
#line 957 "make.module_dep_file.m"
      }
#line 957 "make.module_dep_file.m"
    else
#line 958 "make.module_dep_file.m"
      {
#line 958 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 959 "make.module_dep_file.m"
        {
#line 959 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 960 "make.module_dep_file.m"
        {
#line 960 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 961 "make.module_dep_file.m"
        {
#line 961 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 962 "make.module_dep_file.m"
        {
#line 962 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 963 "make.module_dep_file.m"
        {
#line 963 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 963 "make.module_dep_file.m"
          return;
        }
#line 958 "make.module_dep_file.m"
      }
#line 957 "make.module_dep_file.m"
  }
#line 954 "make.module_dep_file.m"
}

#line 947 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 947 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 947 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 947 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 947 "make.module_dep_file.m"
{
#line 947 "make.module_dep_file.m"
  {
#line 947 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 947 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_LambdaHeadVar__3_25;

#line 947 "make.module_dep_file.m"
    {
#line 947 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__947__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_LambdaHeadVar__3_25);
    }
#line 947 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_LambdaHeadVar__3_25));
#line 947 "make.module_dep_file.m"
  }
#line 947 "make.module_dep_file.m"
}

#line 943 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 943 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 943 "make.module_dep_file.m"
{
#line 946 "make.module_dep_file.m"
  {
#line 946 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 946 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 947 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 947 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 947 "make.module_dep_file.m"
    {
#line 947 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 947 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[1]));
#line 947 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 947 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 947 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 947 "make.module_dep_file.m"
    }
#line 947 "make.module_dep_file.m"
    {
#line 947 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 947 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 946 "make.module_dep_file.m"
  }
#line 943 "make.module_dep_file.m"
}

#line 935 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 935 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 935 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 935 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 935 "make.module_dep_file.m"
{
#line 935 "make.module_dep_file.m"
  {
#line 935 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 935 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_LambdaHeadVar__3_25;

#line 935 "make.module_dep_file.m"
    {
#line 935 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__935__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_LambdaHeadVar__3_25);
    }
#line 935 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_LambdaHeadVar__3_25));
#line 935 "make.module_dep_file.m"
  }
#line 935 "make.module_dep_file.m"
}

#line 931 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 931 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 931 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 931 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 931 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 931 "make.module_dep_file.m"
{
#line 934 "make.module_dep_file.m"
  {
#line 934 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 934 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 935 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 935 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 935 "make.module_dep_file.m"
    {
#line 935 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 935 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[1]));
#line 935 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 935 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 935 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 935 "make.module_dep_file.m"
    }
#line 935 "make.module_dep_file.m"
    {
#line 935 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 935 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 934 "make.module_dep_file.m"
  }
#line 931 "make.module_dep_file.m"
}

#line 918 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 918 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 918 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 918 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 918 "make.module_dep_file.m"
{
#line 923 "make.module_dep_file.m"
  {
#line 923 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 923 "make.module_dep_file.m"
    {
#line 923 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__RawCompUnits_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 923 "make.module_dep_file.m"
      return;
    }
#line 923 "make.module_dep_file.m"
  }
#line 918 "make.module_dep_file.m"
}

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 904 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 904 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 904 "make.module_dep_file.m"
{
#line 904 "make.module_dep_file.m"
  {
#line 904 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 904 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv12_STATE_VARIABLE_Info_13;

#line 904 "make.module_dep_file.m"
    {
#line 904 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv12_STATE_VARIABLE_Info_13);
    }
#line 904 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv12_STATE_VARIABLE_Info_13));
#line 904 "make.module_dep_file.m"
  }
#line 904 "make.module_dep_file.m"
}

#line 899 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 899 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 899 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 899 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 899 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 899 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 899 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 899 "make.module_dep_file.m"
{
#line 899 "make.module_dep_file.m"
  {
#line 899 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 899 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv11_LambdaHeadVar__1_117;
#line 899 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_LambdaHeadVar__3_119;

#line 899 "make.module_dep_file.m"
    {
#line 899 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__899__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv11_LambdaHeadVar__1_117, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv10_LambdaHeadVar__3_119);
    }
#line 899 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv11_LambdaHeadVar__1_117));
#line 899 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv10_LambdaHeadVar__3_119));
#line 899 "make.module_dep_file.m"
  }
#line 899 "make.module_dep_file.m"
}

#line 893 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 893 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 893 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 893 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 893 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 893 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 893 "make.module_dep_file.m"
{
#line 893 "make.module_dep_file.m"
  {
#line 893 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 893 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv8_STATE_VARIABLE_Info_13;

#line 893 "make.module_dep_file.m"
    {
#line 893 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv8_STATE_VARIABLE_Info_13);
    }
#line 893 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv8_STATE_VARIABLE_Info_13));
#line 893 "make.module_dep_file.m"
  }
#line 893 "make.module_dep_file.m"
}

#line 888 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 888 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 888 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 888 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 888 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 888 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 888 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 888 "make.module_dep_file.m"
{
#line 888 "make.module_dep_file.m"
  {
#line 888 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 888 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_HeadVar__5_5;
#line 888 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__7_7;

#line 888 "make.module_dep_file.m"
    {
#line 888 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv7_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv6_HeadVar__7_7);
    }
#line 888 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv7_HeadVar__5_5));
#line 888 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__7_7));
#line 888 "make.module_dep_file.m"
  }
#line 888 "make.module_dep_file.m"
}

#line 890 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 890 "make.module_dep_file.m"
{
#line 890 "make.module_dep_file.m"
  {
#line 890 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 890 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_Succeeded_16;
#line 890 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_STATE_VARIABLE_Info_23;

#line 890 "make.module_dep_file.m"
    {
#line 890 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv4_STATE_VARIABLE_Info_23);
    }
#line 890 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_Succeeded_16));
#line 890 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv4_STATE_VARIABLE_Info_23));
#line 890 "make.module_dep_file.m"
  }
#line 890 "make.module_dep_file.m"
}

#line 871 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 871 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 871 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 871 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 871 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 871 "make.module_dep_file.m"
{
#line 871 "make.module_dep_file.m"
  {
#line 871 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 871 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_LambdaHeadVar__3_96;

#line 871 "make.module_dep_file.m"
    {
#line 871 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__871__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_LambdaHeadVar__3_96);
    }
#line 871 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_LambdaHeadVar__3_96));
#line 871 "make.module_dep_file.m"
  }
#line 871 "make.module_dep_file.m"
}

#line 868 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 868 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 868 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 868 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 868 "make.module_dep_file.m"
{
#line 868 "make.module_dep_file.m"
  {
#line 868 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 868 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__8_8;

#line 868 "make.module_dep_file.m"
    {
#line 868 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv1_HeadVar__8_8);
    }
#line 868 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__8_8));
#line 868 "make.module_dep_file.m"
  }
#line 868 "make.module_dep_file.m"
}

#line 866 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1)
#line 866 "make.module_dep_file.m"
{
#line 866 "make.module_dep_file.m"
  {
#line 866 "make.module_dep_file.m"
    MR_Box make__module_dep_file__wrapper_arg_2;
#line 866 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 866 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__2_2;

#line 866 "make.module_dep_file.m"
    {
#line 866 "make.module_dep_file.m"
      make__module_dep_file__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
#line 866 "make.module_dep_file.m"
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_2));
#line 866 "make.module_dep_file.m"
    return make__module_dep_file__wrapper_arg_2;
#line 866 "make.module_dep_file.m"
  }
#line 866 "make.module_dep_file.m"
}

#line 817 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 817 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 817 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 817 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 817 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45)
#line 817 "make.module_dep_file.m"
{
#line 820 "make.module_dep_file.m"
  {
#line 820 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 820 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 820 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_48_48;

#line 821 "make.module_dep_file.m"
    {
#line 821 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_44, &make__module_dep_file__STATE_VARIABLE_Info_48_48);
    }
#line 914 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_45 = make__module_dep_file__STATE_VARIABLE_Info_48_48;
#line 914 "make.module_dep_file.m"
    else
#line 823 "make.module_dep_file.m"
      {
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_263_263;
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 823 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_14;
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ParseTreeSrc_16;
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_17;
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_18;
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FatalErrors_19;
#line 823 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 826 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_15_15;

#line 824 "make.module_dep_file.m"
        {
#line 824 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 826 "make.module_dep_file.m"
        {
#line 826 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_src_13_p_0(make__module_dep_file__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, make__module_dep_file__ModuleName_8, &make__module_dep_file__SourceFileName_14, (MR_Word) &make__module_dep_file_scalar_common_9[3], &make__module_dep_file__V_15_15, &make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__Specs0_17, &make__module_dep_file__Errors_18);
        }
#line 830 "make.module_dep_file.m"
        {
#line 830 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3694 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 830 "make.module_dep_file.m"
        {
#line 830 "make.module_dep_file.m"
          mercury__set__intersect_3_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18, make__module_dep_file__V_57_57, &make__module_dep_file__FatalErrors_19);
        }
#line 831 "make.module_dep_file.m"
        {
#line 831 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__set__is_non_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__FatalErrors_19);
        }
#line 856 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 832 "make.module_dep_file.m"
          {
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_24;
#line 832 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_25;
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_27;
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_28;
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_68_68;
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_73_73;
#line 832 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_20_20;
#line 833 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_21;
#line 833 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_22;
#line 835 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_23_23;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_156_156;
#line 839 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_157_157;
#line 839 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 851 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_26_26;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_169_169;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_171_171;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_173_173;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_175_175;
#line 852 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_176_176;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_193_193;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_195_195;
#line 855 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_196_196;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_197_197;
#line 855 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;

#line 832 "make.module_dep_file.m"
            {
#line 832 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_20_20);
            }
#line 833 "make.module_dep_file.m"
            {
#line 833 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_17, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_21, (MR_Integer) 0, &make__module_dep_file___NumErrors_22);
            }
#line 835 "make.module_dep_file.m"
            {
#line 835 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_23_23);
            }
#line 836 "make.module_dep_file.m"
            {
#line 836 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
            }
#line 837 "make.module_dep_file.m"
            {
#line 837 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_14);
            }
#line 838 "make.module_dep_file.m"
            {
#line 838 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 11)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 12)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 13)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 14)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 15)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 16)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 17)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 18)));
#line 839 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 19)));
#line 839 "make.module_dep_file.m"
            {
#line 839 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_68_68);
            }
#line 845 "make.module_dep_file.m"
            {
#line 845 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 52, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_9[4]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_24);
            }
#line 847 "make.module_dep_file.m"
            {
#line 847 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_24, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_48_48, &make__module_dep_file__STATE_VARIABLE_Info_73_73);
            }
#line 849 "make.module_dep_file.m"
            {
#line 849 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_25);
            }
#line 851 "make.module_dep_file.m"
            {
#line 851 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_25, &make__module_dep_file__V_26_26);
            }
#line 852 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 852 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 854 "make.module_dep_file.m"
            {
#line 854 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_27, &make__module_dep_file__ModuleDepMap_28);
            }
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 855 "make.module_dep_file.m"
            make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 855 "make.module_dep_file.m"
            {
#line 855 "make.module_dep_file.m"
              MR_Word base;
#line 855 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 855 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_45 = base;
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_28));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_195_195));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 855 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_197_197));
#line 855 "make.module_dep_file.m"
            }
#line 832 "make.module_dep_file.m"
          }
#line 856 "make.module_dep_file.m"
        else
#line 857 "make.module_dep_file.m"
          {
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_266_266;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_267_267;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_272_272;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_275_275;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__RawCompUnits_30;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_31;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_33;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImportList_34;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_38;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_40;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_43;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_89_89;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_93_93;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_113_113;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_125_125;
#line 857 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_29_29;
#line 861 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_130;
#line 861 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_131;
#line 863 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_32_32;
#line 871 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93;
#line 899 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_42_42;
#line 899 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113;

#line 857 "make.module_dep_file.m"
            {
#line 857 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_29_29);
            }
#line 858 "make.module_dep_file.m"
            {
#line 858 "make.module_dep_file.m"
              parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__RawCompUnits_30, make__module_dep_file__Specs0_17, &make__module_dep_file__Specs_31);
            }
#line 860 "make.module_dep_file.m"
            {
#line 860 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 861 "make.module_dep_file.m"
            {
#line 861 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_31, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_130, (MR_Integer) 0, &make__module_dep_file___NumErrors_131);
            }
#line 863 "make.module_dep_file.m"
            {
#line 863 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_32_32);
            }
#line 4163 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_266_266 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 4165 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_267_267 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 866 "make.module_dep_file.m"
            {
#line 866 "make.module_dep_file.m"
              make__module_dep_file__SubModuleNames_33 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_267_267, (MR_Word) &make__module_dep_file_scalar_common_4[12], make__module_dep_file__RawCompUnits_30);
            }
#line 869 "make.module_dep_file.m"
            {
#line 869 "make.module_dep_file.m"
              make__module_dep_file__V_90_90 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_267_267, make__module_dep_file__SubModuleNames_33);
            }
#line 868 "make.module_dep_file.m"
            {
#line 868 "make.module_dep_file.m"
              make__module_dep_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[1]));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 5) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 6) = ((MR_Box) (make__module_dep_file__V_90_90));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 8) = ((MR_Box) (make__module_dep_file__Errors_18));
#line 868 "make.module_dep_file.m"
            }
#line 4201 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_272_272 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 867 "make.module_dep_file.m"
            {
#line 867 "make.module_dep_file.m"
              mercury__list__map_3_p_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__V_89_89, make__module_dep_file__RawCompUnits_30, &make__module_dep_file__ModuleAndImportList_34);
            }
#line 4208 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_275_275 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 871 "make.module_dep_file.m"
            {
#line 871 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__TypeCtorInfo_275_275, (MR_Word) &make__module_dep_file_scalar_common_4[13], make__module_dep_file__ModuleAndImportList_34, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_48_48)), &make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
            }
#line 871 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_93_93 = ((MR_Word) make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
#line 881 "make.module_dep_file.m"
            {
#line 881 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, &make__module_dep_file__VeryVerbose_38);
            }
#line 882 "make.module_dep_file.m"
            {
#line 882 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__set__is_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18);
            }
#line 895 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 884 "make.module_dep_file.m"
              {
#line 884 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_39;
#line 884 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 884 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_104_104;
#line 884 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_110_110;
#line 887 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105;

#line 883 "make.module_dep_file.m"
                {
#line 883 "make.module_dep_file.m"
                  make__module_dep_file__Target_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 883 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 883 "make.module_dep_file.m"
                }
#line 885 "make.module_dep_file.m"
                {
#line 885 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_39);
                }
#line 890 "make.module_dep_file.m"
                {
#line 890 "make.module_dep_file.m"
                  make__module_dep_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 890 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 890 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 890 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 890 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 890 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 890 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 5) = ((MR_Box) (make__module_dep_file__RawCompUnits_30));
#line 890 "make.module_dep_file.m"
                }
#line 888 "make.module_dep_file.m"
                {
#line 888 "make.module_dep_file.m"
                  make__module_dep_file__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[1]));
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[7])));
#line 888 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 6) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 888 "make.module_dep_file.m"
                }
#line 893 "make.module_dep_file.m"
                {
#line 893 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 893 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 893 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 893 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 893 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 893 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 893 "make.module_dep_file.m"
                }
#line 887 "make.module_dep_file.m"
                {
#line 887 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_103_103, make__module_dep_file__V_104_104, &make__module_dep_file__Succeeded_40, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_93_93)), &make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
                }
#line 887 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = ((MR_Word) make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
#line 884 "make.module_dep_file.m"
              }
#line 895 "make.module_dep_file.m"
            else
#line 896 "make.module_dep_file.m"
              {
#line 896 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_40 = (MR_Integer) 0;
#line 896 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = make__module_dep_file__STATE_VARIABLE_Info_93_93;
#line 896 "make.module_dep_file.m"
              }
#line 899 "make.module_dep_file.m"
            {
#line 899 "make.module_dep_file.m"
              make__module_dep_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 899 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 899 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 899 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 899 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 899 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 4) = ((MR_Box) (make__module_dep_file__ModuleAndImportList_34));
#line 899 "make.module_dep_file.m"
            }
#line 904 "make.module_dep_file.m"
            {
#line 904 "make.module_dep_file.m"
              make__module_dep_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 904 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 904 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_8));
#line 904 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 904 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 904 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 904 "make.module_dep_file.m"
            }
#line 899 "make.module_dep_file.m"
            {
#line 899 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_111_111, make__module_dep_file__V_112_112, &make__module_dep_file__V_42_42, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
            }
#line 899 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_113_113 = ((MR_Word) make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
#line 907 "make.module_dep_file.m"
            {
#line 907 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 907 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 907 "make.module_dep_file.m"
            }
#line 909 "make.module_dep_file.m"
            {
#line 909 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_43, (MR_Word) &make__module_dep_file_scalar_common_9[5], make__module_dep_file__Succeeded_40, make__module_dep_file__STATE_VARIABLE_Info_113_113, &make__module_dep_file__STATE_VARIABLE_Info_125_125);
            }
#line 912 "make.module_dep_file.m"
            {
#line 912 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_125_125, make__module_dep_file__STATE_VARIABLE_Info_45);
#line 912 "make.module_dep_file.m"
              return;
            }
#line 857 "make.module_dep_file.m"
          }
#line 823 "make.module_dep_file.m"
      }
#line 820 "make.module_dep_file.m"
  }
#line 817 "make.module_dep_file.m"
}

#line 798 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 798 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_6,
#line 798 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepsFile_7,
#line 798 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 798 "make.module_dep_file.m"
{
#line 802 "make.module_dep_file.m"
  {
#line 802 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 802 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_25_25;
#line 802 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 802 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_34_34;

#line 803 "make.module_dep_file.m"
    {
#line 803 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
    }
#line 4427 "make.module_dep_file.c"
    make__module_dep_file__V_31_31 = (MR_Word) &make__module_dep_file_scalar_common_9[2];
#line 803 "make.module_dep_file.m"
    {
#line 803 "make.module_dep_file.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_dep_file__V_31_31, make__module_dep_file__ModuleDepsFile_7, &make__module_dep_file__V_25_25);
    }
#line 803 "make.module_dep_file.m"
    {
#line 803 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_25_25);
    }
#line 803 "make.module_dep_file.m"
    {
#line 803 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\': ");
    }
#line 803 "make.module_dep_file.m"
    {
#line 803 "make.module_dep_file.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(make__module_dep_file__V_31_31, make__module_dep_file__Msg_8, &make__module_dep_file__V_34_34);
    }
#line 803 "make.module_dep_file.m"
    {
#line 803 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_34_34);
    }
#line 808 "make.module_dep_file.m"
#line 808 "make.module_dep_file.m"
    switch (make__module_dep_file__RebuildModuleDeps_6) {
#line 808 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 808 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 810 "make.module_dep_file.m"
        {
#line 810 "make.module_dep_file.m"
          mercury__io__nl_2_p_0();
#line 810 "make.module_dep_file.m"
          return;
        }
#line 808 "make.module_dep_file.m"
        break;
#line 808 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 806 "make.module_dep_file.m"
        {
#line 807 "make.module_dep_file.m"
          {
#line 807 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) " ...rebuilding\n");
#line 807 "make.module_dep_file.m"
            return;
          }
#line 806 "make.module_dep_file.m"
        }
#line 808 "make.module_dep_file.m"
        break;
#line 808 "make.module_dep_file.m"
    }
#line 802 "make.module_dep_file.m"
  }
#line 798 "make.module_dep_file.m"
}

#line 750 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 750 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 750 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6)
#line 750 "make.module_dep_file.m"
{
#line 753 "make.module_dep_file.m"
  {
#line 753 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 753 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ResFileType_9;

#line 755 "make.module_dep_file.m"
    {
#line 755 "make.module_dep_file.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
#line 776 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
#line 777 "make.module_dep_file.m"
      {
#line 777 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
#line 777 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_15_15;
#line 777 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_16_16;
#line 777 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_18_18;

#line 778 "make.module_dep_file.m"
        {
#line 778 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
#line 778 "make.module_dep_file.m"
        {
#line 778 "make.module_dep_file.m"
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
#line 778 "make.module_dep_file.m"
        {
#line 778 "make.module_dep_file.m"
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
#line 778 "make.module_dep_file.m"
        {
#line 778 "make.module_dep_file.m"
          MR_Word base;
#line 778 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = base;
#line 778 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
#line 778 "make.module_dep_file.m"
        }
#line 777 "make.module_dep_file.m"
      }
#line 776 "make.module_dep_file.m"
    else
#line 757 "make.module_dep_file.m"
      {
#line 757 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

#line 763 "make.module_dep_file.m"
#line 763 "make.module_dep_file.m"
        switch (make__module_dep_file__FileType_10) {
#line 763 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 6:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 5:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 7:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 3:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 8:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 9:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 4:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 773 "make.module_dep_file.m"
            {
#line 773 "make.module_dep_file.m"
              MR_String make__module_dep_file__V_19_19;

#line 774 "make.module_dep_file.m"
              {
#line 774 "make.module_dep_file.m"
                make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
              }
#line 774 "make.module_dep_file.m"
              {
#line 774 "make.module_dep_file.m"
                MR_Word base;
#line 774 "make.module_dep_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 774 "make.module_dep_file.m"
                *make__module_dep_file__FileExists_6 = base;
#line 774 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 774 "make.module_dep_file.m"
              }
#line 773 "make.module_dep_file.m"
            }
#line 763 "make.module_dep_file.m"
            break;
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 763 "make.module_dep_file.m"
          case (MR_Integer) 10:
#line 762 "make.module_dep_file.m"
            *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "make.module_dep_file.m"
            break;
#line 763 "make.module_dep_file.m"
        }
#line 757 "make.module_dep_file.m"
      }
#line 753 "make.module_dep_file.m"
  }
#line 750 "make.module_dep_file.m"
}

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 746 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 746 "make.module_dep_file.m"
{
#line 746 "make.module_dep_file.m"
  {
#line 746 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 746 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
#line 746 "make.module_dep_file.m"
  }
#line 746 "make.module_dep_file.m"
}

#line 747 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 747 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 747 "make.module_dep_file.m"
{
#line 747 "make.module_dep_file.m"
  {
#line 747 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 747 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
#line 747 "make.module_dep_file.m"
    {
#line 747 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
#line 747 "make.module_dep_file.m"
      return;
    }
#line 747 "make.module_dep_file.m"
  }
#line 747 "make.module_dep_file.m"
}

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 746 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 746 "make.module_dep_file.m"
{
#line 746 "make.module_dep_file.m"
  {
#line 746 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 746 "make.module_dep_file.m"
    {
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_8_8;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_9_9;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_10_10;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_11_11;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_12_12;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_13_13;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_14_14;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_15_15;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_16_16;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_17_17;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_18_18;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_19_19;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_20_20;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_21_21;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_22_22;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_23_23;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_24_24;
#line 748 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_25_25;
#line 748 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_26_26;
#line 748 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv1_V_29_29;

#line 748 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
#line 748 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
#line 748 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4770 "make.module_dep_file.c"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 748 "make.module_dep_file.m"
      {
#line 748 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
#line 748 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 748 "make.module_dep_file.m"
        {
#line 748 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
#line 748 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 748 "make.module_dep_file.m"
        }
#line 746 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 746 "make.module_dep_file.m"
        {
#line 4791 "make.module_dep_file.c"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 748 "make.module_dep_file.m"
          {
#line 748 "make.module_dep_file.m"
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
#line 748 "make.module_dep_file.m"
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 748 "make.module_dep_file.m"
            {
#line 748 "make.module_dep_file.m"
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
#line 748 "make.module_dep_file.m"
              return;
            }
#line 746 "make.module_dep_file.m"
        }
#line 746 "make.module_dep_file.m"
    }
#line 746 "make.module_dep_file.m"
  }
#line 746 "make.module_dep_file.m"
}

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 746 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 746 "make.module_dep_file.m"
{
#line 746 "make.module_dep_file.m"
  {
#line 746 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 746 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
#line 746 "make.module_dep_file.m"
      {
#line 4832 "make.module_dep_file.c"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 747 "make.module_dep_file.m"
        {
#line 747 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
#line 746 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
#line 746 "make.module_dep_file.m"
      }
#line 746 "make.module_dep_file.m"
    else
#line 746 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 746 "make.module_dep_file.m"
  }
#line 746 "make.module_dep_file.m"
}

#line 743 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 743 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 743 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4)
#line 743 "make.module_dep_file.m"
{
#line 743 "make.module_dep_file.m"
  {
#line 743 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

#line 743 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
#line 743 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
#line 746 "make.module_dep_file.m"
    {
#line 746 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
#line 746 "make.module_dep_file.m"
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 743 "make.module_dep_file.m"
  }
#line 743 "make.module_dep_file.m"
}

#line 737 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 737 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 737 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4)
#line 737 "make.module_dep_file.m"
{
#line 739 "make.module_dep_file.m"
  {
#line 739 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 739 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 739 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 739 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 739 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4924 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 740 "make.module_dep_file.m"
            {
#line 740 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 739 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 460 "make.module_dep_file.m"
              {
#line 460 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
#line 463 "make.module_dep_file.m"
                  {
#line 463 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
#line 463 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 463 "make.module_dep_file.m"
                  }
#line 460 "make.module_dep_file.m"
                else
#line 460 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
#line 460 "make.module_dep_file.m"
                  {
#line 460 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
#line 460 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 460 "make.module_dep_file.m"
                  }
#line 460 "make.module_dep_file.m"
                else
#line 460 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 460 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 739 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 739 "make.module_dep_file.m"
  }
#line 737 "make.module_dep_file.m"
}

#line 730 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 730 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1)
#line 730 "make.module_dep_file.m"
{
#line 732 "make.module_dep_file.m"
  {
#line 732 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 732 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HeadVar__2_2;

#line 732 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "make.module_dep_file.m"
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "make.module_dep_file.m"
    else
#line 733 "make.module_dep_file.m"
      {
#line 733 "make.module_dep_file.m"
        MR_Word make__module_dep_file__LangSet_4;

#line 735 "make.module_dep_file.m"
        {
#line 735 "make.module_dep_file.m"
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
#line 733 "make.module_dep_file.m"
        {
#line 733 "make.module_dep_file.m"
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
#line 733 "make.module_dep_file.m"
        }
#line 733 "make.module_dep_file.m"
      }
#line 732 "make.module_dep_file.m"
    return make__module_dep_file__HeadVar__2_2;
#line 732 "make.module_dep_file.m"
  }
#line 730 "make.module_dep_file.m"
}

#line 723 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 723 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 723 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
#line 723 "make.module_dep_file.m"
{
#line 726 "make.module_dep_file.m"
  {
#line 726 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 726 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 726 "make.module_dep_file.m"
    MR_String make__module_dep_file__Atom_5;
#line 726 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 726 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 5063 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 727 "make.module_dep_file.m"
            {
#line 727 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 726 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 445 "make.module_dep_file.m"
              {
#line 445 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
#line 448 "make.module_dep_file.m"
                  {
#line 448 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
#line 448 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 448 "make.module_dep_file.m"
                  }
#line 445 "make.module_dep_file.m"
                else
#line 445 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
#line 445 "make.module_dep_file.m"
                  {
#line 445 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
#line 445 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 445 "make.module_dep_file.m"
                  }
#line 445 "make.module_dep_file.m"
                else
#line 445 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 445 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 726 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 726 "make.module_dep_file.m"
  }
#line 723 "make.module_dep_file.m"
}

#line 714 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 714 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 714 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4)
#line 714 "make.module_dep_file.m"
{
#line 717 "make.module_dep_file.m"
  {
#line 717 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_15_15;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FileNameTerm_6;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 717 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_8;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 717 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_14_14;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 717 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_23;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
#line 718 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
#line 717 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 717 "make.module_dep_file.m"
              {
#line 718 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 718 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 718 "make.module_dep_file.m"
                  {
#line 718 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 718 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 718 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 718 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 718 "make.module_dep_file.m"
                      {
#line 718 "make.module_dep_file.m"
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 718 "make.module_dep_file.m"
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5207 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 718 "make.module_dep_file.m"
                        {
#line 718 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
#line 717 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 717 "make.module_dep_file.m"
                          {
#line 675 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
                              {
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 717 "make.module_dep_file.m"
                                  {
#line 675 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
                                      {
#line 675 "make.module_dep_file.m"
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 1)));
#line 703 "make.module_dep_file.m"
                                        {
#line 703 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
#line 717 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 717 "make.module_dep_file.m"
                                          {
#line 675 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
                                              {
#line 675 "make.module_dep_file.m"
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
#line 675 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 717 "make.module_dep_file.m"
                                                  {
#line 675 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
                                                      {
#line 675 "make.module_dep_file.m"
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 1)));
#line 721 "make.module_dep_file.m"
                                                        {
#line 721 "make.module_dep_file.m"
                                                          MR_Word base;
#line 721 "make.module_dep_file.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 721 "make.module_dep_file.m"
                                                          *make__module_dep_file__ForeignInclude_4 = base;
#line 721 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 721 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
#line 721 "make.module_dep_file.m"
                                                        }
#line 721 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = MR_TRUE;
#line 675 "make.module_dep_file.m"
                                                      }
#line 717 "make.module_dep_file.m"
                                                  }
#line 675 "make.module_dep_file.m"
                                              }
#line 717 "make.module_dep_file.m"
                                          }
#line 675 "make.module_dep_file.m"
                                      }
#line 717 "make.module_dep_file.m"
                                  }
#line 675 "make.module_dep_file.m"
                              }
#line 717 "make.module_dep_file.m"
                          }
#line 718 "make.module_dep_file.m"
                      }
#line 718 "make.module_dep_file.m"
                  }
#line 717 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 717 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 717 "make.module_dep_file.m"
  }
#line 714 "make.module_dep_file.m"
}

#line 705 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 705 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 705 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4)
#line 705 "make.module_dep_file.m"
{
#line 708 "make.module_dep_file.m"
  {
#line 708 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_13_13;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_16_16;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_8;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 708 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_14_14;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 708 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_24;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 708 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_21_21, (MR_Integer) 0)));
#line 709 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_14_14) == 0);
#line 708 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 708 "make.module_dep_file.m"
              {
#line 709 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 709 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 709 "make.module_dep_file.m"
                  {
#line 709 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 709 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 709 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 709 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 709 "make.module_dep_file.m"
                      {
#line 709 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 709 "make.module_dep_file.m"
                        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5418 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_16_16 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 709 "make.module_dep_file.m"
                        {
#line 709 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_16_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_15_15)));
                        }
#line 708 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 708 "make.module_dep_file.m"
                          {
#line 675 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
                              {
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 675 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 708 "make.module_dep_file.m"
                                  {
#line 675 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
                                      {
#line 675 "make.module_dep_file.m"
                                        make__module_dep_file__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_28_28, (MR_Integer) 1)));
#line 703 "make.module_dep_file.m"
                                        {
#line 703 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_24, &make__module_dep_file__Language_7);
                                        }
#line 708 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 708 "make.module_dep_file.m"
                                          {
#line 5464 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 711 "make.module_dep_file.m"
                                            {
#line 711 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_13_13, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
#line 708 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 708 "make.module_dep_file.m"
                                              {
#line 712 "make.module_dep_file.m"
                                                {
#line 712 "make.module_dep_file.m"
                                                  MR_Word base;
#line 712 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 712 "make.module_dep_file.m"
                                                  *make__module_dep_file__ForeignImport_4 = base;
#line 712 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 712 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
#line 712 "make.module_dep_file.m"
                                                }
#line 712 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 708 "make.module_dep_file.m"
                                              }
#line 708 "make.module_dep_file.m"
                                          }
#line 675 "make.module_dep_file.m"
                                      }
#line 708 "make.module_dep_file.m"
                                  }
#line 675 "make.module_dep_file.m"
                              }
#line 708 "make.module_dep_file.m"
                          }
#line 709 "make.module_dep_file.m"
                      }
#line 709 "make.module_dep_file.m"
                  }
#line 708 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 708 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 708 "make.module_dep_file.m"
  }
#line 705 "make.module_dep_file.m"
}

#line 699 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 699 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4)
#line 699 "make.module_dep_file.m"
{
#line 701 "make.module_dep_file.m"
  {
#line 701 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 701 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 701 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 701 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;

#line 675 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
      {
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
          {
#line 675 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 703 "make.module_dep_file.m"
              {
#line 703 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
#line 675 "make.module_dep_file.m"
          }
#line 675 "make.module_dep_file.m"
      }
#line 701 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 701 "make.module_dep_file.m"
  }
#line 699 "make.module_dep_file.m"
}

#line 694 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 694 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 694 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4)
#line 694 "make.module_dep_file.m"
{
#line 674 "make.module_dep_file.m"
  {
#line 674 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 674 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 675 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
      {
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
          {
#line 675 "make.module_dep_file.m"
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "make.module_dep_file.m"
          }
#line 675 "make.module_dep_file.m"
      }
#line 674 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 674 "make.module_dep_file.m"
  }
#line 694 "make.module_dep_file.m"
}

#line 5631 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 5634 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 5636 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 5638 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 5640 "make.module_dep_file.c"
{
#line 5642 "make.module_dep_file.c"
  {
#line 5644 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 5646 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 5648 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

#line 5651 "make.module_dep_file.c"
    {
#line 5653 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__692__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
#line 5656 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 5658 "make.module_dep_file.c"
      {
#line 5660 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
#line 5662 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 5664 "make.module_dep_file.c"
      }
#line 5666 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 5668 "make.module_dep_file.c"
  }
#line 5670 "make.module_dep_file.c"
}

#line 689 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 689 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 689 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4)
#line 689 "make.module_dep_file.m"
{
#line 691 "make.module_dep_file.m"
  {
#line 691 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 691 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_17;
#line 691 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_14;
#line 691 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_18_18;
#line 691 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          {
#line 680 "make.module_dep_file.m"
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
#line 691 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 691 "make.module_dep_file.m"
              {
#line 5721 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 687 "make.module_dep_file.m"
                {
#line 687 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_4[11], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
#line 691 "make.module_dep_file.m"
              }
#line 680 "make.module_dep_file.m"
          }
#line 680 "make.module_dep_file.m"
      }
#line 691 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 691 "make.module_dep_file.m"
  }
#line 689 "make.module_dep_file.m"
}

#line 677 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 677 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 677 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 677 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 677 "make.module_dep_file.m"
{
#line 679 "make.module_dep_file.m"
  {
#line 679 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 679 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 680 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 680 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
      {
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
#line 680 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 680 "make.module_dep_file.m"
      }
#line 679 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 679 "make.module_dep_file.m"
  }
#line 677 "make.module_dep_file.m"
}

#line 672 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 672 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 672 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4)
#line 672 "make.module_dep_file.m"
{
#line 674 "make.module_dep_file.m"
  {
#line 674 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 674 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_5_5;

#line 675 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
      {
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 675 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
          {
#line 675 "make.module_dep_file.m"
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 1)));
#line 675 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "make.module_dep_file.m"
          }
#line 675 "make.module_dep_file.m"
      }
#line 674 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 674 "make.module_dep_file.m"
  }
#line 672 "make.module_dep_file.m"
}

#line 666 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 666 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 666 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4)
#line 666 "make.module_dep_file.m"
{
#line 668 "make.module_dep_file.m"
  {
#line 668 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Int_5;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;

#line 669 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 669 "make.module_dep_file.m"
      {
#line 669 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 669 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 669 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 669 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 669 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 669 "make.module_dep_file.m"
          {
#line 669 "make.module_dep_file.m"
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
#line 669 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 80 "make.module_dep_file.m"
#line 80 "make.module_dep_file.m"
              switch (make__module_dep_file__Int_5) {
#line 80 "make.module_dep_file.m"
                default:
#line 80 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 80 "make.module_dep_file.m"
                  break;
#line 80 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 80 "make.module_dep_file.m"
                  {
#line 80 "make.module_dep_file.m"
                    *make__module_dep_file__Version_4 = (MR_Integer) 0;
#line 80 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 80 "make.module_dep_file.m"
                  }
#line 80 "make.module_dep_file.m"
                  break;
#line 80 "make.module_dep_file.m"
                case (MR_Integer) 2:
#line 81 "make.module_dep_file.m"
                  {
#line 81 "make.module_dep_file.m"
                    *make__module_dep_file__Version_4 = (MR_Integer) 1;
#line 81 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 81 "make.module_dep_file.m"
                  }
#line 80 "make.module_dep_file.m"
                  break;
#line 80 "make.module_dep_file.m"
              }
#line 669 "make.module_dep_file.m"
          }
#line 669 "make.module_dep_file.m"
      }
#line 668 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 668 "make.module_dep_file.m"
  }
#line 666 "make.module_dep_file.m"
}

#line 650 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 650 "make.module_dep_file.m"
{
#line 650 "make.module_dep_file.m"
  {
#line 650 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_STATE_VARIABLE_Info_28;

#line 650 "make.module_dep_file.m"
    {
#line 650 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_STATE_VARIABLE_Info_28);
    }
#line 650 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_STATE_VARIABLE_Info_28));
#line 650 "make.module_dep_file.m"
  }
#line 650 "make.module_dep_file.m"
}

#line 650 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 650 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 650 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 650 "make.module_dep_file.m"
{
#line 650 "make.module_dep_file.m"
  {
#line 650 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_STATE_VARIABLE_Info_28;

#line 650 "make.module_dep_file.m"
    {
#line 650 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_STATE_VARIABLE_Info_28);
    }
#line 650 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_STATE_VARIABLE_Info_28));
#line 650 "make.module_dep_file.m"
  }
#line 650 "make.module_dep_file.m"
}

#line 595 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 595 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 595 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 595 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 595 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 595 "make.module_dep_file.m"
{
#line 595 "make.module_dep_file.m"
  {
#line 595 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 595 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__3_3;

#line 595 "make.module_dep_file.m"
    {
#line 595 "make.module_dep_file.m"
      parse_tree__prog_data__add_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__3_3);
    }
#line 595 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__3_3));
#line 595 "make.module_dep_file.m"
  }
#line 595 "make.module_dep_file.m"
}

#line 534 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 534 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 534 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 534 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 534 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_72,
#line 534 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_73)
#line 534 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_37;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleName_38;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Parents_39;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDeps_40;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImpDeps_41;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Children_42;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildren_43;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDeps_44;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_45;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImports_46;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExport_47;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMain_48;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignIncludes_49;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_151_151;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgs_21;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__VersionNumberTerm_22;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileTerm_23;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ParentsTerm_25;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDepsTerm_26;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImpDepsTerm_27;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ChildrenTerm_28;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDepsTerm_30;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMainTerm_34;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgsTail_35;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Version_36;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_78_78;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_82_82;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_83_83;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_84_84;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_85_85;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_86_86;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_87_87;
#line 541 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_88_88;
#line 541 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_184_184;

#line 541 "make.module_dep_file.m"
    {
#line 541 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_184_184, &make__module_dep_file__ModuleArgs_21);
    }
#line 541 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
      {
#line 541 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_184_184) == 0);
#line 541 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
          {
#line 543 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 543 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 543 "make.module_dep_file.m"
              {
#line 543 "make.module_dep_file.m"
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
#line 543 "make.module_dep_file.m"
                make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
#line 544 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 544 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 544 "make.module_dep_file.m"
                  {
#line 544 "make.module_dep_file.m"
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
#line 544 "make.module_dep_file.m"
                    make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
#line 545 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 545 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 545 "make.module_dep_file.m"
                      {
#line 545 "make.module_dep_file.m"
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
#line 545 "make.module_dep_file.m"
                        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
#line 546 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 546 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 546 "make.module_dep_file.m"
                          {
#line 546 "make.module_dep_file.m"
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
#line 546 "make.module_dep_file.m"
                            make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
#line 547 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 547 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 547 "make.module_dep_file.m"
                              {
#line 547 "make.module_dep_file.m"
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
#line 547 "make.module_dep_file.m"
                                make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
#line 548 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 548 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 548 "make.module_dep_file.m"
                                  {
#line 548 "make.module_dep_file.m"
                                    make__module_dep_file__ImpDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
#line 548 "make.module_dep_file.m"
                                    make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
#line 549 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 549 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 549 "make.module_dep_file.m"
                                      {
#line 549 "make.module_dep_file.m"
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 0)));
#line 549 "make.module_dep_file.m"
                                        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 1)));
#line 550 "make.module_dep_file.m"
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_83_83)) == (MR_mktag((MR_Integer) 1)));
#line 550 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 550 "make.module_dep_file.m"
                                          {
#line 550 "make.module_dep_file.m"
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 0)));
#line 550 "make.module_dep_file.m"
                                            make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 1)));
#line 551 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 551 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 551 "make.module_dep_file.m"
                                              {
#line 551 "make.module_dep_file.m"
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 0)));
#line 551 "make.module_dep_file.m"
                                                make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 1)));
#line 552 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 552 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 552 "make.module_dep_file.m"
                                                  {
#line 552 "make.module_dep_file.m"
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 0)));
#line 552 "make.module_dep_file.m"
                                                    make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 1)));
#line 553 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 553 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 553 "make.module_dep_file.m"
                                                      {
#line 553 "make.module_dep_file.m"
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 0)));
#line 553 "make.module_dep_file.m"
                                                        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 1)));
#line 554 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 554 "make.module_dep_file.m"
                                                        if (make__module_dep_file__succeeded)
#line 554 "make.module_dep_file.m"
                                                          {
#line 554 "make.module_dep_file.m"
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 0)));
#line 554 "make.module_dep_file.m"
                                                            make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 1)));
#line 556 "make.module_dep_file.m"
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 556 "make.module_dep_file.m"
                                                            if (make__module_dep_file__succeeded)
#line 556 "make.module_dep_file.m"
                                                              {
#line 556 "make.module_dep_file.m"
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_88_88, (MR_Integer) 0)));
#line 556 "make.module_dep_file.m"
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_88_88, (MR_Integer) 1)));
#line 559 "make.module_dep_file.m"
                                                                {
#line 559 "make.module_dep_file.m"
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
#line 541 "make.module_dep_file.m"
                                                                if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                  {
#line 560 "make.module_dep_file.m"
                                                                    {
#line 560 "make.module_dep_file.m"
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
#line 541 "make.module_dep_file.m"
                                                                    if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                      {
#line 6308 "make.module_dep_file.c"
                                                                        make__module_dep_file__TypeCtorInfo_151_151 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 561 "make.module_dep_file.m"
                                                                        {
#line 561 "make.module_dep_file.m"
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_151_151, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
#line 541 "make.module_dep_file.m"
                                                                        if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                          {
#line 564 "make.module_dep_file.m"
                                                                            {
#line 564 "make.module_dep_file.m"
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
#line 541 "make.module_dep_file.m"
                                                                            if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                              {
#line 565 "make.module_dep_file.m"
                                                                                {
#line 565 "make.module_dep_file.m"
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
#line 541 "make.module_dep_file.m"
                                                                                if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                  {
#line 566 "make.module_dep_file.m"
                                                                                    {
#line 566 "make.module_dep_file.m"
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImpDepsTerm_27, &make__module_dep_file__ImpDeps_41);
                                                                                    }
#line 541 "make.module_dep_file.m"
                                                                                    if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                      {
#line 567 "make.module_dep_file.m"
                                                                                        {
#line 567 "make.module_dep_file.m"
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
#line 541 "make.module_dep_file.m"
                                                                                        if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                          {
#line 568 "make.module_dep_file.m"
                                                                                            {
#line 568 "make.module_dep_file.m"
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
#line 541 "make.module_dep_file.m"
                                                                                            if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                              {
#line 570 "make.module_dep_file.m"
                                                                                                {
#line 570 "make.module_dep_file.m"
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
#line 541 "make.module_dep_file.m"
                                                                                                if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                                  {
#line 571 "make.module_dep_file.m"
                                                                                                    {
#line 571 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
#line 541 "make.module_dep_file.m"
                                                                                                    if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                                      {
#line 573 "make.module_dep_file.m"
                                                                                                        {
#line 573 "make.module_dep_file.m"
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
#line 541 "make.module_dep_file.m"
                                                                                                        if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                                          {
#line 575 "make.module_dep_file.m"
                                                                                                            {
#line 575 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
#line 541 "make.module_dep_file.m"
                                                                                                            if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                                                                              {
#line 578 "make.module_dep_file.m"
                                                                                                                {
#line 578 "make.module_dep_file.m"
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
#line 541 "make.module_dep_file.m"
                                                                                                                if (make__module_dep_file__succeeded)
#line 584 "make.module_dep_file.m"
                                                                                                                  {
#line 584 "make.module_dep_file.m"
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "make.module_dep_file.m"
                                                                                                                      {
#line 581 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
#line 581 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 581 "make.module_dep_file.m"
                                                                                                                          {
#line 583 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
#line 581 "make.module_dep_file.m"
                                                                                                                          }
#line 581 "make.module_dep_file.m"
                                                                                                                      }
#line 584 "make.module_dep_file.m"
                                                                                                                    else
#line 585 "make.module_dep_file.m"
                                                                                                                      {
#line 585 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
#line 585 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__V_92_92;

#line 585 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
#line 585 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 585 "make.module_dep_file.m"
                                                                                                                          {
#line 586 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
#line 586 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
#line 586 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "make.module_dep_file.m"
                                                                                                                            if (make__module_dep_file__succeeded)
#line 587 "make.module_dep_file.m"
                                                                                                                              {
#line 587 "make.module_dep_file.m"
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
                                                                                                                              }
#line 585 "make.module_dep_file.m"
                                                                                                                          }
#line 585 "make.module_dep_file.m"
                                                                                                                      }
#line 584 "make.module_dep_file.m"
                                                                                                                  }
#line 541 "make.module_dep_file.m"
                                                                                                              }
#line 541 "make.module_dep_file.m"
                                                                                                          }
#line 541 "make.module_dep_file.m"
                                                                                                      }
#line 541 "make.module_dep_file.m"
                                                                                                  }
#line 541 "make.module_dep_file.m"
                                                                                              }
#line 541 "make.module_dep_file.m"
                                                                                          }
#line 541 "make.module_dep_file.m"
                                                                                      }
#line 541 "make.module_dep_file.m"
                                                                                  }
#line 541 "make.module_dep_file.m"
                                                                              }
#line 541 "make.module_dep_file.m"
                                                                          }
#line 541 "make.module_dep_file.m"
                                                                      }
#line 541 "make.module_dep_file.m"
                                                                  }
#line 556 "make.module_dep_file.m"
                                                              }
#line 554 "make.module_dep_file.m"
                                                          }
#line 553 "make.module_dep_file.m"
                                                      }
#line 552 "make.module_dep_file.m"
                                                  }
#line 551 "make.module_dep_file.m"
                                              }
#line 550 "make.module_dep_file.m"
                                          }
#line 549 "make.module_dep_file.m"
                                      }
#line 548 "make.module_dep_file.m"
                                  }
#line 547 "make.module_dep_file.m"
                              }
#line 546 "make.module_dep_file.m"
                          }
#line 545 "make.module_dep_file.m"
                      }
#line 544 "make.module_dep_file.m"
                  }
#line 543 "make.module_dep_file.m"
              }
#line 541 "make.module_dep_file.m"
          }
#line 541 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 591 "make.module_dep_file.m"
      {
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_164_164;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeInfo_170_170;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleNameContext_51;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ContainsForeignCode_52;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectDeps_53;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__PublicChildren_54;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignImportModules_55;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__DirectIntItemBlocksCord_57;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectIntItemBlocksCord_58;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OptItemBlocksCord_59;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IntForOptItemBlocksCord_60;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleVersionNumbers_61;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_63;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleAndImports_65;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_95_95;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_96_96;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_97_97;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_98_98;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_99_99;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_100_100;
#line 591 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_101_101;
#line 595 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv1_ForeignImportModules_55;
#line 625 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_185_185;

#line 591 "make.module_dep_file.m"
        {
#line 591 "make.module_dep_file.m"
          make__module_dep_file__ModuleNameContext_51 = mercury__term__context_init_0_f_0();
        }
#line 592 "make.module_dep_file.m"
        {
#line 592 "make.module_dep_file.m"
          make__module_dep_file__ContainsForeignCode_52 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
#line 6576 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_164_164 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 593 "make.module_dep_file.m"
        {
#line 593 "make.module_dep_file.m"
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, &make__module_dep_file__IndirectDeps_53);
        }
#line 594 "make.module_dep_file.m"
        {
#line 594 "make.module_dep_file.m"
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, &make__module_dep_file__PublicChildren_54);
        }
#line 596 "make.module_dep_file.m"
        {
#line 596 "make.module_dep_file.m"
          make__module_dep_file__V_95_95 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
        }
#line 595 "make.module_dep_file.m"
        {
#line 595 "make.module_dep_file.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0, (MR_Word) &make__module_dep_file_scalar_common_4[10], make__module_dep_file__ForeignImports_46, ((MR_Box) (make__module_dep_file__V_95_95)), &make__module_dep_file__conv1_ForeignImportModules_55);
        }
#line 595 "make.module_dep_file.m"
        make__module_dep_file__ForeignImportModules_55 = ((MR_Word) make__module_dep_file__conv1_ForeignImportModules_55);
#line 6600 "make.module_dep_file.c"
        make__module_dep_file__TypeInfo_170_170 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 598 "make.module_dep_file.m"
        {
#line 598 "make.module_dep_file.m"
          make__module_dep_file__DirectIntItemBlocksCord_57 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_170_170);
        }
#line 599 "make.module_dep_file.m"
        {
#line 599 "make.module_dep_file.m"
          make__module_dep_file__IndirectIntItemBlocksCord_58 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_170_170);
        }
#line 600 "make.module_dep_file.m"
        {
#line 600 "make.module_dep_file.m"
          make__module_dep_file__OptItemBlocksCord_59 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[2]);
        }
#line 601 "make.module_dep_file.m"
        {
#line 601 "make.module_dep_file.m"
          make__module_dep_file__IntForOptItemBlocksCord_60 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[3]);
        }
#line 602 "make.module_dep_file.m"
        {
#line 602 "make.module_dep_file.m"
          mercury__map__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, &make__module_dep_file__ModuleVersionNumbers_61);
        }
#line 604 "make.module_dep_file.m"
        {
#line 604 "make.module_dep_file.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &make__module_dep_file__Errors_63);
        }
#line 608 "make.module_dep_file.m"
        {
#line 608 "make.module_dep_file.m"
          make__module_dep_file__V_96_96 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__Parents_39);
        }
#line 609 "make.module_dep_file.m"
        {
#line 609 "make.module_dep_file.m"
          make__module_dep_file__V_97_97 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__IntDeps_40);
        }
#line 610 "make.module_dep_file.m"
        {
#line 610 "make.module_dep_file.m"
          make__module_dep_file__V_98_98 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__ImpDeps_41);
        }
#line 612 "make.module_dep_file.m"
        {
#line 612 "make.module_dep_file.m"
          make__module_dep_file__V_99_99 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__Children_42);
        }
#line 614 "make.module_dep_file.m"
        {
#line 614 "make.module_dep_file.m"
          make__module_dep_file__V_100_100 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__NestedChildren_43);
        }
#line 616 "make.module_dep_file.m"
        {
#line 616 "make.module_dep_file.m"
          make__module_dep_file__V_101_101 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludes_49);
        }
#line 606 "make.module_dep_file.m"
        {
#line 606 "make.module_dep_file.m"
          make__module_dep_file__ModuleAndImports_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 3) = ((MR_Box) (make__module_dep_file__ModuleNameContext_51));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 4) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 5) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 6) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 7) = ((MR_Box) (make__module_dep_file__IndirectDeps_53));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 8) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 9) = ((MR_Box) (make__module_dep_file__PublicChildren_54));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 10) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 11) = ((MR_Box) (make__module_dep_file__FactDeps_44));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 12) = ((MR_Box) (make__module_dep_file__ForeignImportModules_55));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 13) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_52));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 15) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 17) = ((MR_Box) (make__module_dep_file__DirectIntItemBlocksCord_57));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 18) = ((MR_Box) (make__module_dep_file__IndirectIntItemBlocksCord_58));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 19) = ((MR_Box) (make__module_dep_file__OptItemBlocksCord_59));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 20) = ((MR_Box) (make__module_dep_file__IntForOptItemBlocksCord_60));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 21) = ((MR_Box) (make__module_dep_file__ModuleVersionNumbers_61));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 22) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 23) = ((MR_Box) (make__module_dep_file__Errors_63));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 25) = ((MR_Box) (make__module_dep_file__HasMain_48));
#line 606 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 26) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
#line 606 "make.module_dep_file.m"
        }
#line 625 "make.module_dep_file.m"
        {
#line 625 "make.module_dep_file.m"
          make__module_dep_file__V_185_185 = mercury__dir__this_directory_0_f_0();
        }
#line 625 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_185_185) == 0);
#line 6729 "make.module_dep_file.c"
        if (make__module_dep_file__succeeded)
#line 6731 "make.module_dep_file.c"
          {
#line 6733 "make.module_dep_file.c"
            MR_Word make__module_dep_file__SourceFileExists_66;

#line 626 "make.module_dep_file.m"
            {
#line 626 "make.module_dep_file.m"
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_66);
            }
#line 6741 "make.module_dep_file.c"
            if ((make__module_dep_file__SourceFileExists_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6743 "make.module_dep_file.c"
              {
#line 6745 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
#line 6747 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap_70;
#line 6749 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_104_104;
#line 6751 "make.module_dep_file.c"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
#line 6753 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_106_106;
#line 6755 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
#line 6757 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
#line 6759 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
#line 6761 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
#line 6763 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
#line 6765 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
#line 6767 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
#line 6769 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
#line 6771 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
#line 6773 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
#line 6775 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
#line 6777 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
#line 6779 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
#line 6781 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
#line 6783 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
#line 6785 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
#line 6787 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
#line 6789 "make.module_dep_file.c"
                MR_Integer make__module_dep_file__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
#line 6791 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));
#line 649 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_73;
#line 649 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_75;

#line 640 "make.module_dep_file.m"
                {
#line 640 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_104_104, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_65));
#line 640 "make.module_dep_file.m"
                }
#line 640 "make.module_dep_file.m"
                {
#line 640 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_104_104)), make__module_dep_file__ModuleDepMap0_69, &make__module_dep_file__ModuleDepMap_70);
                }
#line 642 "make.module_dep_file.m"
                {
#line 642 "make.module_dep_file.m"
                  make__module_dep_file__STATE_VARIABLE_Info_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_70));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 1) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 2) = ((MR_Box) (make__module_dep_file__V_113_113));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 3) = ((MR_Box) (make__module_dep_file__V_114_114));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 4) = ((MR_Box) (make__module_dep_file__V_115_115));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 5) = ((MR_Box) (make__module_dep_file__V_116_116));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 6) = ((MR_Box) (make__module_dep_file__V_117_117));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 7) = ((MR_Box) (make__module_dep_file__V_118_118));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 8) = ((MR_Box) (make__module_dep_file__V_119_119));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 9) = ((MR_Box) (make__module_dep_file__V_120_120));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 10) = ((MR_Box) (make__module_dep_file__V_121_121));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 11) = ((MR_Box) (make__module_dep_file__V_122_122));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 12) = ((MR_Box) (make__module_dep_file__V_123_123));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 13) = ((MR_Box) (make__module_dep_file__V_124_124));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 14) = ((MR_Box) (make__module_dep_file__V_125_125));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 15) = ((MR_Box) (make__module_dep_file__V_126_126));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 16) = ((MR_Box) (make__module_dep_file__V_127_127));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 17) = ((MR_Box) (make__module_dep_file__V_128_128));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 18) = ((MR_Box) (make__module_dep_file__V_129_129));
#line 642 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 19) = ((MR_Box) (make__module_dep_file__V_130_130));
#line 642 "make.module_dep_file.m"
                }
#line 650 "make.module_dep_file.m"
                {
#line 650 "make.module_dep_file.m"
                  make__module_dep_file__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 650 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
#line 650 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
#line 650 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 650 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 650 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 4) = ((MR_Box) ((MR_Integer) 1));
#line 650 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 650 "make.module_dep_file.m"
                }
#line 649 "make.module_dep_file.m"
                {
#line 649 "make.module_dep_file.m"
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_106_106, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_73, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_75);
                }
#line 649 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_73 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_73);
#line 653 "make.module_dep_file.m"
                {
#line 653 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_73, make__module_dep_file__NestedChildren_43);
                }
#line 655 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 654 "make.module_dep_file.m"
                  {
#line 654 "make.module_dep_file.m"
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_9[0]);
#line 654 "make.module_dep_file.m"
                  }
#line 655 "make.module_dep_file.m"
                else
#line 656 "make.module_dep_file.m"
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6899 "make.module_dep_file.c"
              }
#line 6901 "make.module_dep_file.c"
            else
#line 6903 "make.module_dep_file.c"
              {
#line 631 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_68_68;

#line 631 "make.module_dep_file.m"
                {
#line 631 "make.module_dep_file.m"
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_68_68);
                }
#line 660 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_66;
#line 659 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_73 = make__module_dep_file__STATE_VARIABLE_Info_0_72;
#line 6917 "make.module_dep_file.c"
              }
#line 6919 "make.module_dep_file.c"
          }
#line 6921 "make.module_dep_file.c"
        else
#line 6923 "make.module_dep_file.c"
          {
#line 6925 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap0_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
#line 6927 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap_232;
#line 6929 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_234_234;
#line 6931 "make.module_dep_file.c"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_235;
#line 6933 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_236_236;
#line 6935 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
#line 6937 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
#line 6939 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
#line 6941 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
#line 6943 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
#line 6945 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
#line 6947 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
#line 6949 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
#line 6951 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
#line 6953 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
#line 6955 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
#line 6957 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
#line 6959 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
#line 6961 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
#line 6963 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
#line 6965 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
#line 6967 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
#line 6969 "make.module_dep_file.c"
            MR_Integer make__module_dep_file__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
#line 6971 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));
#line 649 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv7_STATE_VARIABLE_Info_73;
#line 649 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv6_STATE_VARIABLE_IO_75;

#line 640 "make.module_dep_file.m"
            {
#line 640 "make.module_dep_file.m"
              make__module_dep_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_234_234, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_65));
#line 640 "make.module_dep_file.m"
            }
#line 640 "make.module_dep_file.m"
            {
#line 640 "make.module_dep_file.m"
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_234_234)), make__module_dep_file__ModuleDepMap0_231, &make__module_dep_file__ModuleDepMap_232);
            }
#line 642 "make.module_dep_file.m"
            {
#line 642 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_105_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_232));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 1) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 2) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 3) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 4) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 5) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 6) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 7) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 8) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 9) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 10) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 11) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 12) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 13) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 14) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 15) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 16) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 17) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 18) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 642 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 19) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 642 "make.module_dep_file.m"
            }
#line 650 "make.module_dep_file.m"
            {
#line 650 "make.module_dep_file.m"
              make__module_dep_file__V_236_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 650 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_8[0]));
#line 650 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_3));
#line 650 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 650 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 650 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 4) = ((MR_Box) ((MR_Integer) 1));
#line 650 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 650 "make.module_dep_file.m"
            }
#line 649 "make.module_dep_file.m"
            {
#line 649 "make.module_dep_file.m"
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_236_236, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_235)), &make__module_dep_file__conv7_STATE_VARIABLE_Info_73, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv6_STATE_VARIABLE_IO_75);
            }
#line 649 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_73 = ((MR_Word) make__module_dep_file__conv7_STATE_VARIABLE_Info_73);
#line 653 "make.module_dep_file.m"
            {
#line 653 "make.module_dep_file.m"
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_73, make__module_dep_file__NestedChildren_43);
            }
#line 655 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 654 "make.module_dep_file.m"
              {
#line 654 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_9[0]);
#line 654 "make.module_dep_file.m"
              }
#line 655 "make.module_dep_file.m"
            else
#line 656 "make.module_dep_file.m"
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7079 "make.module_dep_file.c"
          }
#line 591 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    else
#line 663 "make.module_dep_file.m"
      {
#line 663 "make.module_dep_file.m"
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_9[1]);
#line 663 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_73 = make__module_dep_file__STATE_VARIABLE_Info_0_72;
#line 663 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
  }
#line 534 "make.module_dep_file.m"
}

#line 527 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 527 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 527 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 527 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 527 "make.module_dep_file.m"
{
#line 527 "make.module_dep_file.m"
  {
#line 527 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 527 "make.module_dep_file.m"
    {
#line 527 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 527 "make.module_dep_file.m"
      return;
    }
#line 527 "make.module_dep_file.m"
  }
#line 527 "make.module_dep_file.m"
}

#line 488 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 488 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_27,
#line 488 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_28)
#line 488 "make.module_dep_file.m"
{
#line 493 "make.module_dep_file.m"
  {
#line 493 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 493 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepFile_15;
#line 493 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OldInputStream_16;
#line 493 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchResult_17;
#line 493 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_31_31;

#line 495 "make.module_dep_file.m"
    {
#line 495 "make.module_dep_file.m"
      make__module_dep_file__V_31_31 = make__make_module_dep_file_extension_0_f_0();
    }
#line 494 "make.module_dep_file.m"
    {
#line 494 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_31_31, &make__module_dep_file__ModuleDepFile_15);
    }
#line 496 "make.module_dep_file.m"
    {
#line 496 "make.module_dep_file.m"
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
#line 497 "make.module_dep_file.m"
    {
#line 497 "make.module_dep_file.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
#line 524 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 525 "make.module_dep_file.m"
      {
#line 525 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_36_36;
#line 525 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_54 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));

#line 527 "make.module_dep_file.m"
        {
#line 527 "make.module_dep_file.m"
          make__module_dep_file__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 527 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_7[0]));
#line 527 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
#line 527 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 527 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 3) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_10));
#line 527 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 4) = ((MR_Box) (make__module_dep_file__ModuleDepFile_15));
#line 527 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_36_36, 5) = ((MR_Box) (make__module_dep_file__Msg_54));
#line 527 "make.module_dep_file.m"
        }
#line 526 "make.module_dep_file.m"
        {
#line 526 "make.module_dep_file.m"
          make__util__debug_make_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_36_36);
        }
#line 792 "make.module_dep_file.m"
#line 792 "make.module_dep_file.m"
        switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 792 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 792 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 795 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_0_27;
#line 792 "make.module_dep_file.m"
            break;
#line 792 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 793 "make.module_dep_file.m"
            {
#line 793 "make.module_dep_file.m"
              make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_27, make__module_dep_file__STATE_VARIABLE_Info_28);
#line 793 "make.module_dep_file.m"
              return;
            }
#line 792 "make.module_dep_file.m"
            break;
#line 792 "make.module_dep_file.m"
        }
#line 525 "make.module_dep_file.m"
      }
#line 524 "make.module_dep_file.m"
    else
#line 500 "make.module_dep_file.m"
      {
#line 500 "make.module_dep_file.m"
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 500 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TermResult_19;
#line 500 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepStream_20;

#line 501 "make.module_dep_file.m"
        {
#line 501 "make.module_dep_file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
#line 502 "make.module_dep_file.m"
        {
#line 502 "make.module_dep_file.m"
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
#line 503 "make.module_dep_file.m"
        {
#line 503 "make.module_dep_file.m"
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
#line 7260 "make.module_dep_file.c"
#line 7261 "make.module_dep_file.c"
        switch (MR_tag((MR_Word) make__module_dep_file__TermResult_19)) {
#line 7263 "make.module_dep_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 7265 "make.module_dep_file.c"
          case (MR_Integer) 0:
#line 7267 "make.module_dep_file.c"
            {
#line 7269 "make.module_dep_file.c"
              MR_String make__module_dep_file__V_48_48;
#line 7271 "make.module_dep_file.c"
              MR_String make__module_dep_file__V_50_50;

#line 520 "make.module_dep_file.m"
              {
#line 520 "make.module_dep_file.m"
                make__module_dep_file__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "/", make__module_dep_file__ModuleDepFile_15);
              }
#line 520 "make.module_dep_file.m"
              {
#line 520 "make.module_dep_file.m"
                make__module_dep_file__V_48_48 = mercury__string__f_43_43_2_f_0(make__module_dep_file__ModuleDir_18, make__module_dep_file__V_50_50);
              }
#line 519 "make.module_dep_file.m"
              {
#line 519 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__V_48_48, (MR_String) "unexpected eof");
              }
#line 792 "make.module_dep_file.m"
#line 792 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 792 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 792 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 795 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_0_27;
#line 792 "make.module_dep_file.m"
                  break;
#line 792 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 793 "make.module_dep_file.m"
                  {
#line 793 "make.module_dep_file.m"
                    make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_27, make__module_dep_file__STATE_VARIABLE_Info_28);
#line 793 "make.module_dep_file.m"
                    return;
                  }
#line 792 "make.module_dep_file.m"
                  break;
#line 792 "make.module_dep_file.m"
              }
#line 7313 "make.module_dep_file.c"
            }
#line 7315 "make.module_dep_file.c"
            break;
#line 7317 "make.module_dep_file.c"
          case (MR_Integer) 1:
#line 7319 "make.module_dep_file.c"
            {
#line 7321 "make.module_dep_file.c"
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
#line 7323 "make.module_dep_file.c"
              MR_String make__module_dep_file__Msg_82;
#line 7325 "make.module_dep_file.c"
              MR_String make__module_dep_file__V_85_85;
#line 7327 "make.module_dep_file.c"
              MR_String make__module_dep_file__V_87_87;
#line 512 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

#line 513 "make.module_dep_file.m"
              {
#line 513 "make.module_dep_file.m"
                make__module_dep_file__Msg_82 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
#line 520 "make.module_dep_file.m"
              {
#line 520 "make.module_dep_file.m"
                make__module_dep_file__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", make__module_dep_file__ModuleDepFile_15);
              }
#line 520 "make.module_dep_file.m"
              {
#line 520 "make.module_dep_file.m"
                make__module_dep_file__V_85_85 = mercury__string__f_43_43_2_f_0(make__module_dep_file__ModuleDir_18, make__module_dep_file__V_87_87);
              }
#line 519 "make.module_dep_file.m"
              {
#line 519 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__V_85_85, make__module_dep_file__Msg_82);
              }
#line 792 "make.module_dep_file.m"
#line 792 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 792 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 792 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 795 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_0_27;
#line 792 "make.module_dep_file.m"
                  break;
#line 792 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 793 "make.module_dep_file.m"
                  {
#line 793 "make.module_dep_file.m"
                    make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_27, make__module_dep_file__STATE_VARIABLE_Info_28);
#line 793 "make.module_dep_file.m"
                    return;
                  }
#line 792 "make.module_dep_file.m"
                  break;
#line 792 "make.module_dep_file.m"
              }
#line 7376 "make.module_dep_file.c"
            }
#line 7378 "make.module_dep_file.c"
            break;
#line 7380 "make.module_dep_file.c"
          case (MR_Integer) 2:
#line 7382 "make.module_dep_file.c"
            {
#line 7384 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
#line 7386 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Result_99;
#line 7388 "make.module_dep_file.c"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_101;
#line 505 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

#line 506 "make.module_dep_file.m"
              {
#line 506 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_99, make__module_dep_file__STATE_VARIABLE_Info_0_27, &make__module_dep_file__STATE_VARIABLE_Info_46_101);
              }
#line 517 "make.module_dep_file.m"
              if ((make__module_dep_file__Result_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_46_101;
#line 517 "make.module_dep_file.m"
              else
#line 518 "make.module_dep_file.m"
                {
#line 518 "make.module_dep_file.m"
                  MR_String make__module_dep_file__Msg_89 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_99, (MR_Integer) 0)));
#line 518 "make.module_dep_file.m"
                  MR_String make__module_dep_file__V_90_90;
#line 518 "make.module_dep_file.m"
                  MR_String make__module_dep_file__V_92_92;

#line 520 "make.module_dep_file.m"
                  {
#line 520 "make.module_dep_file.m"
                    make__module_dep_file__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) "/", make__module_dep_file__ModuleDepFile_15);
                  }
#line 520 "make.module_dep_file.m"
                  {
#line 520 "make.module_dep_file.m"
                    make__module_dep_file__V_90_90 = mercury__string__f_43_43_2_f_0(make__module_dep_file__ModuleDir_18, make__module_dep_file__V_92_92);
                  }
#line 519 "make.module_dep_file.m"
                  {
#line 519 "make.module_dep_file.m"
                    make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__V_90_90, make__module_dep_file__Msg_89);
                  }
#line 792 "make.module_dep_file.m"
#line 792 "make.module_dep_file.m"
                  switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 792 "make.module_dep_file.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 792 "make.module_dep_file.m"
                    case (MR_Integer) 1:
#line 795 "make.module_dep_file.m"
                      *make__module_dep_file__STATE_VARIABLE_Info_28 = make__module_dep_file__STATE_VARIABLE_Info_46_101;
#line 792 "make.module_dep_file.m"
                      break;
#line 792 "make.module_dep_file.m"
                    case (MR_Integer) 0:
#line 793 "make.module_dep_file.m"
                      {
#line 793 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_101, make__module_dep_file__STATE_VARIABLE_Info_28);
#line 793 "make.module_dep_file.m"
                        return;
                      }
#line 792 "make.module_dep_file.m"
                      break;
#line 792 "make.module_dep_file.m"
                  }
#line 518 "make.module_dep_file.m"
                }
#line 7454 "make.module_dep_file.c"
            }
#line 7456 "make.module_dep_file.c"
            break;
#line 7458 "make.module_dep_file.c"
        }
#line 500 "make.module_dep_file.m"
      }
#line 493 "make.module_dep_file.m"
  }
#line 488 "make.module_dep_file.m"
}

#line 479 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 479 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 479 "make.module_dep_file.m"
{
#line 484 "make.module_dep_file.m"
  {
#line 484 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 484 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 484 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 486 "make.module_dep_file.m"
    {
#line 486 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 486 "make.module_dep_file.m"
    {
#line 486 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 486 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "make.module_dep_file.m"
    }
#line 485 "make.module_dep_file.m"
    {
#line 485 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 485 "make.module_dep_file.m"
      return;
    }
#line 484 "make.module_dep_file.m"
  }
#line 479 "make.module_dep_file.m"
}

#line 469 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 469 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 469 "make.module_dep_file.m"
{
#line 473 "make.module_dep_file.m"
  {
#line 473 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 473 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 474 "make.module_dep_file.m"
    {
#line 474 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 634, &make__module_dep_file__SearchDirs_13);
    }
#line 476 "make.module_dep_file.m"
    {
#line 476 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 476 "make.module_dep_file.m"
      return;
    }
#line 473 "make.module_dep_file.m"
  }
#line 469 "make.module_dep_file.m"
}

#line 455 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 455 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 455 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 455 "make.module_dep_file.m"
{
#line 460 "make.module_dep_file.m"
  {
#line 460 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 460 "make.module_dep_file.m"
#line 460 "make.module_dep_file.m"
    switch (make__module_dep_file__HasMain_3) {
#line 460 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 460 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 461 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 460 "make.module_dep_file.m"
        break;
#line 460 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 464 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 460 "make.module_dep_file.m"
        break;
#line 460 "make.module_dep_file.m"
    }
#line 460 "make.module_dep_file.m"
  }
#line 455 "make.module_dep_file.m"
}

#line 439 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 439 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 439 "make.module_dep_file.m"
{
#line 445 "make.module_dep_file.m"
  {
#line 445 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 445 "make.module_dep_file.m"
#line 445 "make.module_dep_file.m"
    switch (make__module_dep_file__ContainsForeignExport_3) {
#line 445 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 445 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 446 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 445 "make.module_dep_file.m"
        break;
#line 445 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 451 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 445 "make.module_dep_file.m"
        break;
#line 445 "make.module_dep_file.m"
    }
#line 445 "make.module_dep_file.m"
  }
#line 439 "make.module_dep_file.m"
}

#line 429 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 429 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4)
#line 429 "make.module_dep_file.m"
{
#line 432 "make.module_dep_file.m"
  {
#line 432 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 432 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
#line 432 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

#line 434 "make.module_dep_file.m"
    {
#line 434 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 435 "make.module_dep_file.m"
    {
#line 435 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 436 "make.module_dep_file.m"
    {
#line 436 "make.module_dep_file.m"
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
#line 436 "make.module_dep_file.m"
      return;
    }
#line 432 "make.module_dep_file.m"
  }
#line 429 "make.module_dep_file.m"
}

#line 420 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4)
#line 420 "make.module_dep_file.m"
{
#line 423 "make.module_dep_file.m"
  {
#line 423 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 423 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
#line 423 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));

#line 425 "make.module_dep_file.m"
    {
#line 425 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 426 "make.module_dep_file.m"
    {
#line 426 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 427 "make.module_dep_file.m"
    {
#line 427 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
#line 427 "make.module_dep_file.m"
      return;
    }
#line 423 "make.module_dep_file.m"
  }
#line 420 "make.module_dep_file.m"
}

#line 415 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 415 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 415 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 415 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 415 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 415 "make.module_dep_file.m"
{
#line 415 "make.module_dep_file.m"
  {
#line 415 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 415 "make.module_dep_file.m"
    {
#line 415 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 415 "make.module_dep_file.m"
      return;
    }
#line 415 "make.module_dep_file.m"
  }
#line 415 "make.module_dep_file.m"
}

#line 400 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 400 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 400 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 400 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 400 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 400 "make.module_dep_file.m"
{
#line 400 "make.module_dep_file.m"
  {
#line 400 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 400 "make.module_dep_file.m"
    {
#line 400 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 400 "make.module_dep_file.m"
      return;
    }
#line 400 "make.module_dep_file.m"
  }
#line 400 "make.module_dep_file.m"
}

#line 394 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 394 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 394 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 394 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 394 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 394 "make.module_dep_file.m"
{
#line 394 "make.module_dep_file.m"
  {
#line 394 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 394 "make.module_dep_file.m"
    {
#line 394 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 394 "make.module_dep_file.m"
      return;
    }
#line 394 "make.module_dep_file.m"
  }
#line 394 "make.module_dep_file.m"
}

#line 383 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 383 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 383 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 383 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 383 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 383 "make.module_dep_file.m"
{
#line 383 "make.module_dep_file.m"
  {
#line 383 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 383 "make.module_dep_file.m"
    {
#line 383 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__383__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
#line 383 "make.module_dep_file.m"
      return;
    }
#line 383 "make.module_dep_file.m"
  }
#line 383 "make.module_dep_file.m"
}

#line 380 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 380 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 380 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 380 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 380 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 380 "make.module_dep_file.m"
{
#line 380 "make.module_dep_file.m"
  {
#line 380 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 380 "make.module_dep_file.m"
    {
#line 380 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 380 "make.module_dep_file.m"
      return;
    }
#line 380 "make.module_dep_file.m"
  }
#line 380 "make.module_dep_file.m"
}

#line 377 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 377 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 377 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 377 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 377 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 377 "make.module_dep_file.m"
{
#line 377 "make.module_dep_file.m"
  {
#line 377 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 377 "make.module_dep_file.m"
    {
#line 377 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 377 "make.module_dep_file.m"
      return;
    }
#line 377 "make.module_dep_file.m"
  }
#line 377 "make.module_dep_file.m"
}

#line 374 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 374 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 374 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 374 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 374 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 374 "make.module_dep_file.m"
{
#line 374 "make.module_dep_file.m"
  {
#line 374 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 374 "make.module_dep_file.m"
    {
#line 374 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 374 "make.module_dep_file.m"
      return;
    }
#line 374 "make.module_dep_file.m"
  }
#line 374 "make.module_dep_file.m"
}

#line 371 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 371 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 371 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 371 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 371 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 371 "make.module_dep_file.m"
{
#line 371 "make.module_dep_file.m"
  {
#line 371 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 371 "make.module_dep_file.m"
    {
#line 371 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 371 "make.module_dep_file.m"
      return;
    }
#line 371 "make.module_dep_file.m"
  }
#line 371 "make.module_dep_file.m"
}

#line 368 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 368 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 368 "make.module_dep_file.m"
{
#line 368 "make.module_dep_file.m"
  {
#line 368 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 368 "make.module_dep_file.m"
    {
#line 368 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 368 "make.module_dep_file.m"
      return;
    }
#line 368 "make.module_dep_file.m"
  }
#line 368 "make.module_dep_file.m"
}

#line 354 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 354 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_5,
#line 354 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6)
#line 354 "make.module_dep_file.m"
{
#line 357 "make.module_dep_file.m"
  {
#line 357 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_438_438;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_464_464;
#line 357 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__VersionNumber_8;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_10;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportModules_11;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportModuleInfos_12;
#line 357 "make.module_dep_file.m"
    MR_String make__module_dep_file__ContainsForeignExportStr_13;
#line 357 "make.module_dep_file.m"
    MR_String make__module_dep_file__HasMainStr_14;
#line 357 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_22_22;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_62_62;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_65_65;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_83_83;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_87_87;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_100_100;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_101_101;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_102_102;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_103_103;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_104_104;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_105_105;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_106_106;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_107_107;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_108_108;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_109_109;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_110_110;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_111_111;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_112_112;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_113_113;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_114_114;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_115_115;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_116_116;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_117_117;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_118_118;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_120_120;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_123_123;
#line 362 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_124_124;
#line 362 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_125_125;
#line 364 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_126_126;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_127_127;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_128_128;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_129_129;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_130_130;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_132_132;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_133_133;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_134_134;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_135_135;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_136_136;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_137_137;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_140_140;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_141_141;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_142_142;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_143_143;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_144_144;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_145_145;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_146_146;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_150_150;
#line 364 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_151_151;
#line 367 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_152_152;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_153_153;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_154_154;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_155_155;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_156_156;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_157_157;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_158_158;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_159_159;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_160_160;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_161_161;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_162_162;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_163_163;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_164_164;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_165_165;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_166_166;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_167_167;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_168_168;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_169_169;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_170_170;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_171_171;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_172_172;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_173_173;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_174_174;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_175_175;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_176_176;
#line 367 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_177_177;
#line 370 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_178_178;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_179_179;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_180_180;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_181_181;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_182_182;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_183_183;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_184_184;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_185_185;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_186_186;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_187_187;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_188_188;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_189_189;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_190_190;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_191_191;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_192_192;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_193_193;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_194_194;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202;
#line 370 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_203_203;
#line 373 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_204_204;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 373 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_229_229;
#line 376 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_230_230;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 376 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_255_255;
#line 379 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_256_256;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_261_261;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_263_263;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_264_264;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_265_265;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_266_266;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_267_267;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_268_268;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_269_269;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_270_270;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_271_271;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_272_272;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_273_273;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_274_274;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_275_275;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_276_276;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_277_277;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_278_278;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_279_279;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_280_280;
#line 379 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_281_281;
#line 382 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_282_282;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_283_283;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_284_284;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_285_285;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_286_286;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_287_287;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_288_288;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_289_289;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_290_290;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_291_291;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_292_292;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_293_293;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_294_294;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_295_295;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_296_296;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_297_297;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_298_298;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_299_299;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_300_300;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_301_301;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_302_302;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_303_303;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_304_304;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_305_305;
#line 382 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_306_306;
#line 382 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_307_307;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LangList_9;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_71_71;
#line 386 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_308_308;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_309_309;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_310_310;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_311_311;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_312_312;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_313_313;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_314_314;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_315_315;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_316_316;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_317_317;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_318_318;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_319_319;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_320_320;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_321_321;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_322_322;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_323_323;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_324_324;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_325_325;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_326_326;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_327_327;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_328_328;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_329_329;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_330_330;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_331_331;
#line 386 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_332_332;
#line 386 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_333_333;
#line 396 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_334_334;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_335_335;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_336_336;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_337_337;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_338_338;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_339_339;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_340_340;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_341_341;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_342_342;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_343_343;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_344_344;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_345_345;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_346_346;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_347_347;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_348_348;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_349_349;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_350_350;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_351_351;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_352_352;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_353_353;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_354_354;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_355_355;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_356_356;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_357_357;
#line 396 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_358_358;
#line 396 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_359_359;
#line 402 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_360_360;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_361_361;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_362_362;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_363_363;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_364_364;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_365_365;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_366_366;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_367_367;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_368_368;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_369_369;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_370_370;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_371_371;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_372_372;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_373_373;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_374_374;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_375_375;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_376_376;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_377_377;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_378_378;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_379_379;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_380_380;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_381_381;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_382_382;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_383_383;
#line 402 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_384_384;
#line 402 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_385_385;
#line 407 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_386_386;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_387_387;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_388_388;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_389_389;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_390_390;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_391_391;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_392_392;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_393_393;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_394_394;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_395_395;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_396_396;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_397_397;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_398_398;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_399_399;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_400_400;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_401_401;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_402_402;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_403_403;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_404_404;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_405_405;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_406_406;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_407_407;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_408_408;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_409_409;
#line 407 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_410_410;
#line 407 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_411_411;

#line 358 "make.module_dep_file.m"
    {
#line 358 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "module(");
    }
#line 359 "make.module_dep_file.m"
    {
#line 359 "make.module_dep_file.m"
      make__module_dep_file__version_number_2_p_0(make__module_dep_file__Version_6, &make__module_dep_file__VersionNumber_8);
    }
#line 360 "make.module_dep_file.m"
    {
#line 360 "make.module_dep_file.m"
      mercury__io__write_int_3_p_0(make__module_dep_file__VersionNumber_8);
    }
#line 361 "make.module_dep_file.m"
    {
#line 361 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 362 "make.module_dep_file.m"
    make__module_dep_file__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 362 "make.module_dep_file.m"
    {
#line 362 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_22_22);
    }
#line 363 "make.module_dep_file.m"
    {
#line 363 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 364 "make.module_dep_file.m"
    {
#line 364 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_26_26);
    }
#line 366 "make.module_dep_file.m"
    {
#line 366 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
#line 8817 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_438_438 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 367 "make.module_dep_file.m"
    {
#line 367 "make.module_dep_file.m"
      make__module_dep_file__V_30_30 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_34_34);
    }
#line 367 "make.module_dep_file.m"
    {
#line 367 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_30_30, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[1]);
    }
#line 369 "make.module_dep_file.m"
    {
#line 369 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 370 "make.module_dep_file.m"
    {
#line 370 "make.module_dep_file.m"
      make__module_dep_file__V_37_37 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_41_41);
    }
#line 370 "make.module_dep_file.m"
    {
#line 370 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_37_37, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[2]);
    }
#line 372 "make.module_dep_file.m"
    {
#line 372 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 373 "make.module_dep_file.m"
    {
#line 373 "make.module_dep_file.m"
      make__module_dep_file__V_44_44 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_48_48);
    }
#line 373 "make.module_dep_file.m"
    {
#line 373 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_44_44, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[3]);
    }
#line 375 "make.module_dep_file.m"
    {
#line 375 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      make__module_dep_file__V_51_51 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_55_55);
    }
#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_51_51, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[4]);
    }
#line 378 "make.module_dep_file.m"
    {
#line 378 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_281_281 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 379 "make.module_dep_file.m"
    {
#line 379 "make.module_dep_file.m"
      make__module_dep_file__V_58_58 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_62_62);
    }
#line 379 "make.module_dep_file.m"
    {
#line 379 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_58_58, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[5]);
    }
#line 381 "make.module_dep_file.m"
    {
#line 381 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_282_282 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 382 "make.module_dep_file.m"
    make__module_dep_file__V_307_307 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 382 "make.module_dep_file.m"
    {
#line 382 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_65_65, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[6]);
    }
#line 384 "make.module_dep_file.m"
    {
#line 384 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_308_308 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 386 "make.module_dep_file.m"
    make__module_dep_file__V_333_333 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 387 "make.module_dep_file.m"
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 387 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 387 "make.module_dep_file.m"
      {
#line 387 "make.module_dep_file.m"
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 0)));
#line 389 "make.module_dep_file.m"
        {
#line 389 "make.module_dep_file.m"
          make__module_dep_file__ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__LangList_9);
        }
#line 387 "make.module_dep_file.m"
      }
#line 387 "make.module_dep_file.m"
    else
#line 391 "make.module_dep_file.m"
      make__module_dep_file__ForeignLanguages_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 393 "make.module_dep_file.m"
    {
#line 393 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_10, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[7]);
    }
#line 395 "make.module_dep_file.m"
    {
#line 395 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_334_334 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__ForeignImportModules_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 396 "make.module_dep_file.m"
    make__module_dep_file__V_359_359 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 397 "make.module_dep_file.m"
    {
#line 397 "make.module_dep_file.m"
      make__module_dep_file__ForeignImportModuleInfos_12 = parse_tree__prog_data__get_all_foreign_import_module_infos_1_f_0(make__module_dep_file__ForeignImportModules_11);
    }
#line 9370 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_464_464 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 399 "make.module_dep_file.m"
    {
#line 399 "make.module_dep_file.m"
      make__module_dep_file__V_77_77 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_464_464, make__module_dep_file__ForeignImportModuleInfos_12);
    }
#line 399 "make.module_dep_file.m"
    {
#line 399 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_464_464, make__module_dep_file__V_77_77, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[8]);
    }
#line 401 "make.module_dep_file.m"
    {
#line 401 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_360_360 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 402 "make.module_dep_file.m"
    make__module_dep_file__V_385_385 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 402 "make.module_dep_file.m"
    {
#line 402 "make.module_dep_file.m"
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_83_83, &make__module_dep_file__ContainsForeignExportStr_13);
    }
#line 405 "make.module_dep_file.m"
    {
#line 405 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_13);
    }
#line 406 "make.module_dep_file.m"
    {
#line 406 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_386_386 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 407 "make.module_dep_file.m"
    make__module_dep_file__V_411_411 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 407 "make.module_dep_file.m"
    {
#line 407 "make.module_dep_file.m"
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_87_87, &make__module_dep_file__HasMainStr_14);
    }
#line 408 "make.module_dep_file.m"
    {
#line 408 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_14);
    }
#line 411 "make.module_dep_file.m"
#line 411 "make.module_dep_file.m"
    switch (make__module_dep_file__Version_6) {
#line 411 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 411 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 410 "make.module_dep_file.m"
        {
#line 410 "make.module_dep_file.m"
        }
#line 411 "make.module_dep_file.m"
        break;
#line 411 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 412 "make.module_dep_file.m"
        {
#line 412 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_468_468;
#line 412 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_91_91;
#line 412 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_95_95;
#line 414 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_412_412;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_413_413;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_414_414;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_415_415;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_416_416;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_417_417;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_418_418;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_419_419;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_420_420;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_421_421;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_422_422;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_423_423;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_424_424;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_425_425;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_426_426;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_427_427;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_428_428;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_429_429;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_430_430;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_431_431;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_432_432;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_433_433;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_434_434;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_435_435;
#line 414 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_436_436;
#line 414 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_437_437;

#line 413 "make.module_dep_file.m"
          {
#line 413 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          }
#line 9601 "make.module_dep_file.c"
          make__module_dep_file__TypeCtorInfo_468_468 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_412_412 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 414 "make.module_dep_file.m"
          make__module_dep_file__V_437_437 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 414 "make.module_dep_file.m"
          {
#line 414 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_468_468, make__module_dep_file__V_95_95);
          }
#line 414 "make.module_dep_file.m"
          {
#line 414 "make.module_dep_file.m"
            mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_468_468, make__module_dep_file__V_91_91, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[9]);
          }
#line 416 "make.module_dep_file.m"
          {
#line 416 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
#line 412 "make.module_dep_file.m"
        }
#line 411 "make.module_dep_file.m"
        break;
#line 411 "make.module_dep_file.m"
    }
#line 418 "make.module_dep_file.m"
    {
#line 418 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
#line 418 "make.module_dep_file.m"
      return;
    }
#line 357 "make.module_dep_file.m"
  }
#line 354 "make.module_dep_file.m"
}

#line 320 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 320 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 320 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_6)
#line 320 "make.module_dep_file.m"
{
#line 323 "make.module_dep_file.m"
  {
#line 323 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
#line 323 "make.module_dep_file.m"
    MR_String make__module_dep_file__ProgDepFile_9;
#line 323 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ProgDepResult_10;
#line 323 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_19_19;
#line 324 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
#line 324 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
#line 324 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));

#line 326 "make.module_dep_file.m"
    {
#line 326 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = make__make_module_dep_file_extension_0_f_0();
    }
#line 325 "make.module_dep_file.m"
    {
#line 325 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_19_19, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
#line 327 "make.module_dep_file.m"
    {
#line 327 "make.module_dep_file.m"
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
#line 335 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 336 "make.module_dep_file.m"
      {
#line 336 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 336 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_16;
#line 336 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_23_23;
#line 336 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26;
#line 336 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_27_27;
#line 336 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_29_29;

#line 337 "make.module_dep_file.m"
        {
#line 337 "make.module_dep_file.m"
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_15, &make__module_dep_file__Msg_16);
        }
#line 339 "make.module_dep_file.m"
        {
#line 339 "make.module_dep_file.m"
          make__module_dep_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 0) = ((MR_Box) (make__module_dep_file__Msg_16));
#line 339 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[6])));
#line 339 "make.module_dep_file.m"
        }
#line 338 "make.module_dep_file.m"
        {
#line 338 "make.module_dep_file.m"
          make__module_dep_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 0) = ((MR_Box) ((MR_String) " for output: "));
#line 338 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__V_29_29));
#line 338 "make.module_dep_file.m"
        }
#line 338 "make.module_dep_file.m"
        {
#line 338 "make.module_dep_file.m"
          make__module_dep_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
#line 338 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 1) = ((MR_Box) (make__module_dep_file__V_27_27));
#line 338 "make.module_dep_file.m"
        }
#line 338 "make.module_dep_file.m"
        {
#line 338 "make.module_dep_file.m"
          make__module_dep_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
#line 338 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 1) = ((MR_Box) (make__module_dep_file__V_26_26));
#line 338 "make.module_dep_file.m"
        }
#line 338 "make.module_dep_file.m"
        {
#line 338 "make.module_dep_file.m"
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_23_23);
        }
#line 340 "make.module_dep_file.m"
        {
#line 340 "make.module_dep_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 340 "make.module_dep_file.m"
          return;
        }
#line 336 "make.module_dep_file.m"
      }
#line 335 "make.module_dep_file.m"
    else
#line 329 "make.module_dep_file.m"
      {
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_12;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Version_13;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignIncludeFilesCord_67;
#line 347 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_68_68;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_74_74;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_75_75;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_76_76;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_77_77;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_78_78;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_79_79;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_80_80;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_81_81;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_82_82;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_83_83;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_84_84;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_85_85;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_86_86;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_87_87;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_88_88;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_89_89;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_90_90;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_91_91;
#line 347 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_92_92;
#line 347 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_93_93;
#line 333 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_14_14;

#line 330 "make.module_dep_file.m"
        {
#line 330 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__ForeignIncludeFilesCord_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
#line 347 "make.module_dep_file.m"
        make__module_dep_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));
#line 348 "make.module_dep_file.m"
        {
#line 348 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludeFilesCord_67);
        }
#line 350 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 349 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 0;
#line 350 "make.module_dep_file.m"
        else
#line 351 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 1;
#line 332 "make.module_dep_file.m"
        {
#line 332 "make.module_dep_file.m"
          make__module_dep_file__do_write_module_dep_file_2_4_p_0(make__module_dep_file__ModuleAndImports_6, make__module_dep_file__Version_13);
        }
#line 333 "make.module_dep_file.m"
        {
#line 333 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_14_14);
        }
#line 334 "make.module_dep_file.m"
        {
#line 334 "make.module_dep_file.m"
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
#line 334 "make.module_dep_file.m"
          return;
        }
#line 329 "make.module_dep_file.m"
      }
#line 323 "make.module_dep_file.m"
  }
#line 320 "make.module_dep_file.m"
}

#line 299 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
#line 299 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 299 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_2)
#line 299 "make.module_dep_file.m"
{
#line 302 "make.module_dep_file.m"
  {
#line 302 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 302 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "make.module_dep_file.m"
    else
#line 304 "make.module_dep_file.m"
      {
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 0)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawItemBlock_5;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawItemBlocks_6;
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcSection_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 0)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 1)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 2)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 3)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 4)));
#line 304 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawSection_12;

#line 310 "make.module_dep_file.m"
#line 310 "make.module_dep_file.m"
        switch (make__module_dep_file__SrcSection_7) {
#line 310 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 310 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 310 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 314 "make.module_dep_file.m"
            make__module_dep_file__RawSection_12 = (MR_Integer) 1;
#line 310 "make.module_dep_file.m"
            break;
#line 310 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 309 "make.module_dep_file.m"
            make__module_dep_file__RawSection_12 = (MR_Integer) 0;
#line 310 "make.module_dep_file.m"
            break;
#line 310 "make.module_dep_file.m"
        }
#line 316 "make.module_dep_file.m"
        {
#line 316 "make.module_dep_file.m"
          make__module_dep_file__RawItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 316 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 0) = ((MR_Box) (make__module_dep_file__RawSection_12));
#line 316 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 1) = ((MR_Box) (make__module_dep_file__SectionContext_8));
#line 316 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 2) = ((MR_Box) (make__module_dep_file__Incls_9));
#line 316 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 3) = ((MR_Box) (make__module_dep_file__Avails_10));
#line 316 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 4) = ((MR_Box) (make__module_dep_file__Items_11));
#line 316 "make.module_dep_file.m"
        }
#line 318 "make.module_dep_file.m"
        {
#line 318 "make.module_dep_file.m"
          make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_4, &make__module_dep_file__RawItemBlocks_6);
        }
#line 304 "make.module_dep_file.m"
        {
#line 304 "make.module_dep_file.m"
          MR_Word base;
#line 304 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__2_2 = base;
#line 304 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__RawItemBlock_5));
#line 304 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__module_dep_file__RawItemBlocks_6));
#line 304 "make.module_dep_file.m"
        }
#line 304 "make.module_dep_file.m"
      }
#line 302 "make.module_dep_file.m"
  }
#line 299 "make.module_dep_file.m"
}

#line 249 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_2(
#line 249 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 249 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 249 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 249 "make.module_dep_file.m"
{
#line 249 "make.module_dep_file.m"
  {
#line 249 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 249 "make.module_dep_file.m"
    {
#line 249 "make.module_dep_file.m"
      mercury__io__format_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))));
#line 249 "make.module_dep_file.m"
      return;
    }
#line 249 "make.module_dep_file.m"
  }
#line 249 "make.module_dep_file.m"
}

#line 247 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0_1(
#line 247 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 247 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1)
#line 247 "make.module_dep_file.m"
{
#line 247 "make.module_dep_file.m"
  {
#line 247 "make.module_dep_file.m"
    MR_Box make__module_dep_file__wrapper_arg_2;
#line 247 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 247 "make.module_dep_file.m"
    MR_String make__module_dep_file__conv0_LambdaHeadVar__2_59;

#line 247 "make.module_dep_file.m"
    {
#line 247 "make.module_dep_file.m"
      make__module_dep_file__conv0_LambdaHeadVar__2_59 = make__module_dep_file__IntroducedFrom__func__do_get_module_dependencies__247__1_1_f_0(((MR_String) make__module_dep_file__wrapper_arg_1));
    }
#line 247 "make.module_dep_file.m"
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_LambdaHeadVar__2_59));
#line 247 "make.module_dep_file.m"
    return make__module_dep_file__wrapper_arg_2;
#line 247 "make.module_dep_file.m"
  }
#line 247 "make.module_dep_file.m"
}

#line 161 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 161 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_37,
#line 161 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_38)
#line 161 "make.module_dep_file.m"
{
#line 166 "make.module_dep_file.m"
  {
#line 166 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 166 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_15;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeSourceFileTimestamp_16;
#line 166 "make.module_dep_file.m"
    MR_String make__module_dep_file__DepFileName_17;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_18;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeDepFileTimestamp_19;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleDepMap2_33;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_45_45;
#line 166 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_47_47;
#line 166 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_49_49;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_53_53;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_101_101;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 269 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_257_257;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 272 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_34;
#line 270 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_MaybeModuleAndImportsPrime_34;

#line 173 "make.module_dep_file.m"
    {
#line 173 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      make__module_dep_file__V_47_47 = mercury__dir__this_directory_0_f_0();
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      make__module_dep_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_44_44, 0) = ((MR_Box) (make__module_dep_file__V_47_47));
#line 175 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "make.module_dep_file.m"
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_44_44, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_37, &make__module_dep_file__STATE_VARIABLE_Info_45_45);
    }
#line 179 "make.module_dep_file.m"
    {
#line 179 "make.module_dep_file.m"
      make__module_dep_file__V_49_49 = make__make_module_dep_file_extension_0_f_0();
    }
#line 178 "make.module_dep_file.m"
    {
#line 178 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_49_49, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
#line 180 "make.module_dep_file.m"
    {
#line 180 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 634, &make__module_dep_file__SearchDirs_18);
    }
#line 182 "make.module_dep_file.m"
    {
#line 182 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_45_45, &make__module_dep_file__STATE_VARIABLE_Info_53_53);
    }
#line 200 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
#line 245 "make.module_dep_file.m"
      {
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 245 "make.module_dep_file.m"
        MR_String make__module_dep_file__SearchDirsString_29;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 245 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71;

#line 247 "make.module_dep_file.m"
        {
#line 247 "make.module_dep_file.m"
          make__module_dep_file__V_56_56 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_283_283, make__module_dep_file__TypeCtorInfo_283_283, (MR_Word) &make__module_dep_file_scalar_common_4[0], make__module_dep_file__SearchDirs_18);
        }
#line 246 "make.module_dep_file.m"
        {
#line 246 "make.module_dep_file.m"
          make__module_dep_file__SearchDirsString_29 = mercury__string__join_list_2_f_0((MR_String) ", ", make__module_dep_file__V_56_56);
        }
#line 251 "make.module_dep_file.m"
        {
#line 251 "make.module_dep_file.m"
          make__module_dep_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(2), make__module_dep_file__V_69_69, 0) = ((MR_Box) (make__module_dep_file__DepFileName_17));
#line 251 "make.module_dep_file.m"
        }
#line 251 "make.module_dep_file.m"
        {
#line 251 "make.module_dep_file.m"
          make__module_dep_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(2), make__module_dep_file__V_71_71, 0) = ((MR_Box) (make__module_dep_file__SearchDirsString_29));
#line 251 "make.module_dep_file.m"
        }
#line 251 "make.module_dep_file.m"
        {
#line 251 "make.module_dep_file.m"
          make__module_dep_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, 0) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 251 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "make.module_dep_file.m"
        }
#line 251 "make.module_dep_file.m"
        {
#line 251 "make.module_dep_file.m"
          make__module_dep_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_68_68, 0) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 251 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_68_68, 1) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 251 "make.module_dep_file.m"
        }
#line 249 "make.module_dep_file.m"
        {
#line 249 "make.module_dep_file.m"
          make__module_dep_file__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 249 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 249 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 1) = ((MR_Box) (make__module_dep_file__do_get_module_dependencies_8_p_0_2));
#line 249 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 249 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 3) = ((MR_Box) ((MR_String) "Module dependencies file \'%s\' not found in directories %s.\n"));
#line 249 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__V_63_63, 4) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 249 "make.module_dep_file.m"
        }
#line 248 "make.module_dep_file.m"
        {
#line 248 "make.module_dep_file.m"
          make__util__debug_make_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_63_63);
        }
#line 261 "make.module_dep_file.m"
#line 261 "make.module_dep_file.m"
        switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 261 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 261 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 262 "make.module_dep_file.m"
            {
#line 262 "make.module_dep_file.m"
              MR_Word make__module_dep_file__ModuleDepMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 262 "make.module_dep_file.m"
              MR_Word make__module_dep_file__ModuleDepMap1_32;
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
#line 263 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
#line 263 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_221_221;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_222_222;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_223_223;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_224_224;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_225_225;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_226_226;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_227_227;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_228_228;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_229_229;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_230_230;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_231_231;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_232_232;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_233_233;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_234_234;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_235_235;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_236_236;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_237_237;
#line 266 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_238_238;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_239_239;
#line 266 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_220_220;

#line 265 "make.module_dep_file.m"
              {
#line 265 "make.module_dep_file.m"
                mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_31, &make__module_dep_file__ModuleDepMap1_32);
              }
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 11)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 12)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 13)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 14)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 15)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 16)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 17)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_238_238 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 18)));
#line 266 "make.module_dep_file.m"
              make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_53_53, (MR_Integer) 19)));
#line 266 "make.module_dep_file.m"
              {
#line 266 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_32));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 1) = ((MR_Box) (make__module_dep_file__V_221_221));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 2) = ((MR_Box) (make__module_dep_file__V_222_222));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 3) = ((MR_Box) (make__module_dep_file__V_223_223));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 4) = ((MR_Box) (make__module_dep_file__V_224_224));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 5) = ((MR_Box) (make__module_dep_file__V_225_225));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 6) = ((MR_Box) (make__module_dep_file__V_226_226));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 7) = ((MR_Box) (make__module_dep_file__V_227_227));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 8) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 9) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 10) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 11) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 12) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 13) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 14) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 15) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 16) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 17) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 18) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 266 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, 19) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 266 "make.module_dep_file.m"
              }
#line 262 "make.module_dep_file.m"
            }
#line 261 "make.module_dep_file.m"
            break;
#line 261 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 259 "make.module_dep_file.m"
            {
#line 259 "make.module_dep_file.m"
              make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
            }
#line 261 "make.module_dep_file.m"
            break;
#line 261 "make.module_dep_file.m"
        }
#line 245 "make.module_dep_file.m"
      }
#line 200 "make.module_dep_file.m"
    else
#line 200 "make.module_dep_file.m"
      {
#line 200 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

#line 200 "make.module_dep_file.m"
        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
#line 201 "make.module_dep_file.m"
          {
#line 201 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_77_77;
#line 201 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_79_79;
#line 201 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_113_113;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_114_114;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_115_115;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_116_116;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_117_117;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_118_118;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_119_119;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_120_120;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_121_121;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_122_122;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_123_123;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_124_124;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_125_125;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_126_126;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_127_127;
#line 211 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_128_128;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_129_129;
#line 211 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80;
#line 241 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImports0_23;
#line 214 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_81_81;
#line 214 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_293_293;
#line 215 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_130_130;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_131_131;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_132_132;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_133_133;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_134_134;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_135_135;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_136_136;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_137_137;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_138_138;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_139_139;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;

#line 203 "make.module_dep_file.m"
            {
#line 203 "make.module_dep_file.m"
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_77_77);
            }
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 0)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 1)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 2)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 3)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 4)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 5)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 6)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 7)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 8)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 9)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 10)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 11)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 12)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 13)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 14)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 15)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 16)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 17)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 18)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_77_77, (MR_Integer) 19)));
#line 211 "make.module_dep_file.m"
            {
#line 211 "make.module_dep_file.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_79_79, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80);
            }
#line 211 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80 = ((MR_Word) make__module_dep_file__conv1_STATE_VARIABLE_MaybeModuleAndImports_80_80);
#line 214 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 214 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 214 "make.module_dep_file.m"
              {
#line 214 "make.module_dep_file.m"
                make__module_dep_file__ModuleAndImports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_80_80, (MR_Integer) 0)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));
#line 215 "make.module_dep_file.m"
                {
#line 215 "make.module_dep_file.m"
                  make__module_dep_file__V_293_293 = mercury__dir__this_directory_0_f_0();
                }
#line 215 "make.module_dep_file.m"
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_81_81, make__module_dep_file__V_293_293) == 0);
#line 214 "make.module_dep_file.m"
              }
#line 241 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 217 "make.module_dep_file.m"
              {
#line 217 "make.module_dep_file.m"
                MR_String make__module_dep_file__SourceFileName1_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__MaybeSourceFileTimestamp1_25;
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_82_82;
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_83_83;
#line 217 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_85_85;
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
#line 217 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_181_181 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));

#line 218 "make.module_dep_file.m"
                {
#line 218 "make.module_dep_file.m"
                  make__module_dep_file__V_85_85 = mercury__dir__this_directory_0_f_0();
                }
#line 218 "make.module_dep_file.m"
                {
#line 218 "make.module_dep_file.m"
                  make__module_dep_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, 0) = ((MR_Box) (make__module_dep_file__V_85_85));
#line 218 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "make.module_dep_file.m"
                }
#line 218 "make.module_dep_file.m"
                {
#line 218 "make.module_dep_file.m"
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_82_82, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_77_77, &make__module_dep_file__STATE_VARIABLE_Info_83_83);
                }
#line 231 "make.module_dep_file.m"
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
#line 232 "make.module_dep_file.m"
                  {
#line 232 "make.module_dep_file.m"
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_95_95;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_182_182;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_183_183;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_184_184;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_185_185;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_186_186;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_187_187;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_188_188;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_189_189;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_190_190;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_191_191;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_192_192;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_193_193;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_194_194;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_195_195;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_196_196;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_197_197;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_198_198;
#line 238 "make.module_dep_file.m"
                    MR_Integer make__module_dep_file__V_199_199;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_200_200;

#line 233 "make.module_dep_file.m"
                    {
#line 233 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
                    }
#line 234 "make.module_dep_file.m"
                    {
#line 234 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName1_24);
                    }
#line 235 "make.module_dep_file.m"
                    {
#line 235 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
                    }
#line 236 "make.module_dep_file.m"
                    {
#line 236 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__Message_27);
                    }
#line 237 "make.module_dep_file.m"
                    {
#line 237 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 0)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 1)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 2)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 3)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 4)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 5)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 6)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 7)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 8)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 9)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 10)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 11)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 12)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 13)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 14)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 15)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 16)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 17)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 18)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_83_83, (MR_Integer) 19)));
#line 238 "make.module_dep_file.m"
                    {
#line 238 "make.module_dep_file.m"
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_95_95);
                    }
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__STATE_VARIABLE_Info_101_101 = make__module_dep_file__STATE_VARIABLE_Info_83_83;
#line 232 "make.module_dep_file.m"
                  }
#line 231 "make.module_dep_file.m"
                else
#line 221 "make.module_dep_file.m"
                  {
#line 221 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__SourceFileTimestamp1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));

#line 223 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 224 "make.module_dep_file.m"
                    if (!(make__module_dep_file__succeeded))
#line 224 "make.module_dep_file.m"
                      {
#line 224 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_294_294;

#line 224 "make.module_dep_file.m"
                        {
#line 224 "make.module_dep_file.m"
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_294_294, make__module_dep_file__V_295_295, make__module_dep_file__SourceFileTimestamp1_26);
                        }
#line 224 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_294_294);
#line 224 "make.module_dep_file.m"
                      }
#line 228 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 227 "make.module_dep_file.m"
                      make__module_dep_file__STATE_VARIABLE_Info_101_101 = make__module_dep_file__STATE_VARIABLE_Info_83_83;
#line 228 "make.module_dep_file.m"
                    else
#line 229 "make.module_dep_file.m"
                      {
#line 229 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_83_83, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
                      }
#line 221 "make.module_dep_file.m"
                  }
#line 217 "make.module_dep_file.m"
              }
#line 241 "make.module_dep_file.m"
            else
#line 242 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_101_101 = make__module_dep_file__STATE_VARIABLE_Info_77_77;
#line 201 "make.module_dep_file.m"
          }
#line 200 "make.module_dep_file.m"
        else
#line 185 "make.module_dep_file.m"
          {
#line 185 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SourceFileTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp_16, (MR_Integer) 0)));

#line 188 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 189 "make.module_dep_file.m"
            if (!(make__module_dep_file__succeeded))
#line 189 "make.module_dep_file.m"
              {
#line 189 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_292_292;

#line 189 "make.module_dep_file.m"
                {
#line 189 "make.module_dep_file.m"
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_292_292, make__module_dep_file__V_295_295, make__module_dep_file__SourceFileTimestamp_20);
                }
#line 189 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_292_292);
#line 189 "make.module_dep_file.m"
              }
#line 197 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 195 "make.module_dep_file.m"
              {
#line 195 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
              }
#line 197 "make.module_dep_file.m"
            else
#line 198 "make.module_dep_file.m"
              {
#line 198 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_53_53, &make__module_dep_file__STATE_VARIABLE_Info_101_101);
              }
#line 185 "make.module_dep_file.m"
          }
#line 200 "make.module_dep_file.m"
      }
#line 269 "make.module_dep_file.m"
    make__module_dep_file__ModuleDepMap2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 0)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 1)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 2)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 3)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 4)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 5)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 6)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 7)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 8)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 9)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 10)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 11)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 12)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 13)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 14)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 15)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 16)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 17)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 18)));
#line 269 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 19)));
#line 270 "make.module_dep_file.m"
    {
#line 270 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_33, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv2_MaybeModuleAndImportsPrime_34);
    }
#line 270 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 270 "make.module_dep_file.m"
      {
#line 270 "make.module_dep_file.m"
        make__module_dep_file__MaybeModuleAndImportsPrime_34 = ((MR_Word) make__module_dep_file__conv2_MaybeModuleAndImportsPrime_34);
#line 270 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 270 "make.module_dep_file.m"
      }
#line 272 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 271 "make.module_dep_file.m"
      {
#line 271 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36 = make__module_dep_file__MaybeModuleAndImportsPrime_34;
#line 271 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_38 = make__module_dep_file__STATE_VARIABLE_Info_101_101;
#line 271 "make.module_dep_file.m"
      }
#line 272 "make.module_dep_file.m"
    else
#line 273 "make.module_dep_file.m"
      {
#line 273 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepMap_35;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_260_260;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_261_261;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_262_262;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_263_263;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_264_264;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_265_265;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_266_266;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_267_267;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_268_268;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_269_269;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_270_270;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_271_271;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_272_272;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_273_273;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_274_274;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_275_275;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_276_276;
#line 275 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_277_277;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_278_278;
#line 275 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_259_259;

#line 273 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "make.module_dep_file.m"
        {
#line 274 "make.module_dep_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_33, &make__module_dep_file__ModuleDepMap_35);
        }
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 0)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 1)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 2)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 3)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 4)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 5)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 6)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 7)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 8)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 9)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 10)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 11)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 12)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 13)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 14)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 15)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 16)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 17)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_277_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 18)));
#line 275 "make.module_dep_file.m"
        make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_101_101, (MR_Integer) 19)));
#line 275 "make.module_dep_file.m"
        {
#line 275 "make.module_dep_file.m"
          MR_Word base;
#line 275 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 275 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_38 = base;
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_35));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_260_260));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_261_261));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_262_262));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_263_263));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_264_264));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_265_265));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_266_266));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_267_267));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_268_268));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_269_269));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_270_270));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_271_271));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_272_272));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_273_273));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_274_274));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_275_275));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_276_276));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_277_277));
#line 275 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_278_278));
#line 275 "make.module_dep_file.m"
        }
#line 273 "make.module_dep_file.m"
      }
#line 166 "make.module_dep_file.m"
  }
#line 161 "make.module_dep_file.m"
}

#line 145 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 145 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeModuleAndImports_12,
#line 145 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 145 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17)
#line 145 "make.module_dep_file.m"
{
#line 156 "make.module_dep_file.m"
  {
#line 156 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 156 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_15;
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
#line 152 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
#line 152 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
#line 152 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15;

#line 152 "make.module_dep_file.m"
    {
#line 152 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_20_20, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15);
    }
#line 152 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 152 "make.module_dep_file.m"
      {
#line 152 "make.module_dep_file.m"
        make__module_dep_file__MaybeModuleAndImportsPrime_15 = ((MR_Word) make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15);
#line 152 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 152 "make.module_dep_file.m"
      }
#line 156 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 155 "make.module_dep_file.m"
      {
#line 155 "make.module_dep_file.m"
        *make__module_dep_file__MaybeModuleAndImports_12 = make__module_dep_file__MaybeModuleAndImportsPrime_15;
#line 155 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_17 = make__module_dep_file__STATE_VARIABLE_Info_0_16;
#line 155 "make.module_dep_file.m"
      }
#line 156 "make.module_dep_file.m"
    else
#line 157 "make.module_dep_file.m"
      {
#line 157 "make.module_dep_file.m"
        make__module_dep_file__do_get_module_dependencies_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__MaybeModuleAndImports_12, make__module_dep_file__STATE_VARIABLE_Info_0_16, make__module_dep_file__STATE_VARIABLE_Info_17);
#line 157 "make.module_dep_file.m"
        return;
      }
#line 156 "make.module_dep_file.m"
  }
#line 145 "make.module_dep_file.m"
}

#line 127 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 127 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 127 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_6,
#line 127 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7)
#line 127 "make.module_dep_file.m"
{
#line 131 "make.module_dep_file.m"
  {
#line 131 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 131 "make.module_dep_file.m"
#line 131 "make.module_dep_file.m"
    switch (make__module_dep_file__HeadVar__4_4) {
#line 131 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 131 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 134 "make.module_dep_file.m"
        {
#line 134 "make.module_dep_file.m"
          MR_Word make__module_dep_file__MaybeModuleAndImports_29;

#line 135 "make.module_dep_file.m"
          {
#line 135 "make.module_dep_file.m"
            make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeModuleAndImports_29, make__module_dep_file__STATE_VARIABLE_Info_0_6, make__module_dep_file__STATE_VARIABLE_Info_7);
          }
#line 140 "make.module_dep_file.m"
          if ((make__module_dep_file__MaybeModuleAndImports_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "make.module_dep_file.m"
            *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 140 "make.module_dep_file.m"
          else
#line 139 "make.module_dep_file.m"
            *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 0;
#line 134 "make.module_dep_file.m"
        }
#line 131 "make.module_dep_file.m"
        break;
#line 131 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 131 "make.module_dep_file.m"
        {
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_21_21;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_22_22;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_37_37;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_38_38;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_39_39;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_40_40;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_41_41;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_42_42;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_43_43;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_44_44;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_45_45;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_46_46;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_47_47;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_48_48;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_49_49;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_50_50;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_51_51;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_52_52;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_53_53;
#line 132 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_54_54;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_55_55;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_57_57;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_58_58;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_59_59;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_60_60;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_61_61;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_62_62;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_63_63;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_64_64;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_65_65;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_66_66;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_67_67;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_68_68;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_69_69;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_70_70;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_71_71;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_72_72;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_73_73;
#line 132 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_74_74;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_75_75;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_56_56;

#line 131 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 14)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 15)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 16)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 17)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 18)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 19)));
#line 132 "make.module_dep_file.m"
          {
#line 132 "make.module_dep_file.m"
            make__module_dep_file__V_22_22 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_21_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 10)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 11)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 12)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 13)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 14)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 15)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 16)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 17)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 18)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_6, (MR_Integer) 19)));
#line 132 "make.module_dep_file.m"
          {
#line 132 "make.module_dep_file.m"
            MR_Word base;
#line 132 "make.module_dep_file.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 132 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_22_22));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_57_57));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_58_58));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_59_59));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_60_60));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_61_61));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_62_62));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_63_63));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_64_64));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_66_66));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_67_67));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_72_72));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_73_73));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_74_74));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_75_75));
#line 132 "make.module_dep_file.m"
          }
#line 131 "make.module_dep_file.m"
        }
#line 131 "make.module_dep_file.m"
        break;
#line 131 "make.module_dep_file.m"
    }
#line 131 "make.module_dep_file.m"
  }
#line 127 "make.module_dep_file.m"
}

#line 77 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 77 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 77 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2)
#line 77 "make.module_dep_file.m"
{
#line 80 "make.module_dep_file.m"
  {
#line 80 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 80 "make.module_dep_file.m"
#line 80 "make.module_dep_file.m"
    switch (make__module_dep_file__HeadVar__1_1) {
#line 80 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 80 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 1;
#line 80 "make.module_dep_file.m"
        break;
#line 80 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 81 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 2;
#line 80 "make.module_dep_file.m"
        break;
#line 80 "make.module_dep_file.m"
    }
#line 80 "make.module_dep_file.m"
  }
#line 77 "make.module_dep_file.m"
}

#line 37 "make.module_dep_file.m"
void MR_CALL 
make__module_dep_file__write_module_dep_file_4_p_0(
#line 37 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 37 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports0_6)
#line 37 "make.module_dep_file.m"
{
#line 280 "make.module_dep_file.m"
  {
#line 280 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__AugCompUnit_8;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Specs_9;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_11;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleNameContext_12;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SrcItemBlocks_14;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RawItemBlocks_19;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RawCompUnit_20;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleAndImports_21;
#line 280 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_24_24;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 280 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38;
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Errors_10;
#line 284 "make.module_dep_file.m"
    MR_Word make__module_dep_file___ModuleVersionNumbers_13;
#line 284 "make.module_dep_file.m"
    MR_Word make__module_dep_file___DirectIntItemBlocksCord_15;
#line 284 "make.module_dep_file.m"
    MR_Word make__module_dep_file___IndirectIntItemBlocksCord_16;
#line 284 "make.module_dep_file.m"
    MR_Word make__module_dep_file___OptItemBlocksCord_17;
#line 284 "make.module_dep_file.m"
    MR_Word make__module_dep_file___IntForOptItemBlocksCord_18;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52;
#line 293 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53;
#line 293 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_54_54;

#line 282 "make.module_dep_file.m"
    {
#line 282 "make.module_dep_file.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(make__module_dep_file__ModuleAndImports0_6, &make__module_dep_file__AugCompUnit_8, &make__module_dep_file__Specs_9, &make__module_dep_file___Errors_10);
    }
#line 284 "make.module_dep_file.m"
    make__module_dep_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 0)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file__ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 1)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file___ModuleVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 2)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file__SrcItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 3)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file___DirectIntItemBlocksCord_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 4)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file___IndirectIntItemBlocksCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 5)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file___OptItemBlocksCord_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 6)));
#line 284 "make.module_dep_file.m"
    make__module_dep_file___IntForOptItemBlocksCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 7)));
#line 288 "make.module_dep_file.m"
    {
#line 288 "make.module_dep_file.m"
      make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_14, &make__module_dep_file__RawItemBlocks_19);
    }
#line 289 "make.module_dep_file.m"
    {
#line 289 "make.module_dep_file.m"
      make__module_dep_file__RawCompUnit_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 0) = ((MR_Box) (make__module_dep_file__ModuleName_11));
#line 289 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 1) = ((MR_Box) (make__module_dep_file__ModuleNameContext_12));
#line 289 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 2) = ((MR_Box) (make__module_dep_file__RawItemBlocks_19));
#line 289 "make.module_dep_file.m"
    }
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 0)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 1)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 2)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 3)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 4)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 5)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 6)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 7)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 8)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 9)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 10)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 11)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 12)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 13)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 14)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 15)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 16)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 17)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 18)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 19)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 20)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 21)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 22)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 23)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 24)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 25)));
#line 293 "make.module_dep_file.m"
    make__module_dep_file__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 26)));
#line 296 "make.module_dep_file.m"
    {
#line 296 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 293 "make.module_dep_file.m"
    {
#line 293 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(make__module_dep_file__Globals_5, make__module_dep_file__V_24_24, make__module_dep_file__V_29_29, make__module_dep_file__V_38_38, make__module_dep_file__Specs_9, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnit_20, &make__module_dep_file__ModuleAndImports_21);
    }
#line 297 "make.module_dep_file.m"
    {
#line 297 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleAndImports_21);
#line 297 "make.module_dep_file.m"
      return;
    }
#line 280 "make.module_dep_file.m"
  }
#line 37 "make.module_dep_file.m"
}

#line 109 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 109 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 109 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 109 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 109 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 109 "make.module_dep_file.m"
{
#line 109 "make.module_dep_file.m"
  {
#line 109 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 109 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__5_5;
#line 109 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_STATE_VARIABLE_Info_7;

#line 109 "make.module_dep_file.m"
    {
#line 109 "make.module_dep_file.m"
      make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv1_STATE_VARIABLE_Info_7);
    }
#line 109 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__5_5));
#line 109 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv1_STATE_VARIABLE_Info_7));
#line 109 "make.module_dep_file.m"
  }
#line 109 "make.module_dep_file.m"
}

#line 33 "make.module_dep_file.m"
void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_9,
#line 33 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeModuleAndImports_10,
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 33 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 33 "make.module_dep_file.m"
{
#line 86 "make.module_dep_file.m"
  {
#line 86 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RebuildModuleDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 87 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));

#line 92 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ModuleName_9)) == (MR_mktag((MR_Integer) 1))))
#line 99 "make.module_dep_file.m"
      {
#line 99 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_17;
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 95 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 95 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));
#line 95 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17;

#line 95 "make.module_dep_file.m"
        {
#line 95 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_26_26, ((MR_Box) (make__module_dep_file__ModuleName_9)), &make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17);
        }
#line 95 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 95 "make.module_dep_file.m"
          {
#line 95 "make.module_dep_file.m"
            make__module_dep_file__MaybeModuleAndImportsPrime_17 = ((MR_Word) make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17);
#line 95 "make.module_dep_file.m"
            make__module_dep_file__succeeded = MR_TRUE;
#line 95 "make.module_dep_file.m"
          }
#line 99 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 98 "make.module_dep_file.m"
          {
#line 98 "make.module_dep_file.m"
            *make__module_dep_file__MaybeModuleAndImports_10 = make__module_dep_file__MaybeModuleAndImportsPrime_17;
#line 98 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 98 "make.module_dep_file.m"
          }
#line 99 "make.module_dep_file.m"
        else
#line 107 "make.module_dep_file.m"
          {
#line 107 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_122_122;
#line 107 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Ancestors_18;
#line 107 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Error_19;
#line 107 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_27_27;
#line 107 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_29_29;
#line 108 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_Error_19;
#line 108 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29;
#line 108 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30;

#line 107 "make.module_dep_file.m"
            {
#line 107 "make.module_dep_file.m"
              make__module_dep_file__Ancestors_18 = mdbcomp__sym_name__get_ancestors_1_f_0(make__module_dep_file__ModuleName_9);
            }
#line 109 "make.module_dep_file.m"
            {
#line 109 "make.module_dep_file.m"
              make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 109 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[0]));
#line 109 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
#line 109 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 109 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_8));
#line 109 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_13));
#line 109 "make.module_dep_file.m"
            }
#line 12220 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_122_122 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 108 "make.module_dep_file.m"
            {
#line 108 "make.module_dep_file.m"
              mercury__list__foldl3_8_p_2(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv5_Error_19, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_22)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30);
            }
#line 108 "make.module_dep_file.m"
            make__module_dep_file__Error_19 = ((MR_Word) make__module_dep_file__conv5_Error_19);
#line 108 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29);
#line 119 "make.module_dep_file.m"
#line 119 "make.module_dep_file.m"
            switch (make__module_dep_file__Error_19) {
#line 119 "make.module_dep_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 119 "make.module_dep_file.m"
              case (MR_Integer) 0:
#line 121 "make.module_dep_file.m"
                {
#line 121 "make.module_dep_file.m"
                  make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeModuleAndImports_10, make__module_dep_file__STATE_VARIABLE_Info_29_29, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 121 "make.module_dep_file.m"
                  return;
                }
#line 119 "make.module_dep_file.m"
                break;
#line 119 "make.module_dep_file.m"
              case (MR_Integer) 1:
#line 112 "make.module_dep_file.m"
                {
#line 112 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__ModuleDepMap0_20;
#line 112 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__ModuleDepMap_21;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_74_74;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_75_75;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_76_76;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_77_77;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_78_78;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_79_79;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_80_80;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_81_81;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_82_82;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_83_83;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_84_84;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_85_85;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_86_86;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_87_87;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_88_88;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_89_89;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_90_90;
#line 114 "make.module_dep_file.m"
                  MR_Integer make__module_dep_file__V_91_91;
#line 114 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_92_92;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_94_94;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_95_95;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_96_96;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_97_97;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_98_98;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_99_99;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_100_100;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_101_101;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_102_102;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_103_103;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_104_104;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_105_105;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_106_106;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_107_107;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_108_108;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_109_109;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_110_110;
#line 118 "make.module_dep_file.m"
                  MR_Integer make__module_dep_file__V_111_111;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_112_112;
#line 118 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_93_93;

#line 113 "make.module_dep_file.m"
                  *make__module_dep_file__MaybeModuleAndImports_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__ModuleDepMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 114 "make.module_dep_file.m"
                  make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 116 "make.module_dep_file.m"
                  {
#line 116 "make.module_dep_file.m"
                    mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_9)), ((MR_Box) (*make__module_dep_file__MaybeModuleAndImports_10)), make__module_dep_file__ModuleDepMap0_20, &make__module_dep_file__ModuleDepMap_21);
                  }
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 118 "make.module_dep_file.m"
                  make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 118 "make.module_dep_file.m"
                  {
#line 118 "make.module_dep_file.m"
                    MR_Word base;
#line 118 "make.module_dep_file.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 118 "make.module_dep_file.m"
                    *make__module_dep_file__STATE_VARIABLE_Info_23 = base;
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_21));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_95_95));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_102_102));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_103_103));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 118 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 118 "make.module_dep_file.m"
                  }
#line 112 "make.module_dep_file.m"
                }
#line 119 "make.module_dep_file.m"
                break;
#line 119 "make.module_dep_file.m"
            }
#line 107 "make.module_dep_file.m"
          }
#line 99 "make.module_dep_file.m"
      }
#line 92 "make.module_dep_file.m"
    else
#line 90 "make.module_dep_file.m"
      {
#line 90 "make.module_dep_file.m"
        make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeModuleAndImports_10, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 90 "make.module_dep_file.m"
        return;
      }
#line 86 "make.module_dep_file.m"
  }
#line 33 "make.module_dep_file.m"
}

void mercury__make__module_dep_file__init(void)
{
}

void mercury__make__module_dep_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0);
}

void mercury__make__module_dep_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module make.module_dep_file. */
