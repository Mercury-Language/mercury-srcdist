/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "hlds.status.mih"
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



#line 731 "make.module_dep_file.m"
struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
#line 734 "make.module_dep_file.m"
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 734 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
#line 734 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
#line 735 "make.module_dep_file.m"
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
#line 731 "make.module_dep_file.m"
};


#line 205 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 208 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 211 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 214 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 217 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 220 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

#line 223 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 226 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 229 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 232 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 235 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

#line 238 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

#line 241 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

#line 244 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

#line 247 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

#line 250 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 253 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 255 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2);

#line 258 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 261 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 263 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 265 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3);

#line 914 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 914 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 907 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 907 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 298 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 301 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 303 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 305 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 316 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 319 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 321 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 323 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 334 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 337 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 339 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 341 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 352 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 355 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 357 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 359 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 936 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__936__1_6_p_0(
#line 936 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 936 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 936 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 936 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 924 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__924__1_6_p_0(
#line 924 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 924 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 924 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 924 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 890 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__888__1_7_p_0_1(
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 888 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__888__1_7_p_0(
#line 888 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 888 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 888 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_117,
#line 888 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_118,
#line 888 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_119);

#line 860 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__860__1_3_p_0(
#line 860 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_94,
#line 860 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_95,
#line 860 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_96);

#line 680 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__680__1_2_p_0(
#line 680 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 680 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7);

#line 376 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__376__1_3_p_0(
#line 376 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_454);

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

#line 943 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 936 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 936 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 936 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 932 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 932 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 932 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 932 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 932 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 924 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 924 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 924 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 920 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 920 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 920 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 920 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 920 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 907 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 907 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 893 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
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
make__module_dep_file__make_module_dependencies_6_p_0_7(
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

#line 882 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 882 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 882 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 882 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 882 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 882 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 877 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 877 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 877 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 877 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 877 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 877 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 877 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 879 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 860 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 860 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 860 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 860 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 860 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 857 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 857 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 855 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 855 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 855 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1);

#line 806 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 806 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 806 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 806 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 806 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45);

#line 789 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 789 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 789 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 789 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 738 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 738 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 738 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6);

#line 734 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 734 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 735 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 735 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 734 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 734 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 734 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 734 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 731 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4);

#line 725 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 725 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 725 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4);

#line 718 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 718 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1);

#line 711 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 711 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

#line 702 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 702 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 702 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4);

#line 693 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 693 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 693 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4);

#line 687 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 687 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 687 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4);

#line 682 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 682 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 682 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4);

#line 772 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 775 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 777 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 779 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 677 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 677 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 677 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4);

#line 665 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 665 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 665 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 665 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 660 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4);

#line 654 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 654 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 654 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4);

#line 638 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 638 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 583 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 583 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 583 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 583 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 583 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 522 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 522 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 522 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 522 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_72,
#line 522 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_73);

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 481 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 481 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29);

#line 472 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 472 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 462 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 462 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 448 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 448 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 448 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 432 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 432 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 432 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 422 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 422 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4);

#line 413 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 413 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4);

#line 408 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 408 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 408 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 408 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 408 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 393 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 393 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 393 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 393 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 393 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 387 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 387 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 387 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 387 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 387 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 376 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 376 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 376 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 376 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 376 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 373 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 373 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 373 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 373 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 373 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 370 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 370 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 370 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 370 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 370 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 367 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 367 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 364 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 364 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 364 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 364 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 364 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 361 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 361 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 361 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 361 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 361 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 347 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 347 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_5,
#line 347 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6);

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_6);

#line 292 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
#line 292 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 292 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_2);

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
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 161 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36);

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
  MR_Word make__module_dep_file__HeadVar__6_6,
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[7][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[17][3];

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

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[7][6] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[17][3] = {
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
    ((MR_Box) (&make__module_dep_file_scalar_common_3[5])),
    ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[0])),
    ((MR_Box) (make__module_dep_file__sym_names_term_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[1])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_3[6])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
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
#include "libs.process_util.mh"
#include "make.util.mh"
#include "mdbcomp.rtti_access.mh"



#line 1697 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1705 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1713 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1721 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1729 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 1737 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

#line 1745 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1753 "make.module_dep_file.c"
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

#line 1768 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1776 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 1784 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

#line 1790 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

#line 1796 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1802 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1808 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1814 "make.module_dep_file.c"
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

#line 1831 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 1834 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1836 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2)
#line 1838 "make.module_dep_file.c"
{
#line 1840 "make.module_dep_file.c"
  {
#line 1842 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;

#line 1845 "make.module_dep_file.c"
    {
#line 1847 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
#line 1850 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 1852 "make.module_dep_file.c"
  }
#line 1854 "make.module_dep_file.c"
}

#line 1857 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 1860 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 1862 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 1864 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3)
#line 1866 "make.module_dep_file.c"
{
#line 1868 "make.module_dep_file.c"
  {
#line 1870 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

#line 1873 "make.module_dep_file.c"
    {
#line 1875 "make.module_dep_file.c"
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
#line 1878 "make.module_dep_file.c"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
#line 1880 "make.module_dep_file.c"
  }
#line 1882 "make.module_dep_file.c"
}

#line 914 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 914 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 914 "make.module_dep_file.m"
{
#line 914 "make.module_dep_file.m"
  {
#line 914 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 914 "make.module_dep_file.m"
      return;
    }
#line 914 "make.module_dep_file.m"
  }
#line 914 "make.module_dep_file.m"
}

#line 907 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 907 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 907 "make.module_dep_file.m"
{
#line 912 "make.module_dep_file.m"
  {
#line 912 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 912 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 912 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_21;
#line 912 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 914 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28;
#line 916 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;

#line 913 "make.module_dep_file.m"
    {
#line 913 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 914 "make.module_dep_file.m"
    }
#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnits_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28);
    }
#line 916 "make.module_dep_file.m"
    {
#line 916 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_20_20);
    }
#line 917 "make.module_dep_file.m"
    {
#line 917 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_21);
    }
#line 918 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_21 == (MR_Integer) 0);
#line 918 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 918 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 918 "make.module_dep_file.m"
    else
#line 918 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 912 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 912 "make.module_dep_file.m"
  }
#line 907 "make.module_dep_file.m"
}

#line 2002 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 2005 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2007 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2009 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2011 "make.module_dep_file.c"
{
#line 2013 "make.module_dep_file.c"
  {
#line 2015 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2017 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2019 "make.module_dep_file.c"
    MR_String make__module_dep_file__conv0_FactDep_4;

#line 2022 "make.module_dep_file.c"
    {
#line 2024 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
#line 2027 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2029 "make.module_dep_file.c"
      {
#line 2031 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
#line 2033 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2035 "make.module_dep_file.c"
      }
#line 2037 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2039 "make.module_dep_file.c"
  }
#line 2041 "make.module_dep_file.c"
}

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 671 "make.module_dep_file.m"
{
#line 673 "make.module_dep_file.m"
  {
#line 673 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 673 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 673 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 673 "make.module_dep_file.m"
              {
#line 2092 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 675 "make.module_dep_file.m"
                {
#line 675 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_4[16], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 673 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 673 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 673 "make.module_dep_file.m"
  }
#line 671 "make.module_dep_file.m"
}

#line 2112 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 2115 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2117 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2119 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2121 "make.module_dep_file.c"
{
#line 2123 "make.module_dep_file.c"
  {
#line 2125 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2127 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2129 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_Lang_4;

#line 2132 "make.module_dep_file.c"
    {
#line 2134 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
#line 2137 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2139 "make.module_dep_file.c"
      {
#line 2141 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
#line 2143 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2145 "make.module_dep_file.c"
      }
#line 2147 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2149 "make.module_dep_file.c"
  }
#line 2151 "make.module_dep_file.c"
}

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 671 "make.module_dep_file.m"
{
#line 673 "make.module_dep_file.m"
  {
#line 673 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 673 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 673 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 673 "make.module_dep_file.m"
              {
#line 2202 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 675 "make.module_dep_file.m"
                {
#line 675 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_4[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 673 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 673 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 673 "make.module_dep_file.m"
  }
#line 671 "make.module_dep_file.m"
}

#line 2222 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 2225 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2227 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2229 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2231 "make.module_dep_file.c"
{
#line 2233 "make.module_dep_file.c"
  {
#line 2235 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2237 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2239 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

#line 2242 "make.module_dep_file.c"
    {
#line 2244 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
#line 2247 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2249 "make.module_dep_file.c"
      {
#line 2251 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
#line 2253 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2255 "make.module_dep_file.c"
      }
#line 2257 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2259 "make.module_dep_file.c"
  }
#line 2261 "make.module_dep_file.c"
}

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 671 "make.module_dep_file.m"
{
#line 673 "make.module_dep_file.m"
  {
#line 673 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 673 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 673 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 673 "make.module_dep_file.m"
              {
#line 2312 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 675 "make.module_dep_file.m"
                {
#line 675 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 673 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 673 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 673 "make.module_dep_file.m"
  }
#line 671 "make.module_dep_file.m"
}

#line 2332 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 2335 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2337 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2339 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2341 "make.module_dep_file.c"
{
#line 2343 "make.module_dep_file.c"
  {
#line 2345 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2347 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2349 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

#line 2352 "make.module_dep_file.c"
    {
#line 2354 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
#line 2357 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2359 "make.module_dep_file.c"
      {
#line 2361 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
#line 2363 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2365 "make.module_dep_file.c"
      }
#line 2367 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2369 "make.module_dep_file.c"
  }
#line 2371 "make.module_dep_file.c"
}

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 671 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 671 "make.module_dep_file.m"
{
#line 673 "make.module_dep_file.m"
  {
#line 673 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 673 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 673 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 673 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 673 "make.module_dep_file.m"
              {
#line 2422 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 675 "make.module_dep_file.m"
                {
#line 675 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[13], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 673 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 673 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 673 "make.module_dep_file.m"
  }
#line 671 "make.module_dep_file.m"
}

#line 936 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__936__1_6_p_0(
#line 936 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 936 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 936 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 936 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 936 "make.module_dep_file.m"
{
#line 936 "make.module_dep_file.m"
  {
#line 936 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 936 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 940 "make.module_dep_file.m"
    {
#line 940 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 939 "make.module_dep_file.m"
    {
#line 939 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 50, make__module_dep_file__HeadVar__2_23, make__module_dep_file__V_29_29, make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 939 "make.module_dep_file.m"
      return;
    }
#line 936 "make.module_dep_file.m"
  }
#line 936 "make.module_dep_file.m"
}

#line 924 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__924__1_6_p_0(
#line 924 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 924 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 924 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 924 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 924 "make.module_dep_file.m"
{
#line 924 "make.module_dep_file.m"
  {
#line 924 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 927 "make.module_dep_file.m"
    {
#line 927 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, make__module_dep_file__HeadVar__2_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 927 "make.module_dep_file.m"
      return;
    }
#line 924 "make.module_dep_file.m"
  }
#line 924 "make.module_dep_file.m"
}

#line 890 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__888__1_7_p_0_1(
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 890 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 890 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 890 "make.module_dep_file.m"
{
#line 890 "make.module_dep_file.m"
  {
#line 890 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 890 "make.module_dep_file.m"
    {
#line 890 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 890 "make.module_dep_file.m"
      return;
    }
#line 890 "make.module_dep_file.m"
  }
#line 890 "make.module_dep_file.m"
}

#line 888 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__888__1_7_p_0(
#line 888 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 888 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 888 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_117,
#line 888 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_118,
#line 888 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_119)
#line 888 "make.module_dep_file.m"
{
#line 888 "make.module_dep_file.m"
  {
#line 888 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 888 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 890 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_HeadVar__7_121;

#line 890 "make.module_dep_file.m"
    {
#line 890 "make.module_dep_file.m"
      make__module_dep_file__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 890 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 890 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__888__1_7_p_0_1));
#line 890 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 890 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_122_122, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 890 "make.module_dep_file.m"
    }
#line 890 "make.module_dep_file.m"
    {
#line 890 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_122_122, make__module_dep_file__ModuleAndImportList_34, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_HeadVar__7_121);
    }
#line 889 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__3_117 = (MR_Integer) 1;
#line 889 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__5_119 = make__module_dep_file__HeadVar__4_118;
#line 888 "make.module_dep_file.m"
  }
#line 888 "make.module_dep_file.m"
}

#line 860 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__860__1_3_p_0(
#line 860 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_94,
#line 860 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_95,
#line 860 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_96)
#line 860 "make.module_dep_file.m"
{
#line 860 "make.module_dep_file.m"
  {
#line 860 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 2)));
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
#line 862 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 0)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 1)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 3)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 4)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 5)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 6)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 7)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 8)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 9)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 10)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 11)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 12)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 13)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 14)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 15)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 16)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 17)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 18)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 19)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 20)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 21)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 22)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 23)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 24)));
#line 862 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 25)));
#line 862 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_94, (MR_Integer) 26)));
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 863 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_241_241;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 863 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_261_261;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 863 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;

#line 864 "make.module_dep_file.m"
    {
#line 864 "make.module_dep_file.m"
      make__module_dep_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_97_97, 0) = ((MR_Box) (make__module_dep_file__HeadVar__1_94));
#line 864 "make.module_dep_file.m"
    }
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 0)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 1)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 2)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 3)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 4)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 5)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 6)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 7)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 8)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 9)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 10)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 11)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 12)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 13)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 14)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 15)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 16)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 17)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 18)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 19)));
#line 863 "make.module_dep_file.m"
    {
#line 863 "make.module_dep_file.m"
      make__module_dep_file__V_99_99 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_37)), make__module_dep_file__V_98_98, ((MR_Box) (make__module_dep_file__V_97_97)));
    }
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 0)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 1)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 2)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 3)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 4)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 5)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 6)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 7)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 8)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 9)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 10)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 11)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 12)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 13)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 14)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 15)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 16)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 17)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 18)));
#line 863 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_95, (MR_Integer) 19)));
#line 863 "make.module_dep_file.m"
    {
#line 863 "make.module_dep_file.m"
      MR_Word base;
#line 863 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 863 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__3_96 = base;
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_258_258));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_259_259));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_260_260));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_261_261));
#line 863 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_262_262));
#line 863 "make.module_dep_file.m"
    }
#line 860 "make.module_dep_file.m"
  }
#line 860 "make.module_dep_file.m"
}

#line 680 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__680__1_2_p_0(
#line 680 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 680 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7)
#line 680 "make.module_dep_file.m"
{
#line 680 "make.module_dep_file.m"
  {
#line 680 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 680 "make.module_dep_file.m"
    {
#line 680 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
#line 680 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 680 "make.module_dep_file.m"
  }
#line 680 "make.module_dep_file.m"
}

#line 376 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__376__1_3_p_0(
#line 376 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_454)
#line 376 "make.module_dep_file.m"
{
#line 376 "make.module_dep_file.m"
  {
#line 376 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_454)));
#line 376 "make.module_dep_file.m"
      return;
    }
#line 376 "make.module_dep_file.m"
  }
#line 376 "make.module_dep_file.m"
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
#line 2984 "make.module_dep_file.c"
  {
#line 2986 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

#line 2989 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2991 "make.module_dep_file.c"
  }
#line 72 "make.module_dep_file.m"
}

#line 943 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 943 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 943 "make.module_dep_file.m"
{
#line 946 "make.module_dep_file.m"
  {
#line 946 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 946 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "make.module_dep_file.m"
      {
#line 946 "make.module_dep_file.m"
      }
#line 946 "make.module_dep_file.m"
    else
#line 947 "make.module_dep_file.m"
      {
#line 947 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 948 "make.module_dep_file.m"
        {
#line 948 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 949 "make.module_dep_file.m"
        {
#line 949 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 950 "make.module_dep_file.m"
        {
#line 950 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 951 "make.module_dep_file.m"
        {
#line 951 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 952 "make.module_dep_file.m"
        {
#line 952 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 952 "make.module_dep_file.m"
          return;
        }
#line 947 "make.module_dep_file.m"
      }
#line 946 "make.module_dep_file.m"
  }
#line 943 "make.module_dep_file.m"
}

#line 936 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 936 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 936 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 936 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 936 "make.module_dep_file.m"
{
#line 936 "make.module_dep_file.m"
  {
#line 936 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 936 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 936 "make.module_dep_file.m"
    {
#line 936 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__936__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 936 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 936 "make.module_dep_file.m"
  }
#line 936 "make.module_dep_file.m"
}

#line 932 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 932 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 932 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 932 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 932 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 932 "make.module_dep_file.m"
{
#line 935 "make.module_dep_file.m"
  {
#line 935 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 935 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 936 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 936 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 936 "make.module_dep_file.m"
    {
#line 936 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 936 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 936 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 936 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 936 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 936 "make.module_dep_file.m"
    }
#line 936 "make.module_dep_file.m"
    {
#line 936 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 936 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 935 "make.module_dep_file.m"
  }
#line 932 "make.module_dep_file.m"
}

#line 924 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 924 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 924 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 924 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 924 "make.module_dep_file.m"
{
#line 924 "make.module_dep_file.m"
  {
#line 924 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 924 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 924 "make.module_dep_file.m"
    {
#line 924 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__924__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 924 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 924 "make.module_dep_file.m"
  }
#line 924 "make.module_dep_file.m"
}

#line 920 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 920 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 920 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 920 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 920 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 920 "make.module_dep_file.m"
{
#line 923 "make.module_dep_file.m"
  {
#line 923 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 923 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 924 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 924 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 924 "make.module_dep_file.m"
    {
#line 924 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 924 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 924 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 924 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 924 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 924 "make.module_dep_file.m"
    }
#line 924 "make.module_dep_file.m"
    {
#line 924 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 924 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 923 "make.module_dep_file.m"
  }
#line 920 "make.module_dep_file.m"
}

#line 907 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 907 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 907 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 907 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 907 "make.module_dep_file.m"
{
#line 912 "make.module_dep_file.m"
  {
#line 912 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 912 "make.module_dep_file.m"
    {
#line 912 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__RawCompUnits_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 912 "make.module_dep_file.m"
      return;
    }
#line 912 "make.module_dep_file.m"
  }
#line 907 "make.module_dep_file.m"
}

#line 893 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
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
    MR_Word make__module_dep_file__conv12_STATE_VARIABLE_Info_13;

#line 893 "make.module_dep_file.m"
    {
#line 893 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv12_STATE_VARIABLE_Info_13);
    }
#line 893 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv12_STATE_VARIABLE_Info_13));
#line 893 "make.module_dep_file.m"
  }
#line 893 "make.module_dep_file.m"
}

#line 888 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
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
    MR_Word make__module_dep_file__conv11_HeadVar__3_117;
#line 888 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_HeadVar__5_119;

#line 888 "make.module_dep_file.m"
    {
#line 888 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__888__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv11_HeadVar__3_117, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv10_HeadVar__5_119);
    }
#line 888 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv11_HeadVar__3_117));
#line 888 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv10_HeadVar__5_119));
#line 888 "make.module_dep_file.m"
  }
#line 888 "make.module_dep_file.m"
}

#line 882 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 882 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 882 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 882 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 882 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 882 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 882 "make.module_dep_file.m"
{
#line 882 "make.module_dep_file.m"
  {
#line 882 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 882 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv8_STATE_VARIABLE_Info_13;

#line 882 "make.module_dep_file.m"
    {
#line 882 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv8_STATE_VARIABLE_Info_13);
    }
#line 882 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv8_STATE_VARIABLE_Info_13));
#line 882 "make.module_dep_file.m"
  }
#line 882 "make.module_dep_file.m"
}

#line 877 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 877 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 877 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 877 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 877 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 877 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 877 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 877 "make.module_dep_file.m"
{
#line 877 "make.module_dep_file.m"
  {
#line 877 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 877 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_HeadVar__5_5;
#line 877 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__7_7;

#line 877 "make.module_dep_file.m"
    {
#line 877 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv7_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv6_HeadVar__7_7);
    }
#line 877 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv7_HeadVar__5_5));
#line 877 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__7_7));
#line 877 "make.module_dep_file.m"
  }
#line 877 "make.module_dep_file.m"
}

#line 879 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 879 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 879 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 879 "make.module_dep_file.m"
{
#line 879 "make.module_dep_file.m"
  {
#line 879 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 879 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_Succeeded_16;
#line 879 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_STATE_VARIABLE_Info_23;

#line 879 "make.module_dep_file.m"
    {
#line 879 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv4_STATE_VARIABLE_Info_23);
    }
#line 879 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_Succeeded_16));
#line 879 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv4_STATE_VARIABLE_Info_23));
#line 879 "make.module_dep_file.m"
  }
#line 879 "make.module_dep_file.m"
}

#line 860 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 860 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 860 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 860 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 860 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 860 "make.module_dep_file.m"
{
#line 860 "make.module_dep_file.m"
  {
#line 860 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 860 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__3_96;

#line 860 "make.module_dep_file.m"
    {
#line 860 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__860__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__3_96);
    }
#line 860 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__3_96));
#line 860 "make.module_dep_file.m"
  }
#line 860 "make.module_dep_file.m"
}

#line 857 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 857 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 857 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 857 "make.module_dep_file.m"
{
#line 857 "make.module_dep_file.m"
  {
#line 857 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 857 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__8_8;

#line 857 "make.module_dep_file.m"
    {
#line 857 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv1_HeadVar__8_8);
    }
#line 857 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__8_8));
#line 857 "make.module_dep_file.m"
  }
#line 857 "make.module_dep_file.m"
}

#line 855 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 855 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 855 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1)
#line 855 "make.module_dep_file.m"
{
#line 855 "make.module_dep_file.m"
  {
#line 855 "make.module_dep_file.m"
    MR_Box make__module_dep_file__wrapper_arg_2;
#line 855 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 855 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__2_2;

#line 855 "make.module_dep_file.m"
    {
#line 855 "make.module_dep_file.m"
      make__module_dep_file__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
#line 855 "make.module_dep_file.m"
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_2));
#line 855 "make.module_dep_file.m"
    return make__module_dep_file__wrapper_arg_2;
#line 855 "make.module_dep_file.m"
  }
#line 855 "make.module_dep_file.m"
}

#line 806 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 806 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 806 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 806 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 806 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45)
#line 806 "make.module_dep_file.m"
{
#line 809 "make.module_dep_file.m"
  {
#line 809 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 809 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 809 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_48_48;

#line 810 "make.module_dep_file.m"
    {
#line 810 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_44, &make__module_dep_file__STATE_VARIABLE_Info_48_48);
    }
#line 903 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_45 = make__module_dep_file__STATE_VARIABLE_Info_48_48;
#line 903 "make.module_dep_file.m"
    else
#line 812 "make.module_dep_file.m"
      {
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_263_263;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 812 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_14;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ParseTreeSrc_16;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_17;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_18;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FatalErrors_19;
#line 812 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 815 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_15_15;

#line 813 "make.module_dep_file.m"
        {
#line 813 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 815 "make.module_dep_file.m"
        {
#line 815 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_src_13_p_0(make__module_dep_file__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, make__module_dep_file__ModuleName_8, &make__module_dep_file__SourceFileName_14, (MR_Word) &make__module_dep_file_scalar_common_7[2], &make__module_dep_file__V_15_15, &make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__Specs0_17, &make__module_dep_file__Errors_18);
        }
#line 819 "make.module_dep_file.m"
        {
#line 819 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3624 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 819 "make.module_dep_file.m"
        {
#line 819 "make.module_dep_file.m"
          mercury__set__intersect_3_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18, make__module_dep_file__V_57_57, &make__module_dep_file__FatalErrors_19);
        }
#line 820 "make.module_dep_file.m"
        {
#line 820 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__set__is_non_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__FatalErrors_19);
        }
#line 845 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 821 "make.module_dep_file.m"
          {
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_24;
#line 821 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_25;
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_27;
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_28;
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_68_68;
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_73_73;
#line 821 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_20_20;
#line 822 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_21;
#line 822 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_22;
#line 824 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_23_23;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_156_156;
#line 828 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_157_157;
#line 828 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 840 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_26_26;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_169_169;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_171_171;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_173_173;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_175_175;
#line 841 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_176_176;
#line 841 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_193_193;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_195_195;
#line 844 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_196_196;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_197_197;
#line 844 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;

#line 821 "make.module_dep_file.m"
            {
#line 821 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_20_20);
            }
#line 822 "make.module_dep_file.m"
            {
#line 822 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_17, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_21, (MR_Integer) 0, &make__module_dep_file___NumErrors_22);
            }
#line 824 "make.module_dep_file.m"
            {
#line 824 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_23_23);
            }
#line 825 "make.module_dep_file.m"
            {
#line 825 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error: error reading file \140");
            }
#line 826 "make.module_dep_file.m"
            {
#line 826 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_14);
            }
#line 827 "make.module_dep_file.m"
            {
#line 827 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 11)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 12)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 13)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 14)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 15)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 16)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 17)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 18)));
#line 828 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 19)));
#line 828 "make.module_dep_file.m"
            {
#line 828 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_68_68);
            }
#line 834 "make.module_dep_file.m"
            {
#line 834 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 52, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_7[3]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_24);
            }
#line 836 "make.module_dep_file.m"
            {
#line 836 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_24, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_48_48, &make__module_dep_file__STATE_VARIABLE_Info_73_73);
            }
#line 838 "make.module_dep_file.m"
            {
#line 838 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_25);
            }
#line 840 "make.module_dep_file.m"
            {
#line 840 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_25, &make__module_dep_file__V_26_26);
            }
#line 841 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 841 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 843 "make.module_dep_file.m"
            {
#line 843 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_27, &make__module_dep_file__ModuleDepMap_28);
            }
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 844 "make.module_dep_file.m"
            make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 844 "make.module_dep_file.m"
            {
#line 844 "make.module_dep_file.m"
              MR_Word base;
#line 844 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 844 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_45 = base;
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_28));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_195_195));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 844 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_197_197));
#line 844 "make.module_dep_file.m"
            }
#line 821 "make.module_dep_file.m"
          }
#line 845 "make.module_dep_file.m"
        else
#line 846 "make.module_dep_file.m"
          {
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_266_266;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_267_267;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_272_272;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_275_275;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__RawCompUnits_30;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_31;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_33;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImportList_34;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_38;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_40;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_43;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_89_89;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_93_93;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_113_113;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_125_125;
#line 846 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_29_29;
#line 850 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_130;
#line 850 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_131;
#line 852 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_32_32;
#line 860 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93;
#line 888 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_42_42;
#line 888 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113;

#line 846 "make.module_dep_file.m"
            {
#line 846 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_29_29);
            }
#line 847 "make.module_dep_file.m"
            {
#line 847 "make.module_dep_file.m"
              parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__RawCompUnits_30, make__module_dep_file__Specs0_17, &make__module_dep_file__Specs_31);
            }
#line 849 "make.module_dep_file.m"
            {
#line 849 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 850 "make.module_dep_file.m"
            {
#line 850 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_31, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_130, (MR_Integer) 0, &make__module_dep_file___NumErrors_131);
            }
#line 852 "make.module_dep_file.m"
            {
#line 852 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_32_32);
            }
#line 4093 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_266_266 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 4095 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_267_267 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 855 "make.module_dep_file.m"
            {
#line 855 "make.module_dep_file.m"
              make__module_dep_file__SubModuleNames_33 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_267_267, (MR_Word) &make__module_dep_file_scalar_common_4[11], make__module_dep_file__RawCompUnits_30);
            }
#line 858 "make.module_dep_file.m"
            {
#line 858 "make.module_dep_file.m"
              make__module_dep_file__V_90_90 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_267_267, make__module_dep_file__SubModuleNames_33);
            }
#line 857 "make.module_dep_file.m"
            {
#line 857 "make.module_dep_file.m"
              make__module_dep_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[1]));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 5) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 6) = ((MR_Box) (make__module_dep_file__V_90_90));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 8) = ((MR_Box) (make__module_dep_file__Errors_18));
#line 857 "make.module_dep_file.m"
            }
#line 4131 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_272_272 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 856 "make.module_dep_file.m"
            {
#line 856 "make.module_dep_file.m"
              mercury__list__map_3_p_0(make__module_dep_file__TypeCtorInfo_266_266, make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__V_89_89, make__module_dep_file__RawCompUnits_30, &make__module_dep_file__ModuleAndImportList_34);
            }
#line 4138 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_275_275 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 860 "make.module_dep_file.m"
            {
#line 860 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_272_272, make__module_dep_file__TypeCtorInfo_275_275, (MR_Word) &make__module_dep_file_scalar_common_4[12], make__module_dep_file__ModuleAndImportList_34, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_48_48)), &make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
            }
#line 860 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_93_93 = ((MR_Word) make__module_dep_file__conv3_STATE_VARIABLE_Info_93_93);
#line 870 "make.module_dep_file.m"
            {
#line 870 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, &make__module_dep_file__VeryVerbose_38);
            }
#line 871 "make.module_dep_file.m"
            {
#line 871 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__set__is_empty_1_p_0(make__module_dep_file__TypeCtorInfo_263_263, make__module_dep_file__Errors_18);
            }
#line 884 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 873 "make.module_dep_file.m"
              {
#line 873 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_39;
#line 873 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 873 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_104_104;
#line 873 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_110_110;
#line 876 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105;

#line 872 "make.module_dep_file.m"
                {
#line 872 "make.module_dep_file.m"
                  make__module_dep_file__Target_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 872 "make.module_dep_file.m"
                }
#line 874 "make.module_dep_file.m"
                {
#line 874 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_39);
                }
#line 879 "make.module_dep_file.m"
                {
#line 879 "make.module_dep_file.m"
                  make__module_dep_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 879 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 5) = ((MR_Box) (make__module_dep_file__RawCompUnits_30));
#line 879 "make.module_dep_file.m"
                }
#line 877 "make.module_dep_file.m"
                {
#line 877 "make.module_dep_file.m"
                  make__module_dep_file__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[1]));
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[7])));
#line 877 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 6) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 877 "make.module_dep_file.m"
                }
#line 882 "make.module_dep_file.m"
                {
#line 882 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 882 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 882 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 882 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 882 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 882 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_104_104, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 882 "make.module_dep_file.m"
                }
#line 876 "make.module_dep_file.m"
                {
#line 876 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_103_103, make__module_dep_file__V_104_104, &make__module_dep_file__Succeeded_40, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_93_93)), &make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
                }
#line 876 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = ((MR_Word) make__module_dep_file__conv9_STATE_VARIABLE_Info_105_105);
#line 873 "make.module_dep_file.m"
              }
#line 884 "make.module_dep_file.m"
            else
#line 885 "make.module_dep_file.m"
              {
#line 885 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_40 = (MR_Integer) 0;
#line 885 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_105_105 = make__module_dep_file__STATE_VARIABLE_Info_93_93;
#line 885 "make.module_dep_file.m"
              }
#line 888 "make.module_dep_file.m"
            {
#line 888 "make.module_dep_file.m"
              make__module_dep_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 888 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 888 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 888 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 888 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 888 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 4) = ((MR_Box) (make__module_dep_file__ModuleAndImportList_34));
#line 888 "make.module_dep_file.m"
            }
#line 893 "make.module_dep_file.m"
            {
#line 893 "make.module_dep_file.m"
              make__module_dep_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_8));
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 893 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_112_112, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 893 "make.module_dep_file.m"
            }
#line 888 "make.module_dep_file.m"
            {
#line 888 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_275_275, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_111_111, make__module_dep_file__V_112_112, &make__module_dep_file__V_42_42, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
            }
#line 888 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_113_113 = ((MR_Word) make__module_dep_file__conv13_STATE_VARIABLE_Info_113_113);
#line 896 "make.module_dep_file.m"
            {
#line 896 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 896 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 896 "make.module_dep_file.m"
            }
#line 898 "make.module_dep_file.m"
            {
#line 898 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_43, (MR_Word) &make__module_dep_file_scalar_common_7[4], make__module_dep_file__Succeeded_40, make__module_dep_file__STATE_VARIABLE_Info_113_113, &make__module_dep_file__STATE_VARIABLE_Info_125_125);
            }
#line 901 "make.module_dep_file.m"
            {
#line 901 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_125_125, make__module_dep_file__STATE_VARIABLE_Info_45);
#line 901 "make.module_dep_file.m"
              return;
            }
#line 846 "make.module_dep_file.m"
          }
#line 812 "make.module_dep_file.m"
      }
#line 809 "make.module_dep_file.m"
  }
#line 806 "make.module_dep_file.m"
}

#line 789 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 789 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 789 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 789 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 789 "make.module_dep_file.m"
{
#line 792 "make.module_dep_file.m"
  {
#line 792 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 792 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepsFile_10;
#line 792 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;

#line 794 "make.module_dep_file.m"
    {
#line 794 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = make__make_module_dep_file_extension_0_f_0();
    }
#line 793 "make.module_dep_file.m"
    {
#line 793 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_6, make__module_dep_file__ModuleName_7, make__module_dep_file__V_13_13, (MR_Integer) 1, &make__module_dep_file__ModuleDepsFile_10);
    }
#line 796 "make.module_dep_file.m"
    {
#line 796 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading file \140");
    }
#line 797 "make.module_dep_file.m"
    {
#line 797 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ModuleDepsFile_10);
    }
#line 798 "make.module_dep_file.m"
    {
#line 798 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\', rebuilding: ");
    }
#line 799 "make.module_dep_file.m"
    {
#line 799 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__Msg_8);
    }
#line 800 "make.module_dep_file.m"
    {
#line 800 "make.module_dep_file.m"
      mercury__io__nl_2_p_0();
#line 800 "make.module_dep_file.m"
      return;
    }
#line 792 "make.module_dep_file.m"
  }
#line 789 "make.module_dep_file.m"
}

#line 738 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 738 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 738 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6)
#line 738 "make.module_dep_file.m"
{
#line 741 "make.module_dep_file.m"
  {
#line 741 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 741 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ResFileType_9;

#line 743 "make.module_dep_file.m"
    {
#line 743 "make.module_dep_file.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
#line 764 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
#line 765 "make.module_dep_file.m"
      {
#line 765 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
#line 765 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_15_15;
#line 765 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_16_16;
#line 765 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_18_18;

#line 766 "make.module_dep_file.m"
        {
#line 766 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
#line 766 "make.module_dep_file.m"
        {
#line 766 "make.module_dep_file.m"
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
#line 766 "make.module_dep_file.m"
        {
#line 766 "make.module_dep_file.m"
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
#line 766 "make.module_dep_file.m"
        {
#line 766 "make.module_dep_file.m"
          MR_Word base;
#line 766 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = base;
#line 766 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
#line 766 "make.module_dep_file.m"
        }
#line 765 "make.module_dep_file.m"
      }
#line 764 "make.module_dep_file.m"
    else
#line 745 "make.module_dep_file.m"
      {
#line 745 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

#line 751 "make.module_dep_file.m"
#line 751 "make.module_dep_file.m"
        switch (make__module_dep_file__FileType_10) {
#line 751 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 6:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 5:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 7:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 3:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 8:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 9:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 4:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 761 "make.module_dep_file.m"
            {
#line 761 "make.module_dep_file.m"
              MR_String make__module_dep_file__V_19_19;

#line 762 "make.module_dep_file.m"
              {
#line 762 "make.module_dep_file.m"
                make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
              }
#line 762 "make.module_dep_file.m"
              {
#line 762 "make.module_dep_file.m"
                MR_Word base;
#line 762 "make.module_dep_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 762 "make.module_dep_file.m"
                *make__module_dep_file__FileExists_6 = base;
#line 762 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 762 "make.module_dep_file.m"
              }
#line 761 "make.module_dep_file.m"
            }
#line 751 "make.module_dep_file.m"
            break;
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 751 "make.module_dep_file.m"
          case (MR_Integer) 10:
#line 750 "make.module_dep_file.m"
            *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "make.module_dep_file.m"
            break;
#line 751 "make.module_dep_file.m"
        }
#line 745 "make.module_dep_file.m"
      }
#line 741 "make.module_dep_file.m"
  }
#line 738 "make.module_dep_file.m"
}

#line 734 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 734 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 734 "make.module_dep_file.m"
{
#line 734 "make.module_dep_file.m"
  {
#line 734 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 734 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
#line 734 "make.module_dep_file.m"
  }
#line 734 "make.module_dep_file.m"
}

#line 735 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 735 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 735 "make.module_dep_file.m"
{
#line 735 "make.module_dep_file.m"
  {
#line 735 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 735 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
#line 735 "make.module_dep_file.m"
    {
#line 735 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
#line 735 "make.module_dep_file.m"
      return;
    }
#line 735 "make.module_dep_file.m"
  }
#line 735 "make.module_dep_file.m"
}

#line 734 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 734 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 734 "make.module_dep_file.m"
{
#line 734 "make.module_dep_file.m"
  {
#line 734 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 734 "make.module_dep_file.m"
    {
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_8_8;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_9_9;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_10_10;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_11_11;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_12_12;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_13_13;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_14_14;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_15_15;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_16_16;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_17_17;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_18_18;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_19_19;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_20_20;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_21_21;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_22_22;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_23_23;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_24_24;
#line 736 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_25_25;
#line 736 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_26_26;
#line 736 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv1_V_29_29;

#line 736 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
#line 736 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
#line 736 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4670 "make.module_dep_file.c"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 736 "make.module_dep_file.m"
      {
#line 736 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
#line 736 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 736 "make.module_dep_file.m"
        {
#line 736 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
#line 736 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 736 "make.module_dep_file.m"
        }
#line 734 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 734 "make.module_dep_file.m"
        {
#line 4691 "make.module_dep_file.c"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 736 "make.module_dep_file.m"
          {
#line 736 "make.module_dep_file.m"
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
#line 736 "make.module_dep_file.m"
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 736 "make.module_dep_file.m"
            {
#line 736 "make.module_dep_file.m"
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
#line 736 "make.module_dep_file.m"
              return;
            }
#line 734 "make.module_dep_file.m"
        }
#line 734 "make.module_dep_file.m"
    }
#line 734 "make.module_dep_file.m"
  }
#line 734 "make.module_dep_file.m"
}

#line 734 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 734 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 734 "make.module_dep_file.m"
{
#line 734 "make.module_dep_file.m"
  {
#line 734 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 734 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
#line 734 "make.module_dep_file.m"
      {
#line 4732 "make.module_dep_file.c"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 735 "make.module_dep_file.m"
        {
#line 735 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
#line 734 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
#line 734 "make.module_dep_file.m"
      }
#line 734 "make.module_dep_file.m"
    else
#line 734 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 734 "make.module_dep_file.m"
  }
#line 734 "make.module_dep_file.m"
}

#line 731 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 731 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4)
#line 731 "make.module_dep_file.m"
{
#line 731 "make.module_dep_file.m"
  {
#line 731 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

#line 731 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
#line 731 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
#line 734 "make.module_dep_file.m"
    {
#line 734 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
#line 734 "make.module_dep_file.m"
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 731 "make.module_dep_file.m"
  }
#line 731 "make.module_dep_file.m"
}

#line 725 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 725 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 725 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4)
#line 725 "make.module_dep_file.m"
{
#line 727 "make.module_dep_file.m"
  {
#line 727 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 727 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 727 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 727 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 727 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4824 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 728 "make.module_dep_file.m"
            {
#line 728 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 727 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 453 "make.module_dep_file.m"
              {
#line 453 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
#line 456 "make.module_dep_file.m"
                  {
#line 456 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
#line 456 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 456 "make.module_dep_file.m"
                  }
#line 453 "make.module_dep_file.m"
                else
#line 453 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
#line 453 "make.module_dep_file.m"
                  {
#line 453 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
#line 453 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 453 "make.module_dep_file.m"
                  }
#line 453 "make.module_dep_file.m"
                else
#line 453 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 453 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 727 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 727 "make.module_dep_file.m"
  }
#line 725 "make.module_dep_file.m"
}

#line 718 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 718 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1)
#line 718 "make.module_dep_file.m"
{
#line 720 "make.module_dep_file.m"
  {
#line 720 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 720 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HeadVar__2_2;

#line 720 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "make.module_dep_file.m"
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "make.module_dep_file.m"
    else
#line 721 "make.module_dep_file.m"
      {
#line 721 "make.module_dep_file.m"
        MR_Word make__module_dep_file__LangSet_4;

#line 723 "make.module_dep_file.m"
        {
#line 723 "make.module_dep_file.m"
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
#line 721 "make.module_dep_file.m"
        {
#line 721 "make.module_dep_file.m"
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
#line 721 "make.module_dep_file.m"
        }
#line 721 "make.module_dep_file.m"
      }
#line 720 "make.module_dep_file.m"
    return make__module_dep_file__HeadVar__2_2;
#line 720 "make.module_dep_file.m"
  }
#line 718 "make.module_dep_file.m"
}

#line 711 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 711 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 711 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
#line 711 "make.module_dep_file.m"
{
#line 714 "make.module_dep_file.m"
  {
#line 714 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 714 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 714 "make.module_dep_file.m"
    MR_String make__module_dep_file__Atom_5;
#line 714 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 714 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4963 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 715 "make.module_dep_file.m"
            {
#line 715 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 714 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 438 "make.module_dep_file.m"
              {
#line 438 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
#line 441 "make.module_dep_file.m"
                  {
#line 441 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
#line 441 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 441 "make.module_dep_file.m"
                  }
#line 438 "make.module_dep_file.m"
                else
#line 438 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
#line 438 "make.module_dep_file.m"
                  {
#line 438 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
#line 438 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 438 "make.module_dep_file.m"
                  }
#line 438 "make.module_dep_file.m"
                else
#line 438 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 438 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 714 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 714 "make.module_dep_file.m"
  }
#line 711 "make.module_dep_file.m"
}

#line 702 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 702 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 702 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4)
#line 702 "make.module_dep_file.m"
{
#line 705 "make.module_dep_file.m"
  {
#line 705 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_15_15;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FileNameTerm_6;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 705 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_8;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 705 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_14_14;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 705 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_23;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 705 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
#line 706 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
#line 705 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 705 "make.module_dep_file.m"
              {
#line 706 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 706 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 706 "make.module_dep_file.m"
                  {
#line 706 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 706 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 706 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 706 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 706 "make.module_dep_file.m"
                      {
#line 706 "make.module_dep_file.m"
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 706 "make.module_dep_file.m"
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5107 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 706 "make.module_dep_file.m"
                        {
#line 706 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
#line 705 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 705 "make.module_dep_file.m"
                          {
#line 663 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
                              {
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 705 "make.module_dep_file.m"
                                  {
#line 663 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
                                      {
#line 663 "make.module_dep_file.m"
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 1)));
#line 691 "make.module_dep_file.m"
                                        {
#line 691 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
#line 705 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 705 "make.module_dep_file.m"
                                          {
#line 663 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
                                              {
#line 663 "make.module_dep_file.m"
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
#line 663 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 705 "make.module_dep_file.m"
                                                  {
#line 663 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
                                                      {
#line 663 "make.module_dep_file.m"
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 1)));
#line 709 "make.module_dep_file.m"
                                                        {
#line 709 "make.module_dep_file.m"
                                                          MR_Word base;
#line 709 "make.module_dep_file.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "make.module_dep_file.m"
                                                          *make__module_dep_file__ForeignInclude_4 = base;
#line 709 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 709 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
#line 709 "make.module_dep_file.m"
                                                        }
#line 709 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = MR_TRUE;
#line 663 "make.module_dep_file.m"
                                                      }
#line 705 "make.module_dep_file.m"
                                                  }
#line 663 "make.module_dep_file.m"
                                              }
#line 705 "make.module_dep_file.m"
                                          }
#line 663 "make.module_dep_file.m"
                                      }
#line 705 "make.module_dep_file.m"
                                  }
#line 663 "make.module_dep_file.m"
                              }
#line 705 "make.module_dep_file.m"
                          }
#line 706 "make.module_dep_file.m"
                      }
#line 706 "make.module_dep_file.m"
                  }
#line 705 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 705 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 705 "make.module_dep_file.m"
  }
#line 702 "make.module_dep_file.m"
}

#line 693 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 693 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 693 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4)
#line 693 "make.module_dep_file.m"
{
#line 696 "make.module_dep_file.m"
  {
#line 696 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_13_13;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_16_16;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_8;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 696 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_14_14;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 696 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_24;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 696 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_21_21, (MR_Integer) 0)));
#line 697 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_14_14) == 0);
#line 696 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
              {
#line 697 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 697 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 697 "make.module_dep_file.m"
                  {
#line 697 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 697 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 697 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 697 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 697 "make.module_dep_file.m"
                      {
#line 697 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 697 "make.module_dep_file.m"
                        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5318 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_16_16 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 697 "make.module_dep_file.m"
                        {
#line 697 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_16_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_15_15)));
                        }
#line 696 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
                          {
#line 663 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
                              {
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 663 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
                                  {
#line 663 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
                                      {
#line 663 "make.module_dep_file.m"
                                        make__module_dep_file__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_28_28, (MR_Integer) 1)));
#line 691 "make.module_dep_file.m"
                                        {
#line 691 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_24, &make__module_dep_file__Language_7);
                                        }
#line 696 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
                                          {
#line 5364 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 699 "make.module_dep_file.m"
                                            {
#line 699 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_13_13, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
#line 696 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
                                              {
#line 700 "make.module_dep_file.m"
                                                {
#line 700 "make.module_dep_file.m"
                                                  MR_Word base;
#line 700 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 700 "make.module_dep_file.m"
                                                  *make__module_dep_file__ForeignImport_4 = base;
#line 700 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 700 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
#line 700 "make.module_dep_file.m"
                                                }
#line 700 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 696 "make.module_dep_file.m"
                                              }
#line 696 "make.module_dep_file.m"
                                          }
#line 663 "make.module_dep_file.m"
                                      }
#line 696 "make.module_dep_file.m"
                                  }
#line 663 "make.module_dep_file.m"
                              }
#line 696 "make.module_dep_file.m"
                          }
#line 697 "make.module_dep_file.m"
                      }
#line 697 "make.module_dep_file.m"
                  }
#line 696 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 696 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 696 "make.module_dep_file.m"
  }
#line 693 "make.module_dep_file.m"
}

#line 687 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 687 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 687 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4)
#line 687 "make.module_dep_file.m"
{
#line 689 "make.module_dep_file.m"
  {
#line 689 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 689 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 689 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 689 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;

#line 663 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
      {
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
          {
#line 663 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 691 "make.module_dep_file.m"
              {
#line 691 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
#line 663 "make.module_dep_file.m"
          }
#line 663 "make.module_dep_file.m"
      }
#line 689 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 689 "make.module_dep_file.m"
  }
#line 687 "make.module_dep_file.m"
}

#line 682 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 682 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 682 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4)
#line 682 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 663 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
      {
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
          {
#line 663 "make.module_dep_file.m"
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "make.module_dep_file.m"
          }
#line 663 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
  }
#line 682 "make.module_dep_file.m"
}

#line 5531 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 5534 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 5536 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 5538 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 5540 "make.module_dep_file.c"
{
#line 5542 "make.module_dep_file.c"
  {
#line 5544 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 5546 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 5548 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

#line 5551 "make.module_dep_file.c"
    {
#line 5553 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__680__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
#line 5556 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 5558 "make.module_dep_file.c"
      {
#line 5560 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
#line 5562 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 5564 "make.module_dep_file.c"
      }
#line 5566 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 5568 "make.module_dep_file.c"
  }
#line 5570 "make.module_dep_file.c"
}

#line 677 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 677 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 677 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4)
#line 677 "make.module_dep_file.m"
{
#line 679 "make.module_dep_file.m"
  {
#line 679 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 679 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_17;
#line 679 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_14;
#line 679 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_18_18;
#line 679 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          {
#line 668 "make.module_dep_file.m"
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
#line 674 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
#line 679 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 679 "make.module_dep_file.m"
              {
#line 5621 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 675 "make.module_dep_file.m"
                {
#line 675 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_4[10], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
#line 679 "make.module_dep_file.m"
              }
#line 668 "make.module_dep_file.m"
          }
#line 668 "make.module_dep_file.m"
      }
#line 679 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 679 "make.module_dep_file.m"
  }
#line 677 "make.module_dep_file.m"
}

#line 665 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 665 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 665 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 665 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 665 "make.module_dep_file.m"
{
#line 667 "make.module_dep_file.m"
  {
#line 667 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 667 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 668 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
      {
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
#line 668 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
      }
#line 667 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 667 "make.module_dep_file.m"
  }
#line 665 "make.module_dep_file.m"
}

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 660 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4)
#line 660 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 663 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_5_5;

#line 663 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
      {
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 663 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 663 "make.module_dep_file.m"
          {
#line 663 "make.module_dep_file.m"
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 1)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "make.module_dep_file.m"
          }
#line 663 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
  }
#line 660 "make.module_dep_file.m"
}

#line 654 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 654 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 654 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4)
#line 654 "make.module_dep_file.m"
{
#line 656 "make.module_dep_file.m"
  {
#line 656 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 656 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Int_5;
#line 656 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 656 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "make.module_dep_file.m"
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
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 656 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 656 "make.module_dep_file.m"
  }
#line 654 "make.module_dep_file.m"
}

#line 638 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_3(
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 638 "make.module_dep_file.m"
{
#line 638 "make.module_dep_file.m"
  {
#line 638 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 638 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_STATE_VARIABLE_Info_29;

#line 638 "make.module_dep_file.m"
    {
#line 638 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_STATE_VARIABLE_Info_29);
    }
#line 638 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_STATE_VARIABLE_Info_29));
#line 638 "make.module_dep_file.m"
  }
#line 638 "make.module_dep_file.m"
}

#line 638 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 638 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 638 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 638 "make.module_dep_file.m"
{
#line 638 "make.module_dep_file.m"
  {
#line 638 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 638 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_STATE_VARIABLE_Info_29;

#line 638 "make.module_dep_file.m"
    {
#line 638 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_STATE_VARIABLE_Info_29);
    }
#line 638 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_STATE_VARIABLE_Info_29));
#line 638 "make.module_dep_file.m"
  }
#line 638 "make.module_dep_file.m"
}

#line 583 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 583 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 583 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 583 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 583 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 583 "make.module_dep_file.m"
{
#line 583 "make.module_dep_file.m"
  {
#line 583 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 583 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__3_3;

#line 583 "make.module_dep_file.m"
    {
#line 583 "make.module_dep_file.m"
      parse_tree__prog_data__add_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__3_3);
    }
#line 583 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__3_3));
#line 583 "make.module_dep_file.m"
  }
#line 583 "make.module_dep_file.m"
}

#line 522 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 522 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 522 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 522 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 522 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_72,
#line 522 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_73)
#line 522 "make.module_dep_file.m"
{
#line 650 "make.module_dep_file.m"
  {
#line 650 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 650 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_37;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleName_38;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Parents_39;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDeps_40;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImpDeps_41;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Children_42;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildren_43;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDeps_44;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_45;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImports_46;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExport_47;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMain_48;
#line 650 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignIncludes_49;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_151_151;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgs_21;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__VersionNumberTerm_22;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileTerm_23;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ParentsTerm_25;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDepsTerm_26;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImpDepsTerm_27;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ChildrenTerm_28;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDepsTerm_30;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMainTerm_34;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgsTail_35;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Version_36;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_78_78;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_82_82;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_83_83;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_84_84;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_85_85;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_86_86;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_87_87;
#line 529 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_88_88;
#line 529 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_184_184;

#line 529 "make.module_dep_file.m"
    {
#line 529 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_184_184, &make__module_dep_file__ModuleArgs_21);
    }
#line 529 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
      {
#line 529 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_184_184) == 0);
#line 529 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
          {
#line 531 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 531 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 531 "make.module_dep_file.m"
              {
#line 531 "make.module_dep_file.m"
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
#line 531 "make.module_dep_file.m"
                make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 532 "make.module_dep_file.m"
                  {
#line 532 "make.module_dep_file.m"
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
#line 532 "make.module_dep_file.m"
                    make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 533 "make.module_dep_file.m"
                      {
#line 533 "make.module_dep_file.m"
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
#line 533 "make.module_dep_file.m"
                        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
#line 534 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 534 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 534 "make.module_dep_file.m"
                          {
#line 534 "make.module_dep_file.m"
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
#line 534 "make.module_dep_file.m"
                            make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
#line 535 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 535 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 535 "make.module_dep_file.m"
                              {
#line 535 "make.module_dep_file.m"
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
#line 535 "make.module_dep_file.m"
                                make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
#line 536 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 536 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 536 "make.module_dep_file.m"
                                  {
#line 536 "make.module_dep_file.m"
                                    make__module_dep_file__ImpDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
#line 536 "make.module_dep_file.m"
                                    make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
#line 537 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 537 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 537 "make.module_dep_file.m"
                                      {
#line 537 "make.module_dep_file.m"
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 0)));
#line 537 "make.module_dep_file.m"
                                        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 1)));
#line 538 "make.module_dep_file.m"
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_83_83)) == (MR_mktag((MR_Integer) 1)));
#line 538 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 538 "make.module_dep_file.m"
                                          {
#line 538 "make.module_dep_file.m"
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 0)));
#line 538 "make.module_dep_file.m"
                                            make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 1)));
#line 539 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 539 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 539 "make.module_dep_file.m"
                                              {
#line 539 "make.module_dep_file.m"
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 0)));
#line 539 "make.module_dep_file.m"
                                                make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 1)));
#line 540 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 540 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 540 "make.module_dep_file.m"
                                                  {
#line 540 "make.module_dep_file.m"
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 0)));
#line 540 "make.module_dep_file.m"
                                                    make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 1)));
#line 541 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 541 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                      {
#line 541 "make.module_dep_file.m"
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 0)));
#line 541 "make.module_dep_file.m"
                                                        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 1)));
#line 542 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 542 "make.module_dep_file.m"
                                                        if (make__module_dep_file__succeeded)
#line 542 "make.module_dep_file.m"
                                                          {
#line 542 "make.module_dep_file.m"
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 0)));
#line 542 "make.module_dep_file.m"
                                                            make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 1)));
#line 544 "make.module_dep_file.m"
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 544 "make.module_dep_file.m"
                                                            if (make__module_dep_file__succeeded)
#line 544 "make.module_dep_file.m"
                                                              {
#line 544 "make.module_dep_file.m"
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_88_88, (MR_Integer) 0)));
#line 544 "make.module_dep_file.m"
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_88_88, (MR_Integer) 1)));
#line 547 "make.module_dep_file.m"
                                                                {
#line 547 "make.module_dep_file.m"
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
#line 529 "make.module_dep_file.m"
                                                                if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                  {
#line 548 "make.module_dep_file.m"
                                                                    {
#line 548 "make.module_dep_file.m"
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
#line 529 "make.module_dep_file.m"
                                                                    if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                      {
#line 6208 "make.module_dep_file.c"
                                                                        make__module_dep_file__TypeCtorInfo_151_151 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 549 "make.module_dep_file.m"
                                                                        {
#line 549 "make.module_dep_file.m"
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_151_151, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
#line 529 "make.module_dep_file.m"
                                                                        if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                          {
#line 552 "make.module_dep_file.m"
                                                                            {
#line 552 "make.module_dep_file.m"
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
#line 529 "make.module_dep_file.m"
                                                                            if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                              {
#line 553 "make.module_dep_file.m"
                                                                                {
#line 553 "make.module_dep_file.m"
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
#line 529 "make.module_dep_file.m"
                                                                                if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                  {
#line 554 "make.module_dep_file.m"
                                                                                    {
#line 554 "make.module_dep_file.m"
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImpDepsTerm_27, &make__module_dep_file__ImpDeps_41);
                                                                                    }
#line 529 "make.module_dep_file.m"
                                                                                    if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                      {
#line 555 "make.module_dep_file.m"
                                                                                        {
#line 555 "make.module_dep_file.m"
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
#line 529 "make.module_dep_file.m"
                                                                                        if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                          {
#line 556 "make.module_dep_file.m"
                                                                                            {
#line 556 "make.module_dep_file.m"
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
#line 529 "make.module_dep_file.m"
                                                                                            if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                              {
#line 558 "make.module_dep_file.m"
                                                                                                {
#line 558 "make.module_dep_file.m"
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
#line 529 "make.module_dep_file.m"
                                                                                                if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                                  {
#line 559 "make.module_dep_file.m"
                                                                                                    {
#line 559 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
#line 529 "make.module_dep_file.m"
                                                                                                    if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                                      {
#line 561 "make.module_dep_file.m"
                                                                                                        {
#line 561 "make.module_dep_file.m"
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
#line 529 "make.module_dep_file.m"
                                                                                                        if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                                          {
#line 563 "make.module_dep_file.m"
                                                                                                            {
#line 563 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
#line 529 "make.module_dep_file.m"
                                                                                                            if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                                                                                                              {
#line 566 "make.module_dep_file.m"
                                                                                                                {
#line 566 "make.module_dep_file.m"
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
#line 529 "make.module_dep_file.m"
                                                                                                                if (make__module_dep_file__succeeded)
#line 572 "make.module_dep_file.m"
                                                                                                                  {
#line 572 "make.module_dep_file.m"
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "make.module_dep_file.m"
                                                                                                                      {
#line 569 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
#line 569 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 569 "make.module_dep_file.m"
                                                                                                                          {
#line 571 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 571 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
#line 569 "make.module_dep_file.m"
                                                                                                                          }
#line 569 "make.module_dep_file.m"
                                                                                                                      }
#line 572 "make.module_dep_file.m"
                                                                                                                    else
#line 573 "make.module_dep_file.m"
                                                                                                                      {
#line 573 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
#line 573 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__V_92_92;

#line 573 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
#line 573 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 573 "make.module_dep_file.m"
                                                                                                                          {
#line 574 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
#line 574 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
#line 574 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "make.module_dep_file.m"
                                                                                                                            if (make__module_dep_file__succeeded)
#line 575 "make.module_dep_file.m"
                                                                                                                              {
#line 575 "make.module_dep_file.m"
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
                                                                                                                              }
#line 573 "make.module_dep_file.m"
                                                                                                                          }
#line 573 "make.module_dep_file.m"
                                                                                                                      }
#line 572 "make.module_dep_file.m"
                                                                                                                  }
#line 529 "make.module_dep_file.m"
                                                                                                              }
#line 529 "make.module_dep_file.m"
                                                                                                          }
#line 529 "make.module_dep_file.m"
                                                                                                      }
#line 529 "make.module_dep_file.m"
                                                                                                  }
#line 529 "make.module_dep_file.m"
                                                                                              }
#line 529 "make.module_dep_file.m"
                                                                                          }
#line 529 "make.module_dep_file.m"
                                                                                      }
#line 529 "make.module_dep_file.m"
                                                                                  }
#line 529 "make.module_dep_file.m"
                                                                              }
#line 529 "make.module_dep_file.m"
                                                                          }
#line 529 "make.module_dep_file.m"
                                                                      }
#line 529 "make.module_dep_file.m"
                                                                  }
#line 544 "make.module_dep_file.m"
                                                              }
#line 542 "make.module_dep_file.m"
                                                          }
#line 541 "make.module_dep_file.m"
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
#line 529 "make.module_dep_file.m"
          }
#line 529 "make.module_dep_file.m"
      }
#line 650 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 579 "make.module_dep_file.m"
      {
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_164_164;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeInfo_170_170;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleNameContext_51;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ContainsForeignCode_52;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectDeps_53;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__PublicChildren_54;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignImportModules_55;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__DirectIntItemBlocksCord_57;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectIntItemBlocksCord_58;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OptItemBlocksCord_59;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IntForOptItemBlocksCord_60;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleVersionNumbers_61;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_63;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleAndImports_65;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_95_95;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_96_96;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_97_97;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_98_98;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_99_99;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_100_100;
#line 579 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_101_101;
#line 583 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv1_ForeignImportModules_55;
#line 613 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_185_185;

#line 579 "make.module_dep_file.m"
        {
#line 579 "make.module_dep_file.m"
          make__module_dep_file__ModuleNameContext_51 = mercury__term__context_init_0_f_0();
        }
#line 580 "make.module_dep_file.m"
        {
#line 580 "make.module_dep_file.m"
          make__module_dep_file__ContainsForeignCode_52 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
#line 6476 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_164_164 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 581 "make.module_dep_file.m"
        {
#line 581 "make.module_dep_file.m"
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, &make__module_dep_file__IndirectDeps_53);
        }
#line 582 "make.module_dep_file.m"
        {
#line 582 "make.module_dep_file.m"
          mercury__set__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, &make__module_dep_file__PublicChildren_54);
        }
#line 584 "make.module_dep_file.m"
        {
#line 584 "make.module_dep_file.m"
          make__module_dep_file__V_95_95 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
        }
#line 583 "make.module_dep_file.m"
        {
#line 583 "make.module_dep_file.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_modules_0, (MR_Word) &make__module_dep_file_scalar_common_4[9], make__module_dep_file__ForeignImports_46, ((MR_Box) (make__module_dep_file__V_95_95)), &make__module_dep_file__conv1_ForeignImportModules_55);
        }
#line 583 "make.module_dep_file.m"
        make__module_dep_file__ForeignImportModules_55 = ((MR_Word) make__module_dep_file__conv1_ForeignImportModules_55);
#line 6500 "make.module_dep_file.c"
        make__module_dep_file__TypeInfo_170_170 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 586 "make.module_dep_file.m"
        {
#line 586 "make.module_dep_file.m"
          make__module_dep_file__DirectIntItemBlocksCord_57 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_170_170);
        }
#line 587 "make.module_dep_file.m"
        {
#line 587 "make.module_dep_file.m"
          make__module_dep_file__IndirectIntItemBlocksCord_58 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_170_170);
        }
#line 588 "make.module_dep_file.m"
        {
#line 588 "make.module_dep_file.m"
          make__module_dep_file__OptItemBlocksCord_59 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[2]);
        }
#line 589 "make.module_dep_file.m"
        {
#line 589 "make.module_dep_file.m"
          make__module_dep_file__IntForOptItemBlocksCord_60 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[3]);
        }
#line 590 "make.module_dep_file.m"
        {
#line 590 "make.module_dep_file.m"
          mercury__map__init_1_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, &make__module_dep_file__ModuleVersionNumbers_61);
        }
#line 592 "make.module_dep_file.m"
        {
#line 592 "make.module_dep_file.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &make__module_dep_file__Errors_63);
        }
#line 596 "make.module_dep_file.m"
        {
#line 596 "make.module_dep_file.m"
          make__module_dep_file__V_96_96 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__Parents_39);
        }
#line 597 "make.module_dep_file.m"
        {
#line 597 "make.module_dep_file.m"
          make__module_dep_file__V_97_97 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__IntDeps_40);
        }
#line 598 "make.module_dep_file.m"
        {
#line 598 "make.module_dep_file.m"
          make__module_dep_file__V_98_98 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__ImpDeps_41);
        }
#line 600 "make.module_dep_file.m"
        {
#line 600 "make.module_dep_file.m"
          make__module_dep_file__V_99_99 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__Children_42);
        }
#line 602 "make.module_dep_file.m"
        {
#line 602 "make.module_dep_file.m"
          make__module_dep_file__V_100_100 = mercury__set__list_to_set_1_f_0(make__module_dep_file__TypeCtorInfo_164_164, make__module_dep_file__NestedChildren_43);
        }
#line 604 "make.module_dep_file.m"
        {
#line 604 "make.module_dep_file.m"
          make__module_dep_file__V_101_101 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludes_49);
        }
#line 594 "make.module_dep_file.m"
        {
#line 594 "make.module_dep_file.m"
          make__module_dep_file__ModuleAndImports_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 3) = ((MR_Box) (make__module_dep_file__ModuleNameContext_51));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 4) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 5) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 6) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 7) = ((MR_Box) (make__module_dep_file__IndirectDeps_53));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 8) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 9) = ((MR_Box) (make__module_dep_file__PublicChildren_54));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 10) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 11) = ((MR_Box) (make__module_dep_file__FactDeps_44));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 12) = ((MR_Box) (make__module_dep_file__ForeignImportModules_55));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 13) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_52));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 15) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 17) = ((MR_Box) (make__module_dep_file__DirectIntItemBlocksCord_57));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 18) = ((MR_Box) (make__module_dep_file__IndirectIntItemBlocksCord_58));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 19) = ((MR_Box) (make__module_dep_file__OptItemBlocksCord_59));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 20) = ((MR_Box) (make__module_dep_file__IntForOptItemBlocksCord_60));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 21) = ((MR_Box) (make__module_dep_file__ModuleVersionNumbers_61));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 22) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 23) = ((MR_Box) (make__module_dep_file__Errors_63));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 25) = ((MR_Box) (make__module_dep_file__HasMain_48));
#line 594 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_65, 26) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
#line 594 "make.module_dep_file.m"
        }
#line 613 "make.module_dep_file.m"
        {
#line 613 "make.module_dep_file.m"
          make__module_dep_file__V_185_185 = mercury__dir__this_directory_0_f_0();
        }
#line 613 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_185_185) == 0);
#line 6629 "make.module_dep_file.c"
        if (make__module_dep_file__succeeded)
#line 6631 "make.module_dep_file.c"
          {
#line 6633 "make.module_dep_file.c"
            MR_Word make__module_dep_file__SourceFileExists_66;

#line 614 "make.module_dep_file.m"
            {
#line 614 "make.module_dep_file.m"
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_66);
            }
#line 6641 "make.module_dep_file.c"
            if ((make__module_dep_file__SourceFileExists_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6643 "make.module_dep_file.c"
              {
#line 6645 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
#line 6647 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap_70;
#line 6649 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_104_104;
#line 6651 "make.module_dep_file.c"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_105;
#line 6653 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_106_106;
#line 6655 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
#line 6657 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
#line 6659 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
#line 6661 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
#line 6663 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
#line 6665 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
#line 6667 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
#line 6669 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
#line 6671 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
#line 6673 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
#line 6675 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
#line 6677 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
#line 6679 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
#line 6681 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
#line 6683 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
#line 6685 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
#line 6687 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
#line 6689 "make.module_dep_file.c"
                MR_Integer make__module_dep_file__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
#line 6691 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));
#line 637 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_73;
#line 637 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_75;

#line 628 "make.module_dep_file.m"
                {
#line 628 "make.module_dep_file.m"
                  make__module_dep_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 628 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_104_104, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_65));
#line 628 "make.module_dep_file.m"
                }
#line 628 "make.module_dep_file.m"
                {
#line 628 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_104_104)), make__module_dep_file__ModuleDepMap0_69, &make__module_dep_file__ModuleDepMap_70);
                }
#line 630 "make.module_dep_file.m"
                {
#line 630 "make.module_dep_file.m"
                  make__module_dep_file__STATE_VARIABLE_Info_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_70));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 1) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 2) = ((MR_Box) (make__module_dep_file__V_113_113));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 3) = ((MR_Box) (make__module_dep_file__V_114_114));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 4) = ((MR_Box) (make__module_dep_file__V_115_115));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 5) = ((MR_Box) (make__module_dep_file__V_116_116));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 6) = ((MR_Box) (make__module_dep_file__V_117_117));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 7) = ((MR_Box) (make__module_dep_file__V_118_118));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 8) = ((MR_Box) (make__module_dep_file__V_119_119));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 9) = ((MR_Box) (make__module_dep_file__V_120_120));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 10) = ((MR_Box) (make__module_dep_file__V_121_121));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 11) = ((MR_Box) (make__module_dep_file__V_122_122));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 12) = ((MR_Box) (make__module_dep_file__V_123_123));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 13) = ((MR_Box) (make__module_dep_file__V_124_124));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 14) = ((MR_Box) (make__module_dep_file__V_125_125));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 15) = ((MR_Box) (make__module_dep_file__V_126_126));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 16) = ((MR_Box) (make__module_dep_file__V_127_127));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 17) = ((MR_Box) (make__module_dep_file__V_128_128));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 18) = ((MR_Box) (make__module_dep_file__V_129_129));
#line 630 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_105, 19) = ((MR_Box) (make__module_dep_file__V_130_130));
#line 630 "make.module_dep_file.m"
                }
#line 638 "make.module_dep_file.m"
                {
#line 638 "make.module_dep_file.m"
                  make__module_dep_file__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 638 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 638 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
#line 638 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 638 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 638 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 4) = ((MR_Box) ((MR_Integer) 1));
#line 638 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_106_106, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 638 "make.module_dep_file.m"
                }
#line 637 "make.module_dep_file.m"
                {
#line 637 "make.module_dep_file.m"
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_106_106, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_105)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_73, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_75);
                }
#line 637 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_73 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_73);
#line 641 "make.module_dep_file.m"
                {
#line 641 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_73, make__module_dep_file__NestedChildren_43);
                }
#line 643 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 642 "make.module_dep_file.m"
                  {
#line 642 "make.module_dep_file.m"
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 642 "make.module_dep_file.m"
                  }
#line 643 "make.module_dep_file.m"
                else
#line 644 "make.module_dep_file.m"
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6799 "make.module_dep_file.c"
              }
#line 6801 "make.module_dep_file.c"
            else
#line 6803 "make.module_dep_file.c"
              {
#line 619 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_68_68;

#line 619 "make.module_dep_file.m"
                {
#line 619 "make.module_dep_file.m"
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_68_68);
                }
#line 648 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_66;
#line 647 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_73 = make__module_dep_file__STATE_VARIABLE_Info_0_72;
#line 6817 "make.module_dep_file.c"
              }
#line 6819 "make.module_dep_file.c"
          }
#line 6821 "make.module_dep_file.c"
        else
#line 6823 "make.module_dep_file.c"
          {
#line 6825 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap0_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 0)));
#line 6827 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap_232;
#line 6829 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_234_234;
#line 6831 "make.module_dep_file.c"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_105_235;
#line 6833 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_236_236;
#line 6835 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 1)));
#line 6837 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 2)));
#line 6839 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 3)));
#line 6841 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 4)));
#line 6843 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 5)));
#line 6845 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 6)));
#line 6847 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 7)));
#line 6849 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 8)));
#line 6851 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 9)));
#line 6853 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 10)));
#line 6855 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 11)));
#line 6857 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 12)));
#line 6859 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 13)));
#line 6861 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 14)));
#line 6863 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 15)));
#line 6865 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 16)));
#line 6867 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 17)));
#line 6869 "make.module_dep_file.c"
            MR_Integer make__module_dep_file__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 18)));
#line 6871 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_72, (MR_Integer) 19)));
#line 637 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv7_STATE_VARIABLE_Info_73;
#line 637 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv6_STATE_VARIABLE_IO_75;

#line 628 "make.module_dep_file.m"
            {
#line 628 "make.module_dep_file.m"
              make__module_dep_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 628 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_234_234, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_65));
#line 628 "make.module_dep_file.m"
            }
#line 628 "make.module_dep_file.m"
            {
#line 628 "make.module_dep_file.m"
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_234_234)), make__module_dep_file__ModuleDepMap0_231, &make__module_dep_file__ModuleDepMap_232);
            }
#line 630 "make.module_dep_file.m"
            {
#line 630 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_105_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_232));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 1) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 2) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 3) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 4) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 5) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 6) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 7) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 8) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 9) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 10) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 11) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 12) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 13) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 14) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 15) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 16) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 17) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 18) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 630 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_105_235, 19) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 630 "make.module_dep_file.m"
            }
#line 638 "make.module_dep_file.m"
            {
#line 638 "make.module_dep_file.m"
              make__module_dep_file__V_236_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 638 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 638 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_3));
#line 638 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 638 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 638 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 4) = ((MR_Box) ((MR_Integer) 1));
#line 638 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_236_236, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 638 "make.module_dep_file.m"
            }
#line 637 "make.module_dep_file.m"
            {
#line 637 "make.module_dep_file.m"
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_164_164, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_236_236, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_105_235)), &make__module_dep_file__conv7_STATE_VARIABLE_Info_73, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv6_STATE_VARIABLE_IO_75);
            }
#line 637 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_73 = ((MR_Word) make__module_dep_file__conv7_STATE_VARIABLE_Info_73);
#line 641 "make.module_dep_file.m"
            {
#line 641 "make.module_dep_file.m"
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_73, make__module_dep_file__NestedChildren_43);
            }
#line 643 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 642 "make.module_dep_file.m"
              {
#line 642 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 642 "make.module_dep_file.m"
              }
#line 643 "make.module_dep_file.m"
            else
#line 644 "make.module_dep_file.m"
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6979 "make.module_dep_file.c"
          }
#line 579 "make.module_dep_file.m"
      }
#line 650 "make.module_dep_file.m"
    else
#line 651 "make.module_dep_file.m"
      {
#line 651 "make.module_dep_file.m"
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[1]);
#line 651 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_73 = make__module_dep_file__STATE_VARIABLE_Info_0_72;
#line 651 "make.module_dep_file.m"
      }
#line 650 "make.module_dep_file.m"
  }
#line 522 "make.module_dep_file.m"
}

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 782 "make.module_dep_file.m"
{
#line 782 "make.module_dep_file.m"
  {
#line 782 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 782 "make.module_dep_file.m"
    {
#line 782 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 782 "make.module_dep_file.m"
      return;
    }
#line 782 "make.module_dep_file.m"
  }
#line 782 "make.module_dep_file.m"
}

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 782 "make.module_dep_file.m"
{
#line 782 "make.module_dep_file.m"
  {
#line 782 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 782 "make.module_dep_file.m"
    {
#line 782 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 782 "make.module_dep_file.m"
      return;
    }
#line 782 "make.module_dep_file.m"
  }
#line 782 "make.module_dep_file.m"
}

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 782 "make.module_dep_file.m"
{
#line 782 "make.module_dep_file.m"
  {
#line 782 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 782 "make.module_dep_file.m"
    {
#line 782 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 782 "make.module_dep_file.m"
      return;
    }
#line 782 "make.module_dep_file.m"
  }
#line 782 "make.module_dep_file.m"
}

#line 782 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 782 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 782 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 782 "make.module_dep_file.m"
{
#line 782 "make.module_dep_file.m"
  {
#line 782 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 782 "make.module_dep_file.m"
    {
#line 782 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 782 "make.module_dep_file.m"
      return;
    }
#line 782 "make.module_dep_file.m"
  }
#line 782 "make.module_dep_file.m"
}

#line 481 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 481 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 481 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29)
#line 481 "make.module_dep_file.m"
{
#line 486 "make.module_dep_file.m"
  {
#line 486 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 486 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepFile_15;
#line 486 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OldInputStream_16;
#line 486 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchResult_17;
#line 486 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_32_32;

#line 488 "make.module_dep_file.m"
    {
#line 488 "make.module_dep_file.m"
      make__module_dep_file__V_32_32 = make__make_module_dep_file_extension_0_f_0();
    }
#line 487 "make.module_dep_file.m"
    {
#line 487 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_32_32, &make__module_dep_file__ModuleDepFile_15);
    }
#line 489 "make.module_dep_file.m"
    {
#line 489 "make.module_dep_file.m"
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
#line 490 "make.module_dep_file.m"
    {
#line 490 "make.module_dep_file.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
#line 515 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 516 "make.module_dep_file.m"
      {
#line 780 "make.module_dep_file.m"
#line 780 "make.module_dep_file.m"
        switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 780 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 780 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 786 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 780 "make.module_dep_file.m"
            break;
#line 780 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 780 "make.module_dep_file.m"
            {
#line 780 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_61_61;

#line 782 "make.module_dep_file.m"
              {
#line 782 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 782 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 782 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
#line 782 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 782 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 782 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 782 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 5) = ((MR_Box) ((MR_String) "couldn\'t find \140.module_dep\' file"));
#line 782 "make.module_dep_file.m"
              }
#line 781 "make.module_dep_file.m"
              {
#line 781 "make.module_dep_file.m"
                make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_61_61);
              }
#line 784 "make.module_dep_file.m"
              {
#line 784 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 784 "make.module_dep_file.m"
                return;
              }
#line 780 "make.module_dep_file.m"
            }
#line 780 "make.module_dep_file.m"
            break;
#line 780 "make.module_dep_file.m"
        }
#line 516 "make.module_dep_file.m"
      }
#line 515 "make.module_dep_file.m"
    else
#line 493 "make.module_dep_file.m"
      {
#line 493 "make.module_dep_file.m"
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 493 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TermResult_19;
#line 493 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepStream_20;

#line 494 "make.module_dep_file.m"
        {
#line 494 "make.module_dep_file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
#line 495 "make.module_dep_file.m"
        {
#line 495 "make.module_dep_file.m"
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
#line 496 "make.module_dep_file.m"
        {
#line 496 "make.module_dep_file.m"
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
#line 7246 "make.module_dep_file.c"
#line 7247 "make.module_dep_file.c"
        switch (MR_tag((MR_Word) make__module_dep_file__TermResult_19)) {
#line 7249 "make.module_dep_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 7251 "make.module_dep_file.c"
          case (MR_Integer) 0:
#line 7253 "make.module_dep_file.c"
            {
#line 780 "make.module_dep_file.m"
#line 780 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 780 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 780 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 786 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 780 "make.module_dep_file.m"
                  break;
#line 780 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 780 "make.module_dep_file.m"
                  {
#line 780 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_77_77;

#line 782 "make.module_dep_file.m"
                    {
#line 782 "make.module_dep_file.m"
                      make__module_dep_file__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 5) = ((MR_Box) ((MR_String) "unexpected eof"));
#line 782 "make.module_dep_file.m"
                    }
#line 781 "make.module_dep_file.m"
                    {
#line 781 "make.module_dep_file.m"
                      make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_77_77);
                    }
#line 784 "make.module_dep_file.m"
                    {
#line 784 "make.module_dep_file.m"
                      make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 784 "make.module_dep_file.m"
                      return;
                    }
#line 780 "make.module_dep_file.m"
                  }
#line 780 "make.module_dep_file.m"
                  break;
#line 780 "make.module_dep_file.m"
              }
#line 7309 "make.module_dep_file.c"
            }
#line 7311 "make.module_dep_file.c"
            break;
#line 7313 "make.module_dep_file.c"
          case (MR_Integer) 1:
#line 7315 "make.module_dep_file.c"
            {
#line 7317 "make.module_dep_file.c"
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
#line 7319 "make.module_dep_file.c"
              MR_String make__module_dep_file__Msg_89;
#line 505 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

#line 506 "make.module_dep_file.m"
              {
#line 506 "make.module_dep_file.m"
                make__module_dep_file__Msg_89 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
#line 780 "make.module_dep_file.m"
#line 780 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 780 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 780 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 786 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 780 "make.module_dep_file.m"
                  break;
#line 780 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 780 "make.module_dep_file.m"
                  {
#line 780 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_84_84;

#line 782 "make.module_dep_file.m"
                    {
#line 782 "make.module_dep_file.m"
                      make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 782 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 5) = ((MR_Box) (make__module_dep_file__Msg_89));
#line 782 "make.module_dep_file.m"
                    }
#line 781 "make.module_dep_file.m"
                    {
#line 781 "make.module_dep_file.m"
                      make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_84_84);
                    }
#line 784 "make.module_dep_file.m"
                    {
#line 784 "make.module_dep_file.m"
                      make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 784 "make.module_dep_file.m"
                      return;
                    }
#line 780 "make.module_dep_file.m"
                  }
#line 780 "make.module_dep_file.m"
                  break;
#line 780 "make.module_dep_file.m"
              }
#line 7383 "make.module_dep_file.c"
            }
#line 7385 "make.module_dep_file.c"
            break;
#line 7387 "make.module_dep_file.c"
          case (MR_Integer) 2:
#line 7389 "make.module_dep_file.c"
            {
#line 7391 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
#line 7393 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Result_104;
#line 7395 "make.module_dep_file.c"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 498 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

#line 499 "make.module_dep_file.m"
              {
#line 499 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_104, make__module_dep_file__STATE_VARIABLE_Info_0_28, &make__module_dep_file__STATE_VARIABLE_Info_46_106);
              }
#line 510 "make.module_dep_file.m"
              if ((make__module_dep_file__Result_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 510 "make.module_dep_file.m"
              else
#line 511 "make.module_dep_file.m"
                {
#line 511 "make.module_dep_file.m"
                  MR_String make__module_dep_file__Msg_98 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_104, (MR_Integer) 0)));

#line 780 "make.module_dep_file.m"
#line 780 "make.module_dep_file.m"
                  switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 780 "make.module_dep_file.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 780 "make.module_dep_file.m"
                    case (MR_Integer) 1:
#line 786 "make.module_dep_file.m"
                      *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 780 "make.module_dep_file.m"
                      break;
#line 780 "make.module_dep_file.m"
                    case (MR_Integer) 0:
#line 780 "make.module_dep_file.m"
                      {
#line 780 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_94_94;

#line 782 "make.module_dep_file.m"
                        {
#line 782 "make.module_dep_file.m"
                          make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 782 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 782 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_4));
#line 782 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 782 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 782 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 782 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 5) = ((MR_Box) (make__module_dep_file__Msg_98));
#line 782 "make.module_dep_file.m"
                        }
#line 781 "make.module_dep_file.m"
                        {
#line 781 "make.module_dep_file.m"
                          make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_94_94);
                        }
#line 784 "make.module_dep_file.m"
                        {
#line 784 "make.module_dep_file.m"
                          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_106, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 784 "make.module_dep_file.m"
                          return;
                        }
#line 780 "make.module_dep_file.m"
                      }
#line 780 "make.module_dep_file.m"
                      break;
#line 780 "make.module_dep_file.m"
                  }
#line 511 "make.module_dep_file.m"
                }
#line 7472 "make.module_dep_file.c"
            }
#line 7474 "make.module_dep_file.c"
            break;
#line 7476 "make.module_dep_file.c"
        }
#line 493 "make.module_dep_file.m"
      }
#line 486 "make.module_dep_file.m"
  }
#line 481 "make.module_dep_file.m"
}

#line 472 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 472 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 472 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 472 "make.module_dep_file.m"
{
#line 477 "make.module_dep_file.m"
  {
#line 477 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 477 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 477 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 479 "make.module_dep_file.m"
    {
#line 479 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 479 "make.module_dep_file.m"
    {
#line 479 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 479 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "make.module_dep_file.m"
    }
#line 478 "make.module_dep_file.m"
    {
#line 478 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 478 "make.module_dep_file.m"
      return;
    }
#line 477 "make.module_dep_file.m"
  }
#line 472 "make.module_dep_file.m"
}

#line 462 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 462 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 462 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 462 "make.module_dep_file.m"
{
#line 466 "make.module_dep_file.m"
  {
#line 466 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 466 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 467 "make.module_dep_file.m"
    {
#line 467 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 650, &make__module_dep_file__SearchDirs_13);
    }
#line 469 "make.module_dep_file.m"
    {
#line 469 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 469 "make.module_dep_file.m"
      return;
    }
#line 466 "make.module_dep_file.m"
  }
#line 462 "make.module_dep_file.m"
}

#line 448 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 448 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 448 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 448 "make.module_dep_file.m"
{
#line 453 "make.module_dep_file.m"
  {
#line 453 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 453 "make.module_dep_file.m"
#line 453 "make.module_dep_file.m"
    switch (make__module_dep_file__HasMain_3) {
#line 453 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 453 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 454 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 453 "make.module_dep_file.m"
        break;
#line 453 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 457 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 453 "make.module_dep_file.m"
        break;
#line 453 "make.module_dep_file.m"
    }
#line 453 "make.module_dep_file.m"
  }
#line 448 "make.module_dep_file.m"
}

#line 432 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 432 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 432 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 432 "make.module_dep_file.m"
{
#line 438 "make.module_dep_file.m"
  {
#line 438 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 438 "make.module_dep_file.m"
#line 438 "make.module_dep_file.m"
    switch (make__module_dep_file__ContainsForeignExport_3) {
#line 438 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 439 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 438 "make.module_dep_file.m"
        break;
#line 438 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 444 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 438 "make.module_dep_file.m"
        break;
#line 438 "make.module_dep_file.m"
    }
#line 438 "make.module_dep_file.m"
  }
#line 432 "make.module_dep_file.m"
}

#line 422 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 422 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4)
#line 422 "make.module_dep_file.m"
{
#line 425 "make.module_dep_file.m"
  {
#line 425 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 425 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
#line 425 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

#line 427 "make.module_dep_file.m"
    {
#line 427 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 428 "make.module_dep_file.m"
    {
#line 428 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 429 "make.module_dep_file.m"
    {
#line 429 "make.module_dep_file.m"
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
#line 429 "make.module_dep_file.m"
      return;
    }
#line 425 "make.module_dep_file.m"
  }
#line 422 "make.module_dep_file.m"
}

#line 413 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 413 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4)
#line 413 "make.module_dep_file.m"
{
#line 416 "make.module_dep_file.m"
  {
#line 416 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 416 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
#line 416 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));

#line 418 "make.module_dep_file.m"
    {
#line 418 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 419 "make.module_dep_file.m"
    {
#line 419 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 420 "make.module_dep_file.m"
    {
#line 420 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
#line 420 "make.module_dep_file.m"
      return;
    }
#line 416 "make.module_dep_file.m"
  }
#line 413 "make.module_dep_file.m"
}

#line 408 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 408 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 408 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 408 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 408 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 408 "make.module_dep_file.m"
{
#line 408 "make.module_dep_file.m"
  {
#line 408 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 408 "make.module_dep_file.m"
    {
#line 408 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 408 "make.module_dep_file.m"
      return;
    }
#line 408 "make.module_dep_file.m"
  }
#line 408 "make.module_dep_file.m"
}

#line 393 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 393 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 393 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 393 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 393 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 393 "make.module_dep_file.m"
{
#line 393 "make.module_dep_file.m"
  {
#line 393 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 393 "make.module_dep_file.m"
    {
#line 393 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 393 "make.module_dep_file.m"
      return;
    }
#line 393 "make.module_dep_file.m"
  }
#line 393 "make.module_dep_file.m"
}

#line 387 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 387 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 387 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 387 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 387 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 387 "make.module_dep_file.m"
{
#line 387 "make.module_dep_file.m"
  {
#line 387 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 387 "make.module_dep_file.m"
    {
#line 387 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 387 "make.module_dep_file.m"
      return;
    }
#line 387 "make.module_dep_file.m"
  }
#line 387 "make.module_dep_file.m"
}

#line 376 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 376 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 376 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 376 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 376 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 376 "make.module_dep_file.m"
{
#line 376 "make.module_dep_file.m"
  {
#line 376 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__376__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
#line 376 "make.module_dep_file.m"
      return;
    }
#line 376 "make.module_dep_file.m"
  }
#line 376 "make.module_dep_file.m"
}

#line 373 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 373 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 373 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 373 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 373 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 373 "make.module_dep_file.m"
{
#line 373 "make.module_dep_file.m"
  {
#line 373 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 373 "make.module_dep_file.m"
    {
#line 373 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 373 "make.module_dep_file.m"
      return;
    }
#line 373 "make.module_dep_file.m"
  }
#line 373 "make.module_dep_file.m"
}

#line 370 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 370 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 370 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 370 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 370 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 370 "make.module_dep_file.m"
{
#line 370 "make.module_dep_file.m"
  {
#line 370 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 370 "make.module_dep_file.m"
    {
#line 370 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 370 "make.module_dep_file.m"
      return;
    }
#line 370 "make.module_dep_file.m"
  }
#line 370 "make.module_dep_file.m"
}

#line 367 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 367 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 367 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 367 "make.module_dep_file.m"
{
#line 367 "make.module_dep_file.m"
  {
#line 367 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 367 "make.module_dep_file.m"
    {
#line 367 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 367 "make.module_dep_file.m"
      return;
    }
#line 367 "make.module_dep_file.m"
  }
#line 367 "make.module_dep_file.m"
}

#line 364 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 364 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 364 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 364 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 364 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 364 "make.module_dep_file.m"
{
#line 364 "make.module_dep_file.m"
  {
#line 364 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 364 "make.module_dep_file.m"
    {
#line 364 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 364 "make.module_dep_file.m"
      return;
    }
#line 364 "make.module_dep_file.m"
  }
#line 364 "make.module_dep_file.m"
}

#line 361 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 361 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 361 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 361 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 361 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 361 "make.module_dep_file.m"
{
#line 361 "make.module_dep_file.m"
  {
#line 361 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 361 "make.module_dep_file.m"
    {
#line 361 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 361 "make.module_dep_file.m"
      return;
    }
#line 361 "make.module_dep_file.m"
  }
#line 361 "make.module_dep_file.m"
}

#line 347 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 347 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_5,
#line 347 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6)
#line 347 "make.module_dep_file.m"
{
#line 350 "make.module_dep_file.m"
  {
#line 350 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_438_438;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_464_464;
#line 350 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__VersionNumber_8;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_10;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportModules_11;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportModuleInfos_12;
#line 350 "make.module_dep_file.m"
    MR_String make__module_dep_file__ContainsForeignExportStr_13;
#line 350 "make.module_dep_file.m"
    MR_String make__module_dep_file__HasMainStr_14;
#line 350 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_22_22;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_62_62;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_65_65;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_83_83;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_87_87;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_100_100;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_101_101;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_102_102;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_103_103;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_104_104;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_105_105;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_106_106;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_107_107;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_108_108;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_109_109;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_110_110;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_111_111;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_112_112;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_113_113;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_114_114;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_115_115;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_116_116;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_117_117;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_118_118;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_120_120;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_123_123;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_124_124;
#line 355 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_125_125;
#line 357 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_126_126;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_127_127;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_128_128;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_129_129;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_130_130;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_132_132;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_133_133;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_134_134;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_135_135;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_136_136;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_137_137;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_140_140;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_141_141;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_142_142;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_143_143;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_144_144;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_145_145;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_146_146;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_150_150;
#line 357 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_151_151;
#line 360 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_152_152;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_153_153;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_154_154;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_155_155;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_156_156;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_157_157;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_158_158;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_159_159;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_160_160;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_161_161;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_162_162;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_163_163;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_164_164;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_165_165;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_166_166;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_167_167;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_168_168;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_169_169;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_170_170;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_171_171;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_172_172;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_173_173;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_174_174;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_175_175;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_176_176;
#line 360 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_177_177;
#line 363 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_178_178;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_179_179;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_180_180;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_181_181;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_182_182;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_183_183;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_184_184;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_185_185;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_186_186;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_187_187;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_188_188;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_189_189;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_190_190;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_191_191;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_192_192;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_193_193;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_194_194;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202;
#line 363 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_203_203;
#line 366 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_204_204;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 366 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_229_229;
#line 369 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_230_230;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 369 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_255_255;
#line 372 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_256_256;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_261_261;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_263_263;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_264_264;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_265_265;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_266_266;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_267_267;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_268_268;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_269_269;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_270_270;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_271_271;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_272_272;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_273_273;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_274_274;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_275_275;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_276_276;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_277_277;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_278_278;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_279_279;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_280_280;
#line 372 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_281_281;
#line 375 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_282_282;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_283_283;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_284_284;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_285_285;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_286_286;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_287_287;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_288_288;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_289_289;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_290_290;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_291_291;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_292_292;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_293_293;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_294_294;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_295_295;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_296_296;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_297_297;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_298_298;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_299_299;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_300_300;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_301_301;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_302_302;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_303_303;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_304_304;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_305_305;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_306_306;
#line 375 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_307_307;
#line 383 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LangList_9;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_71_71;
#line 379 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_308_308;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_309_309;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_310_310;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_311_311;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_312_312;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_313_313;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_314_314;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_315_315;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_316_316;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_317_317;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_318_318;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_319_319;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_320_320;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_321_321;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_322_322;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_323_323;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_324_324;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_325_325;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_326_326;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_327_327;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_328_328;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_329_329;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_330_330;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_331_331;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_332_332;
#line 379 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_333_333;
#line 389 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_334_334;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_335_335;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_336_336;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_337_337;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_338_338;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_339_339;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_340_340;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_341_341;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_342_342;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_343_343;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_344_344;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_345_345;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_346_346;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_347_347;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_348_348;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_349_349;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_350_350;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_351_351;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_352_352;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_353_353;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_354_354;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_355_355;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_356_356;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_357_357;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_358_358;
#line 389 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_359_359;
#line 395 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_360_360;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_361_361;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_362_362;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_363_363;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_364_364;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_365_365;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_366_366;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_367_367;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_368_368;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_369_369;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_370_370;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_371_371;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_372_372;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_373_373;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_374_374;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_375_375;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_376_376;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_377_377;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_378_378;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_379_379;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_380_380;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_381_381;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_382_382;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_383_383;
#line 395 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_384_384;
#line 395 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_385_385;
#line 400 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_386_386;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_387_387;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_388_388;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_389_389;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_390_390;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_391_391;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_392_392;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_393_393;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_394_394;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_395_395;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_396_396;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_397_397;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_398_398;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_399_399;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_400_400;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_401_401;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_402_402;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_403_403;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_404_404;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_405_405;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_406_406;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_407_407;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_408_408;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_409_409;
#line 400 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_410_410;
#line 400 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_411_411;

#line 351 "make.module_dep_file.m"
    {
#line 351 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "module(");
    }
#line 352 "make.module_dep_file.m"
    {
#line 352 "make.module_dep_file.m"
      make__module_dep_file__version_number_2_p_0(make__module_dep_file__Version_6, &make__module_dep_file__VersionNumber_8);
    }
#line 353 "make.module_dep_file.m"
    {
#line 353 "make.module_dep_file.m"
      mercury__io__write_int_3_p_0(make__module_dep_file__VersionNumber_8);
    }
#line 354 "make.module_dep_file.m"
    {
#line 354 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 355 "make.module_dep_file.m"
    {
#line 355 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_22_22);
    }
#line 356 "make.module_dep_file.m"
    {
#line 356 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_126_126 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 357 "make.module_dep_file.m"
    {
#line 357 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_26_26);
    }
#line 359 "make.module_dep_file.m"
    {
#line 359 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
#line 8835 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_438_438 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_152_152 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_177_177 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 360 "make.module_dep_file.m"
    {
#line 360 "make.module_dep_file.m"
      make__module_dep_file__V_30_30 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_34_34);
    }
#line 360 "make.module_dep_file.m"
    {
#line 360 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_30_30, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[0]);
    }
#line 362 "make.module_dep_file.m"
    {
#line 362 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 363 "make.module_dep_file.m"
    {
#line 363 "make.module_dep_file.m"
      make__module_dep_file__V_37_37 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_41_41);
    }
#line 363 "make.module_dep_file.m"
    {
#line 363 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_37_37, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[1]);
    }
#line 365 "make.module_dep_file.m"
    {
#line 365 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 366 "make.module_dep_file.m"
    {
#line 366 "make.module_dep_file.m"
      make__module_dep_file__V_44_44 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_48_48);
    }
#line 366 "make.module_dep_file.m"
    {
#line 366 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_44_44, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[2]);
    }
#line 368 "make.module_dep_file.m"
    {
#line 368 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 369 "make.module_dep_file.m"
    {
#line 369 "make.module_dep_file.m"
      make__module_dep_file__V_51_51 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_55_55);
    }
#line 369 "make.module_dep_file.m"
    {
#line 369 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_51_51, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[3]);
    }
#line 371 "make.module_dep_file.m"
    {
#line 371 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_281_281 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 372 "make.module_dep_file.m"
    {
#line 372 "make.module_dep_file.m"
      make__module_dep_file__V_58_58 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_62_62);
    }
#line 372 "make.module_dep_file.m"
    {
#line 372 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_438_438, make__module_dep_file__V_58_58, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[4]);
    }
#line 374 "make.module_dep_file.m"
    {
#line 374 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_282_282 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_307_307 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 375 "make.module_dep_file.m"
    {
#line 375 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_65_65, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[5]);
    }
#line 377 "make.module_dep_file.m"
    {
#line 377 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_308_308 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_333_333 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 380 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 380 "make.module_dep_file.m"
      {
#line 380 "make.module_dep_file.m"
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 0)));
#line 382 "make.module_dep_file.m"
        {
#line 382 "make.module_dep_file.m"
          make__module_dep_file__ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__LangList_9);
        }
#line 380 "make.module_dep_file.m"
      }
#line 380 "make.module_dep_file.m"
    else
#line 384 "make.module_dep_file.m"
      make__module_dep_file__ForeignLanguages_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "make.module_dep_file.m"
    {
#line 386 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_10, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[6]);
    }
#line 388 "make.module_dep_file.m"
    {
#line 388 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_334_334 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__ForeignImportModules_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_359_359 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 390 "make.module_dep_file.m"
    {
#line 390 "make.module_dep_file.m"
      make__module_dep_file__ForeignImportModuleInfos_12 = parse_tree__prog_data__get_all_foreign_import_module_infos_1_f_0(make__module_dep_file__ForeignImportModules_11);
    }
#line 9388 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_464_464 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 392 "make.module_dep_file.m"
    {
#line 392 "make.module_dep_file.m"
      make__module_dep_file__V_77_77 = mercury__set__to_sorted_list_1_f_0(make__module_dep_file__TypeCtorInfo_464_464, make__module_dep_file__ForeignImportModuleInfos_12);
    }
#line 392 "make.module_dep_file.m"
    {
#line 392 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_464_464, make__module_dep_file__V_77_77, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[7]);
    }
#line 394 "make.module_dep_file.m"
    {
#line 394 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_360_360 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_379_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_380_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 395 "make.module_dep_file.m"
    make__module_dep_file__V_385_385 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 395 "make.module_dep_file.m"
    {
#line 395 "make.module_dep_file.m"
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_83_83, &make__module_dep_file__ContainsForeignExportStr_13);
    }
#line 398 "make.module_dep_file.m"
    {
#line 398 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_13);
    }
#line 399 "make.module_dep_file.m"
    {
#line 399 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_386_386 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 400 "make.module_dep_file.m"
    make__module_dep_file__V_411_411 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 400 "make.module_dep_file.m"
    {
#line 400 "make.module_dep_file.m"
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_87_87, &make__module_dep_file__HasMainStr_14);
    }
#line 401 "make.module_dep_file.m"
    {
#line 401 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_14);
    }
#line 404 "make.module_dep_file.m"
#line 404 "make.module_dep_file.m"
    switch (make__module_dep_file__Version_6) {
#line 404 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 403 "make.module_dep_file.m"
        {
#line 403 "make.module_dep_file.m"
        }
#line 404 "make.module_dep_file.m"
        break;
#line 404 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 405 "make.module_dep_file.m"
        {
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_468_468;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_91_91;
#line 405 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_95_95;
#line 407 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_412_412;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_413_413;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_414_414;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_415_415;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_416_416;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_417_417;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_418_418;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_419_419;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_420_420;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_421_421;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_422_422;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_423_423;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_424_424;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_425_425;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_426_426;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_427_427;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_428_428;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_429_429;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_430_430;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_431_431;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_432_432;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_433_433;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_434_434;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_435_435;
#line 407 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_436_436;
#line 407 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_437_437;

#line 406 "make.module_dep_file.m"
          {
#line 406 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          }
#line 9619 "make.module_dep_file.c"
          make__module_dep_file__TypeCtorInfo_468_468 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_412_412 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 407 "make.module_dep_file.m"
          make__module_dep_file__V_437_437 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 407 "make.module_dep_file.m"
          {
#line 407 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_468_468, make__module_dep_file__V_95_95);
          }
#line 407 "make.module_dep_file.m"
          {
#line 407 "make.module_dep_file.m"
            mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_468_468, make__module_dep_file__V_91_91, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[8]);
          }
#line 409 "make.module_dep_file.m"
          {
#line 409 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
#line 405 "make.module_dep_file.m"
        }
#line 404 "make.module_dep_file.m"
        break;
#line 404 "make.module_dep_file.m"
    }
#line 411 "make.module_dep_file.m"
    {
#line 411 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
#line 411 "make.module_dep_file.m"
      return;
    }
#line 350 "make.module_dep_file.m"
  }
#line 347 "make.module_dep_file.m"
}

#line 313 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 313 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImports_6)
#line 313 "make.module_dep_file.m"
{
#line 316 "make.module_dep_file.m"
  {
#line 316 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
#line 316 "make.module_dep_file.m"
    MR_String make__module_dep_file__ProgDepFile_9;
#line 316 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ProgDepResult_10;
#line 316 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_19_19;
#line 317 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
#line 317 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
#line 317 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));

#line 319 "make.module_dep_file.m"
    {
#line 319 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = make__make_module_dep_file_extension_0_f_0();
    }
#line 318 "make.module_dep_file.m"
    {
#line 318 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_19_19, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
#line 320 "make.module_dep_file.m"
    {
#line 320 "make.module_dep_file.m"
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
#line 328 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 329 "make.module_dep_file.m"
      {
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 329 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_16;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_23_23;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_27_27;
#line 329 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_29_29;

#line 330 "make.module_dep_file.m"
        {
#line 330 "make.module_dep_file.m"
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_15, &make__module_dep_file__Msg_16);
        }
#line 332 "make.module_dep_file.m"
        {
#line 332 "make.module_dep_file.m"
          make__module_dep_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 0) = ((MR_Box) (make__module_dep_file__Msg_16));
#line 332 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[6])));
#line 332 "make.module_dep_file.m"
        }
#line 331 "make.module_dep_file.m"
        {
#line 331 "make.module_dep_file.m"
          make__module_dep_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 0) = ((MR_Box) ((MR_String) " for output: "));
#line 331 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__V_29_29));
#line 331 "make.module_dep_file.m"
        }
#line 331 "make.module_dep_file.m"
        {
#line 331 "make.module_dep_file.m"
          make__module_dep_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
#line 331 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 1) = ((MR_Box) (make__module_dep_file__V_27_27));
#line 331 "make.module_dep_file.m"
        }
#line 331 "make.module_dep_file.m"
        {
#line 331 "make.module_dep_file.m"
          make__module_dep_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
#line 331 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 1) = ((MR_Box) (make__module_dep_file__V_26_26));
#line 331 "make.module_dep_file.m"
        }
#line 331 "make.module_dep_file.m"
        {
#line 331 "make.module_dep_file.m"
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_23_23);
        }
#line 333 "make.module_dep_file.m"
        {
#line 333 "make.module_dep_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 333 "make.module_dep_file.m"
          return;
        }
#line 329 "make.module_dep_file.m"
      }
#line 328 "make.module_dep_file.m"
    else
#line 322 "make.module_dep_file.m"
      {
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_12;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Version_13;
#line 322 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignIncludeFilesCord_67;
#line 340 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_68_68;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_74_74;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_75_75;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_76_76;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_77_77;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_78_78;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_79_79;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_80_80;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_81_81;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_82_82;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_83_83;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_84_84;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_85_85;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_86_86;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_87_87;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_88_88;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_89_89;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_90_90;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_91_91;
#line 340 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_92_92;
#line 340 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_93_93;
#line 326 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_14_14;

#line 323 "make.module_dep_file.m"
        {
#line 323 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 0)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 1)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 2)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 3)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 4)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 5)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 6)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 7)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 8)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 9)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 10)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 11)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 12)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__ForeignIncludeFilesCord_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 13)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 14)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 15)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 16)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 17)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 18)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 19)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 20)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 21)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 22)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 23)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 24)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 25)));
#line 340 "make.module_dep_file.m"
        make__module_dep_file__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_6, (MR_Integer) 26)));
#line 341 "make.module_dep_file.m"
        {
#line 341 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludeFilesCord_67);
        }
#line 343 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 342 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 0;
#line 343 "make.module_dep_file.m"
        else
#line 344 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 1;
#line 325 "make.module_dep_file.m"
        {
#line 325 "make.module_dep_file.m"
          make__module_dep_file__do_write_module_dep_file_2_4_p_0(make__module_dep_file__ModuleAndImports_6, make__module_dep_file__Version_13);
        }
#line 326 "make.module_dep_file.m"
        {
#line 326 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_14_14);
        }
#line 327 "make.module_dep_file.m"
        {
#line 327 "make.module_dep_file.m"
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
#line 327 "make.module_dep_file.m"
          return;
        }
#line 322 "make.module_dep_file.m"
      }
#line 316 "make.module_dep_file.m"
  }
#line 313 "make.module_dep_file.m"
}

#line 292 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(
#line 292 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 292 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_2)
#line 292 "make.module_dep_file.m"
{
#line 295 "make.module_dep_file.m"
  {
#line 295 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 295 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "make.module_dep_file.m"
    else
#line 297 "make.module_dep_file.m"
      {
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcItemBlock_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcItemBlocks_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawItemBlock_5;
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawItemBlocks_6;
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SrcSection_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 0)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__SectionContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 1)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Incls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 2)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Avails_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 3)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 4)));
#line 297 "make.module_dep_file.m"
        MR_Word make__module_dep_file__RawSection_12;

#line 303 "make.module_dep_file.m"
#line 303 "make.module_dep_file.m"
        switch (make__module_dep_file__SrcSection_7) {
#line 303 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 303 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 303 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 307 "make.module_dep_file.m"
            make__module_dep_file__RawSection_12 = (MR_Integer) 1;
#line 303 "make.module_dep_file.m"
            break;
#line 303 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 302 "make.module_dep_file.m"
            make__module_dep_file__RawSection_12 = (MR_Integer) 0;
#line 303 "make.module_dep_file.m"
            break;
#line 303 "make.module_dep_file.m"
        }
#line 309 "make.module_dep_file.m"
        {
#line 309 "make.module_dep_file.m"
          make__module_dep_file__RawItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 0) = ((MR_Box) (make__module_dep_file__RawSection_12));
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 1) = ((MR_Box) (make__module_dep_file__SectionContext_8));
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 2) = ((MR_Box) (make__module_dep_file__Incls_9));
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 3) = ((MR_Box) (make__module_dep_file__Avails_10));
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 4) = ((MR_Box) (make__module_dep_file__Items_11));
#line 309 "make.module_dep_file.m"
        }
#line 311 "make.module_dep_file.m"
        {
#line 311 "make.module_dep_file.m"
          make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_4, &make__module_dep_file__RawItemBlocks_6);
        }
#line 297 "make.module_dep_file.m"
        {
#line 297 "make.module_dep_file.m"
          MR_Word base;
#line 297 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__2_2 = base;
#line 297 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__RawItemBlock_5));
#line 297 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (make__module_dep_file__RawItemBlocks_6));
#line 297 "make.module_dep_file.m"
        }
#line 297 "make.module_dep_file.m"
      }
#line 295 "make.module_dep_file.m"
  }
#line 292 "make.module_dep_file.m"
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
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34,
#line 161 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 161 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36)
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
    MR_Word make__module_dep_file__ModuleDepMap2_31;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_43_43;
#line 166 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_45_45;
#line 166 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_47_47;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_51_51;
#line 166 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 262 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_236_236;
#line 262 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 265 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeModuleAndImportsPrime_32;
#line 263 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_MaybeModuleAndImportsPrime_32;

#line 173 "make.module_dep_file.m"
    {
#line 173 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      make__module_dep_file__V_45_45 = mercury__dir__this_directory_0_f_0();
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      make__module_dep_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 0) = ((MR_Box) (make__module_dep_file__V_45_45));
#line 175 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "make.module_dep_file.m"
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_42_42, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_35, &make__module_dep_file__STATE_VARIABLE_Info_43_43);
    }
#line 179 "make.module_dep_file.m"
    {
#line 179 "make.module_dep_file.m"
      make__module_dep_file__V_47_47 = make__make_module_dep_file_extension_0_f_0();
    }
#line 178 "make.module_dep_file.m"
    {
#line 178 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_47_47, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
#line 180 "make.module_dep_file.m"
    {
#line 180 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 650, &make__module_dep_file__SearchDirs_18);
    }
#line 182 "make.module_dep_file.m"
    {
#line 182 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_43_43, &make__module_dep_file__STATE_VARIABLE_Info_51_51);
    }
#line 200 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
#line 254 "make.module_dep_file.m"
#line 254 "make.module_dep_file.m"
      switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 254 "make.module_dep_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 254 "make.module_dep_file.m"
        case (MR_Integer) 1:
#line 255 "make.module_dep_file.m"
          {
#line 255 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 255 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap1_30;
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 256 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_197_197 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 256 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_200_200;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_201_201;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_202_202;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_203_203;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_204_204;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_205_205;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_206_206;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_207_207;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_208_208;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_209_209;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_210_210;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_211_211;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_212_212;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_213_213;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_214_214;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_215_215;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_216_216;
#line 259 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_217_217;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_218_218;
#line 259 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_199_199;

#line 258 "make.module_dep_file.m"
            {
#line 258 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_29, &make__module_dep_file__ModuleDepMap1_30);
            }
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 259 "make.module_dep_file.m"
            make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 259 "make.module_dep_file.m"
            {
#line 259 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_30));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (make__module_dep_file__V_200_200));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (make__module_dep_file__V_201_201));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (make__module_dep_file__V_202_202));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (make__module_dep_file__V_203_203));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (make__module_dep_file__V_204_204));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (make__module_dep_file__V_205_205));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (make__module_dep_file__V_206_206));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 8) = ((MR_Box) (make__module_dep_file__V_207_207));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 9) = ((MR_Box) (make__module_dep_file__V_208_208));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 10) = ((MR_Box) (make__module_dep_file__V_209_209));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 11) = ((MR_Box) (make__module_dep_file__V_210_210));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 12) = ((MR_Box) (make__module_dep_file__V_211_211));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 13) = ((MR_Box) (make__module_dep_file__V_212_212));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 14) = ((MR_Box) (make__module_dep_file__V_213_213));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 15) = ((MR_Box) (make__module_dep_file__V_214_214));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 16) = ((MR_Box) (make__module_dep_file__V_215_215));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 17) = ((MR_Box) (make__module_dep_file__V_216_216));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 18) = ((MR_Box) (make__module_dep_file__V_217_217));
#line 259 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 19) = ((MR_Box) (make__module_dep_file__V_218_218));
#line 259 "make.module_dep_file.m"
            }
#line 255 "make.module_dep_file.m"
          }
#line 254 "make.module_dep_file.m"
          break;
#line 254 "make.module_dep_file.m"
        case (MR_Integer) 0:
#line 252 "make.module_dep_file.m"
          {
#line 252 "make.module_dep_file.m"
            make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
          }
#line 254 "make.module_dep_file.m"
          break;
#line 254 "make.module_dep_file.m"
      }
#line 200 "make.module_dep_file.m"
    else
#line 200 "make.module_dep_file.m"
      {
#line 200 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

#line 200 "make.module_dep_file.m"
        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
#line 201 "make.module_dep_file.m"
          {
#line 201 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 201 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_59_59;
#line 201 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_91_91;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_92_92;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_93_93;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_94_94;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_95_95;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_96_96;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_97_97;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_98_98;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_99_99;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_100_100;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_101_101;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_102_102;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_103_103;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_104_104;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_105_105;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_106_106;
#line 211 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_107_107;
#line 211 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_108_108;
#line 211 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv0_STATE_VARIABLE_MaybeModuleAndImports_60_60;
#line 241 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImports0_23;
#line 214 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_61_61;
#line 214 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_269_269;
#line 215 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_109_109;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_110_110;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_113_113;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_114_114;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_115_115;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_116_116;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_117_117;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_118_118;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_119_119;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_120_120;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_121_121;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_122_122;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_123_123;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_124_124;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_125_125;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_126_126;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_127_127;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_128_128;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_129_129;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_130_130;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_131_131;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_132_132;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_133_133;
#line 215 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_134_134;

#line 203 "make.module_dep_file.m"
            {
#line 203 "make.module_dep_file.m"
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_57_57);
            }
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 8)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 9)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 10)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 11)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 12)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 13)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 14)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 15)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 16)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 17)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 18)));
#line 211 "make.module_dep_file.m"
            make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 19)));
#line 211 "make.module_dep_file.m"
            {
#line 211 "make.module_dep_file.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_59_59, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_STATE_VARIABLE_MaybeModuleAndImports_60_60);
            }
#line 211 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60 = ((MR_Word) make__module_dep_file__conv0_STATE_VARIABLE_MaybeModuleAndImports_60_60);
#line 214 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 214 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 214 "make.module_dep_file.m"
              {
#line 214 "make.module_dep_file.m"
                make__module_dep_file__ModuleAndImports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_60_60, (MR_Integer) 0)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 0)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
#line 215 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));
#line 215 "make.module_dep_file.m"
                {
#line 215 "make.module_dep_file.m"
                  make__module_dep_file__V_269_269 = mercury__dir__this_directory_0_f_0();
                }
#line 215 "make.module_dep_file.m"
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_61_61, make__module_dep_file__V_269_269) == 0);
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
                MR_Word make__module_dep_file__V_62_62;
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 217 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_65_65;
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 1)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 2)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 3)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 4)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 5)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 6)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 7)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 8)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 9)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 10)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 11)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 12)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 13)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 14)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 15)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 16)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 17)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 18)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 19)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 20)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 21)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 22)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 23)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 24)));
#line 217 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 25)));
#line 217 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_160_160 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_23, (MR_Integer) 26)));

#line 218 "make.module_dep_file.m"
                {
#line 218 "make.module_dep_file.m"
                  make__module_dep_file__V_65_65 = mercury__dir__this_directory_0_f_0();
                }
#line 218 "make.module_dep_file.m"
                {
#line 218 "make.module_dep_file.m"
                  make__module_dep_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 0) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 218 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "make.module_dep_file.m"
                }
#line 218 "make.module_dep_file.m"
                {
#line 218 "make.module_dep_file.m"
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_62_62, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_57_57, &make__module_dep_file__STATE_VARIABLE_Info_63_63);
                }
#line 231 "make.module_dep_file.m"
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
#line 232 "make.module_dep_file.m"
                  {
#line 232 "make.module_dep_file.m"
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_75_75;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_161_161;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_162_162;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_163_163;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_164_164;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_165_165;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_166_166;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_167_167;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_168_168;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_169_169;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_170_170;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_171_171;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_172_172;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_173_173;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_174_174;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_175_175;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_176_176;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_177_177;
#line 238 "make.module_dep_file.m"
                    MR_Integer make__module_dep_file__V_178_178;
#line 238 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_179_179;

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
                    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 0)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 1)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 2)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 3)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 4)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 5)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 6)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 7)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 8)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 9)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 10)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 11)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 12)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 13)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 14)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 15)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 16)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 17)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_178_178 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 18)));
#line 238 "make.module_dep_file.m"
                    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 19)));
#line 238 "make.module_dep_file.m"
                    {
#line 238 "make.module_dep_file.m"
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_75_75);
                    }
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
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
                        MR_Word make__module_dep_file__V_270_270;

#line 224 "make.module_dep_file.m"
                        {
#line 224 "make.module_dep_file.m"
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_270_270, make__module_dep_file__V_271_271, make__module_dep_file__SourceFileTimestamp1_26);
                        }
#line 224 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_270_270);
#line 224 "make.module_dep_file.m"
                      }
#line 228 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 227 "make.module_dep_file.m"
                      make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 228 "make.module_dep_file.m"
                    else
#line 229 "make.module_dep_file.m"
                      {
#line 229 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_63_63, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
                      }
#line 221 "make.module_dep_file.m"
                  }
#line 217 "make.module_dep_file.m"
              }
#line 241 "make.module_dep_file.m"
            else
#line 242 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_57_57;
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
                MR_Word make__module_dep_file__V_268_268;

#line 189 "make.module_dep_file.m"
                {
#line 189 "make.module_dep_file.m"
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_268_268, make__module_dep_file__V_271_271, make__module_dep_file__SourceFileTimestamp_20);
                }
#line 189 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_268_268);
#line 189 "make.module_dep_file.m"
              }
#line 197 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 195 "make.module_dep_file.m"
              {
#line 195 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 197 "make.module_dep_file.m"
            else
#line 198 "make.module_dep_file.m"
              {
#line 198 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 185 "make.module_dep_file.m"
          }
#line 200 "make.module_dep_file.m"
      }
#line 262 "make.module_dep_file.m"
    make__module_dep_file__ModuleDepMap2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 262 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 263 "make.module_dep_file.m"
    {
#line 263 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_31, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_MaybeModuleAndImportsPrime_32);
    }
#line 263 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 263 "make.module_dep_file.m"
      {
#line 263 "make.module_dep_file.m"
        make__module_dep_file__MaybeModuleAndImportsPrime_32 = ((MR_Word) make__module_dep_file__conv1_MaybeModuleAndImportsPrime_32);
#line 263 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 263 "make.module_dep_file.m"
      }
#line 265 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 264 "make.module_dep_file.m"
      {
#line 264 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34 = make__module_dep_file__MaybeModuleAndImportsPrime_32;
#line 264 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_36 = make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 264 "make.module_dep_file.m"
      }
#line 265 "make.module_dep_file.m"
    else
#line 266 "make.module_dep_file.m"
      {
#line 266 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepMap_33;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_239_239;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_240_240;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_241_241;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_242_242;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_243_243;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_244_244;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_245_245;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_246_246;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_247_247;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_248_248;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_249_249;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_250_250;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_251_251;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_252_252;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_253_253;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_254_254;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_255_255;
#line 268 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_256_256;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_257_257;
#line 268 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_238_238;

#line 266 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeModuleAndImports_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "make.module_dep_file.m"
        {
#line 267 "make.module_dep_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_31, &make__module_dep_file__ModuleDepMap_33);
        }
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 268 "make.module_dep_file.m"
        make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 268 "make.module_dep_file.m"
        {
#line 268 "make.module_dep_file.m"
          MR_Word base;
#line 268 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 268 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_36 = base;
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_33));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 268 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 268 "make.module_dep_file.m"
        }
#line 266 "make.module_dep_file.m"
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
  MR_Word make__module_dep_file__HeadVar__6_6,
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
          MR_Word make__module_dep_file__MaybeModuleAndImports_26;

#line 135 "make.module_dep_file.m"
          {
#line 135 "make.module_dep_file.m"
            make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeModuleAndImports_26, make__module_dep_file__HeadVar__6_6, make__module_dep_file__STATE_VARIABLE_Info_7);
          }
#line 140 "make.module_dep_file.m"
          if ((make__module_dep_file__MaybeModuleAndImports_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          MR_Word make__module_dep_file__V_18_18;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_19_19;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_34_34;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_35_35;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_36_36;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_37_37;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_38_38;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_39_39;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_40_40;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_41_41;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_42_42;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_43_43;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_44_44;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_45_45;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_46_46;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_47_47;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_48_48;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_49_49;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_50_50;
#line 131 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_51_51;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_52_52;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_54_54;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_55_55;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_56_56;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_57_57;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_58_58;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_59_59;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_60_60;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_61_61;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_62_62;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_63_63;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_64_64;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_65_65;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_66_66;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_67_67;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_68_68;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_69_69;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_70_70;
#line 131 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_71_71;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_72_72;
#line 131 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_53_53;

#line 131 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 131 "make.module_dep_file.m"
          {
#line 131 "make.module_dep_file.m"
            make__module_dep_file__V_19_19 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 131 "make.module_dep_file.m"
          make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 131 "make.module_dep_file.m"
          {
#line 131 "make.module_dep_file.m"
            MR_Word base;
#line 131 "make.module_dep_file.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 131 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_54_54));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_55_55));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_56_56));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_57_57));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_58_58));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_59_59));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_60_60));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_61_61));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_62_62));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_63_63));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_64_64));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_66_66));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_67_67));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 131 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_72_72));
#line 131 "make.module_dep_file.m"
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
#line 273 "make.module_dep_file.m"
  {
#line 273 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__AugCompUnit_8;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Specs_9;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_11;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleNameContext_12;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SrcItemBlocks_14;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RawItemBlocks_19;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RawCompUnit_20;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleAndImports_21;
#line 273 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_24_24;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 273 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Errors_10;
#line 277 "make.module_dep_file.m"
    MR_Word make__module_dep_file___ModuleVersionNumbers_13;
#line 277 "make.module_dep_file.m"
    MR_Word make__module_dep_file___DirectIntItemBlocksCord_15;
#line 277 "make.module_dep_file.m"
    MR_Word make__module_dep_file___IndirectIntItemBlocksCord_16;
#line 277 "make.module_dep_file.m"
    MR_Word make__module_dep_file___OptItemBlocksCord_17;
#line 277 "make.module_dep_file.m"
    MR_Word make__module_dep_file___IntForOptItemBlocksCord_18;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52;
#line 286 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53;
#line 286 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_54_54;

#line 275 "make.module_dep_file.m"
    {
#line 275 "make.module_dep_file.m"
      parse_tree__module_imports__module_and_imports_get_aug_comp_unit_4_p_0(make__module_dep_file__ModuleAndImports0_6, &make__module_dep_file__AugCompUnit_8, &make__module_dep_file__Specs_9, &make__module_dep_file___Errors_10);
    }
#line 277 "make.module_dep_file.m"
    make__module_dep_file__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 0)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file__ModuleNameContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 1)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file___ModuleVersionNumbers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 2)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file__SrcItemBlocks_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 3)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file___DirectIntItemBlocksCord_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 4)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file___IndirectIntItemBlocksCord_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 5)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file___OptItemBlocksCord_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 6)));
#line 277 "make.module_dep_file.m"
    make__module_dep_file___IntForOptItemBlocksCord_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__AugCompUnit_8, (MR_Integer) 7)));
#line 281 "make.module_dep_file.m"
    {
#line 281 "make.module_dep_file.m"
      make__module_dep_file__convert_back_to_raw_item_blocks_2_p_0(make__module_dep_file__SrcItemBlocks_14, &make__module_dep_file__RawItemBlocks_19);
    }
#line 282 "make.module_dep_file.m"
    {
#line 282 "make.module_dep_file.m"
      make__module_dep_file__RawCompUnit_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 0) = ((MR_Box) (make__module_dep_file__ModuleName_11));
#line 282 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 1) = ((MR_Box) (make__module_dep_file__ModuleNameContext_12));
#line 282 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__RawCompUnit_20, 2) = ((MR_Box) (make__module_dep_file__RawItemBlocks_19));
#line 282 "make.module_dep_file.m"
    }
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 0)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 1)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 2)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 3)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 4)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 5)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 6)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 7)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 8)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 9)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 10)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 11)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 12)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 13)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 14)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 15)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 16)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 17)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 18)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 19)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 20)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 21)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 22)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 23)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 24)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 25)));
#line 286 "make.module_dep_file.m"
    make__module_dep_file__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports0_6, (MR_Integer) 26)));
#line 289 "make.module_dep_file.m"
    {
#line 289 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 286 "make.module_dep_file.m"
    {
#line 286 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(make__module_dep_file__Globals_5, make__module_dep_file__V_24_24, make__module_dep_file__V_29_29, make__module_dep_file__V_38_38, make__module_dep_file__Specs_9, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnit_20, &make__module_dep_file__ModuleAndImports_21);
    }
#line 290 "make.module_dep_file.m"
    {
#line 290 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleAndImports_21);
#line 290 "make.module_dep_file.m"
      return;
    }
#line 273 "make.module_dep_file.m"
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
#line 12090 "make.module_dep_file.c"
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
