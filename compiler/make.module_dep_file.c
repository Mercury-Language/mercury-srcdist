/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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



#line 721 "make.module_dep_file.m"
struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
#line 721 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
#line 721 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
#line 724 "make.module_dep_file.m"
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 724 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
#line 724 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
#line 725 "make.module_dep_file.m"
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
#line 721 "make.module_dep_file.m"
};


#line 203 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 206 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 209 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

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
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

#line 230 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0;

#line 233 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1;

#line 236 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2];

#line 239 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2];

#line 242 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2];

#line 245 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 248 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 250 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2);

#line 253 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 256 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 258 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 260 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3);

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 904 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 897 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 897 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 293 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 296 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 298 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 300 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 311 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 314 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 316 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 318 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 329 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 332 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 334 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 336 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 347 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 350 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 352 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 354 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 926 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__926__1_6_p_0(
#line 926 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 926 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 926 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 926 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 914 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__914__1_6_p_0(
#line 914 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 914 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 914 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 914 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 880 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_7_p_0_1(
#line 880 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 880 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 880 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 880 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_7_p_0(
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 878 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_116,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_117,
#line 878 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_118);

#line 850 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__850__1_3_p_0(
#line 850 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_93,
#line 850 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_94,
#line 850 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_95);

#line 669 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__669__1_2_p_0(
#line 669 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 669 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7);

#line 376 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__376__1_3_p_0(
#line 376 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_448);

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

#line 933 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 926 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 926 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 926 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 922 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 922 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 922 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 922 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 922 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 914 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 914 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 914 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 910 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 910 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 910 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 910 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 910 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 897 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 897 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23);

#line 883 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
#line 883 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 883 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 883 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 883 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 883 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 872 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 867 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 867 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 867 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 867 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 867 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 867 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 867 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 869 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 869 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 869 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 869 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 850 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 850 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 850 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 850 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 850 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 847 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 847 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 847 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 847 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 845 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 845 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 845 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1);

#line 796 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 796 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 796 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 796 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 796 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45);

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 779 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 779 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 779 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 728 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 728 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 728 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6);

#line 724 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 724 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 725 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 725 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 724 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 724 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 724 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 724 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 721 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 721 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 721 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4);

#line 715 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 715 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 715 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4);

#line 708 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 708 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1);

#line 701 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 701 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 701 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

#line 692 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 692 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 692 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4);

#line 682 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 682 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 682 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4);

#line 676 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 676 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 676 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4);

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 671 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4);

#line 767 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 770 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 774 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 666 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 666 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 666 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4);

#line 654 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 654 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 654 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 654 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 649 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 649 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 649 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4);

#line 643 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 643 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 643 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4);

#line 627 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 627 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 519 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 519 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 519 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 519 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_71,
#line 519 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_72);

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 478 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 478 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29);

#line 469 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 469 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 459 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 459 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 445 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 445 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 445 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 429 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 429 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 429 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 419 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 419 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4);

#line 410 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 410 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4);

#line 405 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 405 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 405 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 405 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 405 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 390 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 390 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 390 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 390 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 390 "make.module_dep_file.m"
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
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "make.util.mh"
#include "make.util.mh"
#include "libs.process_util.mh"
#include "libs.process_util.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1671 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1679 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1687 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1695 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1703 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 1711 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0
  }
};

#line 1719 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1727 "make.module_dep_file.c"
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

#line 1742 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 1750 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

#line 1756 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

#line 1762 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1768 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1774 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1780 "make.module_dep_file.c"
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

#line 1797 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 1800 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1802 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2)
#line 1804 "make.module_dep_file.c"
{
#line 1806 "make.module_dep_file.c"
  {
#line 1808 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;

#line 1811 "make.module_dep_file.c"
    {
#line 1813 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
#line 1816 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 1818 "make.module_dep_file.c"
  }
#line 1820 "make.module_dep_file.c"
}

#line 1823 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 1826 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 1828 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 1830 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3)
#line 1832 "make.module_dep_file.c"
{
#line 1834 "make.module_dep_file.c"
  {
#line 1836 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

#line 1839 "make.module_dep_file.c"
    {
#line 1841 "make.module_dep_file.c"
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
#line 1844 "make.module_dep_file.c"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
#line 1846 "make.module_dep_file.c"
  }
#line 1848 "make.module_dep_file.c"
}

#line 904 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 904 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 904 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 904 "make.module_dep_file.m"
{
#line 904 "make.module_dep_file.m"
  {
#line 904 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 904 "make.module_dep_file.m"
    {
#line 904 "make.module_dep_file.m"
      parse_tree__write_module_interface_files__write_short_interface_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 904 "make.module_dep_file.m"
      return;
    }
#line 904 "make.module_dep_file.m"
  }
#line 904 "make.module_dep_file.m"
}

#line 897 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 897 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 897 "make.module_dep_file.m"
{
#line 902 "make.module_dep_file.m"
  {
#line 902 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 902 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 902 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_21;
#line 902 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 904 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28;
#line 906 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;

#line 903 "make.module_dep_file.m"
    {
#line 903 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 904 "make.module_dep_file.m"
    {
#line 904 "make.module_dep_file.m"
      make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 904 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
#line 904 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 904 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 904 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 904 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 904 "make.module_dep_file.m"
    }
#line 904 "make.module_dep_file.m"
    {
#line 904 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__RawCompUnits_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_28_28);
    }
#line 906 "make.module_dep_file.m"
    {
#line 906 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_20_20);
    }
#line 907 "make.module_dep_file.m"
    {
#line 907 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_21);
    }
#line 908 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_21 == (MR_Integer) 0);
#line 908 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 908 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 908 "make.module_dep_file.m"
    else
#line 908 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 902 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 902 "make.module_dep_file.m"
  }
#line 897 "make.module_dep_file.m"
}

#line 1968 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 1971 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 1973 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1975 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 1977 "make.module_dep_file.c"
{
#line 1979 "make.module_dep_file.c"
  {
#line 1981 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 1983 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 1985 "make.module_dep_file.c"
    MR_String make__module_dep_file__conv0_FactDep_4;

#line 1988 "make.module_dep_file.c"
    {
#line 1990 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
#line 1993 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 1995 "make.module_dep_file.c"
      {
#line 1997 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
#line 1999 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2001 "make.module_dep_file.c"
      }
#line 2003 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2005 "make.module_dep_file.c"
  }
#line 2007 "make.module_dep_file.c"
}

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 660 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 662 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 662 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 662 "make.module_dep_file.m"
              {
#line 2058 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 664 "make.module_dep_file.m"
                {
#line 664 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_4[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 662 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
  }
#line 660 "make.module_dep_file.m"
}

#line 2078 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 2081 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2083 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2085 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2087 "make.module_dep_file.c"
{
#line 2089 "make.module_dep_file.c"
  {
#line 2091 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2093 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2095 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_Lang_4;

#line 2098 "make.module_dep_file.c"
    {
#line 2100 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
#line 2103 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2105 "make.module_dep_file.c"
      {
#line 2107 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
#line 2109 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2111 "make.module_dep_file.c"
      }
#line 2113 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2115 "make.module_dep_file.c"
  }
#line 2117 "make.module_dep_file.c"
}

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 660 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 662 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 662 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 662 "make.module_dep_file.m"
              {
#line 2168 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 664 "make.module_dep_file.m"
                {
#line 664 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_4[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 662 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
  }
#line 660 "make.module_dep_file.m"
}

#line 2188 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 2191 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2193 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2195 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2197 "make.module_dep_file.c"
{
#line 2199 "make.module_dep_file.c"
  {
#line 2201 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2203 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2205 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

#line 2208 "make.module_dep_file.c"
    {
#line 2210 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
#line 2213 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2215 "make.module_dep_file.c"
      {
#line 2217 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
#line 2219 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2221 "make.module_dep_file.c"
      }
#line 2223 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2225 "make.module_dep_file.c"
  }
#line 2227 "make.module_dep_file.c"
}

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 660 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 662 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 662 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 662 "make.module_dep_file.m"
              {
#line 2278 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 664 "make.module_dep_file.m"
                {
#line 664 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[13], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 662 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
  }
#line 660 "make.module_dep_file.m"
}

#line 2298 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 2301 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2303 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2305 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2307 "make.module_dep_file.c"
{
#line 2309 "make.module_dep_file.c"
  {
#line 2311 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2313 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2315 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

#line 2318 "make.module_dep_file.c"
    {
#line 2320 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
#line 2323 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2325 "make.module_dep_file.c"
      {
#line 2327 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
#line 2329 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2331 "make.module_dep_file.c"
      }
#line 2333 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2335 "make.module_dep_file.c"
  }
#line 2337 "make.module_dep_file.c"
}

#line 660 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 660 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 660 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 660 "make.module_dep_file.m"
{
#line 662 "make.module_dep_file.m"
  {
#line 662 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 662 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 662 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 662 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 662 "make.module_dep_file.m"
              {
#line 2388 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 664 "make.module_dep_file.m"
                {
#line 664 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_4[12], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 662 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 662 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 662 "make.module_dep_file.m"
  }
#line 660 "make.module_dep_file.m"
}

#line 926 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__926__1_6_p_0(
#line 926 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 926 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 926 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 926 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 926 "make.module_dep_file.m"
{
#line 926 "make.module_dep_file.m"
  {
#line 926 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 926 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 930 "make.module_dep_file.m"
    {
#line 930 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 929 "make.module_dep_file.m"
    {
#line 929 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 50, make__module_dep_file__HeadVar__2_23, make__module_dep_file__V_29_29, make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 929 "make.module_dep_file.m"
      return;
    }
#line 926 "make.module_dep_file.m"
  }
#line 926 "make.module_dep_file.m"
}

#line 914 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__914__1_6_p_0(
#line 914 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 914 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 914 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 914 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 914 "make.module_dep_file.m"
{
#line 914 "make.module_dep_file.m"
  {
#line 914 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 917 "make.module_dep_file.m"
    {
#line 917 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, make__module_dep_file__HeadVar__2_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 917 "make.module_dep_file.m"
      return;
    }
#line 914 "make.module_dep_file.m"
  }
#line 914 "make.module_dep_file.m"
}

#line 880 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_7_p_0_1(
#line 880 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 880 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 880 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 880 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 880 "make.module_dep_file.m"
{
#line 880 "make.module_dep_file.m"
  {
#line 880 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 880 "make.module_dep_file.m"
    {
#line 880 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 880 "make.module_dep_file.m"
      return;
    }
#line 880 "make.module_dep_file.m"
  }
#line 880 "make.module_dep_file.m"
}

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_7_p_0(
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleAndImportList_34,
#line 878 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_116,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_117,
#line 878 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_118)
#line 878 "make.module_dep_file.m"
{
#line 878 "make.module_dep_file.m"
  {
#line 878 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 878 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 880 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_HeadVar__7_120;

#line 880 "make.module_dep_file.m"
    {
#line 880 "make.module_dep_file.m"
      make__module_dep_file__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 880 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_121_121, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 880 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_121_121, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_7_p_0_1));
#line 880 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_121_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 880 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_121_121, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 880 "make.module_dep_file.m"
    }
#line 880 "make.module_dep_file.m"
    {
#line 880 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_121_121, make__module_dep_file__ModuleAndImportList_34, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_HeadVar__7_120);
    }
#line 879 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__3_116 = (MR_Integer) 1;
#line 879 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__5_118 = make__module_dep_file__HeadVar__4_117;
#line 878 "make.module_dep_file.m"
  }
#line 878 "make.module_dep_file.m"
}

#line 850 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__850__1_3_p_0(
#line 850 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_93,
#line 850 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_94,
#line 850 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_95)
#line 850 "make.module_dep_file.m"
{
#line 850 "make.module_dep_file.m"
  {
#line 850 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 2)));
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_96_96;
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 852 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 0)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 1)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 3)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 4)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 5)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 6)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 7)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 8)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 9)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 10)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 11)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 12)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 13)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 14)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 15)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 16)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 17)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 18)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 19)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 20)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 21)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 22)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 23)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 24)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 25)));
#line 852 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_222_222 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_93, (MR_Integer) 26)));
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 853 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_240_240;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 853 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_260_260;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_261_261;
#line 853 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;

#line 854 "make.module_dep_file.m"
    {
#line 854 "make.module_dep_file.m"
      make__module_dep_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_96_96, 0) = ((MR_Box) (make__module_dep_file__HeadVar__1_93));
#line 854 "make.module_dep_file.m"
    }
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 0)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 1)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 2)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 3)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 4)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 5)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 6)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 7)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 8)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 9)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 10)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 11)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 12)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 13)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 14)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 15)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 16)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 17)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 18)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 19)));
#line 853 "make.module_dep_file.m"
    {
#line 853 "make.module_dep_file.m"
      make__module_dep_file__V_98_98 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_37)), make__module_dep_file__V_97_97, ((MR_Box) (make__module_dep_file__V_96_96)));
    }
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 0)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 1)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 2)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 3)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 4)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 5)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 6)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 7)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 8)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 9)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 10)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 11)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 12)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 13)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 14)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 15)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 16)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 17)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 18)));
#line 853 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_94, (MR_Integer) 19)));
#line 853 "make.module_dep_file.m"
    {
#line 853 "make.module_dep_file.m"
      MR_Word base;
#line 853 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 853 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__3_95 = base;
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_254_254));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_255_255));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_256_256));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_257_257));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_258_258));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_259_259));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_260_260));
#line 853 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_261_261));
#line 853 "make.module_dep_file.m"
    }
#line 850 "make.module_dep_file.m"
  }
#line 850 "make.module_dep_file.m"
}

#line 669 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__669__1_2_p_0(
#line 669 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 669 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7)
#line 669 "make.module_dep_file.m"
{
#line 669 "make.module_dep_file.m"
  {
#line 669 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 669 "make.module_dep_file.m"
    {
#line 669 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
#line 669 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 669 "make.module_dep_file.m"
  }
#line 669 "make.module_dep_file.m"
}

#line 376 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__376__1_3_p_0(
#line 376 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_448)
#line 376 "make.module_dep_file.m"
{
#line 376 "make.module_dep_file.m"
  {
#line 376 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_448)));
#line 376 "make.module_dep_file.m"
      return;
    }
#line 376 "make.module_dep_file.m"
  }
#line 376 "make.module_dep_file.m"
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
#line 2950 "make.module_dep_file.c"
  {
#line 2952 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

#line 2955 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2957 "make.module_dep_file.c"
  }
#line 73 "make.module_dep_file.m"
}

#line 933 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 933 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 933 "make.module_dep_file.m"
{
#line 936 "make.module_dep_file.m"
  {
#line 936 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 936 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "make.module_dep_file.m"
      {
#line 936 "make.module_dep_file.m"
      }
#line 936 "make.module_dep_file.m"
    else
#line 937 "make.module_dep_file.m"
      {
#line 937 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 938 "make.module_dep_file.m"
        {
#line 938 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 939 "make.module_dep_file.m"
        {
#line 939 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 940 "make.module_dep_file.m"
        {
#line 940 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 941 "make.module_dep_file.m"
        {
#line 941 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 942 "make.module_dep_file.m"
        {
#line 942 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 942 "make.module_dep_file.m"
          return;
        }
#line 937 "make.module_dep_file.m"
      }
#line 936 "make.module_dep_file.m"
  }
#line 933 "make.module_dep_file.m"
}

#line 926 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 926 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 926 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 926 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 926 "make.module_dep_file.m"
{
#line 926 "make.module_dep_file.m"
  {
#line 926 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 926 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 926 "make.module_dep_file.m"
    {
#line 926 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__926__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 926 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 926 "make.module_dep_file.m"
  }
#line 926 "make.module_dep_file.m"
}

#line 922 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 922 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 922 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 922 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 922 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 922 "make.module_dep_file.m"
{
#line 925 "make.module_dep_file.m"
  {
#line 925 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 925 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 926 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 926 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 926 "make.module_dep_file.m"
    {
#line 926 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 926 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 926 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 926 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 926 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 926 "make.module_dep_file.m"
    }
#line 926 "make.module_dep_file.m"
    {
#line 926 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 926 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 925 "make.module_dep_file.m"
  }
#line 922 "make.module_dep_file.m"
}

#line 914 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 914 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 914 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 914 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 914 "make.module_dep_file.m"
{
#line 914 "make.module_dep_file.m"
  {
#line 914 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 914 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__914__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 914 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 914 "make.module_dep_file.m"
  }
#line 914 "make.module_dep_file.m"
}

#line 910 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 910 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 910 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 910 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 910 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 910 "make.module_dep_file.m"
{
#line 913 "make.module_dep_file.m"
  {
#line 913 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 913 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 914 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 914 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 914 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 914 "make.module_dep_file.m"
    }
#line 914 "make.module_dep_file.m"
    {
#line 914 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 914 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 913 "make.module_dep_file.m"
  }
#line 910 "make.module_dep_file.m"
}

#line 897 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 897 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RawCompUnits_13,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 897 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 897 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 897 "make.module_dep_file.m"
{
#line 902 "make.module_dep_file.m"
  {
#line 902 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 902 "make.module_dep_file.m"
    {
#line 902 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__RawCompUnits_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 902 "make.module_dep_file.m"
      return;
    }
#line 902 "make.module_dep_file.m"
  }
#line 897 "make.module_dep_file.m"
}

#line 883 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_8(
#line 883 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 883 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 883 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 883 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 883 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 883 "make.module_dep_file.m"
{
#line 883 "make.module_dep_file.m"
  {
#line 883 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 883 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv12_STATE_VARIABLE_Info_13;

#line 883 "make.module_dep_file.m"
    {
#line 883 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv12_STATE_VARIABLE_Info_13);
    }
#line 883 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv12_STATE_VARIABLE_Info_13));
#line 883 "make.module_dep_file.m"
  }
#line 883 "make.module_dep_file.m"
}

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 878 "make.module_dep_file.m"
{
#line 878 "make.module_dep_file.m"
  {
#line 878 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 878 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv11_HeadVar__3_116;
#line 878 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_HeadVar__5_118;

#line 878 "make.module_dep_file.m"
    {
#line 878 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__878__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv11_HeadVar__3_116, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv10_HeadVar__5_118);
    }
#line 878 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv11_HeadVar__3_116));
#line 878 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv10_HeadVar__5_118));
#line 878 "make.module_dep_file.m"
  }
#line 878 "make.module_dep_file.m"
}

#line 872 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 872 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 872 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 872 "make.module_dep_file.m"
{
#line 872 "make.module_dep_file.m"
  {
#line 872 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 872 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv8_STATE_VARIABLE_Info_13;

#line 872 "make.module_dep_file.m"
    {
#line 872 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv8_STATE_VARIABLE_Info_13);
    }
#line 872 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv8_STATE_VARIABLE_Info_13));
#line 872 "make.module_dep_file.m"
  }
#line 872 "make.module_dep_file.m"
}

#line 867 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 867 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 867 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 867 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 867 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 867 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 867 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 867 "make.module_dep_file.m"
{
#line 867 "make.module_dep_file.m"
  {
#line 867 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 867 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_HeadVar__5_5;
#line 867 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__7_7;

#line 867 "make.module_dep_file.m"
    {
#line 867 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv7_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv6_HeadVar__7_7);
    }
#line 867 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv7_HeadVar__5_5));
#line 867 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__7_7));
#line 867 "make.module_dep_file.m"
  }
#line 867 "make.module_dep_file.m"
}

#line 869 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 869 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 869 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 869 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 869 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 869 "make.module_dep_file.m"
{
#line 869 "make.module_dep_file.m"
  {
#line 869 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 869 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_Succeeded_16;
#line 869 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_STATE_VARIABLE_Info_23;

#line 869 "make.module_dep_file.m"
    {
#line 869 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv4_STATE_VARIABLE_Info_23);
    }
#line 869 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_Succeeded_16));
#line 869 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv4_STATE_VARIABLE_Info_23));
#line 869 "make.module_dep_file.m"
  }
#line 869 "make.module_dep_file.m"
}

#line 850 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 850 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 850 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 850 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 850 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 850 "make.module_dep_file.m"
{
#line 850 "make.module_dep_file.m"
  {
#line 850 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__3_95;

#line 850 "make.module_dep_file.m"
    {
#line 850 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__850__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__3_95);
    }
#line 850 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__3_95));
#line 850 "make.module_dep_file.m"
  }
#line 850 "make.module_dep_file.m"
}

#line 847 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 847 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 847 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 847 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 847 "make.module_dep_file.m"
{
#line 847 "make.module_dep_file.m"
  {
#line 847 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 847 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__8_8;

#line 847 "make.module_dep_file.m"
    {
#line 847 "make.module_dep_file.m"
      parse_tree__module_imports__init_module_and_imports_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv1_HeadVar__8_8);
    }
#line 847 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__8_8));
#line 847 "make.module_dep_file.m"
  }
#line 847 "make.module_dep_file.m"
}

#line 845 "make.module_dep_file.m"
static MR_Box MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 845 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 845 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1)
#line 845 "make.module_dep_file.m"
{
#line 845 "make.module_dep_file.m"
  {
#line 845 "make.module_dep_file.m"
    MR_Box make__module_dep_file__wrapper_arg_2;
#line 845 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 845 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__2_2;

#line 845 "make.module_dep_file.m"
    {
#line 845 "make.module_dep_file.m"
      make__module_dep_file__conv0_HeadVar__2_2 = parse_tree__prog_item__raw_compilation_unit_project_name_1_f_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
    }
#line 845 "make.module_dep_file.m"
    make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_2));
#line 845 "make.module_dep_file.m"
    return make__module_dep_file__wrapper_arg_2;
#line 845 "make.module_dep_file.m"
  }
#line 845 "make.module_dep_file.m"
}

#line 796 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 796 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 796 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 796 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 796 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45)
#line 796 "make.module_dep_file.m"
{
#line 799 "make.module_dep_file.m"
  {
#line 799 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 799 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 799 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_48_48;

#line 800 "make.module_dep_file.m"
    {
#line 800 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_44, &make__module_dep_file__STATE_VARIABLE_Info_48_48);
    }
#line 893 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_45 = make__module_dep_file__STATE_VARIABLE_Info_48_48;
#line 893 "make.module_dep_file.m"
    else
#line 802 "make.module_dep_file.m"
      {
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_262_262;
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 802 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_14;
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ParseTreeSrc_16;
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_17;
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_18;
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FatalErrors_19;
#line 802 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 805 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_15_15;

#line 803 "make.module_dep_file.m"
        {
#line 803 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 805 "make.module_dep_file.m"
        {
#line 805 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_src_13_p_0(make__module_dep_file__Globals_7, (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 1, make__module_dep_file__ModuleName_8, &make__module_dep_file__SourceFileName_14, (MR_Word) &make__module_dep_file_scalar_common_7[2], &make__module_dep_file__V_15_15, &make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__Specs0_17, &make__module_dep_file__Errors_18);
        }
#line 809 "make.module_dep_file.m"
        {
#line 809 "make.module_dep_file.m"
          make__module_dep_file__V_57_57 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3590 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_262_262 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 809 "make.module_dep_file.m"
        {
#line 809 "make.module_dep_file.m"
          mercury__set__intersect_3_p_0(make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__Errors_18, make__module_dep_file__V_57_57, &make__module_dep_file__FatalErrors_19);
        }
#line 810 "make.module_dep_file.m"
        {
#line 810 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__set__is_non_empty_1_p_0(make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__FatalErrors_19);
        }
#line 835 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 811 "make.module_dep_file.m"
          {
#line 811 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_24;
#line 811 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_25;
#line 811 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_27;
#line 811 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_28;
#line 811 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_68_68;
#line 811 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_73_73;
#line 811 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_20_20;
#line 812 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_21;
#line 812 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_22;
#line 814 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_23_23;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_139_139;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_154_154;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 818 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_156_156;
#line 818 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_157_157;
#line 830 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_26_26;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_169_169;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_171_171;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_173_173;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 831 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_175_175;
#line 831 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_176_176;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_193_193;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194;
#line 834 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_195_195;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_196_196;
#line 834 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;

#line 811 "make.module_dep_file.m"
            {
#line 811 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_20_20);
            }
#line 812 "make.module_dep_file.m"
            {
#line 812 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_17, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_21, (MR_Integer) 0, &make__module_dep_file___NumErrors_22);
            }
#line 814 "make.module_dep_file.m"
            {
#line 814 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_23_23);
            }
#line 815 "make.module_dep_file.m"
            {
#line 815 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error: error reading file \140");
            }
#line 816 "make.module_dep_file.m"
            {
#line 816 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_14);
            }
#line 817 "make.module_dep_file.m"
            {
#line 817 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 11)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 12)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 13)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 14)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 15)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 16)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 17)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 18)));
#line 818 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 19)));
#line 818 "make.module_dep_file.m"
            {
#line 818 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_68_68);
            }
#line 824 "make.module_dep_file.m"
            {
#line 824 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 52, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_7[3]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_24);
            }
#line 826 "make.module_dep_file.m"
            {
#line 826 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_24, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_48_48, &make__module_dep_file__STATE_VARIABLE_Info_73_73);
            }
#line 828 "make.module_dep_file.m"
            {
#line 828 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_25);
            }
#line 830 "make.module_dep_file.m"
            {
#line 830 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_25, &make__module_dep_file__V_26_26);
            }
#line 831 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 831 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 833 "make.module_dep_file.m"
            {
#line 833 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_27, &make__module_dep_file__ModuleDepMap_28);
            }
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 0)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 1)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 2)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 3)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 4)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 5)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 6)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 7)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 8)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 9)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 10)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 11)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 12)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 13)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 14)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 15)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 16)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 17)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 18)));
#line 834 "make.module_dep_file.m"
            make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_73_73, (MR_Integer) 19)));
#line 834 "make.module_dep_file.m"
            {
#line 834 "make.module_dep_file.m"
              MR_Word base;
#line 834 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 834 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_45 = base;
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_28));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_178_178));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_195_195));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 834 "make.module_dep_file.m"
            }
#line 811 "make.module_dep_file.m"
          }
#line 835 "make.module_dep_file.m"
        else
#line 836 "make.module_dep_file.m"
          {
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_265_265;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_271_271;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_274_274;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__RawCompUnits_30;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_31;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_33;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleAndImportList_34;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_38;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_40;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_43;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_89_89;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_92_92;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_104_104;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_110_110;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_112_112;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_124_124;
#line 836 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_29_29;
#line 840 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_129;
#line 840 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_130;
#line 842 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_32_32;
#line 850 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_Info_92_92;
#line 878 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_42_42;
#line 878 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv13_STATE_VARIABLE_Info_112_112;

#line 836 "make.module_dep_file.m"
            {
#line 836 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_29_29);
            }
#line 837 "make.module_dep_file.m"
            {
#line 837 "make.module_dep_file.m"
              parse_tree__split_parse_tree_src__split_into_compilation_units_perform_checks_4_p_0(make__module_dep_file__ParseTreeSrc_16, &make__module_dep_file__RawCompUnits_30, make__module_dep_file__Specs0_17, &make__module_dep_file__Specs_31);
            }
#line 839 "make.module_dep_file.m"
            {
#line 839 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 840 "make.module_dep_file.m"
            {
#line 840 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_31, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_129, (MR_Integer) 0, &make__module_dep_file___NumErrors_130);
            }
#line 842 "make.module_dep_file.m"
            {
#line 842 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_32_32);
            }
#line 4055 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_265_265 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;
#line 845 "make.module_dep_file.m"
            {
#line 845 "make.module_dep_file.m"
              make__module_dep_file__SubModuleNames_33 = mercury__list__map_2_f_0(make__module_dep_file__TypeCtorInfo_265_265, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_4[10], make__module_dep_file__RawCompUnits_30);
            }
#line 847 "make.module_dep_file.m"
            {
#line 847 "make.module_dep_file.m"
              make__module_dep_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[1]));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 5) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 6) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_89_89, 8) = ((MR_Box) (make__module_dep_file__Errors_18));
#line 847 "make.module_dep_file.m"
            }
#line 4086 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_271_271 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 846 "make.module_dep_file.m"
            {
#line 846 "make.module_dep_file.m"
              mercury__list__map_3_p_0(make__module_dep_file__TypeCtorInfo_265_265, make__module_dep_file__TypeCtorInfo_271_271, make__module_dep_file__V_89_89, make__module_dep_file__RawCompUnits_30, &make__module_dep_file__ModuleAndImportList_34);
            }
#line 4093 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_274_274 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 850 "make.module_dep_file.m"
            {
#line 850 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_271_271, make__module_dep_file__TypeCtorInfo_274_274, (MR_Word) &make__module_dep_file_scalar_common_4[11], make__module_dep_file__ModuleAndImportList_34, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_48_48)), &make__module_dep_file__conv3_STATE_VARIABLE_Info_92_92);
            }
#line 850 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_92_92 = ((MR_Word) make__module_dep_file__conv3_STATE_VARIABLE_Info_92_92);
#line 860 "make.module_dep_file.m"
            {
#line 860 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, &make__module_dep_file__VeryVerbose_38);
            }
#line 861 "make.module_dep_file.m"
            {
#line 861 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__set__is_empty_1_p_0(make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__Errors_18);
            }
#line 874 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 863 "make.module_dep_file.m"
              {
#line 863 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_39;
#line 863 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_102_102;
#line 863 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 863 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_109_109;
#line 866 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv9_STATE_VARIABLE_Info_104_104;

#line 862 "make.module_dep_file.m"
                {
#line 862 "make.module_dep_file.m"
                  make__module_dep_file__Target_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 862 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 862 "make.module_dep_file.m"
                }
#line 864 "make.module_dep_file.m"
                {
#line 864 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_39);
                }
#line 869 "make.module_dep_file.m"
                {
#line 869 "make.module_dep_file.m"
                  make__module_dep_file__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_14));
#line 869 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 5) = ((MR_Box) (make__module_dep_file__RawCompUnits_30));
#line 869 "make.module_dep_file.m"
                }
#line 867 "make.module_dep_file.m"
                {
#line 867 "make.module_dep_file.m"
                  make__module_dep_file__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_2[1]));
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[7])));
#line 867 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_102_102, 6) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 867 "make.module_dep_file.m"
                }
#line 872 "make.module_dep_file.m"
                {
#line 872 "make.module_dep_file.m"
                  make__module_dep_file__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 872 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_103_103, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 872 "make.module_dep_file.m"
                }
#line 866 "make.module_dep_file.m"
                {
#line 866 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_274_274, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_102_102, make__module_dep_file__V_103_103, &make__module_dep_file__Succeeded_40, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_92_92)), &make__module_dep_file__conv9_STATE_VARIABLE_Info_104_104);
                }
#line 866 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_104_104 = ((MR_Word) make__module_dep_file__conv9_STATE_VARIABLE_Info_104_104);
#line 863 "make.module_dep_file.m"
              }
#line 874 "make.module_dep_file.m"
            else
#line 875 "make.module_dep_file.m"
              {
#line 875 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_40 = (MR_Integer) 0;
#line 875 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_104_104 = make__module_dep_file__STATE_VARIABLE_Info_92_92;
#line 875 "make.module_dep_file.m"
              }
#line 878 "make.module_dep_file.m"
            {
#line 878 "make.module_dep_file.m"
              make__module_dep_file__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 878 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 878 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 878 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 878 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 878 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_110_110, 4) = ((MR_Box) (make__module_dep_file__ModuleAndImportList_34));
#line 878 "make.module_dep_file.m"
            }
#line 883 "make.module_dep_file.m"
            {
#line 883 "make.module_dep_file.m"
              make__module_dep_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 883 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 883 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_8));
#line 883 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 883 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 883 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_111_111, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 883 "make.module_dep_file.m"
            }
#line 878 "make.module_dep_file.m"
            {
#line 878 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_274_274, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_110_110, make__module_dep_file__V_111_111, &make__module_dep_file__V_42_42, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_104_104)), &make__module_dep_file__conv13_STATE_VARIABLE_Info_112_112);
            }
#line 878 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_112_112 = ((MR_Word) make__module_dep_file__conv13_STATE_VARIABLE_Info_112_112);
#line 886 "make.module_dep_file.m"
            {
#line 886 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 886 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 886 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 886 "make.module_dep_file.m"
            }
#line 888 "make.module_dep_file.m"
            {
#line 888 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_43, (MR_Word) &make__module_dep_file_scalar_common_7[4], make__module_dep_file__Succeeded_40, make__module_dep_file__STATE_VARIABLE_Info_112_112, &make__module_dep_file__STATE_VARIABLE_Info_124_124);
            }
#line 891 "make.module_dep_file.m"
            {
#line 891 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_124_124, make__module_dep_file__STATE_VARIABLE_Info_45);
#line 891 "make.module_dep_file.m"
              return;
            }
#line 836 "make.module_dep_file.m"
          }
#line 802 "make.module_dep_file.m"
      }
#line 799 "make.module_dep_file.m"
  }
#line 796 "make.module_dep_file.m"
}

#line 779 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 779 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 779 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 779 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 779 "make.module_dep_file.m"
{
#line 782 "make.module_dep_file.m"
  {
#line 782 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 782 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepsFile_10;
#line 782 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;

#line 784 "make.module_dep_file.m"
    {
#line 784 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = make__make_module_dep_file_extension_0_f_0();
    }
#line 783 "make.module_dep_file.m"
    {
#line 783 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_6, make__module_dep_file__ModuleName_7, make__module_dep_file__V_13_13, (MR_Integer) 1, &make__module_dep_file__ModuleDepsFile_10);
    }
#line 786 "make.module_dep_file.m"
    {
#line 786 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading file \140");
    }
#line 787 "make.module_dep_file.m"
    {
#line 787 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ModuleDepsFile_10);
    }
#line 788 "make.module_dep_file.m"
    {
#line 788 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\', rebuilding: ");
    }
#line 789 "make.module_dep_file.m"
    {
#line 789 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__Msg_8);
    }
#line 790 "make.module_dep_file.m"
    {
#line 790 "make.module_dep_file.m"
      mercury__io__nl_2_p_0();
#line 790 "make.module_dep_file.m"
      return;
    }
#line 782 "make.module_dep_file.m"
  }
#line 779 "make.module_dep_file.m"
}

#line 728 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 728 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 728 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6)
#line 728 "make.module_dep_file.m"
{
#line 731 "make.module_dep_file.m"
  {
#line 731 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 731 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ResFileType_9;

#line 733 "make.module_dep_file.m"
    {
#line 733 "make.module_dep_file.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
#line 754 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
#line 755 "make.module_dep_file.m"
      {
#line 755 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
#line 755 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_15_15;
#line 755 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_16_16;
#line 755 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_18_18;

#line 756 "make.module_dep_file.m"
        {
#line 756 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
#line 756 "make.module_dep_file.m"
        {
#line 756 "make.module_dep_file.m"
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
#line 756 "make.module_dep_file.m"
        {
#line 756 "make.module_dep_file.m"
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
#line 756 "make.module_dep_file.m"
        {
#line 756 "make.module_dep_file.m"
          MR_Word base;
#line 756 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = base;
#line 756 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
#line 756 "make.module_dep_file.m"
        }
#line 755 "make.module_dep_file.m"
      }
#line 754 "make.module_dep_file.m"
    else
#line 735 "make.module_dep_file.m"
      {
#line 735 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

#line 741 "make.module_dep_file.m"
#line 741 "make.module_dep_file.m"
        switch (make__module_dep_file__FileType_10) {
#line 741 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 6:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 5:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 7:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 3:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 8:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 9:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 4:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 2:
#line 751 "make.module_dep_file.m"
            {
#line 751 "make.module_dep_file.m"
              MR_String make__module_dep_file__V_19_19;

#line 752 "make.module_dep_file.m"
              {
#line 752 "make.module_dep_file.m"
                make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
              }
#line 752 "make.module_dep_file.m"
              {
#line 752 "make.module_dep_file.m"
                MR_Word base;
#line 752 "make.module_dep_file.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 752 "make.module_dep_file.m"
                *make__module_dep_file__FileExists_6 = base;
#line 752 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 752 "make.module_dep_file.m"
              }
#line 751 "make.module_dep_file.m"
            }
#line 741 "make.module_dep_file.m"
            break;
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 741 "make.module_dep_file.m"
          case (MR_Integer) 10:
#line 740 "make.module_dep_file.m"
            *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "make.module_dep_file.m"
            break;
#line 741 "make.module_dep_file.m"
        }
#line 735 "make.module_dep_file.m"
      }
#line 731 "make.module_dep_file.m"
  }
#line 728 "make.module_dep_file.m"
}

#line 724 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 724 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 724 "make.module_dep_file.m"
{
#line 724 "make.module_dep_file.m"
  {
#line 724 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 724 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
#line 724 "make.module_dep_file.m"
  }
#line 724 "make.module_dep_file.m"
}

#line 725 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 725 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 725 "make.module_dep_file.m"
{
#line 725 "make.module_dep_file.m"
  {
#line 725 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 725 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
#line 725 "make.module_dep_file.m"
    {
#line 725 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
#line 725 "make.module_dep_file.m"
      return;
    }
#line 725 "make.module_dep_file.m"
  }
#line 725 "make.module_dep_file.m"
}

#line 724 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 724 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 724 "make.module_dep_file.m"
{
#line 724 "make.module_dep_file.m"
  {
#line 724 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 724 "make.module_dep_file.m"
    {
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_8_8;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_9_9;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_10_10;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_11_11;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_12_12;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_13_13;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_14_14;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_15_15;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_16_16;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_17_17;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_18_18;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_19_19;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_20_20;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_21_21;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_22_22;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_23_23;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_24_24;
#line 726 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_25_25;
#line 726 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_26_26;
#line 726 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv1_V_29_29;

#line 726 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
#line 726 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
#line 726 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4625 "make.module_dep_file.c"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 726 "make.module_dep_file.m"
      {
#line 726 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
#line 726 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 726 "make.module_dep_file.m"
        {
#line 726 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
#line 726 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 726 "make.module_dep_file.m"
        }
#line 724 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 724 "make.module_dep_file.m"
        {
#line 4646 "make.module_dep_file.c"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 726 "make.module_dep_file.m"
          {
#line 726 "make.module_dep_file.m"
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
#line 726 "make.module_dep_file.m"
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 726 "make.module_dep_file.m"
            {
#line 726 "make.module_dep_file.m"
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
#line 726 "make.module_dep_file.m"
              return;
            }
#line 724 "make.module_dep_file.m"
        }
#line 724 "make.module_dep_file.m"
    }
#line 724 "make.module_dep_file.m"
  }
#line 724 "make.module_dep_file.m"
}

#line 724 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 724 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 724 "make.module_dep_file.m"
{
#line 724 "make.module_dep_file.m"
  {
#line 724 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 724 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
#line 724 "make.module_dep_file.m"
      {
#line 4687 "make.module_dep_file.c"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 725 "make.module_dep_file.m"
        {
#line 725 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
#line 724 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
#line 724 "make.module_dep_file.m"
      }
#line 724 "make.module_dep_file.m"
    else
#line 724 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 724 "make.module_dep_file.m"
  }
#line 724 "make.module_dep_file.m"
}

#line 721 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 721 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 721 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4)
#line 721 "make.module_dep_file.m"
{
#line 721 "make.module_dep_file.m"
  {
#line 721 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

#line 721 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
#line 721 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
#line 724 "make.module_dep_file.m"
    {
#line 724 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
#line 724 "make.module_dep_file.m"
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 721 "make.module_dep_file.m"
  }
#line 721 "make.module_dep_file.m"
}

#line 715 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 715 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 715 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4)
#line 715 "make.module_dep_file.m"
{
#line 717 "make.module_dep_file.m"
  {
#line 717 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 717 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 717 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4779 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 718 "make.module_dep_file.m"
            {
#line 718 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 717 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 450 "make.module_dep_file.m"
              {
#line 450 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
#line 453 "make.module_dep_file.m"
                  {
#line 453 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
#line 453 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 453 "make.module_dep_file.m"
                  }
#line 450 "make.module_dep_file.m"
                else
#line 450 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
#line 450 "make.module_dep_file.m"
                  {
#line 450 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
#line 450 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 450 "make.module_dep_file.m"
                  }
#line 450 "make.module_dep_file.m"
                else
#line 450 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 450 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 717 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 717 "make.module_dep_file.m"
  }
#line 715 "make.module_dep_file.m"
}

#line 708 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 708 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1)
#line 708 "make.module_dep_file.m"
{
#line 710 "make.module_dep_file.m"
  {
#line 710 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 710 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HeadVar__2_2;

#line 710 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "make.module_dep_file.m"
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "make.module_dep_file.m"
    else
#line 711 "make.module_dep_file.m"
      {
#line 711 "make.module_dep_file.m"
        MR_Word make__module_dep_file__LangSet_4;

#line 713 "make.module_dep_file.m"
        {
#line 713 "make.module_dep_file.m"
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
#line 711 "make.module_dep_file.m"
        {
#line 711 "make.module_dep_file.m"
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
#line 711 "make.module_dep_file.m"
        }
#line 711 "make.module_dep_file.m"
      }
#line 710 "make.module_dep_file.m"
    return make__module_dep_file__HeadVar__2_2;
#line 710 "make.module_dep_file.m"
  }
#line 708 "make.module_dep_file.m"
}

#line 701 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 701 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 701 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
#line 701 "make.module_dep_file.m"
{
#line 704 "make.module_dep_file.m"
  {
#line 704 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 704 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 704 "make.module_dep_file.m"
    MR_String make__module_dep_file__Atom_5;
#line 704 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 704 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4918 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 705 "make.module_dep_file.m"
            {
#line 705 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 704 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 435 "make.module_dep_file.m"
              {
#line 435 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
#line 438 "make.module_dep_file.m"
                  {
#line 438 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
#line 438 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 438 "make.module_dep_file.m"
                  }
#line 435 "make.module_dep_file.m"
                else
#line 435 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
#line 435 "make.module_dep_file.m"
                  {
#line 435 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
#line 435 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 435 "make.module_dep_file.m"
                  }
#line 435 "make.module_dep_file.m"
                else
#line 435 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = MR_FALSE;
#line 435 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 704 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 704 "make.module_dep_file.m"
  }
#line 701 "make.module_dep_file.m"
}

#line 692 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 692 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 692 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4)
#line 692 "make.module_dep_file.m"
{
#line 695 "make.module_dep_file.m"
  {
#line 695 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_15_15;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FileNameTerm_6;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 695 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_8;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 695 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_14_14;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 695 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_23;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 695 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
#line 696 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
#line 695 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 695 "make.module_dep_file.m"
              {
#line 696 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 696 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
                  {
#line 696 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 696 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 696 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 696 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 696 "make.module_dep_file.m"
                      {
#line 696 "make.module_dep_file.m"
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 696 "make.module_dep_file.m"
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5062 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 696 "make.module_dep_file.m"
                        {
#line 696 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
#line 695 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 695 "make.module_dep_file.m"
                          {
#line 652 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
                              {
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 695 "make.module_dep_file.m"
                                  {
#line 652 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
                                      {
#line 652 "make.module_dep_file.m"
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_27_27, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
                                        {
#line 680 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
#line 695 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 695 "make.module_dep_file.m"
                                          {
#line 652 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
                                              {
#line 652 "make.module_dep_file.m"
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
#line 652 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 695 "make.module_dep_file.m"
                                                  {
#line 652 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
                                                      {
#line 652 "make.module_dep_file.m"
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_32_32, (MR_Integer) 1)));
#line 699 "make.module_dep_file.m"
                                                        {
#line 699 "make.module_dep_file.m"
                                                          MR_Word base;
#line 699 "make.module_dep_file.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 699 "make.module_dep_file.m"
                                                          *make__module_dep_file__ForeignInclude_4 = base;
#line 699 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 699 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
#line 699 "make.module_dep_file.m"
                                                        }
#line 699 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = MR_TRUE;
#line 652 "make.module_dep_file.m"
                                                      }
#line 695 "make.module_dep_file.m"
                                                  }
#line 652 "make.module_dep_file.m"
                                              }
#line 695 "make.module_dep_file.m"
                                          }
#line 652 "make.module_dep_file.m"
                                      }
#line 695 "make.module_dep_file.m"
                                  }
#line 652 "make.module_dep_file.m"
                              }
#line 695 "make.module_dep_file.m"
                          }
#line 696 "make.module_dep_file.m"
                      }
#line 696 "make.module_dep_file.m"
                  }
#line 695 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 695 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 695 "make.module_dep_file.m"
  }
#line 692 "make.module_dep_file.m"
}

#line 682 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 682 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 682 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4)
#line 682 "make.module_dep_file.m"
{
#line 685 "make.module_dep_file.m"
  {
#line 685 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_14_14;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_17_17;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_8;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;
#line 685 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_25;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 685 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_22_22, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_15_15) == 0);
#line 685 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
              {
#line 686 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 686 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 686 "make.module_dep_file.m"
                  {
#line 686 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 686 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 686 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 686 "make.module_dep_file.m"
                      {
#line 686 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 686 "make.module_dep_file.m"
                        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5275 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_17_17 = (MR_Word) &make__module_dep_file_scalar_common_1[5];
#line 686 "make.module_dep_file.m"
                        {
#line 686 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_16_16)));
                        }
#line 685 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
                          {
#line 652 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
                              {
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 652 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
                                  {
#line 652 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_29_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_29_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
                                      {
#line 652 "make.module_dep_file.m"
                                        make__module_dep_file__String_25 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_29_29, (MR_Integer) 1)));
#line 680 "make.module_dep_file.m"
                                        {
#line 680 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_25, &make__module_dep_file__Language_7);
                                        }
#line 685 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
                                          {
#line 5321 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 688 "make.module_dep_file.m"
                                            {
#line 688 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_14_14, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
#line 685 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 685 "make.module_dep_file.m"
                                              {
#line 690 "make.module_dep_file.m"
                                                {
#line 690 "make.module_dep_file.m"
                                                  make__module_dep_file__V_13_13 = mercury__term__context_init_0_f_0();
                                                }
#line 689 "make.module_dep_file.m"
                                                {
#line 689 "make.module_dep_file.m"
                                                  MR_Word base;
#line 689 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 689 "make.module_dep_file.m"
                                                  *make__module_dep_file__ForeignImport_4 = base;
#line 689 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 689 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
#line 689 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_13_13));
#line 689 "make.module_dep_file.m"
                                                }
#line 689 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 685 "make.module_dep_file.m"
                                              }
#line 685 "make.module_dep_file.m"
                                          }
#line 652 "make.module_dep_file.m"
                                      }
#line 685 "make.module_dep_file.m"
                                  }
#line 652 "make.module_dep_file.m"
                              }
#line 685 "make.module_dep_file.m"
                          }
#line 686 "make.module_dep_file.m"
                      }
#line 686 "make.module_dep_file.m"
                  }
#line 685 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 685 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 685 "make.module_dep_file.m"
  }
#line 682 "make.module_dep_file.m"
}

#line 676 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 676 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 676 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4)
#line 676 "make.module_dep_file.m"
{
#line 678 "make.module_dep_file.m"
  {
#line 678 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 678 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 678 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 678 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;

#line 652 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
      {
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
          {
#line 652 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_9_9, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 680 "make.module_dep_file.m"
              {
#line 680 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
#line 652 "make.module_dep_file.m"
          }
#line 652 "make.module_dep_file.m"
      }
#line 678 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 678 "make.module_dep_file.m"
  }
#line 676 "make.module_dep_file.m"
}

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 671 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4)
#line 671 "make.module_dep_file.m"
{
#line 651 "make.module_dep_file.m"
  {
#line 651 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 651 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 651 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 652 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
      {
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
          {
#line 652 "make.module_dep_file.m"
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_8_8, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "make.module_dep_file.m"
          }
#line 652 "make.module_dep_file.m"
      }
#line 651 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 651 "make.module_dep_file.m"
  }
#line 671 "make.module_dep_file.m"
}

#line 5495 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 5498 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 5500 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 5502 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 5504 "make.module_dep_file.c"
{
#line 5506 "make.module_dep_file.c"
  {
#line 5508 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 5510 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 5512 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

#line 5515 "make.module_dep_file.c"
    {
#line 5517 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__669__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
#line 5520 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 5522 "make.module_dep_file.c"
      {
#line 5524 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
#line 5526 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 5528 "make.module_dep_file.c"
      }
#line 5530 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 5532 "make.module_dep_file.c"
  }
#line 5534 "make.module_dep_file.c"
}

#line 666 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 666 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 666 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4)
#line 666 "make.module_dep_file.m"
{
#line 668 "make.module_dep_file.m"
  {
#line 668 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_17;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_14;
#line 668 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_18_18;
#line 668 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          {
#line 657 "make.module_dep_file.m"
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
#line 663 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
#line 668 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 668 "make.module_dep_file.m"
              {
#line 5585 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[4];
#line 664 "make.module_dep_file.m"
                {
#line 664 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_4[9], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
#line 668 "make.module_dep_file.m"
              }
#line 657 "make.module_dep_file.m"
          }
#line 657 "make.module_dep_file.m"
      }
#line 668 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 668 "make.module_dep_file.m"
  }
#line 666 "make.module_dep_file.m"
}

#line 654 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 654 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 654 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 654 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 654 "make.module_dep_file.m"
{
#line 656 "make.module_dep_file.m"
  {
#line 656 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 656 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 657 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 657 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
      {
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
#line 657 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 657 "make.module_dep_file.m"
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 657 "make.module_dep_file.m"
      }
#line 656 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 656 "make.module_dep_file.m"
  }
#line 654 "make.module_dep_file.m"
}

#line 649 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 649 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 649 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4)
#line 649 "make.module_dep_file.m"
{
#line 651 "make.module_dep_file.m"
  {
#line 651 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 651 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 651 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 652 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_5_5;

#line 652 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
      {
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 652 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 652 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 652 "make.module_dep_file.m"
          {
#line 652 "make.module_dep_file.m"
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(3), make__module_dep_file__V_6_6, (MR_Integer) 1)));
#line 652 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "make.module_dep_file.m"
          }
#line 652 "make.module_dep_file.m"
      }
#line 651 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 651 "make.module_dep_file.m"
  }
#line 649 "make.module_dep_file.m"
}

#line 643 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 643 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 643 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4)
#line 643 "make.module_dep_file.m"
{
#line 645 "make.module_dep_file.m"
  {
#line 645 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 645 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Int_5;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 646 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;

#line 646 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
      {
#line 646 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 646 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 646 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 646 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 646 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
          {
#line 646 "make.module_dep_file.m"
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
#line 646 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "make.module_dep_file.m"
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
#line 646 "make.module_dep_file.m"
          }
#line 646 "make.module_dep_file.m"
      }
#line 645 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 645 "make.module_dep_file.m"
  }
#line 643 "make.module_dep_file.m"
}

#line 627 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 627 "make.module_dep_file.m"
{
#line 627 "make.module_dep_file.m"
  {
#line 627 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 627 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_29;

#line 627 "make.module_dep_file.m"
    {
#line 627 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv3_STATE_VARIABLE_Info_29);
    }
#line 627 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_29));
#line 627 "make.module_dep_file.m"
  }
#line 627 "make.module_dep_file.m"
}

#line 627 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 627 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 627 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 627 "make.module_dep_file.m"
{
#line 627 "make.module_dep_file.m"
  {
#line 627 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 627 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_STATE_VARIABLE_Info_29;

#line 627 "make.module_dep_file.m"
    {
#line 627 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_STATE_VARIABLE_Info_29);
    }
#line 627 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_STATE_VARIABLE_Info_29));
#line 627 "make.module_dep_file.m"
  }
#line 627 "make.module_dep_file.m"
}

#line 519 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 519 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 519 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 519 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 519 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_71,
#line 519 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_72)
#line 519 "make.module_dep_file.m"
{
#line 639 "make.module_dep_file.m"
  {
#line 639 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 639 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_37;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleName_38;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Parents_39;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDeps_40;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImplDeps_41;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Children_42;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildren_43;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDeps_44;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_45;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImports_46;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExport_47;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMain_48;
#line 639 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignIncludes_49;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_144_144;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgs_21;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__VersionNumberTerm_22;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileTerm_23;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ParentsTerm_25;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDepsTerm_26;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImplDepsTerm_27;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ChildrenTerm_28;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDepsTerm_30;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMainTerm_34;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgsTail_35;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Version_36;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_76_76;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_78_78;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_82_82;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_83_83;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_84_84;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_85_85;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_86_86;
#line 526 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_87_87;
#line 526 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_173_173;

#line 526 "make.module_dep_file.m"
    {
#line 526 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_173_173, &make__module_dep_file__ModuleArgs_21);
    }
#line 526 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
      {
#line 526 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_173_173) == 0);
#line 526 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
          {
#line 528 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 528 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 528 "make.module_dep_file.m"
              {
#line 528 "make.module_dep_file.m"
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
#line 528 "make.module_dep_file.m"
                make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
#line 529 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 529 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 529 "make.module_dep_file.m"
                  {
#line 529 "make.module_dep_file.m"
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 0)));
#line 529 "make.module_dep_file.m"
                    make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 1)));
#line 530 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 530 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 530 "make.module_dep_file.m"
                      {
#line 530 "make.module_dep_file.m"
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
#line 530 "make.module_dep_file.m"
                        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
#line 531 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 531 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 531 "make.module_dep_file.m"
                          {
#line 531 "make.module_dep_file.m"
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
#line 531 "make.module_dep_file.m"
                            make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 532 "make.module_dep_file.m"
                              {
#line 532 "make.module_dep_file.m"
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
#line 532 "make.module_dep_file.m"
                                make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 533 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 533 "make.module_dep_file.m"
                                  {
#line 533 "make.module_dep_file.m"
                                    make__module_dep_file__ImplDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
#line 533 "make.module_dep_file.m"
                                    make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
#line 534 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 534 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 534 "make.module_dep_file.m"
                                      {
#line 534 "make.module_dep_file.m"
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
#line 534 "make.module_dep_file.m"
                                        make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
#line 535 "make.module_dep_file.m"
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 535 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 535 "make.module_dep_file.m"
                                          {
#line 535 "make.module_dep_file.m"
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 0)));
#line 535 "make.module_dep_file.m"
                                            make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_82_82, (MR_Integer) 1)));
#line 536 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_83_83)) == (MR_mktag((MR_Integer) 1)));
#line 536 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 536 "make.module_dep_file.m"
                                              {
#line 536 "make.module_dep_file.m"
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 0)));
#line 536 "make.module_dep_file.m"
                                                make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_83_83, (MR_Integer) 1)));
#line 537 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 537 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 537 "make.module_dep_file.m"
                                                  {
#line 537 "make.module_dep_file.m"
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 0)));
#line 537 "make.module_dep_file.m"
                                                    make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_84_84, (MR_Integer) 1)));
#line 538 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 538 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 538 "make.module_dep_file.m"
                                                      {
#line 538 "make.module_dep_file.m"
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 0)));
#line 538 "make.module_dep_file.m"
                                                        make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_85_85, (MR_Integer) 1)));
#line 539 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 539 "make.module_dep_file.m"
                                                        if (make__module_dep_file__succeeded)
#line 539 "make.module_dep_file.m"
                                                          {
#line 539 "make.module_dep_file.m"
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 0)));
#line 539 "make.module_dep_file.m"
                                                            make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_86_86, (MR_Integer) 1)));
#line 541 "make.module_dep_file.m"
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 541 "make.module_dep_file.m"
                                                            if (make__module_dep_file__succeeded)
#line 541 "make.module_dep_file.m"
                                                              {
#line 541 "make.module_dep_file.m"
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 0)));
#line 541 "make.module_dep_file.m"
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_87_87, (MR_Integer) 1)));
#line 544 "make.module_dep_file.m"
                                                                {
#line 544 "make.module_dep_file.m"
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
#line 526 "make.module_dep_file.m"
                                                                if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                  {
#line 545 "make.module_dep_file.m"
                                                                    {
#line 545 "make.module_dep_file.m"
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
#line 526 "make.module_dep_file.m"
                                                                    if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                      {
#line 6140 "make.module_dep_file.c"
                                                                        make__module_dep_file__TypeCtorInfo_144_144 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 546 "make.module_dep_file.m"
                                                                        {
#line 546 "make.module_dep_file.m"
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_144_144, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
#line 526 "make.module_dep_file.m"
                                                                        if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                          {
#line 549 "make.module_dep_file.m"
                                                                            {
#line 549 "make.module_dep_file.m"
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
#line 526 "make.module_dep_file.m"
                                                                            if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                              {
#line 550 "make.module_dep_file.m"
                                                                                {
#line 550 "make.module_dep_file.m"
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
#line 526 "make.module_dep_file.m"
                                                                                if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                  {
#line 551 "make.module_dep_file.m"
                                                                                    {
#line 551 "make.module_dep_file.m"
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImplDepsTerm_27, &make__module_dep_file__ImplDeps_41);
                                                                                    }
#line 526 "make.module_dep_file.m"
                                                                                    if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                      {
#line 552 "make.module_dep_file.m"
                                                                                        {
#line 552 "make.module_dep_file.m"
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
#line 526 "make.module_dep_file.m"
                                                                                        if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                          {
#line 553 "make.module_dep_file.m"
                                                                                            {
#line 553 "make.module_dep_file.m"
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
#line 526 "make.module_dep_file.m"
                                                                                            if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                              {
#line 555 "make.module_dep_file.m"
                                                                                                {
#line 555 "make.module_dep_file.m"
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
#line 526 "make.module_dep_file.m"
                                                                                                if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                                  {
#line 556 "make.module_dep_file.m"
                                                                                                    {
#line 556 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
#line 526 "make.module_dep_file.m"
                                                                                                    if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                                      {
#line 558 "make.module_dep_file.m"
                                                                                                        {
#line 558 "make.module_dep_file.m"
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
#line 526 "make.module_dep_file.m"
                                                                                                        if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                                          {
#line 560 "make.module_dep_file.m"
                                                                                                            {
#line 560 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
#line 526 "make.module_dep_file.m"
                                                                                                            if (make__module_dep_file__succeeded)
#line 526 "make.module_dep_file.m"
                                                                                                              {
#line 563 "make.module_dep_file.m"
                                                                                                                {
#line 563 "make.module_dep_file.m"
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
#line 526 "make.module_dep_file.m"
                                                                                                                if (make__module_dep_file__succeeded)
#line 569 "make.module_dep_file.m"
                                                                                                                  {
#line 569 "make.module_dep_file.m"
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "make.module_dep_file.m"
                                                                                                                      {
#line 566 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
#line 566 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 566 "make.module_dep_file.m"
                                                                                                                          {
#line 568 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
#line 566 "make.module_dep_file.m"
                                                                                                                          }
#line 566 "make.module_dep_file.m"
                                                                                                                      }
#line 569 "make.module_dep_file.m"
                                                                                                                    else
#line 570 "make.module_dep_file.m"
                                                                                                                      {
#line 570 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
#line 570 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__V_91_91;

#line 570 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
#line 570 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 570 "make.module_dep_file.m"
                                                                                                                          {
#line 571 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
#line 571 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
#line 571 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "make.module_dep_file.m"
                                                                                                                            if (make__module_dep_file__succeeded)
#line 572 "make.module_dep_file.m"
                                                                                                                              {
#line 572 "make.module_dep_file.m"
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
                                                                                                                              }
#line 570 "make.module_dep_file.m"
                                                                                                                          }
#line 570 "make.module_dep_file.m"
                                                                                                                      }
#line 569 "make.module_dep_file.m"
                                                                                                                  }
#line 526 "make.module_dep_file.m"
                                                                                                              }
#line 526 "make.module_dep_file.m"
                                                                                                          }
#line 526 "make.module_dep_file.m"
                                                                                                      }
#line 526 "make.module_dep_file.m"
                                                                                                  }
#line 526 "make.module_dep_file.m"
                                                                                              }
#line 526 "make.module_dep_file.m"
                                                                                          }
#line 526 "make.module_dep_file.m"
                                                                                      }
#line 526 "make.module_dep_file.m"
                                                                                  }
#line 526 "make.module_dep_file.m"
                                                                              }
#line 526 "make.module_dep_file.m"
                                                                          }
#line 526 "make.module_dep_file.m"
                                                                      }
#line 526 "make.module_dep_file.m"
                                                                  }
#line 541 "make.module_dep_file.m"
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
#line 528 "make.module_dep_file.m"
              }
#line 526 "make.module_dep_file.m"
          }
#line 526 "make.module_dep_file.m"
      }
#line 639 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 576 "make.module_dep_file.m"
      {
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeInfo_157_157;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_160_160;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleNameContext_51;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ContainsForeignCode_52;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__DirectIntItemBlocksCord_56;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IndirectIntItemBlocksCord_57;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OptItemBlocksCord_58;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__IntForOptItemBlocksCord_59;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleVersionNumbers_60;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_62;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleAndImports_64;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_93_93;
#line 576 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_94_94;
#line 602 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_174_174;

#line 576 "make.module_dep_file.m"
        {
#line 576 "make.module_dep_file.m"
          make__module_dep_file__ModuleNameContext_51 = mercury__term__context_init_0_f_0();
        }
#line 577 "make.module_dep_file.m"
        {
#line 577 "make.module_dep_file.m"
          make__module_dep_file__ContainsForeignCode_52 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
#line 6390 "make.module_dep_file.c"
        make__module_dep_file__TypeInfo_157_157 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 581 "make.module_dep_file.m"
        {
#line 581 "make.module_dep_file.m"
          make__module_dep_file__DirectIntItemBlocksCord_56 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_157_157);
        }
#line 582 "make.module_dep_file.m"
        {
#line 582 "make.module_dep_file.m"
          make__module_dep_file__IndirectIntItemBlocksCord_57 = mercury__cord__empty_0_f_0(make__module_dep_file__TypeInfo_157_157);
        }
#line 583 "make.module_dep_file.m"
        {
#line 583 "make.module_dep_file.m"
          make__module_dep_file__OptItemBlocksCord_58 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[2]);
        }
#line 584 "make.module_dep_file.m"
        {
#line 584 "make.module_dep_file.m"
          make__module_dep_file__IntForOptItemBlocksCord_59 = mercury__cord__empty_0_f_0((MR_Word) &make__module_dep_file_scalar_common_1[3]);
        }
#line 6412 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_160_160 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 585 "make.module_dep_file.m"
        {
#line 585 "make.module_dep_file.m"
          mercury__map__init_1_p_0(make__module_dep_file__TypeCtorInfo_160_160, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, &make__module_dep_file__ModuleVersionNumbers_60);
        }
#line 587 "make.module_dep_file.m"
        {
#line 587 "make.module_dep_file.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &make__module_dep_file__Errors_62);
        }
#line 593 "make.module_dep_file.m"
        {
#line 593 "make.module_dep_file.m"
          make__module_dep_file__V_93_93 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, make__module_dep_file__ForeignImports_46);
        }
#line 593 "make.module_dep_file.m"
        {
#line 593 "make.module_dep_file.m"
          make__module_dep_file__V_94_94 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludes_49);
        }
#line 589 "make.module_dep_file.m"
        {
#line 589 "make.module_dep_file.m"
          make__module_dep_file__ModuleAndImports_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 3) = ((MR_Box) (make__module_dep_file__ModuleNameContext_51));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 4) = ((MR_Box) (make__module_dep_file__Parents_39));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 5) = ((MR_Box) (make__module_dep_file__IntDeps_40));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 6) = ((MR_Box) (make__module_dep_file__ImplDeps_41));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 8) = ((MR_Box) (make__module_dep_file__Children_42));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 10) = ((MR_Box) (make__module_dep_file__NestedChildren_43));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 11) = ((MR_Box) (make__module_dep_file__FactDeps_44));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 12) = ((MR_Box) (make__module_dep_file__V_93_93));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 13) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_52));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 15) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 17) = ((MR_Box) (make__module_dep_file__DirectIntItemBlocksCord_56));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 18) = ((MR_Box) (make__module_dep_file__IndirectIntItemBlocksCord_57));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 19) = ((MR_Box) (make__module_dep_file__OptItemBlocksCord_58));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 20) = ((MR_Box) (make__module_dep_file__IntForOptItemBlocksCord_59));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 21) = ((MR_Box) (make__module_dep_file__ModuleVersionNumbers_60));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 22) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 23) = ((MR_Box) (make__module_dep_file__Errors_62));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 24) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 25) = ((MR_Box) (make__module_dep_file__HasMain_48));
#line 589 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_64, 26) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
#line 589 "make.module_dep_file.m"
        }
#line 602 "make.module_dep_file.m"
        {
#line 602 "make.module_dep_file.m"
          make__module_dep_file__V_174_174 = mercury__dir__this_directory_0_f_0();
        }
#line 602 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_174_174) == 0);
#line 6501 "make.module_dep_file.c"
        if (make__module_dep_file__succeeded)
#line 6503 "make.module_dep_file.c"
          {
#line 6505 "make.module_dep_file.c"
            MR_Word make__module_dep_file__SourceFileExists_65;

#line 603 "make.module_dep_file.m"
            {
#line 603 "make.module_dep_file.m"
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_65);
            }
#line 6513 "make.module_dep_file.c"
            if ((make__module_dep_file__SourceFileExists_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6515 "make.module_dep_file.c"
              {
#line 6517 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 0)));
#line 6519 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap_69;
#line 6521 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_97_97;
#line 6523 "make.module_dep_file.c"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_98_98;
#line 6525 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_99_99;
#line 6527 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 1)));
#line 6529 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 2)));
#line 6531 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 3)));
#line 6533 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 4)));
#line 6535 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 5)));
#line 6537 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 6)));
#line 6539 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 7)));
#line 6541 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 8)));
#line 6543 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 9)));
#line 6545 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 10)));
#line 6547 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 11)));
#line 6549 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 12)));
#line 6551 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 13)));
#line 6553 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 14)));
#line 6555 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 15)));
#line 6557 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 16)));
#line 6559 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 17)));
#line 6561 "make.module_dep_file.c"
                MR_Integer make__module_dep_file__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 18)));
#line 6563 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 19)));
#line 626 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_72;
#line 626 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_74;

#line 617 "make.module_dep_file.m"
                {
#line 617 "make.module_dep_file.m"
                  make__module_dep_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_97_97, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_64));
#line 617 "make.module_dep_file.m"
                }
#line 617 "make.module_dep_file.m"
                {
#line 617 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_160_160, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_97_97)), make__module_dep_file__ModuleDepMap0_68, &make__module_dep_file__ModuleDepMap_69);
                }
#line 619 "make.module_dep_file.m"
                {
#line 619 "make.module_dep_file.m"
                  make__module_dep_file__STATE_VARIABLE_Info_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_69));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 1) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 2) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 3) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 4) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 5) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 6) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 7) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 8) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 9) = ((MR_Box) (make__module_dep_file__V_113_113));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 10) = ((MR_Box) (make__module_dep_file__V_114_114));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 11) = ((MR_Box) (make__module_dep_file__V_115_115));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 12) = ((MR_Box) (make__module_dep_file__V_116_116));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 13) = ((MR_Box) (make__module_dep_file__V_117_117));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 14) = ((MR_Box) (make__module_dep_file__V_118_118));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 15) = ((MR_Box) (make__module_dep_file__V_119_119));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 16) = ((MR_Box) (make__module_dep_file__V_120_120));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 17) = ((MR_Box) (make__module_dep_file__V_121_121));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 18) = ((MR_Box) (make__module_dep_file__V_122_122));
#line 619 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_98, 19) = ((MR_Box) (make__module_dep_file__V_123_123));
#line 619 "make.module_dep_file.m"
                }
#line 627 "make.module_dep_file.m"
                {
#line 627 "make.module_dep_file.m"
                  make__module_dep_file__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 627 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_99_99, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 627 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_99_99, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
#line 627 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_99_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 627 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_99_99, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 627 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_99_99, 4) = ((MR_Box) ((MR_Integer) 1));
#line 627 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_99_99, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 627 "make.module_dep_file.m"
                }
#line 626 "make.module_dep_file.m"
                {
#line 626 "make.module_dep_file.m"
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_160_160, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_99_99, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_98_98)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_72, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_74);
                }
#line 626 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_72 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_72);
#line 630 "make.module_dep_file.m"
                {
#line 630 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_72, make__module_dep_file__NestedChildren_43);
                }
#line 632 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 631 "make.module_dep_file.m"
                  {
#line 631 "make.module_dep_file.m"
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 631 "make.module_dep_file.m"
                  }
#line 632 "make.module_dep_file.m"
                else
#line 633 "make.module_dep_file.m"
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6671 "make.module_dep_file.c"
              }
#line 6673 "make.module_dep_file.c"
            else
#line 6675 "make.module_dep_file.c"
              {
#line 608 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_67_67;

#line 608 "make.module_dep_file.m"
                {
#line 608 "make.module_dep_file.m"
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_67_67);
                }
#line 637 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_65;
#line 636 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_72 = make__module_dep_file__STATE_VARIABLE_Info_0_71;
#line 6689 "make.module_dep_file.c"
              }
#line 6691 "make.module_dep_file.c"
          }
#line 6693 "make.module_dep_file.c"
        else
#line 6695 "make.module_dep_file.c"
          {
#line 6697 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap0_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 0)));
#line 6699 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap_221;
#line 6701 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_223_223;
#line 6703 "make.module_dep_file.c"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_98_224;
#line 6705 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_225_225;
#line 6707 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 1)));
#line 6709 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 2)));
#line 6711 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 3)));
#line 6713 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 4)));
#line 6715 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 5)));
#line 6717 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 6)));
#line 6719 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 7)));
#line 6721 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 8)));
#line 6723 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 9)));
#line 6725 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 10)));
#line 6727 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 11)));
#line 6729 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 12)));
#line 6731 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 13)));
#line 6733 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 14)));
#line 6735 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 15)));
#line 6737 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 16)));
#line 6739 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 17)));
#line 6741 "make.module_dep_file.c"
            MR_Integer make__module_dep_file__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 18)));
#line 6743 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_71, (MR_Integer) 19)));
#line 626 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_STATE_VARIABLE_Info_72;
#line 626 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_IO_74;

#line 617 "make.module_dep_file.m"
            {
#line 617 "make.module_dep_file.m"
              make__module_dep_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_223_223, 0) = ((MR_Box) (make__module_dep_file__ModuleAndImports_64));
#line 617 "make.module_dep_file.m"
            }
#line 617 "make.module_dep_file.m"
            {
#line 617 "make.module_dep_file.m"
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_160_160, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_223_223)), make__module_dep_file__ModuleDepMap0_220, &make__module_dep_file__ModuleDepMap_221);
            }
#line 619 "make.module_dep_file.m"
            {
#line 619 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_98_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_221));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 1) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 2) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 3) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 4) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 5) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 6) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 7) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 8) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 9) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 10) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 11) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 12) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 13) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 14) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 15) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 16) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 17) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 18) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 619 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_98_224, 19) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 619 "make.module_dep_file.m"
            }
#line 627 "make.module_dep_file.m"
            {
#line 627 "make.module_dep_file.m"
              make__module_dep_file__V_225_225 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 627 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_225_225, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 627 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_225_225, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
#line 627 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_225_225, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 627 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_225_225, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 627 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_225_225, 4) = ((MR_Box) ((MR_Integer) 1));
#line 627 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_225_225, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 627 "make.module_dep_file.m"
            }
#line 626 "make.module_dep_file.m"
            {
#line 626 "make.module_dep_file.m"
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_160_160, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_225_225, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_98_224)), &make__module_dep_file__conv5_STATE_VARIABLE_Info_72, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv4_STATE_VARIABLE_IO_74);
            }
#line 626 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_72 = ((MR_Word) make__module_dep_file__conv5_STATE_VARIABLE_Info_72);
#line 630 "make.module_dep_file.m"
            {
#line 630 "make.module_dep_file.m"
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_72, make__module_dep_file__NestedChildren_43);
            }
#line 632 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 631 "make.module_dep_file.m"
              {
#line 631 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 631 "make.module_dep_file.m"
              }
#line 632 "make.module_dep_file.m"
            else
#line 633 "make.module_dep_file.m"
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6851 "make.module_dep_file.c"
          }
#line 576 "make.module_dep_file.m"
      }
#line 639 "make.module_dep_file.m"
    else
#line 640 "make.module_dep_file.m"
      {
#line 640 "make.module_dep_file.m"
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[1]);
#line 640 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_72 = make__module_dep_file__STATE_VARIABLE_Info_0_71;
#line 640 "make.module_dep_file.m"
      }
#line 639 "make.module_dep_file.m"
  }
#line 519 "make.module_dep_file.m"
}

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 772 "make.module_dep_file.m"
{
#line 772 "make.module_dep_file.m"
  {
#line 772 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 772 "make.module_dep_file.m"
    {
#line 772 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 772 "make.module_dep_file.m"
      return;
    }
#line 772 "make.module_dep_file.m"
  }
#line 772 "make.module_dep_file.m"
}

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 772 "make.module_dep_file.m"
{
#line 772 "make.module_dep_file.m"
  {
#line 772 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 772 "make.module_dep_file.m"
    {
#line 772 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 772 "make.module_dep_file.m"
      return;
    }
#line 772 "make.module_dep_file.m"
  }
#line 772 "make.module_dep_file.m"
}

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 772 "make.module_dep_file.m"
{
#line 772 "make.module_dep_file.m"
  {
#line 772 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 772 "make.module_dep_file.m"
    {
#line 772 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 772 "make.module_dep_file.m"
      return;
    }
#line 772 "make.module_dep_file.m"
  }
#line 772 "make.module_dep_file.m"
}

#line 772 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 772 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 772 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 772 "make.module_dep_file.m"
{
#line 772 "make.module_dep_file.m"
  {
#line 772 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 772 "make.module_dep_file.m"
    {
#line 772 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 772 "make.module_dep_file.m"
      return;
    }
#line 772 "make.module_dep_file.m"
  }
#line 772 "make.module_dep_file.m"
}

#line 478 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 478 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 478 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29)
#line 478 "make.module_dep_file.m"
{
#line 483 "make.module_dep_file.m"
  {
#line 483 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 483 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepFile_15;
#line 483 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OldInputStream_16;
#line 483 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchResult_17;
#line 483 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_32_32;

#line 485 "make.module_dep_file.m"
    {
#line 485 "make.module_dep_file.m"
      make__module_dep_file__V_32_32 = make__make_module_dep_file_extension_0_f_0();
    }
#line 484 "make.module_dep_file.m"
    {
#line 484 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_32_32, &make__module_dep_file__ModuleDepFile_15);
    }
#line 486 "make.module_dep_file.m"
    {
#line 486 "make.module_dep_file.m"
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
#line 487 "make.module_dep_file.m"
    {
#line 487 "make.module_dep_file.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
#line 512 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 513 "make.module_dep_file.m"
      {
#line 770 "make.module_dep_file.m"
#line 770 "make.module_dep_file.m"
        switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 770 "make.module_dep_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 770 "make.module_dep_file.m"
          case (MR_Integer) 1:
#line 776 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 770 "make.module_dep_file.m"
            break;
#line 770 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 770 "make.module_dep_file.m"
            {
#line 770 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_61_61;

#line 772 "make.module_dep_file.m"
              {
#line 772 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 772 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 772 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
#line 772 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 772 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 772 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 772 "make.module_dep_file.m"
                MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 5) = ((MR_Box) ((MR_String) "couldn\'t find \140.module_dep\' file"));
#line 772 "make.module_dep_file.m"
              }
#line 771 "make.module_dep_file.m"
              {
#line 771 "make.module_dep_file.m"
                make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_61_61);
              }
#line 774 "make.module_dep_file.m"
              {
#line 774 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 774 "make.module_dep_file.m"
                return;
              }
#line 770 "make.module_dep_file.m"
            }
#line 770 "make.module_dep_file.m"
            break;
#line 770 "make.module_dep_file.m"
        }
#line 513 "make.module_dep_file.m"
      }
#line 512 "make.module_dep_file.m"
    else
#line 490 "make.module_dep_file.m"
      {
#line 490 "make.module_dep_file.m"
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 490 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TermResult_19;
#line 490 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepStream_20;

#line 491 "make.module_dep_file.m"
        {
#line 491 "make.module_dep_file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
#line 492 "make.module_dep_file.m"
        {
#line 492 "make.module_dep_file.m"
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
#line 493 "make.module_dep_file.m"
        {
#line 493 "make.module_dep_file.m"
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
#line 7118 "make.module_dep_file.c"
#line 7119 "make.module_dep_file.c"
        switch (MR_tag((MR_Word) make__module_dep_file__TermResult_19)) {
#line 7121 "make.module_dep_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 7123 "make.module_dep_file.c"
          case (MR_Integer) 0:
#line 7125 "make.module_dep_file.c"
            {
#line 770 "make.module_dep_file.m"
#line 770 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 770 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 770 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 776 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 770 "make.module_dep_file.m"
                  break;
#line 770 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 770 "make.module_dep_file.m"
                  {
#line 770 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_77_77;

#line 772 "make.module_dep_file.m"
                    {
#line 772 "make.module_dep_file.m"
                      make__module_dep_file__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 5) = ((MR_Box) ((MR_String) "unexpected eof"));
#line 772 "make.module_dep_file.m"
                    }
#line 771 "make.module_dep_file.m"
                    {
#line 771 "make.module_dep_file.m"
                      make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_77_77);
                    }
#line 774 "make.module_dep_file.m"
                    {
#line 774 "make.module_dep_file.m"
                      make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 774 "make.module_dep_file.m"
                      return;
                    }
#line 770 "make.module_dep_file.m"
                  }
#line 770 "make.module_dep_file.m"
                  break;
#line 770 "make.module_dep_file.m"
              }
#line 7181 "make.module_dep_file.c"
            }
#line 7183 "make.module_dep_file.c"
            break;
#line 7185 "make.module_dep_file.c"
          case (MR_Integer) 1:
#line 7187 "make.module_dep_file.c"
            {
#line 7189 "make.module_dep_file.c"
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
#line 7191 "make.module_dep_file.c"
              MR_String make__module_dep_file__Msg_89;
#line 502 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

#line 503 "make.module_dep_file.m"
              {
#line 503 "make.module_dep_file.m"
                make__module_dep_file__Msg_89 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
#line 770 "make.module_dep_file.m"
#line 770 "make.module_dep_file.m"
              switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 770 "make.module_dep_file.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 770 "make.module_dep_file.m"
                case (MR_Integer) 1:
#line 776 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 770 "make.module_dep_file.m"
                  break;
#line 770 "make.module_dep_file.m"
                case (MR_Integer) 0:
#line 770 "make.module_dep_file.m"
                  {
#line 770 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_84_84;

#line 772 "make.module_dep_file.m"
                    {
#line 772 "make.module_dep_file.m"
                      make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 772 "make.module_dep_file.m"
                      MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 5) = ((MR_Box) (make__module_dep_file__Msg_89));
#line 772 "make.module_dep_file.m"
                    }
#line 771 "make.module_dep_file.m"
                    {
#line 771 "make.module_dep_file.m"
                      make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_84_84);
                    }
#line 774 "make.module_dep_file.m"
                    {
#line 774 "make.module_dep_file.m"
                      make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 774 "make.module_dep_file.m"
                      return;
                    }
#line 770 "make.module_dep_file.m"
                  }
#line 770 "make.module_dep_file.m"
                  break;
#line 770 "make.module_dep_file.m"
              }
#line 7255 "make.module_dep_file.c"
            }
#line 7257 "make.module_dep_file.c"
            break;
#line 7259 "make.module_dep_file.c"
          case (MR_Integer) 2:
#line 7261 "make.module_dep_file.c"
            {
#line 7263 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
#line 7265 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Result_104;
#line 7267 "make.module_dep_file.c"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 495 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

#line 496 "make.module_dep_file.m"
              {
#line 496 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_104, make__module_dep_file__STATE_VARIABLE_Info_0_28, &make__module_dep_file__STATE_VARIABLE_Info_46_106);
              }
#line 507 "make.module_dep_file.m"
              if ((make__module_dep_file__Result_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 507 "make.module_dep_file.m"
              else
#line 508 "make.module_dep_file.m"
                {
#line 508 "make.module_dep_file.m"
                  MR_String make__module_dep_file__Msg_98 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_104, (MR_Integer) 0)));

#line 770 "make.module_dep_file.m"
#line 770 "make.module_dep_file.m"
                  switch (make__module_dep_file__RebuildModuleDeps_10) {
#line 770 "make.module_dep_file.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 770 "make.module_dep_file.m"
                    case (MR_Integer) 1:
#line 776 "make.module_dep_file.m"
                      *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 770 "make.module_dep_file.m"
                      break;
#line 770 "make.module_dep_file.m"
                    case (MR_Integer) 0:
#line 770 "make.module_dep_file.m"
                      {
#line 770 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_94_94;

#line 772 "make.module_dep_file.m"
                        {
#line 772 "make.module_dep_file.m"
                          make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 772 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 772 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_4));
#line 772 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 772 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 772 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 772 "make.module_dep_file.m"
                          MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 5) = ((MR_Box) (make__module_dep_file__Msg_98));
#line 772 "make.module_dep_file.m"
                        }
#line 771 "make.module_dep_file.m"
                        {
#line 771 "make.module_dep_file.m"
                          make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_94_94);
                        }
#line 774 "make.module_dep_file.m"
                        {
#line 774 "make.module_dep_file.m"
                          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_106, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 774 "make.module_dep_file.m"
                          return;
                        }
#line 770 "make.module_dep_file.m"
                      }
#line 770 "make.module_dep_file.m"
                      break;
#line 770 "make.module_dep_file.m"
                  }
#line 508 "make.module_dep_file.m"
                }
#line 7344 "make.module_dep_file.c"
            }
#line 7346 "make.module_dep_file.c"
            break;
#line 7348 "make.module_dep_file.c"
        }
#line 490 "make.module_dep_file.m"
      }
#line 483 "make.module_dep_file.m"
  }
#line 478 "make.module_dep_file.m"
}

#line 469 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 469 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 469 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 469 "make.module_dep_file.m"
{
#line 474 "make.module_dep_file.m"
  {
#line 474 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 474 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 474 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 476 "make.module_dep_file.m"
    {
#line 476 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 476 "make.module_dep_file.m"
    {
#line 476 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 476 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "make.module_dep_file.m"
    }
#line 475 "make.module_dep_file.m"
    {
#line 475 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 475 "make.module_dep_file.m"
      return;
    }
#line 474 "make.module_dep_file.m"
  }
#line 469 "make.module_dep_file.m"
}

#line 459 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 459 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 459 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 459 "make.module_dep_file.m"
{
#line 463 "make.module_dep_file.m"
  {
#line 463 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 463 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 464 "make.module_dep_file.m"
    {
#line 464 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 649, &make__module_dep_file__SearchDirs_13);
    }
#line 466 "make.module_dep_file.m"
    {
#line 466 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 466 "make.module_dep_file.m"
      return;
    }
#line 463 "make.module_dep_file.m"
  }
#line 459 "make.module_dep_file.m"
}

#line 445 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 445 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 445 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 445 "make.module_dep_file.m"
{
#line 450 "make.module_dep_file.m"
  {
#line 450 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 450 "make.module_dep_file.m"
#line 450 "make.module_dep_file.m"
    switch (make__module_dep_file__HasMain_3) {
#line 450 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 450 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 451 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 450 "make.module_dep_file.m"
        break;
#line 450 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 454 "make.module_dep_file.m"
        *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 450 "make.module_dep_file.m"
        break;
#line 450 "make.module_dep_file.m"
    }
#line 450 "make.module_dep_file.m"
  }
#line 445 "make.module_dep_file.m"
}

#line 429 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 429 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 429 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 429 "make.module_dep_file.m"
{
#line 435 "make.module_dep_file.m"
  {
#line 435 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 435 "make.module_dep_file.m"
#line 435 "make.module_dep_file.m"
    switch (make__module_dep_file__ContainsForeignExport_3) {
#line 435 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 435 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 436 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 435 "make.module_dep_file.m"
        break;
#line 435 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 441 "make.module_dep_file.m"
        *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 435 "make.module_dep_file.m"
        break;
#line 435 "make.module_dep_file.m"
    }
#line 435 "make.module_dep_file.m"
  }
#line 429 "make.module_dep_file.m"
}

#line 419 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 419 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4)
#line 419 "make.module_dep_file.m"
{
#line 422 "make.module_dep_file.m"
  {
#line 422 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 422 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
#line 422 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

#line 424 "make.module_dep_file.m"
    {
#line 424 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 425 "make.module_dep_file.m"
    {
#line 425 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 426 "make.module_dep_file.m"
    {
#line 426 "make.module_dep_file.m"
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
#line 426 "make.module_dep_file.m"
      return;
    }
#line 422 "make.module_dep_file.m"
  }
#line 419 "make.module_dep_file.m"
}

#line 410 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 410 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4)
#line 410 "make.module_dep_file.m"
{
#line 413 "make.module_dep_file.m"
  {
#line 413 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 413 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
#line 413 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));
#line 414 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 2)));

#line 415 "make.module_dep_file.m"
    {
#line 415 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 416 "make.module_dep_file.m"
    {
#line 416 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 417 "make.module_dep_file.m"
    {
#line 417 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
#line 417 "make.module_dep_file.m"
      return;
    }
#line 413 "make.module_dep_file.m"
  }
#line 410 "make.module_dep_file.m"
}

#line 405 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 405 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 405 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 405 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 405 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 405 "make.module_dep_file.m"
{
#line 405 "make.module_dep_file.m"
  {
#line 405 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 405 "make.module_dep_file.m"
    {
#line 405 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 405 "make.module_dep_file.m"
      return;
    }
#line 405 "make.module_dep_file.m"
  }
#line 405 "make.module_dep_file.m"
}

#line 390 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 390 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 390 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 390 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 390 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 390 "make.module_dep_file.m"
{
#line 390 "make.module_dep_file.m"
  {
#line 390 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 390 "make.module_dep_file.m"
    {
#line 390 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 390 "make.module_dep_file.m"
      return;
    }
#line 390 "make.module_dep_file.m"
  }
#line 390 "make.module_dep_file.m"
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
    MR_Word make__module_dep_file__TypeCtorInfo_435_435;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_458_458;
#line 350 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__VersionNumber_8;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_10;
#line 350 "make.module_dep_file.m"
    MR_String make__module_dep_file__ContainsForeignExportStr_11;
#line 350 "make.module_dep_file.m"
    MR_String make__module_dep_file__HasMainStr_12;
#line 350 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_74_74;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 350 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_94_94;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_95_95;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_96_96;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 355 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
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
    MR_String make__module_dep_file__V_119_119;
#line 357 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_120_120;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_123_123;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_124_124;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_125_125;
#line 357 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_126_126;
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
    MR_String make__module_dep_file__V_145_145;
#line 360 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_146_146;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_150_150;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_151_151;
#line 360 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_152_152;
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
    MR_String make__module_dep_file__V_171_171;
#line 363 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_172_172;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_173_173;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_174_174;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_175_175;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_176_176;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_177_177;
#line 363 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_178_178;
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
    MR_String make__module_dep_file__V_197_197;
#line 366 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_198_198;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203;
#line 366 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204;
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
    MR_String make__module_dep_file__V_223_223;
#line 369 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_224_224;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 369 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
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
    MR_String make__module_dep_file__V_249_249;
#line 372 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_250_250;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_254_254;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 372 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
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
    MR_String make__module_dep_file__V_275_275;
#line 375 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_276_276;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_277_277;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_278_278;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_279_279;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_280_280;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_281_281;
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_282_282;
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
    MR_String make__module_dep_file__V_301_301;
#line 383 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LangList_9;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_64_64;
#line 379 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_302_302;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_303_303;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_304_304;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_305_305;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_306_306;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_307_307;
#line 379 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_308_308;
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
    MR_String make__module_dep_file__V_327_327;
#line 389 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_328_328;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_329_329;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_330_330;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_331_331;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_332_332;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_333_333;
#line 389 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_334_334;
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
    MR_String make__module_dep_file__V_353_353;
#line 392 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_354_354;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_355_355;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_356_356;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_357_357;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_358_358;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_359_359;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_360_360;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_361_361;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_362_362;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_363_363;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_364_364;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_365_365;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_366_366;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_367_367;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_368_368;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_369_369;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_370_370;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_371_371;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_372_372;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_373_373;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_374_374;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_375_375;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_376_376;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_377_377;
#line 392 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_378_378;
#line 392 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_379_379;
#line 397 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_380_380;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_381_381;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_382_382;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_383_383;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_384_384;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_385_385;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_386_386;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_387_387;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_388_388;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_389_389;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_390_390;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_391_391;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_392_392;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_393_393;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_394_394;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_395_395;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_396_396;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_397_397;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_398_398;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_399_399;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_400_400;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_401_401;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_402_402;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_403_403;
#line 397 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_404_404;
#line 397 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_405_405;

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
    make__module_dep_file__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 355 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 355 "make.module_dep_file.m"
    {
#line 355 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_20_20);
    }
#line 356 "make.module_dep_file.m"
    {
#line 356 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 357 "make.module_dep_file.m"
    make__module_dep_file__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 357 "make.module_dep_file.m"
    {
#line 357 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_24_24);
    }
#line 359 "make.module_dep_file.m"
    {
#line 359 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_146_146 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 360 "make.module_dep_file.m"
    make__module_dep_file__V_171_171 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 8751 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_435_435 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 360 "make.module_dep_file.m"
    {
#line 360 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_435_435, make__module_dep_file__V_28_28, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[0]);
    }
#line 362 "make.module_dep_file.m"
    {
#line 362 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_172_172 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 363 "make.module_dep_file.m"
    make__module_dep_file__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 363 "make.module_dep_file.m"
    {
#line 363 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_435_435, make__module_dep_file__V_34_34, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[1]);
    }
#line 365 "make.module_dep_file.m"
    {
#line 365 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_198_198 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 366 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 366 "make.module_dep_file.m"
    {
#line 366 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_435_435, make__module_dep_file__V_40_40, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[2]);
    }
#line 368 "make.module_dep_file.m"
    {
#line 368 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 369 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 369 "make.module_dep_file.m"
    {
#line 369 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_435_435, make__module_dep_file__V_46_46, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[3]);
    }
#line 371 "make.module_dep_file.m"
    {
#line 371 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 372 "make.module_dep_file.m"
    make__module_dep_file__V_275_275 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 372 "make.module_dep_file.m"
    {
#line 372 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_435_435, make__module_dep_file__V_52_52, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[4]);
    }
#line 374 "make.module_dep_file.m"
    {
#line 374 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_276_276 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 375 "make.module_dep_file.m"
    make__module_dep_file__V_301_301 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 375 "make.module_dep_file.m"
    {
#line 375 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_58_58, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[5]);
    }
#line 377 "make.module_dep_file.m"
    {
#line 377 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_302_302 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 379 "make.module_dep_file.m"
    make__module_dep_file__V_327_327 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 380 "make.module_dep_file.m"
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 380 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 380 "make.module_dep_file.m"
      {
#line 380 "make.module_dep_file.m"
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_64_64, (MR_Integer) 0)));
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
#line 9166 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_458_458 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_328_328 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 389 "make.module_dep_file.m"
    make__module_dep_file__V_353_353 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 389 "make.module_dep_file.m"
    {
#line 389 "make.module_dep_file.m"
      make__module_dep_file__V_70_70 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_458_458, make__module_dep_file__V_74_74);
    }
#line 389 "make.module_dep_file.m"
    {
#line 389 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_458_458, make__module_dep_file__V_70_70, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[7]);
    }
#line 391 "make.module_dep_file.m"
    {
#line 391 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_354_354 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_376_376 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_377_377 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_378_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 392 "make.module_dep_file.m"
    make__module_dep_file__V_379_379 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 392 "make.module_dep_file.m"
    {
#line 392 "make.module_dep_file.m"
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_77_77, &make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 395 "make.module_dep_file.m"
    {
#line 395 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 396 "make.module_dep_file.m"
    {
#line 396 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_380_380 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_381_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_382_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_383_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_384_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_386_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 397 "make.module_dep_file.m"
    make__module_dep_file__V_405_405 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 397 "make.module_dep_file.m"
    {
#line 397 "make.module_dep_file.m"
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_81_81, &make__module_dep_file__HasMainStr_12);
    }
#line 398 "make.module_dep_file.m"
    {
#line 398 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_12);
    }
#line 401 "make.module_dep_file.m"
#line 401 "make.module_dep_file.m"
    switch (make__module_dep_file__Version_6) {
#line 401 "make.module_dep_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 401 "make.module_dep_file.m"
      case (MR_Integer) 0:
#line 400 "make.module_dep_file.m"
        {
#line 400 "make.module_dep_file.m"
        }
#line 401 "make.module_dep_file.m"
        break;
#line 401 "make.module_dep_file.m"
      case (MR_Integer) 1:
#line 402 "make.module_dep_file.m"
        {
#line 402 "make.module_dep_file.m"
          MR_Word make__module_dep_file__TypeCtorInfo_462_462;
#line 402 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_85_85;
#line 402 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_89_89;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_406_406;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_407_407;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_408_408;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_409_409;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_410_410;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_411_411;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_412_412;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_413_413;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_414_414;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_415_415;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_416_416;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_417_417;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_418_418;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_419_419;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_420_420;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_421_421;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_422_422;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_423_423;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_424_424;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_425_425;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_426_426;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_427_427;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_428_428;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_429_429;
#line 404 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_430_430;
#line 404 "make.module_dep_file.m"
          MR_String make__module_dep_file__V_431_431;

#line 403 "make.module_dep_file.m"
          {
#line 403 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
          }
#line 9451 "make.module_dep_file.c"
          make__module_dep_file__TypeCtorInfo_462_462 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_406_406 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 0)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_407_407 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 1)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_408_408 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 2)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 3)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 4)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 5)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 6)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 7)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 8)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 9)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 10)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 11)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 12)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 13)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 14)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 15)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 16)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 17)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 18)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 19)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 20)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 21)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 22)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 23)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 24)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 25)));
#line 404 "make.module_dep_file.m"
          make__module_dep_file__V_431_431 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ModuleAndImports_5, (MR_Integer) 26)));
#line 404 "make.module_dep_file.m"
          {
#line 404 "make.module_dep_file.m"
            make__module_dep_file__V_85_85 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_462_462, make__module_dep_file__V_89_89);
          }
#line 404 "make.module_dep_file.m"
          {
#line 404 "make.module_dep_file.m"
            mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_462_462, make__module_dep_file__V_85_85, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_4[8]);
          }
#line 406 "make.module_dep_file.m"
          {
#line 406 "make.module_dep_file.m"
            mercury__io__write_string_3_p_0((MR_String) "}");
          }
#line 402 "make.module_dep_file.m"
        }
#line 401 "make.module_dep_file.m"
        break;
#line 401 "make.module_dep_file.m"
    }
#line 408 "make.module_dep_file.m"
    {
#line 408 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
#line 408 "make.module_dep_file.m"
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
        MR_Word make__module_dep_file__Items_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__SrcItemBlock_3, (MR_Integer) 2)));
#line 298 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Section_10;

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
            make__module_dep_file__Section_10 = (MR_Integer) 1;
#line 303 "make.module_dep_file.m"
            break;
#line 303 "make.module_dep_file.m"
          case (MR_Integer) 0:
#line 302 "make.module_dep_file.m"
            make__module_dep_file__Section_10 = (MR_Integer) 0;
#line 303 "make.module_dep_file.m"
            break;
#line 303 "make.module_dep_file.m"
        }
#line 309 "make.module_dep_file.m"
        {
#line 309 "make.module_dep_file.m"
          make__module_dep_file__RawItemBlock_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 0) = ((MR_Box) (make__module_dep_file__Section_10));
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 1) = ((MR_Box) (make__module_dep_file__SectionContext_8));
#line 309 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__RawItemBlock_5, 2) = ((MR_Box) (make__module_dep_file__Items_9));
#line 309 "make.module_dep_file.m"
        }
#line 311 "make.module_dep_file.m"
        {
#line 311 "make.module_dep_file.m"
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
#line 11914 "make.module_dep_file.c"
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
