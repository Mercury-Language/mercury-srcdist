/*
** Automatically generated from `make.module_dep_file.m'
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


/* :- module make.module_dep_file. */
/* :- implementation. */

/*
INIT mercury__make__module_dep_file__init
ENDINIT
*/

#include "make.module_dep_file.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "parser.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
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
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.lp_rational.mih"
#include "libs.md4.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.status.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 728 "make.module_dep_file.m"
struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
#line 728 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
#line 728 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
#line 731 "make.module_dep_file.m"
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 731 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
#line 732 "make.module_dep_file.m"
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
#line 728 "make.module_dep_file.m"
};


#line 203 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 206 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 209 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 212 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 215 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 218 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

#line 221 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 224 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 227 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 230 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 233 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

#line 236 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

#line 239 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

#line 242 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

#line 245 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

#line 248 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 251 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 253 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2);

#line 256 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 259 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 261 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 263 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3);

#line 911 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 911 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 911 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 911 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 911 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 904 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 296 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 299 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 301 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 303 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 314 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 317 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 319 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 321 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 332 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 335 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 337 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 339 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 350 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 353 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 355 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 357 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 933 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__933__1_6_p_0(
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 933 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 921 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__921__1_6_p_0(
#line 921 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 921 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 921 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 921 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 887 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__885__1_7_p_0_1(
#line 887 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 887 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 887 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 887 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 885 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__885__1_7_p_0(
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 885 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_117,
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_118,
#line 885 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_119);

#line 857 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__857__1_3_p_0(
#line 857 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_94,
#line 857 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_95,
#line 857 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_96);

#line 676 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__676__1_2_p_0(
#line 676 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 676 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7);

#line 377 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__377__1_3_p_0(
#line 377 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_453);

#line 73 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
#line 73 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__1_1,
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2,
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_3);

#line 73 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_1,
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 940 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 940 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 940 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 933 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 933 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 933 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 929 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 929 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 929 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 929 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 929 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 921 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 921 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 921 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 917 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 917 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 917 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 917 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 917 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 904 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 890 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 885 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 885 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 885 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 885 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 885 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 885 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 885 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 879 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 874 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 874 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 874 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 874 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 874 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 874 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 874 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 876 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 876 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 876 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 876 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 857 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 857 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 854 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 854 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 854 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 854 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 852 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1);

#line 803 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 803 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 803 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 803 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 803 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45);

#line 786 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 786 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 786 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 786 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 735 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 735 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 735 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6);

#line 731 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 731 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 732 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 732 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 731 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 731 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 731 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 731 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 728 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 728 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 728 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4);

#line 722 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 722 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 722 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4);

#line 715 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 715 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1);

#line 708 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 708 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 708 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

#line 699 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 699 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4);

#line 689 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 689 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 689 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4);

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4);

#line 678 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 678 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4);

#line 770 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 773 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 775 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 777 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 673 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 673 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 673 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4);

#line 661 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 661 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 661 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 661 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 656 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 656 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 656 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4);

#line 650 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 650 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 650 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4);

#line 634 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 634 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 520 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 520 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 520 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 520 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_71,
#line 520 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_72);

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 479 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 479 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29);

#line 470 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 470 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 460 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 460 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 446 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 446 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 446 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 430 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 430 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 420 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4);

#line 411 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 411 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4);

#line 406 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 406 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 406 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 406 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 406 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 391 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 391 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 391 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 391 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 391 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 388 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 388 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 388 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 388 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 388 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 377 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
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
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
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
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
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
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 368 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 368 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 365 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 365 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 365 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 365 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 365 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 362 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 362 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 362 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 362 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 362 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 348 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 348 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_5,
#line 348 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6);

#line 314 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 314 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 314 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_6);

#line 293 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
#line 293 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 293 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_2);

#line 162 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 162 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34,
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 162 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36);

#line 146 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 146 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeModuleAndImports_12,
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 146 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17);

#line 128 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 128 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 128 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7);

#line 78 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 78 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 78 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2);

#line 110 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 110 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 110 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 110 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[8][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[6][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[16][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[5][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[6][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][7];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0))
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[6][6] = {
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
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[1])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[5])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[2][11] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[5][1] = {
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][13] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[2][9] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[1][10] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][7] = {
  /* row 0 */
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



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "libs.process_util.mh"
#include "mdbcomp.rtti_access.mh"



#line 1668 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1676 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1684 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1692 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1700 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 1708 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

#line 1716 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1724 "make.module_dep_file.c"
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

#line 1739 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1747 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 1755 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

#line 1761 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

#line 1767 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1773 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1779 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1785 "make.module_dep_file.c"
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

#line 1802 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 1805 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1807 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2)
#line 1809 "make.module_dep_file.c"
{
#line 1811 "make.module_dep_file.c"
  {
#line 1813 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;

#line 1816 "make.module_dep_file.c"
    {
#line 1818 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
#line 1821 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 1823 "make.module_dep_file.c"
  }
#line 1825 "make.module_dep_file.c"
}

#line 1828 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 1831 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 1833 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 1835 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3)
#line 1837 "make.module_dep_file.c"
{
#line 1839 "make.module_dep_file.c"
  {
#line 1841 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

#line 1844 "make.module_dep_file.c"
    {
#line 1846 "make.module_dep_file.c"
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
#line 1849 "make.module_dep_file.c"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
#line 1851 "make.module_dep_file.c"
  }
#line 1853 "make.module_dep_file.c"
}

#line 911 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 911 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 911 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 911 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 911 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 911 "make.module_dep_file.m"
{
#line 911 "make.module_dep_file.m"
  {
#line 911 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 911 "make.module_dep_file.m"
    {
#line 911 "make.module_dep_file.m"
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 911 "make.module_dep_file.m"
      return;
    }
#line 911 "make.module_dep_file.m"
  }
#line 911 "make.module_dep_file.m"
}

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 904 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 904 "make.module_dep_file.m"
{
#line 909 "make.module_dep_file.m"
  {
#line 909 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 909 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 909 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_21;
#line 909 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 911 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28;
#line 913 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;

#line 910 "make.module_dep_file.m"
    {
#line 910 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 911 "make.module_dep_file.m"
    {
#line 911 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 911 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
#line 911 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 911 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 911 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 911 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 911 "make.module_dep_file.m"
    }
#line 911 "make.module_dep_file.m"
    {
#line 911 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnits_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28);
    }
#line 913 "make.module_dep_file.m"
    {
#line 913 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_20_20);
    }
#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_21);
    }
#line 915 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_21 == (MR_Integer) 0);
#line 915 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 915 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 915 "make.module_dep_file.m"
    else
#line 915 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 909 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 909 "make.module_dep_file.m"
  }
#line 904 "make.module_dep_file.m"
}

#line 1973 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 1976 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 1978 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1980 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 1982 "make.module_dep_file.c"
{
#line 1984 "make.module_dep_file.c"
  {
#line 1986 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 1988 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 1990 "make.module_dep_file.c"
    MR_String make__module_dep_file__conv0_FactDep_4;

#line 1993 "make.module_dep_file.c"
    {
#line 1995 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
#line 1998 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2000 "make.module_dep_file.c"
      {
#line 2002 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
#line 2004 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2006 "make.module_dep_file.c"
      }
#line 2008 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2010 "make.module_dep_file.c"
  }
#line 2012 "make.module_dep_file.c"
}

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 667 "make.module_dep_file.m"
{
#line 669 "make.module_dep_file.m"
  {
#line 669 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 669 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 670 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 669 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 669 "make.module_dep_file.m"
              {
#line 2063 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 671 "make.module_dep_file.m"
                {
#line 671 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_4[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 669 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 669 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 669 "make.module_dep_file.m"
  }
#line 667 "make.module_dep_file.m"
}

#line 2083 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 2086 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2088 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2090 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2092 "make.module_dep_file.c"
{
#line 2094 "make.module_dep_file.c"
  {
#line 2096 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2098 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2100 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_Lang_4;

#line 2103 "make.module_dep_file.c"
    {
#line 2105 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
#line 2108 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2110 "make.module_dep_file.c"
      {
#line 2112 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
#line 2114 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2116 "make.module_dep_file.c"
      }
#line 2118 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2120 "make.module_dep_file.c"
  }
#line 2122 "make.module_dep_file.c"
}

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 667 "make.module_dep_file.m"
{
#line 669 "make.module_dep_file.m"
  {
#line 669 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 669 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 670 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 669 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 669 "make.module_dep_file.m"
              {
#line 2173 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 671 "make.module_dep_file.m"
                {
#line 671 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_4[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 669 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 669 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 669 "make.module_dep_file.m"
  }
#line 667 "make.module_dep_file.m"
}

#line 2193 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 2196 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2198 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2200 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2202 "make.module_dep_file.c"
{
#line 2204 "make.module_dep_file.c"
  {
#line 2206 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2208 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2210 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

#line 2213 "make.module_dep_file.c"
    {
#line 2215 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
#line 2218 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2220 "make.module_dep_file.c"
      {
#line 2222 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
#line 2224 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2226 "make.module_dep_file.c"
      }
#line 2228 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2230 "make.module_dep_file.c"
  }
#line 2232 "make.module_dep_file.c"
}

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 667 "make.module_dep_file.m"
{
#line 669 "make.module_dep_file.m"
  {
#line 669 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 669 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 670 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 669 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 669 "make.module_dep_file.m"
              {
#line 2283 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 671 "make.module_dep_file.m"
                {
#line 671 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[13], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 669 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 669 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 669 "make.module_dep_file.m"
  }
#line 667 "make.module_dep_file.m"
}

#line 2303 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 2306 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2308 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2310 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2312 "make.module_dep_file.c"
{
#line 2314 "make.module_dep_file.c"
  {
#line 2316 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2318 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2320 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

#line 2323 "make.module_dep_file.c"
    {
#line 2325 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
#line 2328 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2330 "make.module_dep_file.c"
      {
#line 2332 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
#line 2334 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2336 "make.module_dep_file.c"
      }
#line 2338 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2340 "make.module_dep_file.c"
  }
#line 2342 "make.module_dep_file.c"
}

#line 667 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 667 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 667 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 667 "make.module_dep_file.m"
{
#line 669 "make.module_dep_file.m"
  {
#line 669 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 669 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 669 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 670 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 669 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 669 "make.module_dep_file.m"
              {
#line 2393 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 671 "make.module_dep_file.m"
                {
#line 671 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[12], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 669 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 669 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 669 "make.module_dep_file.m"
  }
#line 667 "make.module_dep_file.m"
}

#line 933 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__933__1_6_p_0(
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 933 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 933 "make.module_dep_file.m"
{
#line 933 "make.module_dep_file.m"
  {
#line 933 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 933 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 937 "make.module_dep_file.m"
    {
#line 937 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 936 "make.module_dep_file.m"
    {
#line 936 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 50, make__module_dep_file__HeadVar__2_23, make__module_dep_file__V_29_29, make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 936 "make.module_dep_file.m"
      return;
    }
#line 933 "make.module_dep_file.m"
  }
#line 933 "make.module_dep_file.m"
}

#line 921 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__921__1_6_p_0(
#line 921 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 921 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 921 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 921 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 921 "make.module_dep_file.m"
{
#line 921 "make.module_dep_file.m"
  {
#line 921 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 924 "make.module_dep_file.m"
    {
#line 924 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, make__module_dep_file__HeadVar__2_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 924 "make.module_dep_file.m"
      return;
    }
#line 921 "make.module_dep_file.m"
  }
#line 921 "make.module_dep_file.m"
}

#line 887 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__885__1_7_p_0_1(
#line 887 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 887 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 887 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 887 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 887 "make.module_dep_file.m"
{
#line 887 "make.module_dep_file.m"
  {
#line 887 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 887 "make.module_dep_file.m"
    {
#line 887 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 887 "make.module_dep_file.m"
      return;
    }
#line 887 "make.module_dep_file.m"
  }
#line 887 "make.module_dep_file.m"
}

#line 885 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__885__1_7_p_0(
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 885 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_117,
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_118,
#line 885 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_119)
#line 885 "make.module_dep_file.m"
{
#line 885 "make.module_dep_file.m"
  {
#line 885 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 885 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 887 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_HeadVar__7_121;

#line 887 "make.module_dep_file.m"
    {
#line 887 "make.module_dep_file.m"
      make__module_dep_file__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 887 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 887 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__885__1_7_p_0_1));
#line 887 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 887 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 887 "make.module_dep_file.m"
    }
#line 887 "make.module_dep_file.m"
    {
#line 887 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_122_122, make__module_dep_file__ModuleAndImportList_34, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_HeadVar__7_121);
    }
#line 886 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__3_117 = (MR_Integer) 1;
#line 886 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__5_119 = make__module_dep_file__HeadVar__4_118;
#line 885 "make.module_dep_file.m"
  }
#line 885 "make.module_dep_file.m"
}

#line 857 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__857__1_3_p_0(
#line 857 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_94,
#line 857 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_95,
#line 857 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_96)
#line 857 "make.module_dep_file.m"
{
#line 857 "make.module_dep_file.m"
  {
#line 857 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 857 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 2)));
#line 857 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 857 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 857 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
#line 859 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 0)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 1)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 3)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 4)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 5)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 6)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 7)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 8)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 9)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 10)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 11)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 12)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 13)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 14)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 15)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 16)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 17)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 18)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 19)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 20)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 21)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 22)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 23)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 24)));
#line 859 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 25)));
#line 859 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 26)));
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 860 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_241_241;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 860 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_261_261;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;

#line 861 "make.module_dep_file.m"
    {
#line 861 "make.module_dep_file.m"
      make__module_dep_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_97_97, 0) = ((MR_Box) (make__module_dep_file__HeadVar__1_94));
#line 861 "make.module_dep_file.m"
    }
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 0)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 1)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 2)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 3)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 4)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 5)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 6)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 7)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 8)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 9)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 10)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 11)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 12)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 13)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 14)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 15)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 16)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 17)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 18)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 19)));
#line 860 "make.module_dep_file.m"
    {
#line 860 "make.module_dep_file.m"
      make__module_dep_file__V_99_99 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_37)), make__module_dep_file__V_98_98, ((MR_Box) (make__module_dep_file__V_97_97)));
    }
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 0)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 1)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 2)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 3)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 4)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 5)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 6)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 7)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 8)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 9)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 10)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 11)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 12)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 13)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 14)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 15)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 16)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 17)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 18)));
#line 860 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 19)));
#line 860 "make.module_dep_file.m"
    {
#line 860 "make.module_dep_file.m"
      MR_Word base;
#line 860 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 860 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__3_96 = base;
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_258_258));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_259_259));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_260_260));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_261_261));
#line 860 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_262_262));
#line 860 "make.module_dep_file.m"
    }
#line 857 "make.module_dep_file.m"
  }
#line 857 "make.module_dep_file.m"
}

#line 676 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__676__1_2_p_0(
#line 676 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 676 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7)
#line 676 "make.module_dep_file.m"
{
#line 676 "make.module_dep_file.m"
  {
#line 676 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 676 "make.module_dep_file.m"
    {
#line 676 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
#line 676 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 676 "make.module_dep_file.m"
  }
#line 676 "make.module_dep_file.m"
}

#line 377 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__377__1_3_p_0(
#line 377 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_453)
#line 377 "make.module_dep_file.m"
{
#line 377 "make.module_dep_file.m"
  {
#line 377 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 377 "make.module_dep_file.m"
    {
#line 377 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_453)));
#line 377 "make.module_dep_file.m"
      return;
    }
#line 377 "make.module_dep_file.m"
  }
#line 377 "make.module_dep_file.m"
}

#line 73 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0(
#line 73 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__1_1,
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2,
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_3)
#line 73 "make.module_dep_file.m"
{
#line 73 "make.module_dep_file.m"
  {
#line 73 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 73 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Cast_HeadVar1_4 = (MR_Integer) make__module_dep_file__HeadVar__2_2;
#line 73 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Cast_HeadVar2_5 = (MR_Integer) make__module_dep_file__HeadVar__3_3;

#line 73 "make.module_dep_file.m"
    {
#line 73 "make.module_dep_file.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(make__module_dep_file__HeadVar__1_1, make__module_dep_file__Cast_HeadVar1_4, make__module_dep_file__Cast_HeadVar2_5);
#line 73 "make.module_dep_file.m"
      return;
    }
#line 73 "make.module_dep_file.m"
  }
#line 73 "make.module_dep_file.m"
}

#line 73 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0(
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_1,
#line 73 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 73 "make.module_dep_file.m"
{
#line 2955 "make.module_dep_file.c"
  {
#line 2957 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

#line 2960 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2962 "make.module_dep_file.c"
  }
#line 73 "make.module_dep_file.m"
}

#line 940 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 940 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 940 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 940 "make.module_dep_file.m"
{
#line 943 "make.module_dep_file.m"
  {
#line 943 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 943 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 943 "make.module_dep_file.m"
      {
#line 943 "make.module_dep_file.m"
      }
#line 943 "make.module_dep_file.m"
    else
#line 944 "make.module_dep_file.m"
      {
#line 944 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 945 "make.module_dep_file.m"
        {
#line 945 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 946 "make.module_dep_file.m"
        {
#line 946 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 947 "make.module_dep_file.m"
        {
#line 947 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 948 "make.module_dep_file.m"
        {
#line 948 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 949 "make.module_dep_file.m"
        {
#line 949 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 949 "make.module_dep_file.m"
          return;
        }
#line 944 "make.module_dep_file.m"
      }
#line 943 "make.module_dep_file.m"
  }
#line 940 "make.module_dep_file.m"
}

#line 933 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 933 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 933 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 933 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 933 "make.module_dep_file.m"
{
#line 933 "make.module_dep_file.m"
  {
#line 933 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 933 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 933 "make.module_dep_file.m"
    {
#line 933 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__933__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 933 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 933 "make.module_dep_file.m"
  }
#line 933 "make.module_dep_file.m"
}

#line 929 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 929 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 929 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 929 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 929 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 929 "make.module_dep_file.m"
{
#line 932 "make.module_dep_file.m"
  {
#line 932 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 932 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 933 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 933 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 933 "make.module_dep_file.m"
    {
#line 933 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 933 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 933 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 933 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 933 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 933 "make.module_dep_file.m"
    }
#line 933 "make.module_dep_file.m"
    {
#line 933 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 933 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 932 "make.module_dep_file.m"
  }
#line 929 "make.module_dep_file.m"
}

#line 921 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 921 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 921 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 921 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 921 "make.module_dep_file.m"
{
#line 921 "make.module_dep_file.m"
  {
#line 921 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 921 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 921 "make.module_dep_file.m"
    {
#line 921 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__921__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 921 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 921 "make.module_dep_file.m"
  }
#line 921 "make.module_dep_file.m"
}

#line 917 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 917 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 917 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 917 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 917 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 917 "make.module_dep_file.m"
{
#line 920 "make.module_dep_file.m"
  {
#line 920 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 920 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 921 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 921 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 921 "make.module_dep_file.m"
    {
#line 921 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 921 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 921 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 921 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 921 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 921 "make.module_dep_file.m"
    }
#line 921 "make.module_dep_file.m"
    {
#line 921 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 921 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 920 "make.module_dep_file.m"
  }
#line 917 "make.module_dep_file.m"
}

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 904 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 904 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 904 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 904 "make.module_dep_file.m"
{
#line 909 "make.module_dep_file.m"
  {
#line 909 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 909 "make.module_dep_file.m"
    {
#line 909 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__RawCompUnits_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 909 "make.module_dep_file.m"
      return;
    }
#line 909 "make.module_dep_file.m"
  }
#line 904 "make.module_dep_file.m"
}

#line 890 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 890 "make.module_dep_file.m"
{
#line 890 "make.module_dep_file.m"
  {
#line 890 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 890 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv12_STATE_VARIABLE_Info_13;

#line 890 "make.module_dep_file.m"
    {
#line 890 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv12_STATE_VARIABLE_Info_13);
    }
#line 890 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv12_STATE_VARIABLE_Info_13));
#line 890 "make.module_dep_file.m"
  }
#line 890 "make.module_dep_file.m"
}

#line 885 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 885 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 885 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 885 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 885 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 885 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 885 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 885 "make.module_dep_file.m"
{
#line 885 "make.module_dep_file.m"
  {
#line 885 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 885 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv11_HeadVar__3_117;
#line 885 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_HeadVar__5_119;

#line 885 "make.module_dep_file.m"
    {
#line 885 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__885__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv11_HeadVar__3_117, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv10_HeadVar__5_119);
    }
#line 885 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv11_HeadVar__3_117));
#line 885 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv10_HeadVar__5_119));
#line 885 "make.module_dep_file.m"
  }
#line 885 "make.module_dep_file.m"
}

#line 879 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 879 "make.module_dep_file.m"
{
#line 879 "make.module_dep_file.m"
  {
#line 879 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 879 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv8_STATE_VARIABLE_Info_13;

#line 879 "make.module_dep_file.m"
    {
#line 879 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv8_STATE_VARIABLE_Info_13);
    }
#line 879 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv8_STATE_VARIABLE_Info_13));
#line 879 "make.module_dep_file.m"
  }
#line 879 "make.module_dep_file.m"
}

#line 874 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 874 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 874 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 874 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 874 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 874 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 874 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 874 "make.module_dep_file.m"
{
#line 874 "make.module_dep_file.m"
  {
#line 874 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_HeadVar__5_5;
#line 874 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__7_7;

#line 874 "make.module_dep_file.m"
    {
#line 874 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv7_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv6_HeadVar__7_7);
    }
#line 874 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv7_HeadVar__5_5));
#line 874 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__7_7));
#line 874 "make.module_dep_file.m"
  }
#line 874 "make.module_dep_file.m"
}

#line 876 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 876 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 876 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 876 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 876 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 876 "make.module_dep_file.m"
{
#line 876 "make.module_dep_file.m"
  {
#line 876 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 876 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_Succeeded_16;
#line 876 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_STATE_VARIABLE_Info_23;

#line 876 "make.module_dep_file.m"
    {
#line 876 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv4_STATE_VARIABLE_Info_23);
    }
#line 876 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_Succeeded_16));
#line 876 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv4_STATE_VARIABLE_Info_23));
#line 876 "make.module_dep_file.m"
  }
#line 876 "make.module_dep_file.m"
}

#line 857 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 857 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 857 "make.module_dep_file.m"
{
#line 857 "make.module_dep_file.m"
  {
#line 857 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 857 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__3_96;

#line 857 "make.module_dep_file.m"
    {
#line 857 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__857__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__3_96);
    }
#line 857 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__3_96));
#line 857 "make.module_dep_file.m"
  }
#line 857 "make.module_dep_file.m"
}

#line 854 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 854 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 854 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 854 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 854 "make.module_dep_file.m"
{
#line 854 "make.module_dep_file.m"
  {
#line 854 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 854 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__8_8;

#line 854 "make.module_dep_file.m"
    {
#line 854 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv1_HeadVar__8_8);
    }
#line 854 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__8_8));
#line 854 "make.module_dep_file.m"
  }
#line 854 "make.module_dep_file.m"
}

#line 852 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1)
#line 852 "make.module_dep_file.m"
{
#line 852 "make.module_dep_file.m"
  {
#line 852 "make.module_dep_file.m"
    MR_Box make__module_dep_file__wrapper_arg_2;
#line 852 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__2_2;

#line 852 "make.module_dep_file.m"
    {
#line 852 "make.module_dep_file.m"
      make__module_dep_file__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
#line 852 "make.module_dep_file.m"
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_2));
#line 852 "make.module_dep_file.m"
    return make__module_dep_file__wrapper_arg_2;
#line 852 "make.module_dep_file.m"
  }
#line 852 "make.module_dep_file.m"
}

#line 803 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 803 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 803 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 803 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 803 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45)
#line 803 "make.module_dep_file.m"
{
#line 806 "make.module_dep_file.m"
  {
#line 806 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 806 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 806 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_48_48;

#line 807 "make.module_dep_file.m"
    {
#line 807 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_44, &make__module_dep_file__STATE_VARIABLE_Info_48_48);
    }
#line 900 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_45 = make__module_dep_file__STATE_VARIABLE_Info_48_48;
#line 900 "make.module_dep_file.m"
    else
#line 809 "make.module_dep_file.m"
      {
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_263_263;
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 809 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_14;
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ParseTreeSrc_16;
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_17;
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_18;
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FatalErrors_19;
#line 809 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_15_15;

#line 810 "make.module_dep_file.m"
        {
#line 810 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 812 "make.module_dep_file.m"
        {
#line 812 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_src_13_p_0(make__module_dep_file__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, make__module_dep_file__ModuleName_8, &make__module_dep_file__SourceFileName_14, (MR_Word) &make__module_dep_file_scalar_common_7[2], &make__module_dep_file__V_15_15, &make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__Specs0_17, &make__module_dep_file__Errors_18);
        }
#line 816 "make.module_dep_file.m"
        {
#line 816 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3595 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 816 "make.module_dep_file.m"
        {
#line 816 "make.module_dep_file.m"
          mercury__set__intersect_3_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18, make__module_dep_file__V_57_57, &make__module_dep_file__FatalErrors_19);
        }
#line 817 "make.module_dep_file.m"
        {
#line 817 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__set__is_non_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__FatalErrors_19);
        }
#line 842 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 818 "make.module_dep_file.m"
          {
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_24;
#line 818 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_25;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_27;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_28;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_68_68;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_73_73;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_20_20;
#line 819 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_21;
#line 819 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_22;
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_23_23;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_156_156;
#line 825 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_157_157;
#line 825 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 837 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_26_26;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_169_169;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_171_171;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_173_173;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_175_175;
#line 838 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_176_176;
#line 838 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_193_193;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_195_195;
#line 841 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_196_196;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_197_197;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;

#line 818 "make.module_dep_file.m"
            {
#line 818 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_20_20);
            }
#line 819 "make.module_dep_file.m"
            {
#line 819 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_17, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_21, (MR_Integer) 0, &make__module_dep_file___NumErrors_22);
            }
#line 821 "make.module_dep_file.m"
            {
#line 821 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_23_23);
            }
#line 822 "make.module_dep_file.m"
            {
#line 822 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error: error reading file \140");
            }
#line 823 "make.module_dep_file.m"
            {
#line 823 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_14);
            }
#line 824 "make.module_dep_file.m"
            {
#line 824 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 11)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 12)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 13)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 14)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 15)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 16)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 17)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 18)));
#line 825 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 19)));
#line 825 "make.module_dep_file.m"
            {
#line 825 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_68_68);
            }
#line 831 "make.module_dep_file.m"
            {
#line 831 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 52, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_7[3]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_24);
            }
#line 833 "make.module_dep_file.m"
            {
#line 833 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_24, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_48_48, &make__module_dep_file__STATE_VARIABLE_Info_73_73);
            }
#line 835 "make.module_dep_file.m"
            {
#line 835 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_25);
            }
#line 837 "make.module_dep_file.m"
            {
#line 837 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_25, &make__module_dep_file__V_26_26);
            }
#line 838 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 838 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 840 "make.module_dep_file.m"
            {
#line 840 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_27, &make__module_dep_file__ModuleDepMap_28);
            }
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 841 "make.module_dep_file.m"
            {
#line 841 "make.module_dep_file.m"
              MR_Word base;
#line 841 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 841 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_45 = base;
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_28));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_195_195));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 841 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_197_197));
#line 841 "make.module_dep_file.m"
            }
#line 818 "make.module_dep_file.m"
          }
#line 842 "make.module_dep_file.m"
        else
#line 843 "make.module_dep_file.m"
          {
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_266_266;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_267_267;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_272_272;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_275_275;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__RawCompUnits_30;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_31;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_33;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImportList_34;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_38;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_40;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_43;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_89_89;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_93_93;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_113_113;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_125_125;
#line 843 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_29_29;
#line 847 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_130;
#line 847 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_131;
#line 849 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_32_32;
#line 857 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93;
#line 885 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_42_42;
#line 885 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113;

#line 843 "make.module_dep_file.m"
            {
#line 843 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_29_29);
            }
#line 844 "make.module_dep_file.m"
            {
#line 844 "make.module_dep_file.m"
              parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__RawCompUnits_30, make__module_dep_file__Specs0_17, &make__module_dep_file__Specs_31);
            }
#line 846 "make.module_dep_file.m"
            {
#line 846 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 847 "make.module_dep_file.m"
            {
#line 847 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_31, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_130, (MR_Integer) 0, &make__module_dep_file___NumErrors_131);
            }
#line 849 "make.module_dep_file.m"
            {
#line 849 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_32_32);
            }
#line 4064 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_266_266 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 4066 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_267_267 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 852 "make.module_dep_file.m"
            {
#line 852 "make.module_dep_file.m"
              make__module_dep_file__SubModuleNames_33 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_267_267, (MR_Word) &make__module_dep_file_scalar_common_4[10], make__module_dep_file__RawCompUnits_30);
            }
#line 855 "make.module_dep_file.m"
            {
#line 855 "make.module_dep_file.m"
              make__module_dep_file__V_90_90 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_267_267, make__module_dep_file__SubModuleNames_33);
            }
#line 854 "make.module_dep_file.m"
            {
#line 854 "make.module_dep_file.m"
              make__module_dep_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[1]));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 5) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 6) = ((MR_Box) (make__module_dep_file__V_90_90));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 8) = ((MR_Box) (make__module_dep_file__Errors_18));
#line 854 "make.module_dep_file.m"
            }
#line 4102 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_272_272 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 853 "make.module_dep_file.m"
            {
#line 853 "make.module_dep_file.m"
              mercury__list__map_3_p_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__V_89_89, make__module_dep_file__RawCompUnits_30, &make__module_dep_file__ModuleAndImportList_34);
            }
#line 4109 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_275_275 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 857 "make.module_dep_file.m"
            {
#line 857 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__TypeCtorInfo_275_275, (MR_Word) &make__module_dep_file_scalar_common_4[11], make__module_dep_file__ModuleAndImportList_34, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_48_48)), &make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
            }
#line 857 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_93_93 = ((MR_Word) make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
#line 867 "make.module_dep_file.m"
            {
#line 867 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, &make__module_dep_file__VeryVerbose_38);
            }
#line 868 "make.module_dep_file.m"
            {
#line 868 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__set__is_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18);
            }
#line 881 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 870 "make.module_dep_file.m"
              {
#line 870 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_39;
#line 870 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 870 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_104_104;
#line 870 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_110_110;
#line 873 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105;

#line 869 "make.module_dep_file.m"
                {
#line 869 "make.module_dep_file.m"
                  make__module_dep_file__Target_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 869 "make.module_dep_file.m"
                }
#line 871 "make.module_dep_file.m"
                {
#line 871 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_39);
                }
#line 876 "make.module_dep_file.m"
                {
#line 876 "make.module_dep_file.m"
                  make__module_dep_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 876 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
#line 876 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 876 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 876 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 876 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 876 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 5) = ((MR_Box) (make__module_dep_file__RawCompUnits_30));
#line 876 "make.module_dep_file.m"
                }
#line 874 "make.module_dep_file.m"
                {
#line 874 "make.module_dep_file.m"
                  make__module_dep_file__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[1]));
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[7])));
#line 874 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 6) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 874 "make.module_dep_file.m"
                }
#line 879 "make.module_dep_file.m"
                {
#line 879 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 879 "make.module_dep_file.m"
                }
#line 873 "make.module_dep_file.m"
                {
#line 873 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_103_103, make__module_dep_file__V_104_104, &make__module_dep_file__Succeeded_40, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_93_93)), &make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
                }
#line 873 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = ((MR_Word) make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
#line 870 "make.module_dep_file.m"
              }
#line 881 "make.module_dep_file.m"
            else
#line 882 "make.module_dep_file.m"
              {
#line 882 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_40 = (MR_Integer) 0;
#line 882 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = make__module_dep_file__STATE_VARIABLE_Info_93_93;
#line 882 "make.module_dep_file.m"
              }
#line 885 "make.module_dep_file.m"
            {
#line 885 "make.module_dep_file.m"
              make__module_dep_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 885 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 885 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 885 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 885 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 885 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 4) = ((MR_Box) (make__module_dep_file__ModuleAndImportList_34));
#line 885 "make.module_dep_file.m"
            }
#line 890 "make.module_dep_file.m"
            {
#line 890 "make.module_dep_file.m"
              make__module_dep_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 890 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 890 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_8));
#line 890 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 890 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 890 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 890 "make.module_dep_file.m"
            }
#line 885 "make.module_dep_file.m"
            {
#line 885 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_111_111, make__module_dep_file__V_112_112, &make__module_dep_file__V_42_42, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
            }
#line 885 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_113_113 = ((MR_Word) make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
#line 893 "make.module_dep_file.m"
            {
#line 893 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 893 "make.module_dep_file.m"
            }
#line 895 "make.module_dep_file.m"
            {
#line 895 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_43, (MR_Word) &make__module_dep_file_scalar_common_7[4], make__module_dep_file__Succeeded_40, make__module_dep_file__STATE_VARIABLE_Info_113_113, &make__module_dep_file__STATE_VARIABLE_Info_125_125);
            }
#line 898 "make.module_dep_file.m"
            {
#line 898 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_125_125, make__module_dep_file__STATE_VARIABLE_Info_45);
#line 898 "make.module_dep_file.m"
              return;
            }
#line 843 "make.module_dep_file.m"
          }
#line 809 "make.module_dep_file.m"
      }
#line 806 "make.module_dep_file.m"
  }
#line 803 "make.module_dep_file.m"
}

#line 786 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 786 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 786 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 786 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 786 "make.module_dep_file.m"
{
#line 789 "make.module_dep_file.m"
  {
#line 789 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 789 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepsFile_10;
#line 789 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;

#line 791 "make.module_dep_file.m"
    {
#line 791 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = make__make_module_dep_file_extension_0_f_0();
    }
#line 790 "make.module_dep_file.m"
    {
#line 790 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_6, make__module_dep_file__ModuleName_7, make__module_dep_file__V_13_13, (MR_Integer) 1, &make__module_dep_file__ModuleDepsFile_10);
    }
#line 793 "make.module_dep_file.m"
    {
#line 793 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading file \140");
    }
#line 794 "make.module_dep_file.m"
    {
#line 794 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ModuleDepsFile_10);
    }
#line 795 "make.module_dep_file.m"
    {
#line 795 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\', rebuilding: ");
    }
#line 796 "make.module_dep_file.m"
    {
#line 796 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__Msg_8);
    }
#line 797 "make.module_dep_file.m"
    {
#line 797 "make.module_dep_file.m"
      mercury__io__nl_2_p_0();
#line 797 "make.module_dep_file.m"
      return;
    }
#line 789 "make.module_dep_file.m"
  }
#line 786 "make.module_dep_file.m"
}

#line 735 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 735 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 735 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6)
#line 735 "make.module_dep_file.m"
{
#line 738 "make.module_dep_file.m"
  {
#line 738 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 738 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ResFileType_9;

#line 740 "make.module_dep_file.m"
    {
#line 740 "make.module_dep_file.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
#line 761 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
#line 762 "make.module_dep_file.m"
      {
#line 762 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
#line 762 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_15_15;
#line 762 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_16_16;
#line 762 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_18_18;

#line 763 "make.module_dep_file.m"
        {
#line 763 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
#line 763 "make.module_dep_file.m"
        {
#line 763 "make.module_dep_file.m"
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
#line 763 "make.module_dep_file.m"
        {
#line 763 "make.module_dep_file.m"
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
#line 763 "make.module_dep_file.m"
        {
#line 763 "make.module_dep_file.m"
          MR_Word base;
#line 763 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = base;
#line 763 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
#line 763 "make.module_dep_file.m"
        }
#line 762 "make.module_dep_file.m"
      }
#line 761 "make.module_dep_file.m"
    else
#line 742 "make.module_dep_file.m"
      {
#line 742 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

#line 748 "make.module_dep_file.m"
#line 748 "make.module_dep_file.m"
        switch (make__module_dep_file__FileType_10) {
#line 748 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 6:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 5:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 7:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 3:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 8:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 9:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 4:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 758 "make.module_dep_file.m"
            {
#line 758 "make.module_dep_file.m"
              MR_String make__module_dep_file__V_19_19;

#line 759 "make.module_dep_file.m"
              {
#line 759 "make.module_dep_file.m"
                make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
              }
#line 759 "make.module_dep_file.m"
              {
#line 759 "make.module_dep_file.m"
                MR_Word base;
#line 759 "make.module_dep_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 759 "make.module_dep_file.m"
                *make__module_dep_file__FileExists_6 = base;
#line 759 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 759 "make.module_dep_file.m"
              }
#line 758 "make.module_dep_file.m"
            }
#line 748 "make.module_dep_file.m"
            break;
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 748 "make.module_dep_file.m"
          case (MR_Integer) 10:
#line 747 "make.module_dep_file.m"
            *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "make.module_dep_file.m"
            break;
#line 748 "make.module_dep_file.m"
        }
#line 742 "make.module_dep_file.m"
      }
#line 738 "make.module_dep_file.m"
  }
#line 735 "make.module_dep_file.m"
}

#line 731 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 731 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 731 "make.module_dep_file.m"
{
#line 731 "make.module_dep_file.m"
  {
#line 731 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 731 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
#line 731 "make.module_dep_file.m"
  }
#line 731 "make.module_dep_file.m"
}

#line 732 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 732 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 732 "make.module_dep_file.m"
{
#line 732 "make.module_dep_file.m"
  {
#line 732 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 732 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
#line 732 "make.module_dep_file.m"
    {
#line 732 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
#line 732 "make.module_dep_file.m"
      return;
    }
#line 732 "make.module_dep_file.m"
  }
#line 732 "make.module_dep_file.m"
}

#line 731 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 731 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 731 "make.module_dep_file.m"
{
#line 731 "make.module_dep_file.m"
  {
#line 731 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 731 "make.module_dep_file.m"
    {
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_8_8;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_9_9;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_10_10;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_11_11;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_12_12;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_13_13;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_14_14;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_15_15;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_16_16;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_17_17;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_18_18;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_19_19;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_20_20;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_21_21;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_22_22;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_23_23;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_24_24;
#line 733 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_25_25;
#line 733 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_26_26;
#line 733 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv1_V_29_29;

#line 733 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
#line 733 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
#line 733 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4641 "make.module_dep_file.c"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 733 "make.module_dep_file.m"
      {
#line 733 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
#line 733 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 733 "make.module_dep_file.m"
        {
#line 733 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
#line 733 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 733 "make.module_dep_file.m"
        }
#line 731 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 731 "make.module_dep_file.m"
        {
#line 4662 "make.module_dep_file.c"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 733 "make.module_dep_file.m"
          {
#line 733 "make.module_dep_file.m"
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
#line 733 "make.module_dep_file.m"
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 733 "make.module_dep_file.m"
            {
#line 733 "make.module_dep_file.m"
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
#line 733 "make.module_dep_file.m"
              return;
            }
#line 731 "make.module_dep_file.m"
        }
#line 731 "make.module_dep_file.m"
    }
#line 731 "make.module_dep_file.m"
  }
#line 731 "make.module_dep_file.m"
}

#line 731 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 731 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 731 "make.module_dep_file.m"
{
#line 731 "make.module_dep_file.m"
  {
#line 731 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 731 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
#line 731 "make.module_dep_file.m"
      {
#line 4703 "make.module_dep_file.c"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 732 "make.module_dep_file.m"
        {
#line 732 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
#line 731 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
#line 731 "make.module_dep_file.m"
      }
#line 731 "make.module_dep_file.m"
    else
#line 731 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 731 "make.module_dep_file.m"
  }
#line 731 "make.module_dep_file.m"
}

#line 728 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 728 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 728 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4)
#line 728 "make.module_dep_file.m"
{
#line 728 "make.module_dep_file.m"
  {
#line 728 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

#line 728 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
#line 728 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
#line 731 "make.module_dep_file.m"
    {
#line 731 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
#line 731 "make.module_dep_file.m"
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 728 "make.module_dep_file.m"
  }
#line 728 "make.module_dep_file.m"
}

#line 722 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 722 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 722 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4)
#line 722 "make.module_dep_file.m"
{
#line 724 "make.module_dep_file.m"
  {
#line 724 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 724 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 724 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 724 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 724 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4795 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 725 "make.module_dep_file.m"
            {
#line 725 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 724 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 451 "make.module_dep_file.m"
              {
#line 451 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
#line 454 "make.module_dep_file.m"
                  {
#line 454 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
#line 454 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 454 "make.module_dep_file.m"
                  }
#line 451 "make.module_dep_file.m"
                else
#line 451 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
#line 451 "make.module_dep_file.m"
                  {
#line 451 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
#line 451 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 451 "make.module_dep_file.m"
                  }
#line 451 "make.module_dep_file.m"
                else
#line 451 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 451 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 724 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 724 "make.module_dep_file.m"
  }
#line 722 "make.module_dep_file.m"
}

#line 715 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 715 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1)
#line 715 "make.module_dep_file.m"
{
#line 717 "make.module_dep_file.m"
  {
#line 717 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HeadVar__2_2;

#line 717 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "make.module_dep_file.m"
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "make.module_dep_file.m"
    else
#line 718 "make.module_dep_file.m"
      {
#line 718 "make.module_dep_file.m"
        MR_Word make__module_dep_file__LangSet_4;

#line 720 "make.module_dep_file.m"
        {
#line 720 "make.module_dep_file.m"
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
#line 718 "make.module_dep_file.m"
        {
#line 718 "make.module_dep_file.m"
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
#line 718 "make.module_dep_file.m"
        }
#line 718 "make.module_dep_file.m"
      }
#line 717 "make.module_dep_file.m"
    return make__module_dep_file__HeadVar__2_2;
#line 717 "make.module_dep_file.m"
  }
#line 715 "make.module_dep_file.m"
}

#line 708 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 708 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 708 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
#line 708 "make.module_dep_file.m"
{
#line 711 "make.module_dep_file.m"
  {
#line 711 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 711 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 711 "make.module_dep_file.m"
    MR_String make__module_dep_file__Atom_5;
#line 711 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 711 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4934 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 712 "make.module_dep_file.m"
            {
#line 712 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 711 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 436 "make.module_dep_file.m"
              {
#line 436 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
#line 439 "make.module_dep_file.m"
                  {
#line 439 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
#line 439 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 439 "make.module_dep_file.m"
                  }
#line 436 "make.module_dep_file.m"
                else
#line 436 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
#line 436 "make.module_dep_file.m"
                  {
#line 436 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
#line 436 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 436 "make.module_dep_file.m"
                  }
#line 436 "make.module_dep_file.m"
                else
#line 436 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 436 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 711 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 711 "make.module_dep_file.m"
  }
#line 708 "make.module_dep_file.m"
}

#line 699 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 699 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 699 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4)
#line 699 "make.module_dep_file.m"
{
#line 702 "make.module_dep_file.m"
  {
#line 702 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_15_15;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FileNameTerm_6;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 702 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_8;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 702 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_14_14;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 702 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_23;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 702 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
#line 703 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
#line 702 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 702 "make.module_dep_file.m"
              {
#line 703 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 703 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 703 "make.module_dep_file.m"
                  {
#line 703 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 703 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 703 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 703 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 703 "make.module_dep_file.m"
                      {
#line 703 "make.module_dep_file.m"
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 703 "make.module_dep_file.m"
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5078 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 703 "make.module_dep_file.m"
                        {
#line 703 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
#line 702 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 702 "make.module_dep_file.m"
                          {
#line 659 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
                              {
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 702 "make.module_dep_file.m"
                                  {
#line 659 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
                                      {
#line 659 "make.module_dep_file.m"
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 1)));
#line 687 "make.module_dep_file.m"
                                        {
#line 687 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
#line 702 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 702 "make.module_dep_file.m"
                                          {
#line 659 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
                                              {
#line 659 "make.module_dep_file.m"
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
#line 659 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 702 "make.module_dep_file.m"
                                                  {
#line 659 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
                                                      {
#line 659 "make.module_dep_file.m"
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 1)));
#line 706 "make.module_dep_file.m"
                                                        {
#line 706 "make.module_dep_file.m"
                                                          MR_Word base;
#line 706 "make.module_dep_file.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "make.module_dep_file.m"
                                                          *make__module_dep_file__ForeignInclude_4 = base;
#line 706 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 706 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
#line 706 "make.module_dep_file.m"
                                                        }
#line 706 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = MR_TRUE;
#line 659 "make.module_dep_file.m"
                                                      }
#line 702 "make.module_dep_file.m"
                                                  }
#line 659 "make.module_dep_file.m"
                                              }
#line 702 "make.module_dep_file.m"
                                          }
#line 659 "make.module_dep_file.m"
                                      }
#line 702 "make.module_dep_file.m"
                                  }
#line 659 "make.module_dep_file.m"
                              }
#line 702 "make.module_dep_file.m"
                          }
#line 703 "make.module_dep_file.m"
                      }
#line 703 "make.module_dep_file.m"
                  }
#line 702 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 702 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 702 "make.module_dep_file.m"
  }
#line 699 "make.module_dep_file.m"
}

#line 689 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 689 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 689 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4)
#line 689 "make.module_dep_file.m"
{
#line 692 "make.module_dep_file.m"
  {
#line 692 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_14_14;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_17_17;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_8;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 692 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;
#line 692 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_25;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 692 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_22_22, (MR_Integer) 0)));
#line 693 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_15_15) == 0);
#line 692 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 692 "make.module_dep_file.m"
              {
#line 693 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 693 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 693 "make.module_dep_file.m"
                  {
#line 693 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 693 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 693 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 693 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 693 "make.module_dep_file.m"
                      {
#line 693 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 693 "make.module_dep_file.m"
                        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5291 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_17_17 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 693 "make.module_dep_file.m"
                        {
#line 693 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_16_16)));
                        }
#line 692 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 692 "make.module_dep_file.m"
                          {
#line 659 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
                              {
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 659 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 692 "make.module_dep_file.m"
                                  {
#line 659 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
                                      {
#line 659 "make.module_dep_file.m"
                                        make__module_dep_file__String_25 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_29_29, (MR_Integer) 1)));
#line 687 "make.module_dep_file.m"
                                        {
#line 687 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_25, &make__module_dep_file__Language_7);
                                        }
#line 692 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 692 "make.module_dep_file.m"
                                          {
#line 5337 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 695 "make.module_dep_file.m"
                                            {
#line 695 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_14_14, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
#line 692 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 692 "make.module_dep_file.m"
                                              {
#line 697 "make.module_dep_file.m"
                                                {
#line 697 "make.module_dep_file.m"
                                                  make__module_dep_file__V_13_13 = mercury__term__context_init_0_f_0();
                                                }
#line 696 "make.module_dep_file.m"
                                                {
#line 696 "make.module_dep_file.m"
                                                  MR_Word base;
#line 696 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "make.module_dep_file.m"
                                                  *make__module_dep_file__ForeignImport_4 = base;
#line 696 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 696 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
#line 696 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_13_13));
#line 696 "make.module_dep_file.m"
                                                }
#line 696 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 692 "make.module_dep_file.m"
                                              }
#line 692 "make.module_dep_file.m"
                                          }
#line 659 "make.module_dep_file.m"
                                      }
#line 692 "make.module_dep_file.m"
                                  }
#line 659 "make.module_dep_file.m"
                              }
#line 692 "make.module_dep_file.m"
                          }
#line 693 "make.module_dep_file.m"
                      }
#line 693 "make.module_dep_file.m"
                  }
#line 692 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 692 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 692 "make.module_dep_file.m"
  }
#line 689 "make.module_dep_file.m"
}

#line 683 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 683 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 683 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4)
#line 683 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;

#line 659 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
      {
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
          {
#line 659 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 687 "make.module_dep_file.m"
              {
#line 687 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
#line 659 "make.module_dep_file.m"
          }
#line 659 "make.module_dep_file.m"
      }
#line 685 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
  }
#line 683 "make.module_dep_file.m"
}

#line 678 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 678 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 678 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4)
#line 678 "make.module_dep_file.m"
{
#line 658 "make.module_dep_file.m"
  {
#line 658 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 658 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 658 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 659 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
      {
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
          {
#line 659 "make.module_dep_file.m"
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "make.module_dep_file.m"
          }
#line 659 "make.module_dep_file.m"
      }
#line 658 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 658 "make.module_dep_file.m"
  }
#line 678 "make.module_dep_file.m"
}

#line 5511 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 5514 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 5516 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 5518 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 5520 "make.module_dep_file.c"
{
#line 5522 "make.module_dep_file.c"
  {
#line 5524 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 5526 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 5528 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

#line 5531 "make.module_dep_file.c"
    {
#line 5533 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__676__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
#line 5536 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 5538 "make.module_dep_file.c"
      {
#line 5540 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
#line 5542 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 5544 "make.module_dep_file.c"
      }
#line 5546 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 5548 "make.module_dep_file.c"
  }
#line 5550 "make.module_dep_file.c"
}

#line 673 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 673 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 673 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4)
#line 673 "make.module_dep_file.m"
{
#line 675 "make.module_dep_file.m"
  {
#line 675 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_17;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_14;
#line 675 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_18_18;
#line 675 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          {
#line 664 "make.module_dep_file.m"
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
#line 670 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
#line 675 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 675 "make.module_dep_file.m"
              {
#line 5601 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 671 "make.module_dep_file.m"
                {
#line 671 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_4[9], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
#line 675 "make.module_dep_file.m"
              }
#line 664 "make.module_dep_file.m"
          }
#line 664 "make.module_dep_file.m"
      }
#line 675 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 675 "make.module_dep_file.m"
  }
#line 673 "make.module_dep_file.m"
}

#line 661 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 661 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 661 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 661 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 661 "make.module_dep_file.m"
{
#line 663 "make.module_dep_file.m"
  {
#line 663 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 664 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 664 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
      {
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
#line 664 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 664 "make.module_dep_file.m"
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 664 "make.module_dep_file.m"
      }
#line 663 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 663 "make.module_dep_file.m"
  }
#line 661 "make.module_dep_file.m"
}

#line 656 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 656 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 656 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4)
#line 656 "make.module_dep_file.m"
{
#line 658 "make.module_dep_file.m"
  {
#line 658 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 658 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 658 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 659 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_5_5;

#line 659 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
      {
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 659 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 659 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 659 "make.module_dep_file.m"
          {
#line 659 "make.module_dep_file.m"
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 1)));
#line 659 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "make.module_dep_file.m"
          }
#line 659 "make.module_dep_file.m"
      }
#line 658 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 658 "make.module_dep_file.m"
  }
#line 656 "make.module_dep_file.m"
}

#line 650 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 650 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 650 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4)
#line 650 "make.module_dep_file.m"
{
#line 652 "make.module_dep_file.m"
  {
#line 652 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Int_5;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 653 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;

#line 653 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 653 "make.module_dep_file.m"
      {
#line 653 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 653 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 653 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 653 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 653 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 653 "make.module_dep_file.m"
          {
#line 653 "make.module_dep_file.m"
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
#line 653 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 81 "make.module_dep_file.m"
#line 81 "make.module_dep_file.m"
              switch (make__module_dep_file__Int_5) {
#line 81 "make.module_dep_file.m"
                default:
#line 81 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 81 "make.module_dep_file.m"
                  break;
#line 81 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 81 "make.module_dep_file.m"
                  {
#line 81 "make.module_dep_file.m"
                    *make__module_dep_file__Version_4 = (MR_Integer) 0;
#line 81 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 81 "make.module_dep_file.m"
                  }
#line 81 "make.module_dep_file.m"
                  break;
#line 81 "make.module_dep_file.m"
                case (MR_Integer) 2:
#line 82 "make.module_dep_file.m"
                  {
#line 82 "make.module_dep_file.m"
                    *make__module_dep_file__Version_4 = (MR_Integer) 1;
#line 82 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 82 "make.module_dep_file.m"
                  }
#line 81 "make.module_dep_file.m"
                  break;
#line 81 "make.module_dep_file.m"
              }
#line 653 "make.module_dep_file.m"
          }
#line 653 "make.module_dep_file.m"
      }
#line 652 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 652 "make.module_dep_file.m"
  }
#line 650 "make.module_dep_file.m"
}

#line 634 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 634 "make.module_dep_file.m"
{
#line 634 "make.module_dep_file.m"
  {
#line 634 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 634 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_29;

#line 634 "make.module_dep_file.m"
    {
#line 634 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv3_STATE_VARIABLE_Info_29);
    }
#line 634 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_29));
#line 634 "make.module_dep_file.m"
  }
#line 634 "make.module_dep_file.m"
}

#line 634 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 634 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 634 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 634 "make.module_dep_file.m"
{
#line 634 "make.module_dep_file.m"
  {
#line 634 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 634 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_STATE_VARIABLE_Info_29;

#line 634 "make.module_dep_file.m"
    {
#line 634 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_STATE_VARIABLE_Info_29);
    }
#line 634 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_STATE_VARIABLE_Info_29));
#line 634 "make.module_dep_file.m"
  }
#line 634 "make.module_dep_file.m"
}

#line 520 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 520 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 520 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 520 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 520 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_71,
#line 520 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_72)
#line 520 "make.module_dep_file.m"
{
#line 646 "make.module_dep_file.m"
  {
#line 646 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 646 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_37;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleName_38;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Parents_39;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDeps_40;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImpDeps_41;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Children_42;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildren_43;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDeps_44;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_45;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImports_46;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExport_47;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMain_48;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignIncludes_49;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_149_149;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgs_21;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__VersionNumberTerm_22;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileTerm_23;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ParentsTerm_25;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDepsTerm_26;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImpDepsTerm_27;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ChildrenTerm_28;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDepsTerm_30;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMainTerm_34;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgsTail_35;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Version_36;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_76_76;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_78_78;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_82_82;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_83_83;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_84_84;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_85_85;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_86_86;
#line 527 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_87_87;
#line 527 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_178_178;

#line 527 "make.module_dep_file.m"
    {
#line 527 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_178_178, &make__module_dep_file__ModuleArgs_21);
    }
#line 527 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
      {
#line 527 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_178_178) == 0);
#line 527 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
          {
#line 529 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 529 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
              {
#line 529 "make.module_dep_file.m"
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
#line 529 "make.module_dep_file.m"
                make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
#line 530 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 530 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 530 "make.module_dep_file.m"
                  {
#line 530 "make.module_dep_file.m"
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 0)));
#line 530 "make.module_dep_file.m"
                    make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 1)));
#line 531 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 531 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 531 "make.module_dep_file.m"
                      {
#line 531 "make.module_dep_file.m"
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
#line 531 "make.module_dep_file.m"
                        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 532 "make.module_dep_file.m"
                          {
#line 532 "make.module_dep_file.m"
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
#line 532 "make.module_dep_file.m"
                            make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 533 "make.module_dep_file.m"
                              {
#line 533 "make.module_dep_file.m"
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
#line 533 "make.module_dep_file.m"
                                make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
#line 534 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 534 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 534 "make.module_dep_file.m"
                                  {
#line 534 "make.module_dep_file.m"
                                    make__module_dep_file__ImpDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
#line 534 "make.module_dep_file.m"
                                    make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
#line 535 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 535 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 535 "make.module_dep_file.m"
                                      {
#line 535 "make.module_dep_file.m"
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
#line 535 "make.module_dep_file.m"
                                        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
#line 536 "make.module_dep_file.m"
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 536 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 536 "make.module_dep_file.m"
                                          {
#line 536 "make.module_dep_file.m"
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 0)));
#line 536 "make.module_dep_file.m"
                                            make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 1)));
#line 537 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_83_83)) == (MR_mktag((MR_Integer) 1)));
#line 537 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 537 "make.module_dep_file.m"
                                              {
#line 537 "make.module_dep_file.m"
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 0)));
#line 537 "make.module_dep_file.m"
                                                make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 1)));
#line 538 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 538 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 538 "make.module_dep_file.m"
                                                  {
#line 538 "make.module_dep_file.m"
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 0)));
#line 538 "make.module_dep_file.m"
                                                    make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 1)));
#line 539 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 539 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 539 "make.module_dep_file.m"
                                                      {
#line 539 "make.module_dep_file.m"
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 0)));
#line 539 "make.module_dep_file.m"
                                                        make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 1)));
#line 540 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 540 "make.module_dep_file.m"
                                                        if (make__module_dep_file__succeeded)
#line 540 "make.module_dep_file.m"
                                                          {
#line 540 "make.module_dep_file.m"
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 0)));
#line 540 "make.module_dep_file.m"
                                                            make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 1)));
#line 542 "make.module_dep_file.m"
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 542 "make.module_dep_file.m"
                                                            if (make__module_dep_file__succeeded)
#line 542 "make.module_dep_file.m"
                                                              {
#line 542 "make.module_dep_file.m"
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 0)));
#line 542 "make.module_dep_file.m"
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 1)));
#line 545 "make.module_dep_file.m"
                                                                {
#line 545 "make.module_dep_file.m"
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
#line 527 "make.module_dep_file.m"
                                                                if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                  {
#line 546 "make.module_dep_file.m"
                                                                    {
#line 546 "make.module_dep_file.m"
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
#line 527 "make.module_dep_file.m"
                                                                    if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                      {
#line 6156 "make.module_dep_file.c"
                                                                        make__module_dep_file__TypeCtorInfo_149_149 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 547 "make.module_dep_file.m"
                                                                        {
#line 547 "make.module_dep_file.m"
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_149_149, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
#line 527 "make.module_dep_file.m"
                                                                        if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                          {
#line 550 "make.module_dep_file.m"
                                                                            {
#line 550 "make.module_dep_file.m"
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
#line 527 "make.module_dep_file.m"
                                                                            if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                              {
#line 551 "make.module_dep_file.m"
                                                                                {
#line 551 "make.module_dep_file.m"
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
#line 527 "make.module_dep_file.m"
                                                                                if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                  {
#line 552 "make.module_dep_file.m"
                                                                                    {
#line 552 "make.module_dep_file.m"
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImpDepsTerm_27, &make__module_dep_file__ImpDeps_41);
                                                                                    }
#line 527 "make.module_dep_file.m"
                                                                                    if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                      {
#line 553 "make.module_dep_file.m"
                                                                                        {
#line 553 "make.module_dep_file.m"
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
#line 527 "make.module_dep_file.m"
                                                                                        if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                          {
#line 554 "make.module_dep_file.m"
                                                                                            {
#line 554 "make.module_dep_file.m"
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
#line 527 "make.module_dep_file.m"
                                                                                            if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                              {
#line 556 "make.module_dep_file.m"
                                                                                                {
#line 556 "make.module_dep_file.m"
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
#line 527 "make.module_dep_file.m"
                                                                                                if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                                  {
#line 557 "make.module_dep_file.m"
                                                                                                    {
#line 557 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
#line 527 "make.module_dep_file.m"
                                                                                                    if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                                      {
#line 559 "make.module_dep_file.m"
                                                                                                        {
#line 559 "make.module_dep_file.m"
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
#line 527 "make.module_dep_file.m"
                                                                                                        if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                                          {
#line 561 "make.module_dep_file.m"
                                                                                                            {
#line 561 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
#line 527 "make.module_dep_file.m"
                                                                                                            if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                                              {
#line 564 "make.module_dep_file.m"
                                                                                                                {
#line 564 "make.module_dep_file.m"
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
#line 527 "make.module_dep_file.m"
                                                                                                                if (make__module_dep_file__succeeded)
#line 570 "make.module_dep_file.m"
                                                                                                                  {
#line 570 "make.module_dep_file.m"
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "make.module_dep_file.m"
                                                                                                                      {
#line 567 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
#line 567 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 567 "make.module_dep_file.m"
                                                                                                                          {
#line 569 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 569 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
#line 567 "make.module_dep_file.m"
                                                                                                                          }
#line 567 "make.module_dep_file.m"
                                                                                                                      }
#line 570 "make.module_dep_file.m"
                                                                                                                    else
#line 571 "make.module_dep_file.m"
                                                                                                                      {
#line 571 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
#line 571 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__V_91_91;

#line 571 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
#line 571 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 571 "make.module_dep_file.m"
                                                                                                                          {
#line 572 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
#line 572 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
#line 572 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "make.module_dep_file.m"
                                                                                                                            if (make__module_dep_file__succeeded)
#line 573 "make.module_dep_file.m"
                                                                                                                              {
#line 573 "make.module_dep_file.m"
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
                                                                                                                              }
#line 571 "make.module_dep_file.m"
                                                                                                                          }
#line 571 "make.module_dep_file.m"
                                                                                                                      }
#line 570 "make.module_dep_file.m"
                                                                                                                  }
#line 527 "make.module_dep_file.m"
                                                                                                              }
#line 527 "make.module_dep_file.m"
                                                                                                          }
#line 527 "make.module_dep_file.m"
                                                                                                      }
#line 527 "make.module_dep_file.m"
                                                                                                  }
#line 527 "make.module_dep_file.m"
                                                                                              }
#line 527 "make.module_dep_file.m"
                                                                                          }
#line 527 "make.module_dep_file.m"
                                                                                      }
#line 527 "make.module_dep_file.m"
                                                                                  }
#line 527 "make.module_dep_file.m"
                                                                              }
#line 527 "make.module_dep_file.m"
                                                                          }
#line 527 "make.module_dep_file.m"
                                                                      }
#line 527 "make.module_dep_file.m"
                                                                  }
#line 542 "make.module_dep_file.m"
                                                              }
#line 540 "make.module_dep_file.m"
                                                          }
#line 539 "make.module_dep_file.m"
                                                      }
#line 538 "make.module_dep_file.m"
                                                  }
#line 537 "make.module_dep_file.m"
                                              }
#line 536 "make.module_dep_file.m"
                                          }
#line 535 "make.module_dep_file.m"
                                      }
#line 534 "make.module_dep_file.m"
                                  }
#line 533 "make.module_dep_file.m"
                              }
#line 532 "make.module_dep_file.m"
                          }
#line 531 "make.module_dep_file.m"
                      }
#line 530 "make.module_dep_file.m"
                  }
#line 529 "make.module_dep_file.m"
              }
#line 527 "make.module_dep_file.m"
          }
#line 527 "make.module_dep_file.m"
      }
#line 646 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 577 "make.module_dep_file.m"
      {
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_162_162;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeInfo_163_163;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleNameContext_51;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ContainsForeignCode_52;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectDeps_53;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__PublicChildren_54;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__DirectIntItemBlocksCord_56;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectIntItemBlocksCord_57;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OptItemBlocksCord_58;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IntForOptItemBlocksCord_59;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleVersionNumbers_60;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_62;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleAndImports_64;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_93_93;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_94_94;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_95_95;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_96_96;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_97_97;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_98_98;
#line 577 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_99_99;
#line 609 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_179_179;

#line 577 "make.module_dep_file.m"
        {
#line 577 "make.module_dep_file.m"
          make__module_dep_file__ModuleNameContext_51 = mercury__term__context_init_0_f_0();
        }
#line 578 "make.module_dep_file.m"
        {
#line 578 "make.module_dep_file.m"
          make__module_dep_file__ContainsForeignCode_52 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
#line 6420 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_162_162 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 579 "make.module_dep_file.m"
        {
#line 579 "make.module_dep_file.m"
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_162_162, &make__module_dep_file__IndirectDeps_53);
        }
#line 580 "make.module_dep_file.m"
        {
#line 580 "make.module_dep_file.m"
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_162_162, &make__module_dep_file__PublicChildren_54);
        }
#line 6432 "make.module_dep_file.c"
        make__module_dep_file__TypeInfo_163_163 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 582 "make.module_dep_file.m"
        {
#line 582 "make.module_dep_file.m"
          make__module_dep_file__DirectIntItemBlocksCord_56 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_163_163);
        }
#line 583 "make.module_dep_file.m"
        {
#line 583 "make.module_dep_file.m"
          make__module_dep_file__IndirectIntItemBlocksCord_57 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_163_163);
        }
#line 584 "make.module_dep_file.m"
        {
#line 584 "make.module_dep_file.m"
          make__module_dep_file__OptItemBlocksCord_58 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[2]);
        }
#line 585 "make.module_dep_file.m"
        {
#line 585 "make.module_dep_file.m"
          make__module_dep_file__IntForOptItemBlocksCord_59 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[3]);
        }
#line 586 "make.module_dep_file.m"
        {
#line 586 "make.module_dep_file.m"
          mercury__map__init_1_p_0(make__module_dep_file__TypeCtorInfo_162_162, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, &make__module_dep_file__ModuleVersionNumbers_60);
        }
#line 588 "make.module_dep_file.m"
        {
#line 588 "make.module_dep_file.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &make__module_dep_file__Errors_62);
        }
#line 592 "make.module_dep_file.m"
        {
#line 592 "make.module_dep_file.m"
          make__module_dep_file__V_93_93 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_162_162, make__module_dep_file__Parents_39);
        }
#line 593 "make.module_dep_file.m"
        {
#line 593 "make.module_dep_file.m"
          make__module_dep_file__V_94_94 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_162_162, make__module_dep_file__IntDeps_40);
        }
#line 594 "make.module_dep_file.m"
        {
#line 594 "make.module_dep_file.m"
          make__module_dep_file__V_95_95 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_162_162, make__module_dep_file__ImpDeps_41);
        }
#line 596 "make.module_dep_file.m"
        {
#line 596 "make.module_dep_file.m"
          make__module_dep_file__V_96_96 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_162_162, make__module_dep_file__Children_42);
        }
#line 598 "make.module_dep_file.m"
        {
#line 598 "make.module_dep_file.m"
          make__module_dep_file__V_97_97 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_162_162, make__module_dep_file__NestedChildren_43);
        }
#line 600 "make.module_dep_file.m"
        {
#line 600 "make.module_dep_file.m"
          make__module_dep_file__V_98_98 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, make__module_dep_file__ForeignImports_46);
        }
#line 600 "make.module_dep_file.m"
        {
#line 600 "make.module_dep_file.m"
          make__module_dep_file__V_99_99 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludes_49);
        }
#line 590 "make.module_dep_file.m"
        {
#line 590 "make.module_dep_file.m"
          make__module_dep_file__ModuleAndImports_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 3) = ((MR_Box) (make__module_dep_file__ModuleNameContext_51));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 4) = ((MR_Box) (make__module_dep_file__V_93_93));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 5) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 6) = ((MR_Box) (make__module_dep_file__V_95_95));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 7) = ((MR_Box) (make__module_dep_file__IndirectDeps_53));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 8) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 9) = ((MR_Box) (make__module_dep_file__PublicChildren_54));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 10) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 11) = ((MR_Box) (make__module_dep_file__FactDeps_44));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 12) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 13) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_52));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 15) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 17) = ((MR_Box) (make__module_dep_file__DirectIntItemBlocksCord_56));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 18) = ((MR_Box) (make__module_dep_file__IndirectIntItemBlocksCord_57));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 19) = ((MR_Box) (make__module_dep_file__OptItemBlocksCord_58));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 20) = ((MR_Box) (make__module_dep_file__IntForOptItemBlocksCord_59));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 21) = ((MR_Box) (make__module_dep_file__ModuleVersionNumbers_60));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 22) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 23) = ((MR_Box) (make__module_dep_file__Errors_62));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 25) = ((MR_Box) (make__module_dep_file__HasMain_48));
#line 590 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 26) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
#line 590 "make.module_dep_file.m"
        }
#line 609 "make.module_dep_file.m"
        {
#line 609 "make.module_dep_file.m"
          make__module_dep_file__V_179_179 = mercury__dir__this_directory_0_f_0();
        }
#line 609 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_179_179) == 0);
#line 6566 "make.module_dep_file.c"
        if (make__module_dep_file__succeeded)
#line 6568 "make.module_dep_file.c"
          {
#line 6570 "make.module_dep_file.c"
            MR_Word make__module_dep_file__SourceFileExists_65;

#line 610 "make.module_dep_file.m"
            {
#line 610 "make.module_dep_file.m"
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_65);
            }
#line 6578 "make.module_dep_file.c"
            if ((make__module_dep_file__SourceFileExists_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6580 "make.module_dep_file.c"
              {
#line 6582 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 0)));
#line 6584 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap_69;
#line 6586 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_102_102;
#line 6588 "make.module_dep_file.c"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_103_103;
#line 6590 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_104_104;
#line 6592 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 1)));
#line 6594 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 2)));
#line 6596 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 3)));
#line 6598 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 4)));
#line 6600 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 5)));
#line 6602 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 6)));
#line 6604 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 7)));
#line 6606 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 8)));
#line 6608 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 9)));
#line 6610 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 10)));
#line 6612 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 11)));
#line 6614 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 12)));
#line 6616 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 13)));
#line 6618 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 14)));
#line 6620 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 15)));
#line 6622 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 16)));
#line 6624 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 17)));
#line 6626 "make.module_dep_file.c"
                MR_Integer make__module_dep_file__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 18)));
#line 6628 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 19)));
#line 633 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_72;
#line 633 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_74;

#line 624 "make.module_dep_file.m"
                {
#line 624 "make.module_dep_file.m"
                  make__module_dep_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_102_102, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_64));
#line 624 "make.module_dep_file.m"
                }
#line 624 "make.module_dep_file.m"
                {
#line 624 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_162_162, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_102_102)), make__module_dep_file__ModuleDepMap0_68, &make__module_dep_file__ModuleDepMap_69);
                }
#line 626 "make.module_dep_file.m"
                {
#line 626 "make.module_dep_file.m"
                  make__module_dep_file__STATE_VARIABLE_Info_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_69));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 1) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 2) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 3) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 4) = ((MR_Box) (make__module_dep_file__V_113_113));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 5) = ((MR_Box) (make__module_dep_file__V_114_114));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 6) = ((MR_Box) (make__module_dep_file__V_115_115));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 7) = ((MR_Box) (make__module_dep_file__V_116_116));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 8) = ((MR_Box) (make__module_dep_file__V_117_117));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 9) = ((MR_Box) (make__module_dep_file__V_118_118));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 10) = ((MR_Box) (make__module_dep_file__V_119_119));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 11) = ((MR_Box) (make__module_dep_file__V_120_120));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 12) = ((MR_Box) (make__module_dep_file__V_121_121));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 13) = ((MR_Box) (make__module_dep_file__V_122_122));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 14) = ((MR_Box) (make__module_dep_file__V_123_123));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 15) = ((MR_Box) (make__module_dep_file__V_124_124));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 16) = ((MR_Box) (make__module_dep_file__V_125_125));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 17) = ((MR_Box) (make__module_dep_file__V_126_126));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 18) = ((MR_Box) (make__module_dep_file__V_127_127));
#line 626 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_103, 19) = ((MR_Box) (make__module_dep_file__V_128_128));
#line 626 "make.module_dep_file.m"
                }
#line 634 "make.module_dep_file.m"
                {
#line 634 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 634 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 634 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
#line 634 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 634 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 634 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 4) = ((MR_Box) ((MR_Integer) 1));
#line 634 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 634 "make.module_dep_file.m"
                }
#line 633 "make.module_dep_file.m"
                {
#line 633 "make.module_dep_file.m"
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_162_162, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_104_104, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_103_103)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_72, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_74);
                }
#line 633 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_72 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_72);
#line 637 "make.module_dep_file.m"
                {
#line 637 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_72, make__module_dep_file__NestedChildren_43);
                }
#line 639 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 638 "make.module_dep_file.m"
                  {
#line 638 "make.module_dep_file.m"
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 638 "make.module_dep_file.m"
                  }
#line 639 "make.module_dep_file.m"
                else
#line 640 "make.module_dep_file.m"
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6736 "make.module_dep_file.c"
              }
#line 6738 "make.module_dep_file.c"
            else
#line 6740 "make.module_dep_file.c"
              {
#line 615 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_67_67;

#line 615 "make.module_dep_file.m"
                {
#line 615 "make.module_dep_file.m"
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_67_67);
                }
#line 644 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_65;
#line 643 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_72 = make__module_dep_file__STATE_VARIABLE_Info_0_71;
#line 6754 "make.module_dep_file.c"
              }
#line 6756 "make.module_dep_file.c"
          }
#line 6758 "make.module_dep_file.c"
        else
#line 6760 "make.module_dep_file.c"
          {
#line 6762 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap0_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 0)));
#line 6764 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap_226;
#line 6766 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_228_228;
#line 6768 "make.module_dep_file.c"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_103_229;
#line 6770 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_230_230;
#line 6772 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 1)));
#line 6774 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 2)));
#line 6776 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 3)));
#line 6778 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 4)));
#line 6780 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 5)));
#line 6782 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 6)));
#line 6784 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 7)));
#line 6786 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 8)));
#line 6788 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 9)));
#line 6790 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 10)));
#line 6792 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 11)));
#line 6794 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 12)));
#line 6796 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 13)));
#line 6798 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 14)));
#line 6800 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 15)));
#line 6802 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 16)));
#line 6804 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 17)));
#line 6806 "make.module_dep_file.c"
            MR_Integer make__module_dep_file__V_250_250 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 18)));
#line 6808 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 19)));
#line 633 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_STATE_VARIABLE_Info_72;
#line 633 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_IO_74;

#line 624 "make.module_dep_file.m"
            {
#line 624 "make.module_dep_file.m"
              make__module_dep_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_228_228, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_64));
#line 624 "make.module_dep_file.m"
            }
#line 624 "make.module_dep_file.m"
            {
#line 624 "make.module_dep_file.m"
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_162_162, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_228_228)), make__module_dep_file__ModuleDepMap0_225, &make__module_dep_file__ModuleDepMap_226);
            }
#line 626 "make.module_dep_file.m"
            {
#line 626 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_103_229 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_226));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 1) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 2) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 3) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 4) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 5) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 6) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 7) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 8) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 9) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 10) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 11) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 12) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 13) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 14) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 15) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 16) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 17) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 18) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 626 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_103_229, 19) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 626 "make.module_dep_file.m"
            }
#line 634 "make.module_dep_file.m"
            {
#line 634 "make.module_dep_file.m"
              make__module_dep_file__V_230_230 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 634 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_230_230, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 634 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_230_230, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
#line 634 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_230_230, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 634 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_230_230, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 634 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_230_230, 4) = ((MR_Box) ((MR_Integer) 1));
#line 634 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_230_230, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 634 "make.module_dep_file.m"
            }
#line 633 "make.module_dep_file.m"
            {
#line 633 "make.module_dep_file.m"
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_162_162, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_230_230, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_103_229)), &make__module_dep_file__conv5_STATE_VARIABLE_Info_72, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv4_STATE_VARIABLE_IO_74);
            }
#line 633 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_72 = ((MR_Word) make__module_dep_file__conv5_STATE_VARIABLE_Info_72);
#line 637 "make.module_dep_file.m"
            {
#line 637 "make.module_dep_file.m"
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_72, make__module_dep_file__NestedChildren_43);
            }
#line 639 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 638 "make.module_dep_file.m"
              {
#line 638 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 638 "make.module_dep_file.m"
              }
#line 639 "make.module_dep_file.m"
            else
#line 640 "make.module_dep_file.m"
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6916 "make.module_dep_file.c"
          }
#line 577 "make.module_dep_file.m"
      }
#line 646 "make.module_dep_file.m"
    else
#line 647 "make.module_dep_file.m"
      {
#line 647 "make.module_dep_file.m"
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[1]);
#line 647 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_72 = make__module_dep_file__STATE_VARIABLE_Info_0_71;
#line 647 "make.module_dep_file.m"
      }
#line 646 "make.module_dep_file.m"
  }
#line 520 "make.module_dep_file.m"
}

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 779 "make.module_dep_file.m"
{
#line 779 "make.module_dep_file.m"
  {
#line 779 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 779 "make.module_dep_file.m"
    {
#line 779 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 779 "make.module_dep_file.m"
      return;
    }
#line 779 "make.module_dep_file.m"
  }
#line 779 "make.module_dep_file.m"
}

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 779 "make.module_dep_file.m"
{
#line 779 "make.module_dep_file.m"
  {
#line 779 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 779 "make.module_dep_file.m"
    {
#line 779 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 779 "make.module_dep_file.m"
      return;
    }
#line 779 "make.module_dep_file.m"
  }
#line 779 "make.module_dep_file.m"
}

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 779 "make.module_dep_file.m"
{
#line 779 "make.module_dep_file.m"
  {
#line 779 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 779 "make.module_dep_file.m"
    {
#line 779 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 779 "make.module_dep_file.m"
      return;
    }
#line 779 "make.module_dep_file.m"
  }
#line 779 "make.module_dep_file.m"
}

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 779 "make.module_dep_file.m"
{
#line 779 "make.module_dep_file.m"
  {
#line 779 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 779 "make.module_dep_file.m"
    {
#line 779 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 779 "make.module_dep_file.m"
      return;
    }
#line 779 "make.module_dep_file.m"
  }
#line 779 "make.module_dep_file.m"
}

#line 479 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 479 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 479 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29)
#line 479 "make.module_dep_file.m"
{
#line 484 "make.module_dep_file.m"
  {
#line 484 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 484 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepFile_15;
#line 484 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OldInputStream_16;
#line 484 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchResult_17;
#line 484 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_32_32;

#line 486 "make.module_dep_file.m"
    {
#line 486 "make.module_dep_file.m"
      make__module_dep_file__V_32_32 = make__make_module_dep_file_extension_0_f_0();
    }
#line 485 "make.module_dep_file.m"
    {
#line 485 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_32_32, &make__module_dep_file__ModuleDepFile_15);
    }
#line 487 "make.module_dep_file.m"
    {
#line 487 "make.module_dep_file.m"
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
#line 488 "make.module_dep_file.m"
    {
#line 488 "make.module_dep_file.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
#line 513 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 514 "make.module_dep_file.m"
      {
#line 777 "make.module_dep_file.m"
#line 777 "make.module_dep_file.m"
        switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 777 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 783 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 777 "make.module_dep_file.m"
            break;
#line 777 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 777 "make.module_dep_file.m"
            {
#line 777 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_61_61;

#line 779 "make.module_dep_file.m"
              {
#line 779 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 779 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 779 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
#line 779 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 779 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 779 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 779 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 5) = ((MR_Box) ((MR_String) "couldn\'t find \140.module_dep\' file"));
#line 779 "make.module_dep_file.m"
              }
#line 778 "make.module_dep_file.m"
              {
#line 778 "make.module_dep_file.m"
                make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_61_61);
              }
#line 781 "make.module_dep_file.m"
              {
#line 781 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 781 "make.module_dep_file.m"
                return;
              }
#line 777 "make.module_dep_file.m"
            }
#line 777 "make.module_dep_file.m"
            break;
#line 777 "make.module_dep_file.m"
        }
#line 514 "make.module_dep_file.m"
      }
#line 513 "make.module_dep_file.m"
    else
#line 491 "make.module_dep_file.m"
      {
#line 491 "make.module_dep_file.m"
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 491 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TermResult_19;
#line 491 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepStream_20;

#line 492 "make.module_dep_file.m"
        {
#line 492 "make.module_dep_file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
#line 493 "make.module_dep_file.m"
        {
#line 493 "make.module_dep_file.m"
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
#line 494 "make.module_dep_file.m"
        {
#line 494 "make.module_dep_file.m"
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
#line 7183 "make.module_dep_file.c"
#line 7184 "make.module_dep_file.c"
        switch (MR_tag((MR_Word) make__module_dep_file__TermResult_19)) {
#line 7186 "make.module_dep_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 7188 "make.module_dep_file.c"
          case (MR_Integer) 0:
#line 7190 "make.module_dep_file.c"
            {
#line 777 "make.module_dep_file.m"
#line 777 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 777 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 777 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 783 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 777 "make.module_dep_file.m"
                  break;
#line 777 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 777 "make.module_dep_file.m"
                  {
#line 777 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_77_77;

#line 779 "make.module_dep_file.m"
                    {
#line 779 "make.module_dep_file.m"
                      make__module_dep_file__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 5) = ((MR_Box) ((MR_String) "unexpected eof"));
#line 779 "make.module_dep_file.m"
                    }
#line 778 "make.module_dep_file.m"
                    {
#line 778 "make.module_dep_file.m"
                      make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_77_77);
                    }
#line 781 "make.module_dep_file.m"
                    {
#line 781 "make.module_dep_file.m"
                      make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 781 "make.module_dep_file.m"
                      return;
                    }
#line 777 "make.module_dep_file.m"
                  }
#line 777 "make.module_dep_file.m"
                  break;
#line 777 "make.module_dep_file.m"
              }
#line 7246 "make.module_dep_file.c"
            }
#line 7248 "make.module_dep_file.c"
            break;
#line 7250 "make.module_dep_file.c"
          case (MR_Integer) 1:
#line 7252 "make.module_dep_file.c"
            {
#line 7254 "make.module_dep_file.c"
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
#line 7256 "make.module_dep_file.c"
              MR_String make__module_dep_file__Msg_89;
#line 503 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

#line 504 "make.module_dep_file.m"
              {
#line 504 "make.module_dep_file.m"
                make__module_dep_file__Msg_89 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
#line 777 "make.module_dep_file.m"
#line 777 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 777 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 777 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 783 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 777 "make.module_dep_file.m"
                  break;
#line 777 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 777 "make.module_dep_file.m"
                  {
#line 777 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_84_84;

#line 779 "make.module_dep_file.m"
                    {
#line 779 "make.module_dep_file.m"
                      make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 779 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 5) = ((MR_Box) (make__module_dep_file__Msg_89));
#line 779 "make.module_dep_file.m"
                    }
#line 778 "make.module_dep_file.m"
                    {
#line 778 "make.module_dep_file.m"
                      make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_84_84);
                    }
#line 781 "make.module_dep_file.m"
                    {
#line 781 "make.module_dep_file.m"
                      make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 781 "make.module_dep_file.m"
                      return;
                    }
#line 777 "make.module_dep_file.m"
                  }
#line 777 "make.module_dep_file.m"
                  break;
#line 777 "make.module_dep_file.m"
              }
#line 7320 "make.module_dep_file.c"
            }
#line 7322 "make.module_dep_file.c"
            break;
#line 7324 "make.module_dep_file.c"
          case (MR_Integer) 2:
#line 7326 "make.module_dep_file.c"
            {
#line 7328 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
#line 7330 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Result_104;
#line 7332 "make.module_dep_file.c"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 496 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

#line 497 "make.module_dep_file.m"
              {
#line 497 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_104, make__module_dep_file__STATE_VARIABLE_Info_0_28, &make__module_dep_file__STATE_VARIABLE_Info_46_106);
              }
#line 508 "make.module_dep_file.m"
              if ((make__module_dep_file__Result_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 508 "make.module_dep_file.m"
              else
#line 509 "make.module_dep_file.m"
                {
#line 509 "make.module_dep_file.m"
                  MR_String make__module_dep_file__Msg_98 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_104, (MR_Integer) 0)));

#line 777 "make.module_dep_file.m"
#line 777 "make.module_dep_file.m"
                  switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 777 "make.module_dep_file.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 777 "make.module_dep_file.m"
                    case (MR_Integer) 1:
#line 783 "make.module_dep_file.m"
                      *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 777 "make.module_dep_file.m"
                      break;
#line 777 "make.module_dep_file.m"
                    case (MR_Integer) 0:
#line 777 "make.module_dep_file.m"
                      {
#line 777 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_94_94;

#line 779 "make.module_dep_file.m"
                        {
#line 779 "make.module_dep_file.m"
                          make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 779 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 779 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_4));
#line 779 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 779 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 779 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 779 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 5) = ((MR_Box) (make__module_dep_file__Msg_98));
#line 779 "make.module_dep_file.m"
                        }
#line 778 "make.module_dep_file.m"
                        {
#line 778 "make.module_dep_file.m"
                          make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_94_94);
                        }
#line 781 "make.module_dep_file.m"
                        {
#line 781 "make.module_dep_file.m"
                          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_106, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 781 "make.module_dep_file.m"
                          return;
                        }
#line 777 "make.module_dep_file.m"
                      }
#line 777 "make.module_dep_file.m"
                      break;
#line 777 "make.module_dep_file.m"
                  }
#line 509 "make.module_dep_file.m"
                }
#line 7409 "make.module_dep_file.c"
            }
#line 7411 "make.module_dep_file.c"
            break;
#line 7413 "make.module_dep_file.c"
        }
#line 491 "make.module_dep_file.m"
      }
#line 484 "make.module_dep_file.m"
  }
#line 479 "make.module_dep_file.m"
}

#line 470 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 470 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 470 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 470 "make.module_dep_file.m"
{
#line 475 "make.module_dep_file.m"
  {
#line 475 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 475 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 475 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 477 "make.module_dep_file.m"
    {
#line 477 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 477 "make.module_dep_file.m"
    {
#line 477 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 477 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "make.module_dep_file.m"
    }
#line 476 "make.module_dep_file.m"
    {
#line 476 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 476 "make.module_dep_file.m"
      return;
    }
#line 475 "make.module_dep_file.m"
  }
#line 470 "make.module_dep_file.m"
}

#line 460 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 460 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 460 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 460 "make.module_dep_file.m"
{
#line 464 "make.module_dep_file.m"
  {
#line 464 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 464 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 465 "make.module_dep_file.m"
    {
#line 465 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 649, &make__module_dep_file__SearchDirs_13);
    }
#line 467 "make.module_dep_file.m"
    {
#line 467 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 467 "make.module_dep_file.m"
      return;
    }
#line 464 "make.module_dep_file.m"
  }
#line 460 "make.module_dep_file.m"
}

#line 446 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 446 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 446 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 446 "make.module_dep_file.m"
{
#line 451 "make.module_dep_file.m"
  {
#line 451 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 451 "make.module_dep_file.m"
#line 451 "make.module_dep_file.m"
    switch (make__module_dep_file__HasMain_3) {
#line 451 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 451 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 452 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 451 "make.module_dep_file.m"
        break;
#line 451 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 455 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 451 "make.module_dep_file.m"
        break;
#line 451 "make.module_dep_file.m"
    }
#line 451 "make.module_dep_file.m"
  }
#line 446 "make.module_dep_file.m"
}

#line 430 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 430 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 430 "make.module_dep_file.m"
{
#line 436 "make.module_dep_file.m"
  {
#line 436 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 436 "make.module_dep_file.m"
#line 436 "make.module_dep_file.m"
    switch (make__module_dep_file__ContainsForeignExport_3) {
#line 436 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 436 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 437 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 436 "make.module_dep_file.m"
        break;
#line 436 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 442 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 436 "make.module_dep_file.m"
        break;
#line 436 "make.module_dep_file.m"
    }
#line 436 "make.module_dep_file.m"
  }
#line 430 "make.module_dep_file.m"
}

#line 420 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4)
#line 420 "make.module_dep_file.m"
{
#line 423 "make.module_dep_file.m"
  {
#line 423 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 423 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
#line 423 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

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
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
#line 427 "make.module_dep_file.m"
      return;
    }
#line 423 "make.module_dep_file.m"
  }
#line 420 "make.module_dep_file.m"
}

#line 411 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 411 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4)
#line 411 "make.module_dep_file.m"
{
#line 414 "make.module_dep_file.m"
  {
#line 414 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 414 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
#line 414 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));
#line 415 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 2)));

#line 416 "make.module_dep_file.m"
    {
#line 416 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 417 "make.module_dep_file.m"
    {
#line 417 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 418 "make.module_dep_file.m"
    {
#line 418 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
#line 418 "make.module_dep_file.m"
      return;
    }
#line 414 "make.module_dep_file.m"
  }
#line 411 "make.module_dep_file.m"
}

#line 406 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 406 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 406 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 406 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 406 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 406 "make.module_dep_file.m"
{
#line 406 "make.module_dep_file.m"
  {
#line 406 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 406 "make.module_dep_file.m"
    {
#line 406 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 406 "make.module_dep_file.m"
      return;
    }
#line 406 "make.module_dep_file.m"
  }
#line 406 "make.module_dep_file.m"
}

#line 391 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 391 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 391 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 391 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 391 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 391 "make.module_dep_file.m"
{
#line 391 "make.module_dep_file.m"
  {
#line 391 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 391 "make.module_dep_file.m"
    {
#line 391 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 391 "make.module_dep_file.m"
      return;
    }
#line 391 "make.module_dep_file.m"
  }
#line 391 "make.module_dep_file.m"
}

#line 388 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 388 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 388 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 388 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 388 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 388 "make.module_dep_file.m"
{
#line 388 "make.module_dep_file.m"
  {
#line 388 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 388 "make.module_dep_file.m"
    {
#line 388 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 388 "make.module_dep_file.m"
      return;
    }
#line 388 "make.module_dep_file.m"
  }
#line 388 "make.module_dep_file.m"
}

#line 377 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
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
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__377__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
#line 377 "make.module_dep_file.m"
      return;
    }
#line 377 "make.module_dep_file.m"
  }
#line 377 "make.module_dep_file.m"
}

#line 374 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
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
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
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
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
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

#line 365 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 365 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 365 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 365 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 365 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 365 "make.module_dep_file.m"
{
#line 365 "make.module_dep_file.m"
  {
#line 365 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 365 "make.module_dep_file.m"
    {
#line 365 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 365 "make.module_dep_file.m"
      return;
    }
#line 365 "make.module_dep_file.m"
  }
#line 365 "make.module_dep_file.m"
}

#line 362 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 362 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 362 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 362 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 362 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 362 "make.module_dep_file.m"
{
#line 362 "make.module_dep_file.m"
  {
#line 362 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 362 "make.module_dep_file.m"
    {
#line 362 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 362 "make.module_dep_file.m"
      return;
    }
#line 362 "make.module_dep_file.m"
  }
#line 362 "make.module_dep_file.m"
}

#line 348 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 348 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_5,
#line 348 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6)
#line 348 "make.module_dep_file.m"
{
#line 351 "make.module_dep_file.m"
  {
#line 351 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_437_437;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_463_463;
#line 351 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__VersionNumber_8;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_10;
#line 351 "make.module_dep_file.m"
    MR_String make__module_dep_file__ContainsForeignExportStr_11;
#line 351 "make.module_dep_file.m"
    MR_String make__module_dep_file__HasMainStr_12;
#line 351 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_56_56;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_60_60;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_63_63;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_75_75;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_82_82;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_86_86;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_100_100;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_101_101;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_102_102;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_103_103;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_104_104;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_105_105;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_106_106;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_107_107;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_108_108;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_109_109;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_110_110;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_111_111;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_112_112;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_113_113;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_114_114;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_115_115;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_116_116;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_117_117;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_118_118;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_120_120;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 356 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_123_123;
#line 356 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_124_124;
#line 358 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_125_125;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_126_126;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_127_127;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_128_128;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_129_129;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_130_130;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_132_132;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_133_133;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_134_134;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_135_135;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_136_136;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_137_137;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_140_140;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_141_141;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_142_142;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_143_143;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_144_144;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_145_145;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_146_146;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 358 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_150_150;
#line 361 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_151_151;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_152_152;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_153_153;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_154_154;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_155_155;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_156_156;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_157_157;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_158_158;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_159_159;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_160_160;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_161_161;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_162_162;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_163_163;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_164_164;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_165_165;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_166_166;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_167_167;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_168_168;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_169_169;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_170_170;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_171_171;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_172_172;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_173_173;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_174_174;
#line 361 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_175_175;
#line 361 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_176_176;
#line 364 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_177_177;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_178_178;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_179_179;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_180_180;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_181_181;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_182_182;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_183_183;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_184_184;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_185_185;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_186_186;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_187_187;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_188_188;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_189_189;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_190_190;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_191_191;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_192_192;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_193_193;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_194_194;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200;
#line 364 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 364 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_202_202;
#line 367 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_203_203;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 367 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 367 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_228_228;
#line 370 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_229_229;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 370 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 370 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_254_254;
#line 373 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_255_255;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_261_261;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_263_263;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_264_264;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_265_265;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_266_266;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_267_267;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_268_268;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_269_269;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_270_270;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_271_271;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_272_272;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_273_273;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_274_274;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_275_275;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_276_276;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_277_277;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_278_278;
#line 373 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_279_279;
#line 373 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_280_280;
#line 376 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_281_281;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_282_282;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_283_283;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_284_284;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_285_285;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_286_286;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_287_287;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_288_288;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_289_289;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_290_290;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_291_291;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_292_292;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_293_293;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_294_294;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_295_295;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_296_296;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_297_297;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_298_298;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_299_299;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_300_300;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_301_301;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_302_302;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_303_303;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_304_304;
#line 376 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_305_305;
#line 376 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_306_306;
#line 384 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LangList_9;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_69_69;
#line 380 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_307_307;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_308_308;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_309_309;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_310_310;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_311_311;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_312_312;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_313_313;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_314_314;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_315_315;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_316_316;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_317_317;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_318_318;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_319_319;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_320_320;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_321_321;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_322_322;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_323_323;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_324_324;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_325_325;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_326_326;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_327_327;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_328_328;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_329_329;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_330_330;
#line 380 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_331_331;
#line 380 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_332_332;
#line 390 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_333_333;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_334_334;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_335_335;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_336_336;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_337_337;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_338_338;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_339_339;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_340_340;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_341_341;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_342_342;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_343_343;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_344_344;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_345_345;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_346_346;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_347_347;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_348_348;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_349_349;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_350_350;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_351_351;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_352_352;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_353_353;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_354_354;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_355_355;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_356_356;
#line 390 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_357_357;
#line 390 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_358_358;
#line 393 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_359_359;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_360_360;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_361_361;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_362_362;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_363_363;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_364_364;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_365_365;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_366_366;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_367_367;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_368_368;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_369_369;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_370_370;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_371_371;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_372_372;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_373_373;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_374_374;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_375_375;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_376_376;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_377_377;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_378_378;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_379_379;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_380_380;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_381_381;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_382_382;
#line 393 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_383_383;
#line 393 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_384_384;
#line 398 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_385_385;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_386_386;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_387_387;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_388_388;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_389_389;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_390_390;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_391_391;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_392_392;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_393_393;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_394_394;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_395_395;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_396_396;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_397_397;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_398_398;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_399_399;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_400_400;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_401_401;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_402_402;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_403_403;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_404_404;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_405_405;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_406_406;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_407_407;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_408_408;
#line 398 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_409_409;
#line 398 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_410_410;

#line 352 "make.module_dep_file.m"
    {
#line 352 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "module(");
    }
#line 353 "make.module_dep_file.m"
    {
#line 353 "make.module_dep_file.m"
      make__module_dep_file__version_number_2_p_0(make__module_dep_file__Version_6, &make__module_dep_file__VersionNumber_8);
    }
#line 354 "make.module_dep_file.m"
    {
#line 354 "make.module_dep_file.m"
      mercury__io__write_int_3_p_0(make__module_dep_file__VersionNumber_8);
    }
#line 355 "make.module_dep_file.m"
    {
#line 355 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 356 "make.module_dep_file.m"
    make__module_dep_file__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 356 "make.module_dep_file.m"
    {
#line 356 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_20_20);
    }
#line 357 "make.module_dep_file.m"
    {
#line 357 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 358 "make.module_dep_file.m"
    {
#line 358 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_24_24);
    }
#line 360 "make.module_dep_file.m"
    {
#line 360 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
#line 8772 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_437_437 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 361 "make.module_dep_file.m"
    make__module_dep_file__V_176_176 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 361 "make.module_dep_file.m"
    {
#line 361 "make.module_dep_file.m"
      make__module_dep_file__V_28_28 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_32_32);
    }
#line 361 "make.module_dep_file.m"
    {
#line 361 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_28_28, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[0]);
    }
#line 363 "make.module_dep_file.m"
    {
#line 363 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 364 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 364 "make.module_dep_file.m"
    {
#line 364 "make.module_dep_file.m"
      make__module_dep_file__V_35_35 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_39_39);
    }
#line 364 "make.module_dep_file.m"
    {
#line 364 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_35_35, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[1]);
    }
#line 366 "make.module_dep_file.m"
    {
#line 366 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 367 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 367 "make.module_dep_file.m"
    {
#line 367 "make.module_dep_file.m"
      make__module_dep_file__V_42_42 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_46_46);
    }
#line 367 "make.module_dep_file.m"
    {
#line 367 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_42_42, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[2]);
    }
#line 369 "make.module_dep_file.m"
    {
#line 369 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 370 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 370 "make.module_dep_file.m"
    {
#line 370 "make.module_dep_file.m"
      make__module_dep_file__V_49_49 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_53_53);
    }
#line 370 "make.module_dep_file.m"
    {
#line 370 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_49_49, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[3]);
    }
#line 372 "make.module_dep_file.m"
    {
#line 372 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 373 "make.module_dep_file.m"
    make__module_dep_file__V_280_280 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 373 "make.module_dep_file.m"
    {
#line 373 "make.module_dep_file.m"
      make__module_dep_file__V_56_56 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_60_60);
    }
#line 373 "make.module_dep_file.m"
    {
#line 373 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_437_437, make__module_dep_file__V_56_56, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[4]);
    }
#line 375 "make.module_dep_file.m"
    {
#line 375 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_281_281 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 376 "make.module_dep_file.m"
    make__module_dep_file__V_306_306 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_63_63, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[5]);
    }
#line 378 "make.module_dep_file.m"
    {
#line 378 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_307_307 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__V_332_332 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 381 "make.module_dep_file.m"
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 381 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 381 "make.module_dep_file.m"
      {
#line 381 "make.module_dep_file.m"
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_69_69, (MR_Integer) 0)));
#line 383 "make.module_dep_file.m"
        {
#line 383 "make.module_dep_file.m"
          make__module_dep_file__ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__LangList_9);
        }
#line 381 "make.module_dep_file.m"
      }
#line 381 "make.module_dep_file.m"
    else
#line 385 "make.module_dep_file.m"
      make__module_dep_file__ForeignLanguages_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 387 "make.module_dep_file.m"
    {
#line 387 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_10, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[6]);
    }
#line 389 "make.module_dep_file.m"
    {
#line 389 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 9266 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_463_463 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_333_333 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 390 "make.module_dep_file.m"
    make__module_dep_file__V_358_358 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 390 "make.module_dep_file.m"
    {
#line 390 "make.module_dep_file.m"
      make__module_dep_file__V_75_75 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_463_463, make__module_dep_file__V_79_79);
    }
#line 390 "make.module_dep_file.m"
    {
#line 390 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_463_463, make__module_dep_file__V_75_75, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[7]);
    }
#line 392 "make.module_dep_file.m"
    {
#line 392 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_359_359 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 393 "make.module_dep_file.m"
    make__module_dep_file__V_384_384 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 393 "make.module_dep_file.m"
    {
#line 393 "make.module_dep_file.m"
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_82_82, &make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 396 "make.module_dep_file.m"
    {
#line 396 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 397 "make.module_dep_file.m"
    {
#line 397 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_385_385 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 398 "make.module_dep_file.m"
    make__module_dep_file__V_410_410 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 398 "make.module_dep_file.m"
    {
#line 398 "make.module_dep_file.m"
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_86_86, &make__module_dep_file__HasMainStr_12);
    }
#line 399 "make.module_dep_file.m"
    {
#line 399 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_12);
    }
#line 402 "make.module_dep_file.m"
#line 402 "make.module_dep_file.m"
    switch (make__module_dep_file__Version_6) {
#line 402 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 402 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 401 "make.module_dep_file.m"
        {
#line 401 "make.module_dep_file.m"
        }
#line 402 "make.module_dep_file.m"
        break;
#line 402 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 403 "make.module_dep_file.m"
        {
#line 403 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_467_467;
#line 403 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_90_90;
#line 403 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_94_94;
#line 405 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_411_411;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_412_412;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_413_413;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_414_414;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_415_415;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_416_416;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_417_417;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_418_418;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_419_419;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_420_420;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_421_421;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_422_422;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_423_423;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_424_424;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_425_425;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_426_426;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_427_427;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_428_428;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_429_429;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_430_430;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_431_431;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_432_432;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_433_433;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_434_434;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_435_435;
#line 405 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_436_436;

#line 404 "make.module_dep_file.m"
          {
#line 404 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          }
#line 9551 "make.module_dep_file.c"
          make__module_dep_file__TypeCtorInfo_467_467 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_411_411 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 405 "make.module_dep_file.m"
          make__module_dep_file__V_436_436 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 405 "make.module_dep_file.m"
          {
#line 405 "make.module_dep_file.m"
            make__module_dep_file__V_90_90 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_467_467, make__module_dep_file__V_94_94);
          }
#line 405 "make.module_dep_file.m"
          {
#line 405 "make.module_dep_file.m"
            mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_467_467, make__module_dep_file__V_90_90, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[8]);
          }
#line 407 "make.module_dep_file.m"
          {
#line 407 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
#line 403 "make.module_dep_file.m"
        }
#line 402 "make.module_dep_file.m"
        break;
#line 402 "make.module_dep_file.m"
    }
#line 409 "make.module_dep_file.m"
    {
#line 409 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
#line 409 "make.module_dep_file.m"
      return;
    }
#line 351 "make.module_dep_file.m"
  }
#line 348 "make.module_dep_file.m"
}

#line 314 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 314 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 314 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_6)
#line 314 "make.module_dep_file.m"
{
#line 317 "make.module_dep_file.m"
  {
#line 317 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
#line 317 "make.module_dep_file.m"
    MR_String make__module_dep_file__ProgDepFile_9;
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ProgDepResult_10;
#line 317 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_19_19;
#line 318 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
#line 318 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
#line 318 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));

#line 320 "make.module_dep_file.m"
    {
#line 320 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = make__make_module_dep_file_extension_0_f_0();
    }
#line 319 "make.module_dep_file.m"
    {
#line 319 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_19_19, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
#line 321 "make.module_dep_file.m"
    {
#line 321 "make.module_dep_file.m"
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
#line 329 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 330 "make.module_dep_file.m"
      {
#line 330 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 330 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_16;
#line 330 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_23_23;
#line 330 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26;
#line 330 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_27_27;
#line 330 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_29_29;

#line 331 "make.module_dep_file.m"
        {
#line 331 "make.module_dep_file.m"
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_15, &make__module_dep_file__Msg_16);
        }
#line 333 "make.module_dep_file.m"
        {
#line 333 "make.module_dep_file.m"
          make__module_dep_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 0) = ((MR_Box) (make__module_dep_file__Msg_16));
#line 333 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[6])));
#line 333 "make.module_dep_file.m"
        }
#line 332 "make.module_dep_file.m"
        {
#line 332 "make.module_dep_file.m"
          make__module_dep_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 0) = ((MR_Box) ((MR_String) " for output: "));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__V_29_29));
#line 332 "make.module_dep_file.m"
        }
#line 332 "make.module_dep_file.m"
        {
#line 332 "make.module_dep_file.m"
          make__module_dep_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 1) = ((MR_Box) (make__module_dep_file__V_27_27));
#line 332 "make.module_dep_file.m"
        }
#line 332 "make.module_dep_file.m"
        {
#line 332 "make.module_dep_file.m"
          make__module_dep_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 1) = ((MR_Box) (make__module_dep_file__V_26_26));
#line 332 "make.module_dep_file.m"
        }
#line 332 "make.module_dep_file.m"
        {
#line 332 "make.module_dep_file.m"
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_23_23);
        }
#line 334 "make.module_dep_file.m"
        {
#line 334 "make.module_dep_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 334 "make.module_dep_file.m"
          return;
        }
#line 330 "make.module_dep_file.m"
      }
#line 329 "make.module_dep_file.m"
    else
#line 323 "make.module_dep_file.m"
      {
#line 323 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 323 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_12;
#line 323 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Version_13;
#line 323 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignIncludeFilesCord_67;
#line 341 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_68_68;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_74_74;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_75_75;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_76_76;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_77_77;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_78_78;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_79_79;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_80_80;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_81_81;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_82_82;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_83_83;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_84_84;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_85_85;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_86_86;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_87_87;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_88_88;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_89_89;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_90_90;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_91_91;
#line 341 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_92_92;
#line 341 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_93_93;
#line 327 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_14_14;

#line 324 "make.module_dep_file.m"
        {
#line 324 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__ForeignIncludeFilesCord_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
#line 341 "make.module_dep_file.m"
        make__module_dep_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));
#line 342 "make.module_dep_file.m"
        {
#line 342 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludeFilesCord_67);
        }
#line 344 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 343 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 0;
#line 344 "make.module_dep_file.m"
        else
#line 345 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 1;
#line 326 "make.module_dep_file.m"
        {
#line 326 "make.module_dep_file.m"
          make__module_dep_file__do_write_module_dep_file_2_4_p_0(make__module_dep_file__ModuleAndImports_6, make__module_dep_file__Version_13);
        }
#line 327 "make.module_dep_file.m"
        {
#line 327 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_14_14);
        }
#line 328 "make.module_dep_file.m"
        {
#line 328 "make.module_dep_file.m"
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
#line 328 "make.module_dep_file.m"
          return;
        }
#line 323 "make.module_dep_file.m"
      }
#line 317 "make.module_dep_file.m"
  }
#line 314 "make.module_dep_file.m"
}

#line 293 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
#line 293 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 293 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_2)
#line 293 "make.module_dep_file.m"
{
#line 296 "make.module_dep_file.m"
  {
#line 296 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 296 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 296 "make.module_dep_file.m"
    else
#line 298 "make.module_dep_file.m"
      {
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawItemBlock_5;
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawItemBlocks_6;
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcSection_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 0)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 1)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 2)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 3)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 4)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawSection_12;

#line 304 "make.module_dep_file.m"
#line 304 "make.module_dep_file.m"
        switch (make__module_dep_file__SrcSection_7) {
#line 304 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 304 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 304 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 308 "make.module_dep_file.m"
            make__module_dep_file__RawSection_12 = (MR_Integer) 1;
#line 304 "make.module_dep_file.m"
            break;
#line 304 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 303 "make.module_dep_file.m"
            make__module_dep_file__RawSection_12 = (MR_Integer) 0;
#line 304 "make.module_dep_file.m"
            break;
#line 304 "make.module_dep_file.m"
        }
#line 310 "make.module_dep_file.m"
        {
#line 310 "make.module_dep_file.m"
          make__module_dep_file__RawItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 0) = ((MR_Box) (make__module_dep_file__RawSection_12));
#line 310 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 1) = ((MR_Box) (make__module_dep_file__SectionContext_8));
#line 310 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 2) = ((MR_Box) (make__module_dep_file__Incls_9));
#line 310 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 3) = ((MR_Box) (make__module_dep_file__Avails_10));
#line 310 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 4) = ((MR_Box) (make__module_dep_file__Items_11));
#line 310 "make.module_dep_file.m"
        }
#line 312 "make.module_dep_file.m"
        {
#line 312 "make.module_dep_file.m"
          make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_4, &make__module_dep_file__RawItemBlocks_6);
        }
#line 298 "make.module_dep_file.m"
        {
#line 298 "make.module_dep_file.m"
          MR_Word base;
#line 298 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__2_2 = base;
#line 298 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__RawItemBlock_5));
#line 298 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__module_dep_file__RawItemBlocks_6));
#line 298 "make.module_dep_file.m"
        }
#line 298 "make.module_dep_file.m"
      }
#line 296 "make.module_dep_file.m"
  }
#line 293 "make.module_dep_file.m"
}

#line 162 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 162 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34,
#line 162 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 162 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36)
#line 162 "make.module_dep_file.m"
{
#line 167 "make.module_dep_file.m"
  {
#line 167 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 167 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_15;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeSourceFileTimestamp_16;
#line 167 "make.module_dep_file.m"
    MR_String make__module_dep_file__DepFileName_17;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_18;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeDepFileTimestamp_19;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleDepMap2_31;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_43_43;
#line 167 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_45_45;
#line 167 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_47_47;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_51_51;
#line 167 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 263 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_236_236;
#line 263 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 266 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_32;
#line 264 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_MaybeModuleAndImportsPrime_32;

#line 174 "make.module_dep_file.m"
    {
#line 174 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
#line 176 "make.module_dep_file.m"
    {
#line 176 "make.module_dep_file.m"
      make__module_dep_file__V_45_45 = mercury__dir__this_directory_0_f_0();
    }
#line 176 "make.module_dep_file.m"
    {
#line 176 "make.module_dep_file.m"
      make__module_dep_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 0) = ((MR_Box) (make__module_dep_file__V_45_45));
#line 176 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "make.module_dep_file.m"
    }
#line 176 "make.module_dep_file.m"
    {
#line 176 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_42_42, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_35, &make__module_dep_file__STATE_VARIABLE_Info_43_43);
    }
#line 180 "make.module_dep_file.m"
    {
#line 180 "make.module_dep_file.m"
      make__module_dep_file__V_47_47 = make__make_module_dep_file_extension_0_f_0();
    }
#line 179 "make.module_dep_file.m"
    {
#line 179 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_47_47, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
#line 181 "make.module_dep_file.m"
    {
#line 181 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 649, &make__module_dep_file__SearchDirs_18);
    }
#line 183 "make.module_dep_file.m"
    {
#line 183 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_43_43, &make__module_dep_file__STATE_VARIABLE_Info_51_51);
    }
#line 201 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
#line 255 "make.module_dep_file.m"
#line 255 "make.module_dep_file.m"
      switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 255 "make.module_dep_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 255 "make.module_dep_file.m"
        case (MR_Integer) 1:
#line 256 "make.module_dep_file.m"
          {
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap1_30;
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 257 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 257 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_200_200;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_201_201;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_202_202;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_203_203;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_204_204;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_205_205;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_206_206;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_207_207;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_208_208;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_209_209;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_210_210;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_211_211;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_212_212;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_213_213;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_214_214;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_215_215;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_216_216;
#line 260 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_217_217;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_218_218;
#line 260 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_199_199;

#line 259 "make.module_dep_file.m"
            {
#line 259 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_29, &make__module_dep_file__ModuleDepMap1_30);
            }
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 260 "make.module_dep_file.m"
            make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 260 "make.module_dep_file.m"
            {
#line 260 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_30));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (make__module_dep_file__V_200_200));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (make__module_dep_file__V_201_201));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (make__module_dep_file__V_202_202));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (make__module_dep_file__V_203_203));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (make__module_dep_file__V_204_204));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (make__module_dep_file__V_205_205));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (make__module_dep_file__V_206_206));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 8) = ((MR_Box) (make__module_dep_file__V_207_207));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 9) = ((MR_Box) (make__module_dep_file__V_208_208));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 10) = ((MR_Box) (make__module_dep_file__V_209_209));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 11) = ((MR_Box) (make__module_dep_file__V_210_210));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 12) = ((MR_Box) (make__module_dep_file__V_211_211));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 13) = ((MR_Box) (make__module_dep_file__V_212_212));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 14) = ((MR_Box) (make__module_dep_file__V_213_213));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 15) = ((MR_Box) (make__module_dep_file__V_214_214));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 16) = ((MR_Box) (make__module_dep_file__V_215_215));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 17) = ((MR_Box) (make__module_dep_file__V_216_216));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 18) = ((MR_Box) (make__module_dep_file__V_217_217));
#line 260 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 19) = ((MR_Box) (make__module_dep_file__V_218_218));
#line 260 "make.module_dep_file.m"
            }
#line 256 "make.module_dep_file.m"
          }
#line 255 "make.module_dep_file.m"
          break;
#line 255 "make.module_dep_file.m"
        case (MR_Integer) 0:
#line 253 "make.module_dep_file.m"
          {
#line 253 "make.module_dep_file.m"
            make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
          }
#line 255 "make.module_dep_file.m"
          break;
#line 255 "make.module_dep_file.m"
      }
#line 201 "make.module_dep_file.m"
    else
#line 201 "make.module_dep_file.m"
      {
#line 201 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

#line 201 "make.module_dep_file.m"
        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
#line 202 "make.module_dep_file.m"
          {
#line 202 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 202 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_59_59;
#line 202 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_91_91;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_92_92;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_93_93;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_94_94;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_95_95;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_96_96;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_97_97;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_98_98;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_99_99;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_100_100;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_101_101;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_102_102;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_103_103;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_104_104;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_105_105;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_106_106;
#line 212 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_107_107;
#line 212 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_108_108;
#line 212 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv0_STATE_VARIABLE_MaybeModuleAndImports_60_60;
#line 242 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImports0_23;
#line 215 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_61_61;
#line 215 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_269_269;
#line 216 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_109_109;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_110_110;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_113_113;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_114_114;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_115_115;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_116_116;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_117_117;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_118_118;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_119_119;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_120_120;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_121_121;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_122_122;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_123_123;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_124_124;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_125_125;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_126_126;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_127_127;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_128_128;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_129_129;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_130_130;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_131_131;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_132_132;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_133_133;
#line 216 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_134_134;

#line 204 "make.module_dep_file.m"
            {
#line 204 "make.module_dep_file.m"
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_57_57);
            }
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 8)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 9)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 10)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 11)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 12)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 13)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 14)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 15)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 16)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 17)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 18)));
#line 212 "make.module_dep_file.m"
            make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 19)));
#line 212 "make.module_dep_file.m"
            {
#line 212 "make.module_dep_file.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_59_59, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_STATE_VARIABLE_MaybeModuleAndImports_60_60);
            }
#line 212 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60 = ((MR_Word) make__module_dep_file__conv0_STATE_VARIABLE_MaybeModuleAndImports_60_60);
#line 215 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 215 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 215 "make.module_dep_file.m"
              {
#line 215 "make.module_dep_file.m"
                make__module_dep_file__ModuleAndImports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60, (MR_Integer) 0)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
#line 216 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));
#line 216 "make.module_dep_file.m"
                {
#line 216 "make.module_dep_file.m"
                  make__module_dep_file__V_269_269 = mercury__dir__this_directory_0_f_0();
                }
#line 216 "make.module_dep_file.m"
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_61_61, make__module_dep_file__V_269_269) == 0);
#line 215 "make.module_dep_file.m"
              }
#line 242 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 218 "make.module_dep_file.m"
              {
#line 218 "make.module_dep_file.m"
                MR_String make__module_dep_file__SourceFileName1_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__MaybeSourceFileTimestamp1_25;
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_62_62;
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 218 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_65_65;
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
#line 218 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
#line 218 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_160_160 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));

#line 219 "make.module_dep_file.m"
                {
#line 219 "make.module_dep_file.m"
                  make__module_dep_file__V_65_65 = mercury__dir__this_directory_0_f_0();
                }
#line 219 "make.module_dep_file.m"
                {
#line 219 "make.module_dep_file.m"
                  make__module_dep_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 0) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 219 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "make.module_dep_file.m"
                }
#line 219 "make.module_dep_file.m"
                {
#line 219 "make.module_dep_file.m"
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_62_62, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_57_57, &make__module_dep_file__STATE_VARIABLE_Info_63_63);
                }
#line 232 "make.module_dep_file.m"
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
#line 233 "make.module_dep_file.m"
                  {
#line 233 "make.module_dep_file.m"
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
#line 233 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_75_75;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_161_161;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_162_162;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_163_163;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_164_164;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_165_165;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_166_166;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_167_167;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_168_168;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_169_169;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_170_170;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_171_171;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_172_172;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_173_173;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_174_174;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_175_175;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_176_176;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_177_177;
#line 239 "make.module_dep_file.m"
                    MR_Integer make__module_dep_file__V_178_178;
#line 239 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_179_179;

#line 234 "make.module_dep_file.m"
                    {
#line 234 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
                    }
#line 235 "make.module_dep_file.m"
                    {
#line 235 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName1_24);
                    }
#line 236 "make.module_dep_file.m"
                    {
#line 236 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
                    }
#line 237 "make.module_dep_file.m"
                    {
#line 237 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__Message_27);
                    }
#line 238 "make.module_dep_file.m"
                    {
#line 238 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 0)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 1)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 2)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 3)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 4)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 5)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 6)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 7)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 8)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 9)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 10)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 11)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 12)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 13)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 14)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 15)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 16)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 17)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 18)));
#line 239 "make.module_dep_file.m"
                    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 19)));
#line 239 "make.module_dep_file.m"
                    {
#line 239 "make.module_dep_file.m"
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_75_75);
                    }
#line 233 "make.module_dep_file.m"
                    make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 233 "make.module_dep_file.m"
                  }
#line 232 "make.module_dep_file.m"
                else
#line 222 "make.module_dep_file.m"
                  {
#line 222 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__SourceFileTimestamp1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));

#line 224 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 225 "make.module_dep_file.m"
                    if (!(make__module_dep_file__succeeded))
#line 225 "make.module_dep_file.m"
                      {
#line 225 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_270_270;

#line 225 "make.module_dep_file.m"
                        {
#line 225 "make.module_dep_file.m"
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_270_270, make__module_dep_file__V_271_271, make__module_dep_file__SourceFileTimestamp1_26);
                        }
#line 225 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_270_270);
#line 225 "make.module_dep_file.m"
                      }
#line 229 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 228 "make.module_dep_file.m"
                      make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 229 "make.module_dep_file.m"
                    else
#line 230 "make.module_dep_file.m"
                      {
#line 230 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_63_63, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
                      }
#line 222 "make.module_dep_file.m"
                  }
#line 218 "make.module_dep_file.m"
              }
#line 242 "make.module_dep_file.m"
            else
#line 243 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 202 "make.module_dep_file.m"
          }
#line 201 "make.module_dep_file.m"
        else
#line 186 "make.module_dep_file.m"
          {
#line 186 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SourceFileTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp_16, (MR_Integer) 0)));

#line 189 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 190 "make.module_dep_file.m"
            if (!(make__module_dep_file__succeeded))
#line 190 "make.module_dep_file.m"
              {
#line 190 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_268_268;

#line 190 "make.module_dep_file.m"
                {
#line 190 "make.module_dep_file.m"
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_268_268, make__module_dep_file__V_271_271, make__module_dep_file__SourceFileTimestamp_20);
                }
#line 190 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_268_268);
#line 190 "make.module_dep_file.m"
              }
#line 198 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 196 "make.module_dep_file.m"
              {
#line 196 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 198 "make.module_dep_file.m"
            else
#line 199 "make.module_dep_file.m"
              {
#line 199 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 186 "make.module_dep_file.m"
          }
#line 201 "make.module_dep_file.m"
      }
#line 263 "make.module_dep_file.m"
    make__module_dep_file__ModuleDepMap2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 263 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 264 "make.module_dep_file.m"
    {
#line 264 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_31, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_MaybeModuleAndImportsPrime_32);
    }
#line 264 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 264 "make.module_dep_file.m"
      {
#line 264 "make.module_dep_file.m"
        make__module_dep_file__MaybeModuleAndImportsPrime_32 = ((MR_Word) make__module_dep_file__conv1_MaybeModuleAndImportsPrime_32);
#line 264 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 264 "make.module_dep_file.m"
      }
#line 266 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 265 "make.module_dep_file.m"
      {
#line 265 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34 = make__module_dep_file__MaybeModuleAndImportsPrime_32;
#line 265 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_36 = make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 265 "make.module_dep_file.m"
      }
#line 266 "make.module_dep_file.m"
    else
#line 267 "make.module_dep_file.m"
      {
#line 267 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepMap_33;
#line 269 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_239_239;
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
        MR_Integer make__module_dep_file__V_256_256;
#line 269 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_257_257;
#line 269 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_238_238;

#line 267 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "make.module_dep_file.m"
        {
#line 268 "make.module_dep_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_31, &make__module_dep_file__ModuleDepMap_33);
        }
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 269 "make.module_dep_file.m"
        make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 269 "make.module_dep_file.m"
        {
#line 269 "make.module_dep_file.m"
          MR_Word base;
#line 269 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 269 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_36 = base;
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_33));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 269 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 269 "make.module_dep_file.m"
        }
#line 267 "make.module_dep_file.m"
      }
#line 167 "make.module_dep_file.m"
  }
#line 162 "make.module_dep_file.m"
}

#line 146 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 146 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeModuleAndImports_12,
#line 146 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 146 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17)
#line 146 "make.module_dep_file.m"
{
#line 157 "make.module_dep_file.m"
  {
#line 157 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 157 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_15;
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
#line 153 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
#line 153 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
#line 153 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15;

#line 153 "make.module_dep_file.m"
    {
#line 153 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_20_20, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15);
    }
#line 153 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 153 "make.module_dep_file.m"
      {
#line 153 "make.module_dep_file.m"
        make__module_dep_file__MaybeModuleAndImportsPrime_15 = ((MR_Word) make__module_dep_file__conv0_MaybeModuleAndImportsPrime_15);
#line 153 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 153 "make.module_dep_file.m"
      }
#line 157 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 156 "make.module_dep_file.m"
      {
#line 156 "make.module_dep_file.m"
        *make__module_dep_file__MaybeModuleAndImports_12 = make__module_dep_file__MaybeModuleAndImportsPrime_15;
#line 156 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_17 = make__module_dep_file__STATE_VARIABLE_Info_0_16;
#line 156 "make.module_dep_file.m"
      }
#line 157 "make.module_dep_file.m"
    else
#line 158 "make.module_dep_file.m"
      {
#line 158 "make.module_dep_file.m"
        make__module_dep_file__do_get_module_dependencies_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__MaybeModuleAndImports_12, make__module_dep_file__STATE_VARIABLE_Info_0_16, make__module_dep_file__STATE_VARIABLE_Info_17);
#line 158 "make.module_dep_file.m"
        return;
      }
#line 157 "make.module_dep_file.m"
  }
#line 146 "make.module_dep_file.m"
}

#line 128 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 128 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 128 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 128 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7)
#line 128 "make.module_dep_file.m"
{
#line 132 "make.module_dep_file.m"
  {
#line 132 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 132 "make.module_dep_file.m"
#line 132 "make.module_dep_file.m"
    switch (make__module_dep_file__HeadVar__4_4) {
#line 132 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 132 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 135 "make.module_dep_file.m"
        {
#line 135 "make.module_dep_file.m"
          MR_Word make__module_dep_file__MaybeModuleAndImports_26;

#line 136 "make.module_dep_file.m"
          {
#line 136 "make.module_dep_file.m"
            make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeModuleAndImports_26, make__module_dep_file__HeadVar__6_6, make__module_dep_file__STATE_VARIABLE_Info_7);
          }
#line 141 "make.module_dep_file.m"
          if ((make__module_dep_file__MaybeModuleAndImports_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "make.module_dep_file.m"
            *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 141 "make.module_dep_file.m"
          else
#line 140 "make.module_dep_file.m"
            *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 0;
#line 135 "make.module_dep_file.m"
        }
#line 132 "make.module_dep_file.m"
        break;
#line 132 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 132 "make.module_dep_file.m"
        {
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_18_18;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_19_19;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_34_34;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_35_35;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_36_36;
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
          MR_Integer make__module_dep_file__V_51_51;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_52_52;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_54_54;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_55_55;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_56_56;
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
          MR_Integer make__module_dep_file__V_71_71;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_72_72;
#line 132 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_53_53;

#line 132 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 132 "make.module_dep_file.m"
          {
#line 132 "make.module_dep_file.m"
            make__module_dep_file__V_19_19 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 132 "make.module_dep_file.m"
          make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 132 "make.module_dep_file.m"
          {
#line 132 "make.module_dep_file.m"
            MR_Word base;
#line 132 "make.module_dep_file.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 132 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_54_54));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_55_55));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_56_56));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_57_57));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_58_58));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_59_59));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_60_60));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_61_61));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_62_62));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_63_63));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_64_64));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_66_66));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_67_67));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 132 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_72_72));
#line 132 "make.module_dep_file.m"
          }
#line 132 "make.module_dep_file.m"
        }
#line 132 "make.module_dep_file.m"
        break;
#line 132 "make.module_dep_file.m"
    }
#line 132 "make.module_dep_file.m"
  }
#line 128 "make.module_dep_file.m"
}

#line 78 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 78 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 78 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2)
#line 78 "make.module_dep_file.m"
{
#line 81 "make.module_dep_file.m"
  {
#line 81 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 81 "make.module_dep_file.m"
#line 81 "make.module_dep_file.m"
    switch (make__module_dep_file__HeadVar__1_1) {
#line 81 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 81 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 81 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 1;
#line 81 "make.module_dep_file.m"
        break;
#line 81 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 82 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 2;
#line 81 "make.module_dep_file.m"
        break;
#line 81 "make.module_dep_file.m"
    }
#line 81 "make.module_dep_file.m"
  }
#line 78 "make.module_dep_file.m"
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
#line 274 "make.module_dep_file.m"
  {
#line 274 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__AugCompUnit_8;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Specs_9;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_11;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleNameContext_12;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SrcItemBlocks_14;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RawItemBlocks_19;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RawCompUnit_20;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleAndImports_21;
#line 274 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_24_24;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 274 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38;
#line 276 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Errors_10;
#line 278 "make.module_dep_file.m"
    MR_Word make__module_dep_file___ModuleVersionNumbers_13;
#line 278 "make.module_dep_file.m"
    MR_Word make__module_dep_file___DirectIntItemBlocksCord_15;
#line 278 "make.module_dep_file.m"
    MR_Word make__module_dep_file___IndirectIntItemBlocksCord_16;
#line 278 "make.module_dep_file.m"
    MR_Word make__module_dep_file___OptItemBlocksCord_17;
#line 278 "make.module_dep_file.m"
    MR_Word make__module_dep_file___IntForOptItemBlocksCord_18;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52;
#line 287 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53;
#line 287 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_54_54;

#line 276 "make.module_dep_file.m"
    {
#line 276 "make.module_dep_file.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(make__module_dep_file__ModuleAndImports0_6, &make__module_dep_file__AugCompUnit_8, &make__module_dep_file__Specs_9, &make__module_dep_file___Errors_10);
    }
#line 278 "make.module_dep_file.m"
    make__module_dep_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 0)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file__ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 1)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file___ModuleVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 2)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file__SrcItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 3)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file___DirectIntItemBlocksCord_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 4)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file___IndirectIntItemBlocksCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 5)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file___OptItemBlocksCord_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 6)));
#line 278 "make.module_dep_file.m"
    make__module_dep_file___IntForOptItemBlocksCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 7)));
#line 282 "make.module_dep_file.m"
    {
#line 282 "make.module_dep_file.m"
      make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_14, &make__module_dep_file__RawItemBlocks_19);
    }
#line 283 "make.module_dep_file.m"
    {
#line 283 "make.module_dep_file.m"
      make__module_dep_file__RawCompUnit_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 283 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 0) = ((MR_Box) (make__module_dep_file__ModuleName_11));
#line 283 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 1) = ((MR_Box) (make__module_dep_file__ModuleNameContext_12));
#line 283 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 2) = ((MR_Box) (make__module_dep_file__RawItemBlocks_19));
#line 283 "make.module_dep_file.m"
    }
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 0)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 1)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 2)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 3)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 4)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 5)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 6)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 7)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 8)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 9)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 10)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 11)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 12)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 13)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 14)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 15)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 16)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 17)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 18)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 19)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 20)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 21)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 22)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 23)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 24)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 25)));
#line 287 "make.module_dep_file.m"
    make__module_dep_file__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 26)));
#line 290 "make.module_dep_file.m"
    {
#line 290 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 287 "make.module_dep_file.m"
    {
#line 287 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(make__module_dep_file__Globals_5, make__module_dep_file__V_24_24, make__module_dep_file__V_29_29, make__module_dep_file__V_38_38, make__module_dep_file__Specs_9, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnit_20, &make__module_dep_file__ModuleAndImports_21);
    }
#line 291 "make.module_dep_file.m"
    {
#line 291 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleAndImports_21);
#line 291 "make.module_dep_file.m"
      return;
    }
#line 274 "make.module_dep_file.m"
  }
#line 37 "make.module_dep_file.m"
}

#line 110 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 110 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 110 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 110 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 110 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 110 "make.module_dep_file.m"
{
#line 110 "make.module_dep_file.m"
  {
#line 110 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 110 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__5_5;
#line 110 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_STATE_VARIABLE_Info_7;

#line 110 "make.module_dep_file.m"
    {
#line 110 "make.module_dep_file.m"
      make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv1_STATE_VARIABLE_Info_7);
    }
#line 110 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__5_5));
#line 110 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv1_STATE_VARIABLE_Info_7));
#line 110 "make.module_dep_file.m"
  }
#line 110 "make.module_dep_file.m"
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
#line 87 "make.module_dep_file.m"
  {
#line 87 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 87 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RebuildModuleDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 88 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 88 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));

#line 93 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ModuleName_9)) == (MR_mktag((MR_Integer) 1))))
#line 100 "make.module_dep_file.m"
      {
#line 100 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_17;
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 96 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 96 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));
#line 96 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17;

#line 96 "make.module_dep_file.m"
        {
#line 96 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_26_26, ((MR_Box) (make__module_dep_file__ModuleName_9)), &make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17);
        }
#line 96 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 96 "make.module_dep_file.m"
          {
#line 96 "make.module_dep_file.m"
            make__module_dep_file__MaybeModuleAndImportsPrime_17 = ((MR_Word) make__module_dep_file__conv0_MaybeModuleAndImportsPrime_17);
#line 96 "make.module_dep_file.m"
            make__module_dep_file__succeeded = MR_TRUE;
#line 96 "make.module_dep_file.m"
          }
#line 100 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 99 "make.module_dep_file.m"
          {
#line 99 "make.module_dep_file.m"
            *make__module_dep_file__MaybeModuleAndImports_10 = make__module_dep_file__MaybeModuleAndImportsPrime_17;
#line 99 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 99 "make.module_dep_file.m"
          }
#line 100 "make.module_dep_file.m"
        else
#line 108 "make.module_dep_file.m"
          {
#line 108 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_122_122;
#line 108 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Ancestors_18;
#line 108 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Error_19;
#line 108 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_27_27;
#line 108 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_29_29;
#line 109 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_Error_19;
#line 109 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29;
#line 109 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30;

#line 108 "make.module_dep_file.m"
            {
#line 108 "make.module_dep_file.m"
              make__module_dep_file__Ancestors_18 = mdbcomp__sym_name__get_ancestors_1_f_0(make__module_dep_file__ModuleName_9);
            }
#line 110 "make.module_dep_file.m"
            {
#line 110 "make.module_dep_file.m"
              make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 110 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[0]));
#line 110 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
#line 110 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 110 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_8));
#line 110 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_13));
#line 110 "make.module_dep_file.m"
            }
#line 12022 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_122_122 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 109 "make.module_dep_file.m"
            {
#line 109 "make.module_dep_file.m"
              mercury__list__foldl3_8_p_2(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv5_Error_19, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_22)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30);
            }
#line 109 "make.module_dep_file.m"
            make__module_dep_file__Error_19 = ((MR_Word) make__module_dep_file__conv5_Error_19);
#line 109 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29);
#line 120 "make.module_dep_file.m"
#line 120 "make.module_dep_file.m"
            switch (make__module_dep_file__Error_19) {
#line 120 "make.module_dep_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 120 "make.module_dep_file.m"
              case (MR_Integer) 0:
#line 122 "make.module_dep_file.m"
                {
#line 122 "make.module_dep_file.m"
                  make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeModuleAndImports_10, make__module_dep_file__STATE_VARIABLE_Info_29_29, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 122 "make.module_dep_file.m"
                  return;
                }
#line 120 "make.module_dep_file.m"
                break;
#line 120 "make.module_dep_file.m"
              case (MR_Integer) 1:
#line 113 "make.module_dep_file.m"
                {
#line 113 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__ModuleDepMap0_20;
#line 113 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__ModuleDepMap_21;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_74_74;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_75_75;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_76_76;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_77_77;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_78_78;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_79_79;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_80_80;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_81_81;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_82_82;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_83_83;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_84_84;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_85_85;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_86_86;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_87_87;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_88_88;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_89_89;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_90_90;
#line 115 "make.module_dep_file.m"
                  MR_Integer make__module_dep_file__V_91_91;
#line 115 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_92_92;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_94_94;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_95_95;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_96_96;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_97_97;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_98_98;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_99_99;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_100_100;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_101_101;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_102_102;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_103_103;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_104_104;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_105_105;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_106_106;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_107_107;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_108_108;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_109_109;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_110_110;
#line 119 "make.module_dep_file.m"
                  MR_Integer make__module_dep_file__V_111_111;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_112_112;
#line 119 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_93_93;

#line 114 "make.module_dep_file.m"
                  *make__module_dep_file__MaybeModuleAndImports_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__ModuleDepMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 115 "make.module_dep_file.m"
                  make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 117 "make.module_dep_file.m"
                  {
#line 117 "make.module_dep_file.m"
                    mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_9)), ((MR_Box) (*make__module_dep_file__MaybeModuleAndImports_10)), make__module_dep_file__ModuleDepMap0_20, &make__module_dep_file__ModuleDepMap_21);
                  }
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 119 "make.module_dep_file.m"
                  make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 119 "make.module_dep_file.m"
                  {
#line 119 "make.module_dep_file.m"
                    MR_Word base;
#line 119 "make.module_dep_file.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 119 "make.module_dep_file.m"
                    *make__module_dep_file__STATE_VARIABLE_Info_23 = base;
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_21));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_95_95));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_102_102));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_103_103));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 119 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 119 "make.module_dep_file.m"
                  }
#line 113 "make.module_dep_file.m"
                }
#line 120 "make.module_dep_file.m"
                break;
#line 120 "make.module_dep_file.m"
            }
#line 108 "make.module_dep_file.m"
          }
#line 100 "make.module_dep_file.m"
      }
#line 93 "make.module_dep_file.m"
    else
#line 91 "make.module_dep_file.m"
      {
#line 91 "make.module_dep_file.m"
        make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeModuleAndImports_10, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 91 "make.module_dep_file.m"
        return;
      }
#line 87 "make.module_dep_file.m"
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
